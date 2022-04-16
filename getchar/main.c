#include <stdio.h>

int main(void) {
  char caracter1;
  char caracter2;

  printf("Por favor, teclea dos caracteres seguidos:\n");
  caracter1= getchar();
  caracter2= getchar();
  printf("el primer caracter que has introducido es: %c\n", caracter1);
  printf("el segundo caracter que has introducido es: %c \n", caracter2);
  return 0;
}