#include <stdio.h>
#include <stdlib.h>

int main()
{

    int Codigo = 123;
    int tenta;

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