#include <stdbool.h>
#include <stdio.h>
void santi(bool santiRespuesta) {
  bool santiPregunta = santiRespuesta;
  char *santiContesta = (santiPregunta) ? "Si" : "No";
  printf("Yo:\nhola santi, sos gay?\nEl santi en plan: \n%s\n", santiContesta);
}
int main() { santi(true); }
