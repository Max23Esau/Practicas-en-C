#include <stdio.h>
#include <string.h>

int main()
{
    printf("Cadena de caracteres (string) invertida!\n");
    char userNamer[50];
    int size;

    printf("Escribe tu nombre: ");
    gets(userName);
    
    size=strlen(userName);

    for(int i=size;i>=0;i--)
    {
        printf("%c",userName[i]);
    }
    
  return 0;
}
