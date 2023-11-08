#include <stdio.h>
#include <stdlib.h>

int main(){

int i= 0;
float nota;
float soma=0;
float media=0;

for ( i = 1; i <= 4; i++)
{
    printf("Escreva a %d nota:",i);
scanf("%f",&nota);
 
 soma = soma + nota;

 media = soma / i;

}

printf("\nA Soma das notas e:%.1f",soma);
printf("\nA Media e :%.1f",media);


    return 0;
}