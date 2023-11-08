#include<stdio.h>
#include <stdlib.h>

int main(){

int idade;

printf("\nDigite a Sua idade:");
scanf("%d",&idade);


if (idade >=18)
{
    printf("\nAcesso Permitido");
}else if (idade <18)
{
    printf("\nAcesso Negado");
}
    return 0;
}


