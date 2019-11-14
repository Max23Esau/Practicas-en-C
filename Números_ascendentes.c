/*
  Muestra 3 numeros ordenados de ascendentemente. 
  Utilizar un procedimiento para cada operacion.
*/

#include <stdio.h>
void ascendente(int a, int b, int c);

int main() {

  int a,b,c;

  printf("Digite un numero: ");
  scanf("%i", &a);
  printf("Digite otro numero: ");
  scanf("%i", &b);
  printf("Digite un numero mas:");
  scanf("%i", &c);
  
  ascendente(a,b,c);
  return 0;
}

void ascendente(int a, int b, int c)
{

  if(a>=b && a>=c)
  {
    if(b>=c)
    {
      printf("%i, %i, %i,", c,b,a);
    }
    else
    {
      printf("%i, %i, %i,", b,c,a);
    }
  } 
  if(b>=a && b>=c)
  {
   if(a>=c)
   {
    printf("%i, %i, %i,", c,a,b);
   }
   else
   {
    printf("%i, %i, %i,", a,c,b);
   }
  }
  if(c>=a && c>=b)
  {
    if(a>=b)
    {
      printf("%i, %i, %i,", b,a,c);
    }
    else
    {
      printf("%i, %i, %i,", a,b,c);
    }
  }
}

