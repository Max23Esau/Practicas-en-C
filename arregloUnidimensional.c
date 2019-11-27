#include <stdio.h>

int main() {

  int arreglito[5];
  int resultado=1;

  printf("Multiplicar todos los elementos de un arreglo\n");
  printf("\nIngresa 5 valores\n");

  printf("\nValor 1: ");
  scanf("%i",&arreglito[0]);
  printf("Valor 2: ");
  scanf("%i",&arreglito[1]);
  printf("Valor 3: ");
  scanf("%i",&arreglito[2]);
  printf("Valor 4: ");
  scanf("%i",&arreglito[3]);
  printf("Valor 5: ");
  scanf("%i",&arreglito[4]);

  for(int i=0; i<5; i++)
  {
    resultado *= arreglito[i];
  }
  
  printf("\nLa multiplcacion de todos tus valores es de: %i", resultado);
  
   return 0;
}
