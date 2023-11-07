#include <stdio.h>
#include <stdlib.h>

int main(){


//Desenvolva um programa que solicite ao usuário uma quantidade de notas e peça para digitar cada nota.
 //O programa deve calcular e exibir a média das notas digitadas. Utilize o for para repetir o processo de solicitação das notas.

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