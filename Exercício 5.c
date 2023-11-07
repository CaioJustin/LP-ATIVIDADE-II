#include <stdio.h>
#include <stdlib.h>

int main (){

//Enquanto você faz parte de uma equipe de desenvolvimento de software, 
//desenvolva um programa que solicite ao usuário que escolha um idioma de preferência (1 - Inglês, 2 - Espanhol, 3 - Francês). 
//Com base na escolha do usuário, exiba a mensagem de boas-vindas no idioma selecionado.


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