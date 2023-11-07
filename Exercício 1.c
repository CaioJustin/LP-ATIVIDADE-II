#include <stdio.h>
#include <stdlib.h>



int main (){


//Você é um desenvolvedor de jogos e está trabalhando em um novo jogo de aventura. O jogo tem um sistema de clima que depende da temperatura externa. 
//Se a temperatura for superior a 25 graus Celsius, o clima será ensolarado. Se a temperatura for inferior a 15 graus Celsius, o clima será chuvoso. 
//Se a temperatura estiver entre 15 e 25 graus Celsius, o clima será nublado.

int Temperatura;

printf("Escreva a Temperatura:");
scanf("%d",&Temperatura);


if (Temperatura > 25)
{
    printf("O Dia sera Ensolarado");
} else if (Temperatura >=15 || Temperatura <25)
{
    printf("O Clima e Chuvoso");
}else{
    printf("O Clima sera Nublado");
}


    return 0;
}