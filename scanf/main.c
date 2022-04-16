#include <stdio.h>

int main(void) {
  char nombre[10];
  int edad;

  printf("introduce tu nombre:");
  scanf("%s",nombre);
  printf("Introduce tu edad:");
  scanf("%s",&edad);
  printf("tu nombre es %s", nombre);
  printf("\ttu edad es: \t%s", &edad);
}