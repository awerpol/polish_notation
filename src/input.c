#include "input.h"

char *inputFormula(char *formula, int *err) {
  char c = '\0', size = SIZE0;
  int i = 0;
  char *temp = formula;

  printf("\nВведите функцию  y = ");
  while (c != '\n') {
    scanf("%c", &c);

    if (charOk(c)) {
      temp[i] = c;
    } else {
      *err = 2;
      //  err: недопустимые символы
      c = '\n';
    }
    i++;
    if (i == size - 1) {
      size = size + 10;
      temp = appendArray(temp, size, err);
      c = (*err == 3) ? ('\n') : (c);
    }
    if (i == LENLIMIT) {
      *err = 4;
      // err: формула > 100
      c = '\n';
    }
  }
  // take out extra spaces /////////////////////////////////////
  return temp;
}

char *appendArray(char *inp, int newN, int *err) {
  char *out = malloc(newN * sizeof(char));

  if (out == NULL) {
    *err = 3;
    // err: re-alloc error
  } else {
    for (size_t i = 0; i < strlen(inp); i++) {
      out[i] = inp[i];
    }
  }

  if (inp != NULL) {
    free(inp);
  }
  return out;
}

int charOk(const char c) {
  int serviceSymbol = 0, digitsNSigns = 0, letters = 0, powSign = 0;

  if (c == '\0' || c == ' ' || c == '\n')
    serviceSymbol = 1;
  if (c >= 40 && c != ',' && c <= 57)
    digitsNSigns = 1;
  if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
    letters = 1;
  // if (c == '^') powSign = 1;

  return serviceSymbol || digitsNSigns || letters || powSign;
}
