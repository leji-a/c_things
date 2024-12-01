// Escriba un programa que calcule el resto de la división de dos números enteros. Para
// ello utilice el operador módulo (%)

#include <stdio.h>

int main(){
  int a, b, resto;

  printf("Numeros: ");
  scanf("%d %d", &a, &b);
  
  resto = a % b;

  printf("Resto: %d", resto);
  return 0;
}