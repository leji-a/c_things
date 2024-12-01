// Escriba un programa que pida un tiempo en segundos y lo muestre convertido a
// minutos y segundos.

#include <stdio.h>

int minutos(int segundos){
  return segundos / 60;
}

int main(){
  int segundos, segundo;

  printf("Segundos: ");
  scanf("%d", &segundos);

  int minuto = minutos(segundos);
  segundo = segundos % 60;

  printf("%d:%d", minuto, segundo);

  return 0;
}