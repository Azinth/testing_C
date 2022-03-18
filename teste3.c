#include <stdio.h>
#include <stdlib.h>

int main (int argc, char const *argv[]){
  int *p = malloc(sizeof(int)); //aqui ele aloca em tempo de execução, não precisa dizer qual vai ser o valor o próprio C vai entender. (alocando memória)

  printf("digite um valor: \n");
  scanf("%d", p);

  printf("*p=%d *p=%p \n", *p, p);

  free(p); //free(p) libera o endereço de memória. (desalocando memória)
  p=NULL; //esse garante que p realmente não vai ter nada.

  return 0;
}