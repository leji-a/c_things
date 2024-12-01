// Escriba un programa que muestre en la pantalla un mensaje de saludo, por ejemplo
// "Hola",y luego muestre el mensaje "Por favor introduzca el año en que nació". El
// programa debe leer ese valor y almacenarlo en una variable de tipo entero llamada
// fecha. Por último haga que el programa escriba la frase " Si usted nació en <valor de la
// fecha leída> este año cumple <edad calculada> años.
// Es recomendable que vaya escribiendo el programa por pasos (mostrar saludo, pedir
// fecha, leer fecha,…) y compilándolo después de cada paso para comprobar que
// funciona.

#include <stdio.h>

int edad_calcular(int fecha){
  return 2024 - fecha;
}

int main() {
  int fecha;
  printf("Hola!\nIntroduzca su fecha de nacimiento: ");
  scanf("%d", &fecha);
  int edad_calculada = edad_calcular(fecha);
  printf("Si usted nació en %d este año cumple %d años", fecha, edad_calculada);

  return 0;
}
