// Escriba un programa que calcule el interés que se obtiene por un determinado dinero
// depositado en un banco. Para ello el programa preguntará por el capital inicial y por el
// tipo de interés.

#include <stdio.h>

void input(char mensaje[], float *valor){
  printf("%s: ", mensaje);
  scanf("%f", valor);
}

int main(){
  float capital, tasa_interes, interes;
  
  input("Capital inicial", &capital);
  input("Tasa de interés anual (en porcentaje)", &tasa_interes);
  
  tasa_interes /= 100;

  interes = capital * tasa_interes;

  printf("Interés generado: %.2f\n", interes);

  return 0;
}