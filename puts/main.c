#include <stdio.h>
#define TAM_MAXIMO 80

int main(void) {
  char cadena [TAM_MAXIMO];

  printf("Por favor, escribe una linea de no mas de 80 caracteres: \n");
  gets(cadena);
  printf("la linea que has introducido es: \n");
  puts(cadena);
  return 0;
}