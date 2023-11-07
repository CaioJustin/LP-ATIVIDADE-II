#include <stdio.h>
#include <stdlib.h>

int main(){

float nota;

printf("\nDigite a Sua Nota:");
scanf("%f",&nota);

if (nota >= 9)
{
   printf("\nExcellente");
}else if (nota >= 7 || nota == 8.9)
{
    printf("\nBom!!");
}else if (nota == 5 || nota <= 6.9)
{
    printf("\nRazoavel!!");
}else if (nota <5)
{
    printf("\ninsuficiente");
}

    return 0;
}