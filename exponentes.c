#include <stdio.h>
#include <math.h>

void potencia()
{
  int base, exponente, resultado=0;
  printf("Base: ");
  scanf("%i", &base);
  printf("Exponente: ");
  scanf("%i", &exponente);
  
  resultado = pow(base,exponente);
  printf("El resultado es: %i", resultado);
}

int main(){

  printf("\nPotencia de un numero\n");
  potencia();

  return 0;
}
