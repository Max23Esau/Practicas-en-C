 /*	
    Pida la temperatura en grados celcius, muestre un menu para convertirlos
    a Fahrenheit o Kelvin y muestre el resultado en pantalla. Utiliza funciones
 */ 

#include<stdio.h>
float farenheit(float C);
float kelvin(float C);

int main(){
  int opc;
  float C,F=0,K=0;

  printf("Digite el valor de los gracos Celcius: ");
  scanf("%f", &C);

  do{
    printf("\n1. Convertir a grados Fahrenheit");
    printf("\n2. Convertir a grados Kelvin");
    printf("\n3. Salir");
    printf("\nQue opcion eliges?\n");
    scanf("%i", &opc);

    switch(opc)
    {
      case 1: F = farenheit(C);
      break;
      
      case 2: K = kelvin(C);
      break;
      
      case 3: break;
      default: printf("Opcion no valida");
    }
  }while(opc != 3);

  return 0;
}

float farenheit(float C)
{
  float f;
  f = (C*9/5) + 32;
  printf("\nLa temperaturaen °F es de %.2f\n", f);
  return f;
}

float kelvin(float C)
{
  float k;
  k = C + 273.15;
  printf("\nLa temperaturaen °K es de %.2f\n", k);
  return 0;
}
