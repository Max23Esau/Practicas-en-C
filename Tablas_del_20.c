/*
  Muestra una tabla de multiplicar hasta el 20 de un numero cualquiera 
  por pantalla, el numero se pedira en el main. 
  Usar procedimiento.
*/

#include <stdio.h>
void tablas();

int main() {

  int numero;

  printf("Ingrese un numero: ");
  scanf("%i", &numero);

  tablas(numero);

  return 0;
}

void tablas(numero)
{
  int mult, i = 1, limite = 20;
  do{
    mult = i * numero;
    printf("\n%i x %i = %i", i,numero, mult);
    i++;
  }while(i <= limite);
}
