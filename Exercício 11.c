#include <stdio.h>
#include <stdlib.h>

int main()
{

    int Codigo = 123;
    int tenta;

    // Você é um desenvolvedor de um sistema de segurança e precisa criar um algoritmo que,
    // dado um código de acesso, permita ao usuário entrar em um edifício. O algoritmo deve continuar repetindo até que o usuário digite o código de acesso correto.

    do
    {
        printf("\n\nDigite o Codigo de Acesso:");
        scanf("%d", &tenta);

        if (tenta != Codigo)
        {
            printf("Acesso Negado");
        }
        else if (tenta == Codigo)
        {
            printf("\nAcesso Liberado");
        }

    } while (tenta != Codigo);

    return 0;
}