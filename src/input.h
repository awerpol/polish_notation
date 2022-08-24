#ifndef SRC_INPUT_H_
#define SRC_INPUT_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE0 10
#define LENLIMIT 100

char *inputFormula(char *formula, int *err);
int charOk(const char c);
char *appendArray(char *in, int newN, int *err);

#endif // SRC_INPUT_H_