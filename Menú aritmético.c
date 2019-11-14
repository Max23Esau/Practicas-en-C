 /*	Muestra un menu con la opcion sumar, restar, multiplicar y dividir.
 	El programa solicitara una opcion y realizara la tarea elegida. 
 	Usar un procedimiento+
 */ 
 
#include <stdio.h>
void menu();
void sumar();
void restar();
void multiplicar();
void dividir();

int main() {

  menu();

  return 0;
}

void menu()
{
  int opc;

  do{
    printf("\n\nMenu aritmetico");
    printf("\n1. Sumar");
    printf("\n2. Restar");
    printf("\n3. Multiplicar");
    printf("\n4. Dividir");
    printf("\n5. Salir");
    printf("\nQue opcion elige?\n");
    scanf("%i",&opc);

  switch(opc)
  {
    case 1:
    sumar(); 
    break;
    case 2:
    restar(); 
    break;
    case 3: 
    multiplicar();
    break;
    case 4: 
    dividir();
    break;
  }
  }while(opc != 5);
}

  void sumar()
  {
    int n1,n2,suma=0;

    printf("\nIngresa un numero: "); 
    scanf("%i", &n1);
    printf("\nIngresa otro numero: "); 
    scanf("%i", &n2);
    suma = n1 + n2;
    printf("El total de la suma es %i",suma);
  }

  void restar()
  {
    int n1,n2,resta=0;

    printf("\nIngresa un numero: "); 
    scanf("%i", &n1);
    printf("\nIngresa otro numero: "); 
    scanf("%i", &n2);
    resta = n1 - n2;
    printf("El total de la resta es %i",resta);
  }

  void multiplicar()
  {
    float n1,n2,mult=0;

    printf("\nIngresa un numero: "); 
    scanf("%f", &n1);
    printf("\nIngresa otro numero: "); 
    scanf("%f", &n2);
    mult = n1 * n2;
    printf("El total de la multiplicacion es %.0f",mult);
  }
  
  void dividir()
  {
    float n1,n2,div=0;

    printf("\nIngresa un numero: "); 
    scanf("%f", &n1);
    printf("\nIngresa otro numero: "); 
    scanf("%f", &n2);
    div = n1 / n2;
    printf("El total de la division es %.2f",div);
  }
