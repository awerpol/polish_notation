#include "parcing.h"
#include "stack.h"


void main() {

  stack_st *head = NULL;
  stack_st *stack_num = NULL, *stack_op = NULL;
  push(&head, "aaa");
  push(&head, "bbb");
  push(&head, "ccc");
  printf("%s\n", peek(head));
  pop(&head);
  printf("%s\n", peek(head));
  char *msg = NULL, *tmpmsg = NULL;
  msg = "123 *     2 *cos    (sin(2/x)   )+456";
  printf("%s\n", msg);
  tmpmsg = tabclear(msg);
  printf("%s\n", tmpmsg);
  char **str_lecs = parcing(tmpmsg);
  for (int i = 0; i < 20; i++) {
    free(str_lecs[i]);
  }
  free(str_lecs);
}

char **parcing(char *msg) {
  size_t len = strlen(msg);
  char *ch_temp = malloc(10 * sizeof(char));
  char **str_lecs = malloc(20 * 10 * sizeof(char *));
  for (int i = 0; i < 20; i++) {
    str_lecs[i] = (char *)malloc(10 * sizeof(char));
  }
  size_t k = 0;
  for (size_t i = 0; i < len; i++) {
    int temp = charcheck(msg[i]);
    if ((temp == charcheck(msg[i])) && (temp != 3)) {
      size_t j = 0;
      while (temp == charcheck(msg[i])) {
        ch_temp[j] = msg[i];
        i++;
        j++;
      }
      ch_temp[j] = '\0';
      i--;
    } else {
      ch_temp[0] = msg[i];
      ch_temp[1] = '\0';
    }
    size_t l = 0;
    while (ch_temp[l] != '\0') {
      str_lecs[k][l] = ch_temp[l];
      l++;
    }
    k++;
  }
  free(ch_temp);
  return str_lecs;
}

int charcheck(char ch) {
  int temp = -1;
  if ((ch < 58) && (ch > 47)) {
    temp = 1;
  } else if ((ch < 123) && (ch > 96)) {
    temp = 2;
  } else if ((ch == 40) || (ch == 41)) {
    temp = 3;
  } else if ((ch == 42) || (ch == 43) || (ch == 45) || (ch == 47)) {
    temp = 4;
  }
  return temp;
}
char *tabclear(char *msg) {
  char *msg_t = malloc(strlen(msg) * sizeof(char));
  size_t j = 0;
  for (size_t i = 0; i < strlen(msg); i++) {
    if (msg[i] != ' ') {
      msg_t[j] = msg[i];
      j++;
    }
  }
  return msg_t;
}
