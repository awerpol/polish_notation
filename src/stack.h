#ifndef SRC_STACK_H_
#define SRC_STACK_H_

#include <stdio.h>
#include <stdlib.h>

typedef struct stack_stag {
  char *value;
  struct stack_stag *next;
} stack_st;

void push(stack_st **head, char *value);
stack_st *pop(stack_st **head);
char *peek(const stack_st *head);

#endif  // SRC_STACK_H_
