#include <stdlib.h>
#include <stdio.h>

int main() {

  char c = 'a';
  int i = 20;
  long l = 130480;

  printf("addres of c: %p\t%lu\n", &c, &c);
  printf("addres of i: %p\t%lu\n", &i, &i);
  printf("addres of l: %p\t%lu\n", &l, &l);

  char *cp = &c;
  int *ip = &i;
  long *lp = &l;

  printf("cp: %p\n", cp);
  printf("ip: %p\n", ip);
  printf("lp: %p\n", lp);

  *cp = '7';
  *ip = 512;
  *lp = 9;

  printf("c: %c\n", c);
  printf("i: %d\n", i);
  printf("l: %ld\n", l);

  char *p = &i;
  printf("p: %p\n", p);
  *p = 16;
  printf("i: %d\n", i);

  return 0;
}
