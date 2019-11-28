#include <stdio.h>
#include <string.h>
  
  char nombre[50];

void calificacion()
{
  int nota;
  printf("Ingresa la calificacion de tu examen: ");
  scanf("%i", &nota);

  if(nota > 70)
  {
    printf("%s ha aprobado !!!", nombre);
  }
  else
  {
    printf("%s ha reprobado !!!", nombre);
  }
}

int main() {

  printf("\nCalificacion\n");
  printf("\nEscribe tu nombre: ");
  gets(nombre);

  calificacion();

  return 0;
}
