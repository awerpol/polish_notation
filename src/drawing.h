#ifndef SRC_DRAWING_H_
#define SRC_DRAWING_H_

#include <math.h>
#include <stdio.h>
#include <stdlib.h>

#define GW 80   // aka X
#define GH 25   // aka Y
#define GMID 12 // aka 0
#define GTOP 12 // "амплитуда" отрисовки

void printMatrix(const float *data);
void drawig(float *data);
void yTransform(float *data);

#endif // SRC_DRAWING_H_