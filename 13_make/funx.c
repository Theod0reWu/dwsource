#include <stdlib.h>
#include <stdio.h>

#include "funx.h"

double average(int *vals, int size) {
  double avg = 0;
  int i;
  for (i=0; i<size; i++)
    avg+= vals[i];

  return avg/size;
}

void arr_copy(int *a0, int *a1, int size) {
  while ( size > 0) {
    *a1 = *a0;
    a0++;
    a1++;
    size--;
  }
}

int mystrlen(char *s) {
  int i = 0;
  while (*s) {
    i++;
    s++;
  }
  return i;
}
