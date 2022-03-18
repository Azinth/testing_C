#include <stdio.h>

int main (int argc, char const *argy[]){

  int x;
  int *p = &x;
  printf("digite um valor: \n");
  scanf("%d", &x);

  printf("x=%d \n", x);

  return 0;
}