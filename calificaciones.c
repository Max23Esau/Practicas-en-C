#include<stdio.h>

int main()
{

    printf("Array Bidimesional - Promedio de calificaciones.\n\n");


    float cajita[5][6] = {  { 6, 7, 6, 7, 8, 0},
                            { 8, 8, 7, 9, 7, 0},
                            {10, 10, 9, 10, 8, 0},
                            { 10, 9, 9, 9, 8, 0},
                            { 8, 7, 6, 7, 8, 0} };

    float suma = 0, promedio = 0;

    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 6; j++)
        {
          if(j<5)
          {
            printf("Calificacion de [%i][%i] es: %.0f\n",i,j,cajita[i][j]);
            suma += cajita[i][j]; 
          }
          else
          {
            promedio = suma / 5;
            printf("\n\tEl promedio de la fila %i es: %.1f\n\n",i, promedio);
          }
        }
      suma = 0;
      promedio = 0;
    }
    return 0;
}
