#include <stdlib.h>
#include <stdio.h>
#include <time.h>

#define ARR_SIZE 10
int main() {

  srand(time(NULL));

  int arr[ARR_SIZE];
  int i;
  for (i=0; i<ARR_SIZE-1; i++) {
    arr[i] = rand();
  }
  arr[i] = 0;

  printf("The Array:\n");
  for (i=0; i<ARR_SIZE; i++)
    printf("arr[%d]: %d\n", i, arr[i]);

  int ray[ARR_SIZE];
  int *ap = arr;
  int *rp = ray + ARR_SIZE - 1;

  while (*ap) {
    *rp = *ap;
    rp--;
    ap++;
  }
  *rp = *ap;

  printf("The copy:\n");
  rp = ray;
  for (i=0; i<ARR_SIZE; i++)
    printf("%d\n", rp[i]);

  return 0;
}
