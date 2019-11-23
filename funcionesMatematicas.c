/*
    ceil(x)   -> Redondea hacia el proximo numero.
    floor(x)  -> Redonde hacia el numero orinalmente ingresado.
    fabs(x)   -> Devuelve el valor absoluto de x. 
    fmod(x,y) -> Calcula el resto de la divicion de x/y
    pow(x,y)  -> Eleva un numero 'x' a la potencia 'y'
    sqrt(x)   -> Devuelve la raiz cuadrada de x

*/

#include <stdio.h>
#include <math.h>

void sube();
void baja();
void absoluto();
void resto();
void potencia();
void raizCuadrada();

int main(){

  int x,y;

  sube(x);
  baja(x);
  absoluto(x);
  resto(x,y);
  potencia(x,y);
  raizCuadrada(x);

  return 0;
}

void sube()
{   
  float a, resultado = 0;
  printf("\nIngrese un numero decimal: ");
  scanf("%f",&a);
  resultado = ceil(a);
  printf("\nNumero redondeado hacia arriba: %.0f\n", resultado);
  printf("\n------------------------------------------------------\n");
}

void baja()
{
  float a, resultado = 0;
  printf("\nIngrese otro numero decimal: ");
  scanf("%f",&a);
  resultado = floor(a);
  printf("\nNumero redondeado hacia abajo: %.0f\n", resultado);
  printf("\n------------------------------------------------------\n");
}

void absoluto()
{
  float a, resultado = 0;
  printf("\nIngrese un numero negativo: ");
  scanf("%f",&a);
  resultado = fabs(a);
  printf("\nEl valor de absoluto de %.2f es: %.2f\n",a, resultado);
  printf("\n------------------------------------------------------\n");
}

void resto()
{

  int a,b, resultado = 0;
  printf("\nIngrese el dividendo que desee: ");
  scanf("%i",&a);
  printf("\nIngrese el divisior que desee: ");
  scanf("%i",&b);
  resultado = fmod(a,b);
  printf("\nEl resto de la division es de: %i\n", resultado);
  printf("\n------------------------------------------------------\n");
}
void potencia()
{
    int a,b;
  double resultado = 0;
  printf("\nIngrese un numero: ");
  scanf("%i",&a);
  printf("\nIngrese la potencia al que lo va a elevar: ");
  scanf("%i",&b);
  resultado = pow(a,b);
  printf("\nLa potencia de %.i a la %i es de: %.0f\n",a,b, resultado);
  printf("\n------------------------------------------------------\n");
}
void raizCuadrada()
{
  int a;
  float resultado = 0;
  printf("\nIngrese un numero: ");
  scanf("%i",&a);
  resultado = sqrt(a);
  printf("\nLa raiz cuadrada de %i es: %.2f\n",a, resultado);
  printf("\n------------------------------------------------------\n");
  printf("                    Game Over\n");
}

