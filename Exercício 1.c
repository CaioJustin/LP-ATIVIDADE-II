#include <stdio.h>
#include <stdlib.h>



int main (){

int Temperatura;

printf("Escreva a Temperatura:");
scanf("%d",&Temperatura);


if (Temperatura > 25)
{
    printf("O Dia sera Ensolarado");
} else if (Temperatura >=15 || Temperatura ==25)
{
    printf("O Clima e Nublado");
}else{
    printf("O Clima sera Chuvoso");
}

    return 0;
}