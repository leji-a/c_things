// Escriba un programa que pregunte al usuario su edad, y luego compruebe si es mayor
// de 21 años. Si es mayor deberá escribir un 1 y si es menor un 0. El ejercicio se debe
// resolver usando operadores relacionales.
// Recuerde que el resultado de evaluar una expresión verdadera en C (por ejemplo 7>5)
// es 1, y el de evaluar una falsa (7<5) es 0.

#include <stdio.h>

int evaluar(int edad){
  if (edad >= 21) { return 1; } else { return 0; }
}

int main(){
  int edad;
  printf("Edad: ");
  scanf("%d", &edad);
  printf("%d", evaluar(edad));

  return 0;
}