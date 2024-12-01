// Escriba un programa en el que se declaren dos variables, a y b, se pida un valor para
// cada una de ellas, y se intercambien dichos valores.

#include<stdio.h>

int main(){
  int a, b, temporal;
  scanf("%d %d", &a, &b);
  temporal = a; 
  a = b; 
  b = temporal;
  printf("A. %d\nB. %d", a, b);

  return 0;
}