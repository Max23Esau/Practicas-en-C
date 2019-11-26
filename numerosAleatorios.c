/*
  Funcion Aleatoria:
  srand(time(NULL));
  variable = limte_inferior + rand() % ((limite_superior + 1) - limte_inferior);
*/

#include <stdio.h>
#include <time.h>
void fucion_aleatoria();

int main(){

  fucion_aleatoria();

  return 0;
}

void fucion_aleatoria(){

  int numero,limite_inferior, limite_superior;
  
  srand(time(NULL));

  printf("\nIngrese el limite inferior: ");
  scanf("%i", &limite_inferior);
  
  printf("\nIngrese el limite superior: ");
  scanf("%i", &limite_superior);

  for(int i=1; i<=10; i++){
    numero = limite_inferior + rand() % ((limite_superior + 1) - limite_inferior);
    printf("%i.\n",numero);
  }
}
