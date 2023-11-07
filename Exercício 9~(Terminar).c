#include <stdio.h>
#include <stdlib.h>

int main(){

int numero=0;
int i =0;

printf("Digite um Numero Inteiro");
scanf("%d",&numero);

switch (numero)
{
case 1:
    if (numero <= 1)
    {
        printf("Nao e primo");
    }
    break;
case2:
   for ( i = 2; i < numero; i++)
   {
   if (numero % i ==0 )
   {
   printf("Nao e primo ");
   }
   if(i == numero) printf("e Primo");
   }
   break;
}

    return 0;
}