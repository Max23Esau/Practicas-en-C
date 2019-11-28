#include <stdio.h>

void pesos_a_dolares()
{
  float resultado, cantidad, peso = 0.051;

  printf("\nIngresa la cantidad que deseas convertir: ");
  scanf("%f", &cantidad);
  resultado = cantidad * peso;
  printf("$%.2f pesos son $%.2f dolares", cantidad, resultado);
}
void dolares_a_pesos()
{
  float resultado, cantidad, dolar = 19.56;
  printf("\nIngresa la cantidad que deseas convertir: ");
  scanf("%f", &cantidad);
  resultado = cantidad * dolar;
  printf("$%.2f dolares son $%.2f pesos", cantidad, resultado);
}

int main(void) {

  int option;

  printf("\nConversor de divisas\n");
  printf("\n1.Pesos a Dolares");
  printf("\n2.Dolares a Pesos");
  printf("\nQue opcion elige?: ");
  scanf("%i", &option);

  if(option == 1)
  {
    pesos_a_dolares(); 
  }
  else if(option == 2)
  {
    dolares_a_pesos();
  }
  else
  {
    printf("Opcion no valida");
  }

  return 0;
}
