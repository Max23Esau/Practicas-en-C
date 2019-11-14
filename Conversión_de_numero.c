 /*	
    Pide un numero entre 1 y 10, y mediante un procedimiento 
    muestre por pantalla el numero escrito en letras.
 */ 

#include<stdio.h>
void convercion();

int main(){
	
  convercion();
	
	return 0;
}

void convercion()
{
  int numero;
  printf("\nIngrese un numero entre 1 y 10: ");
  scanf("%i", &numero);

  switch(numero)
  {
    case 1:
    printf("\nEligio el numero uno");
    break;

    case 2: 
    printf("\nEligio el numero dos");
    break;
    
    case 3: 
    printf("\nEligio el numero tres");
    break;
    
    case 4: 
    printf("\nEligio el numero cuatro");
    break;
    
    case 5: 
    printf("\nEligio el numero cinco");
    break;
    
    case 6: 
    printf("\nEligio el numero seis");
    break;
    
    case 7: 
    printf("\nEligio el numero siete");
    break;
    
    case 8: 
    printf("\nEligio el numero ocho");
    break;
    
    case 9: 
    printf("\nEligio el numero nueve");
    break;
    
    case 10: 
    printf("\nEligio el numero diez");
    break;
    
    default: printf("\nOpcion no valida");
  }
}
