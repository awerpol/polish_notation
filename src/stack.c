#include "stack.h"

void push(stack_st **head, char *value) {
  stack_st *tmp = (stack_st *)malloc(sizeof(stack_st));
  if (tmp == NULL) {
    printf("Ошибка выделения памяти");
  } else {
    tmp->next = *head;
    tmp->value = value;
    *head = tmp;
  }
}

stack_st *pop(stack_st **head) {
  stack_st *out;
  if ((*head) != NULL) {
    out = *head;
    *head = (*head)->next;
    free(out);
  }
  return ((*head) != NULL) ? out : NULL;
}

char *peek(const stack_st *head) {
  return (head != NULL) ? head->value : NULL;
}
