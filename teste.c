#include <stdio.h>

int main (){

  int x;
  int y;
  int *p;

  x = 65;
  y = x;

  y+=4;

  printf("x=%c y=%c \n", x, y);
  printf("x=%d y=%d \n", x, y);

  p = &x;
  *p = y + x;

  printf("x%d y=%d \n", x, y);


  return 0;
}