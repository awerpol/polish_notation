#include "drawing.h"

void drawig(float *data) {
  yTransform(data);
  printMatrix(data);
}

void yTransform(float *data) {
  for (int i = 0; i < GW; i++) {
    data[i] = roundf((data[i]) * GTOP + GMID);
  }
}

void printMatrix(const float *data) {
  char c;
  for (int y = 0; y < GH; y++) {
    for (int x = 0; x < GW; x++) {
      c = (data[x] == y) ? ('*') : ('.');
      printf("%c", c);
    }
    printf("\n");
  }
}
