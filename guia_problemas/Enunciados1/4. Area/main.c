// Escriba un programa que calcule el área de un triángulo rectángulo, pidiendo al
// usuario la altura y la base. La salida por pantalla debe ser "Un triangulo rectángulo de
// altura ____ y base ____, tiene un área de ____" (sustituyendo los espacios en blanco
// por los valores)
// NOTA area = (base * altura)/2
#include <stdio.h>

float area(float base, float altura){
  return (base * altura)/2;
}

int main(){
  float base, altura;
  printf("Ingrese base y altura para calcular su area: \n");
  scanf("%f %f", &base, &altura);

  printf("Un triangulo rectángulo de altura '%f' y base '%f', tiene un área de '%.2f'", altura, base, area(base, altura));

  return 0;
}