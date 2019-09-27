#include <stdlib.h>
#include <stdio.h>

int main() {

  unsigned int i = 261;
  int *p = &i;
  char *c = &i;

  printf("p: %p\tp points to: %d\n", p, *p);
  printf("c: %p\tc points to: %c\n", c, *c);

  printf("i decimal: %u\ti hex: %x\n", i, i);

  printf("Printing each byte of i:\n");
  int j;
  for(j=0; j<4; j++) {
    printf("*(c + %d): %hhu\n", j, *(c+j));
  }

  printf("\nAdding 1 to each byte of i:\n");
  for(j=0; j<4; j++) {
    *(c + j)+= 1;
    printf("i decimal: %u\ti hex: %x\n", i, i);
  }

  printf("\nPrinting each byte of i:\n");
  for(j=0; j<4; j++) {
    printf("*(c + %d): %hhu\n", j, *(c+j));
  }

  printf("\nAdding 16 to each byte of i:\n");
  for(j=0; j<4; j++) {
    *(c + j)+= 16;
    printf("i decimal: %u\ti hex: %x\n", i, i);
  }

  printf("\nPrinting each byte of i:\n");
  for(j=0; j<4; j++) {
    printf("*(c + %d): %hhu\n", j, *(c+j));
  }
  return 0;
}
