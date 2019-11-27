//Arreglos e iteradores unidimencionales


#include <stdio.h>

int main() {

  int arrayList[5];
  int mayor = 0;

  printf("Tamaño del array: 5");
  printf("\nIngrese los valores");
  printf("\nValor 1: ");
  scanf("%i", &arrayList[0]);
  printf("Valor 2: ");
  scanf("%i", &arrayList[1]);
  printf("Valor 3: ");
  scanf("%i", &arrayList[2]);
  printf("Valor 4: ");
  scanf("%i", &arrayList[3]);
  printf("Valor 5: ");
  scanf("%i", &arrayList[4]);

  for(int i=0; i<5; i++)
  {
    if(arrayList[i] > mayor)
    {
      mayor = arrayList[i];
    }
  }
  printf("\nEl numero mas grande de la lista es: %i", mayor);

  return 0;
}
