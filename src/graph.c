#include "graph.h"

// ===================================================================
float *polishCalculate(char **arrOfLexems){
  arrOfLexems = arrOfLexems+1;
  return 0;
}
// ===================================================================


int main() {
  int err = 0;
  char *formula = malloc(SIZE0 * sizeof(char));
  if (formula == NULL)
    err = 1;

  if (!err) {
    formula = inputFormula(formula, &err);
  }
  char **arrOfLexems = parcing(formula);
  arrOfLexems = arrOfLexems;

  // float *dataForGraph = polishCalculate(arrOfLexems);  ////////////////////////////
  // float data[80] = {0.1, 1, 0.3, -1, 0, 0.5, 0.2};  //////////////////////
  // drawig(dataForGraph);    // <- сюда пойдет массив игреков

  // if (formula != NULL) {
  //   free(formula);
  // }
  // if (arrOfLexems != NULL) {
  //   free(arrOfLexems);
  // }
  if (err)
    errorOutput(err);
  return 0;
}

void errorOutput(int err) {
  char *out;
  printf("!!! ACHTUNG !!!\n");
  switch (err) {
  case 1:
    out = "Ошибка выделения памяти";
    break;
  case 2:
    out = "В формуле недопустимые символы!\n";
    break;
  case 3:
    out = "Re-allocation error\n";
    break;
  case 4:
    out = "Слишком длинная формула. Не более 100 символов, плз!";
    break;
  default:
    out = "Эта надпись никогда не должна была появиться\n";
    break;
  }
  printf("%s\n", out);
}
