//Cajero automatico con saldo de $1000 dolares
#include <stdio.h>
int main(){

 int monto, efectivo, saldo = 1000;
 
 printf("Bienvenido a BBVE\n");
 
 do
 {
   printf("¿Cuanto dinero desea retirar? ");
   scanf("%i", &monto);
   printf("Usted ah retirado $%i dolares\n\n", monto);
   saldo -= monto;
 }while(saldo > 0);
 
   printf("Ya no hay fondos suficientes");
 
 return 0;
}
