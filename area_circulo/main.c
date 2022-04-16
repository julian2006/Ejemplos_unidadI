
/* Autor: Julian Velasquez

*/
/* area de un circulo*/
#include <stdio.h>
#include <stdlib.h>
#define PI 3.1416

int main( )
{
    float radio = 10.5;
    float area;
    area = PI * radio * radio;
    printf("El area de un circulo de radio %f es \t %f.\n", radio, area);
    exit(0);
   
}