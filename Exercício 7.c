#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){

setlocale(LC_ALL,"portuguese");
int number;

printf("\n   Menu de op��o" );
printf("\n1 - Novo Jogo"    );
printf("\n2 - Carregar Jogo");
printf("\n3 - Configura��o" );


printf("\nDigite um numero (com base no menu de op��o):");
scanf("%d",&number);

switch (number)
{
case 1:
    printf("\n novo Jogo");
    printf("\nEscolha a Dificuldade");
    printf("\n1 - Facil ");
    printf("\n2- Normal");
    printf("\n3- Dificil");
    break;
case 2:
  printf("\n Jogos Salvos ");
  printf("\n1 -----------|");
  printf("\n2 Mario  A 17|");
  printf("\n3 -----------|");
  break;
case 3 :
    printf ("\n Menu de Configura�oes") ;
    printf ("\n1- Graficos") ; 
    printf ("\n2- Sensibilidade") ;
    printf ("\n3- Sistema de Sons") ;
    printf ("\n4- Extras") ;
    printf ("\n5- Creditos") ;
    break;
default:
  printf("\nESSA OP��O N�O EXISTEM !!");
    break;
}

    return 0;
}