#include <stdio.h>

int main() {

  int mantra[3][4] ={ {1,1,1,1},{2,2,3,3},{6,6,7,7} };
  int fila_uno,fila_dos,fila_tres,suma;                   

  fila_uno = mantra[0][0] + mantra[0][1] + mantra[0][2] + mantra[0][3];
  fila_dos = mantra[1][0] + mantra[1][1] + mantra[1][2] + mantra[1][3];
  fila_tres = mantra[2][0] + mantra[2][1] + mantra[2][2] + mantra[2][3];
  suma = fila_uno + fila_dos + fila_tres;

  printf("\nLa suma es de la primera fila es: %i", fila_uno);
  printf("\nLa suma es de la segunda fila es: %i", fila_dos);
  printf("\nLa suma es de la tercera fila es: %i", fila_tres);
  printf("\n\nLa suma es de todas las filas es de: %i", suma);
  return 0;
}
