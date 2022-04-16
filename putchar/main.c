#include <stdio.h>

int main(void) {
  int caracter1 = 65;
  char caracter2 = 'A';

  printf("la letra con valor numerico de 65 es: \n");
  putc(caracter1,stdout);
  printf("\nY la variable caracter2 contiene la letra: \n");
  putchar(caracter2);
  return 0;
}