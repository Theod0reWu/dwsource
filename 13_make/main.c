#include <stdlib.h>
#include <stdio.h>
#include <time.h>

#include "funx.h"

int main() {
  srand(time(NULL));
  int i;
  int a[ARR_SIZE];

  printf("The Array:\n");
  for (i=0; i<ARR_SIZE; i++) {
    a[i] = rand() % 100;
    printf("a[%d]: %d\n", i, a[i]);
  }
  printf("average: %lf\n\n", average(a, ARR_SIZE));

  int b[ARR_SIZE];
  arr_copy(a, b, ARR_SIZE);
  printf("Copied array:\n");
  for (i=0; i<ARR_SIZE; i++)
    printf("b[%d]: %d\n", i, b[i]);

  char s[100] = "Dylan Jack!";
  printf("\n\nLength of \"%s\": %d\n", s, mystrlen(s));

  return 0;
}
