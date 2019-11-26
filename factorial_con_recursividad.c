/*
  Recursividad:
  Una funcion recursiva es una funcion que se llama a si misma.
  1.Caso Base
  2.Caso Recursivo
  
  a(x){
    if(n =1){
      return n;
    }
    else{
      a(x);
    }
  }
*/

#include <stdio.h>
long factorial(int n);

int main(){

  int numero;
  printf("Ingrese un numero: ");
  scanf("%i", &numero);

  printf("\nEl factorial de %i es: %li",numero, factorial(numero));

  return 0;
}

long factorial(int n)
{
  if(n<=1){
    return 1;
  }
  else
  {
    return (n * factorial(n-1));
  }
}
