// Escriba un programa en el que se declaren tres variables, a, b y c y se asigne a esas
// variables los valores 5, 7 y 9 respectivamente. El programa deberá entonces calcular
// su suma y mostrar el resultado. Modifíquelo para que los valores de las variables sean
// introducidos por el usuario.

#include <stdio.h>

void suma(int a, int b, int c){
  int suma = a + b + c;
  printf("Suma: %d \n", suma);
}

int suma_usuario(){
  int a, b, c;
  printf("Ingrese 3 numeros: \n");
  scanf("%d %d %d", &a, &b, &c);
  return a + b + c;
}

int main(){
  
  suma(5, 7, 9);

  int suma = suma_usuario();
  printf("Suma: %d", suma);
  return 0;
}
