// Escriba un programa que calcule el perímetro de una circunferencia.
// NOTA perimetro = 2 * PI * r). Se recomienda definir PI como una constante
// usando la directiva define.

#include <stdio.h>

#define PI 3.14159

float perimetro(float radio){
  return 2 * PI * radio;
}

int main(){
  float radio;
  printf("Radio: ");
  scanf("%f", &radio);
  printf("Area del círculo: %f\n", perimetro(radio));

  return 0;
}