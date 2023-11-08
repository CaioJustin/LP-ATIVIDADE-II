#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){

int numero;
int numero2;
setlocale(LC_ALL,"portuguese");

printf("\nEscolha o primeiro numero:");
scanf("%d",&numero);


printf("\nEscolha o segundo numero:");
scanf("%d",&numero2);


if (numero > numero2)
{
    printf("\nO Maior e o primeiro numero :%d",numero);
    printf("\nO Menor e o Segundo numero :%d",numero2);
}else if (numero2 > numero ){
    printf("\nO Maior e o segundo numero :%d",numero2);
    printf("\nO Menor e o Primero numero :%d",numero);
}else{
    printf("Eles São Iguais");
}


    return 0;
}