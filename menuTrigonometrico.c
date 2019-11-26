/*
  Funciones Trigonometricas
  asin(x) -> Calcula el arco seno de x
  acos(x) -> Calcula el arco coseno de x
  atan(x) -> Calcula el arco tangente de x
  sin(x)  -> Calcula el seno del angulo x, en radianes
  cos(x)  -> Calcula el coseno del angulo x, en radianes
  tan(x)  -> Calcula la tangente del angulo x, en radianes
*/

#include <stdio.h>
#include <math.h>
void arcoSeno();
void arcoCoseno();
void arcoTangente();
void seno();
void coseno();
void tangente();

int main(){

  int option;
  printf("\n\tMenu Trignonometrico\n");
  printf("\n1. Calcula el arco seno de x");
  printf("\n2. Calcula el arco coseno de x");
  printf("\n3. Calcula el arco tangente de x");
  printf("\n4. Calcula el seno del angulo x, en radianes");
  printf("\n5. Calcula el coseno del angulo x, en radianes");
  printf("\n6. Calcula la tangente del angulo x, en radianes");
  printf("\n7. Salir");
  printf("\nQue opcion eliges?: ");
  scanf("%i", &option);
  
  switch(option)
  {
    case 1: arcoSeno(); break;
    case 2: arcoCoseno();break;
    case 3: arcoTangente();break;
    case 4: seno();break;
    case 5: coseno();break;
    case 6: tangente();break;
    case 7: break;
    default: printf("Opcion no valida");
  }
  return 0;
}

void arcoSeno(){
  float x, resultado;
  printf("Ingrese el valor de x: ");
  scanf("%f", &x);
  resultado = asin(x);
  printf("\nEl arco seno de %.2f es %.2f",x, resultado);
}

void arcoCoseno(){
  float x, resultado;
  printf("Ingrese el valor de x: ");
  scanf("%f", &x);
  resultado = acos(x);
  printf("\nEl arco coseno de %.2f es %.2f",x, resultado);
}

void arcoTangente(){
  float x, resultado;
  printf("Ingrese el valor de x: ");
  scanf("%f", &x);
  resultado = atan(x);
  printf("\nEl arco tangente de %.2f es %.2f",x, resultado);
}

void seno(){
  float x, resultado;
  printf("Ingrese el valor de x: ");
  scanf("%f", &x);
  resultado = sin(x);
  printf("\nEl seno de %.2f es %.2f",x, resultado);
}

void coseno(){
  float x, resultado;
  printf("Ingrese el valor de x: ");
  scanf("%f", &x);
  resultado = cos(x);
  printf("\nEl coseno de %.2f es %.2f",x, resultado);
}

void tangente(){
  float x, resultado;
  printf("Ingrese el valor de x: ");
  scanf("%f", &x);
  resultado = asin(x);
  printf("\nLa tangente de %.2f es %.2f",x, resultado);
}
