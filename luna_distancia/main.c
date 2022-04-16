#include <stdio.h>

int main(void) {
  const int luna =23855;
  float luna_kilo;
  printf("distancia a la luna %d millas \n", luna);
  luna_kilo= luna*1.609;
  printf("En kilometros es %fKM. \n",luna_kilo);
  return 0;
}