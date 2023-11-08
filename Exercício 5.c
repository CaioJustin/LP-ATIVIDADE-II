#include <stdio.h>
#include <stdlib.h>

int main (){

int idioma;

printf("\nMural de Selecao de idioma");
printf("\n1 - Ingles");
printf("\n2- Espanhol");
printf("\n3- Frances");

printf("\nPorfavor Selecione um idioma(com Base no numero):");
scanf("%d",&idioma);

switch (idioma)
{
case 1:
    printf("WELCOME!!");
    break;
case 2:
    printf("BIENVENIDA!!");
    break;
case 3:
    printf("Bienvenue!!");
    break;
default:
    printf("Error 404!");
    break;
}
    return 0;
}