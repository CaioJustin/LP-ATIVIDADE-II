#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{

    int numero1;
    int numero2;
    char oper;
    int soma;
    int sub;
    setlocale(LC_ALL,"portuguese");

    printf("Escolha O Primeiro Numero:");
    scanf("%d",&numero1);

    printf("Escolha O Segundo Numero:");
    scanf("%d",&numero2);

    fflush(stdin);

    printf("Selecione entre as duas operação matematica(+ para a Adição) e (- para Subtração)");
    scanf("%c", &oper);

    switch (oper)
    {
    case '+':
        soma = numero1 + numero2;
        printf("A soma e :%d", soma);
        break;
    case '-':
        sub = numero1 - numero2;
        printf("A Subtração e :%d", sub);
        break;
    default:
        printf("ERROR!");
        break;
    }

    return 0;
}