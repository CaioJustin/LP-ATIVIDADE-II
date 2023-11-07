#include <stdio.h>
#include <stdlib.h>

int main(){

    int numero=0;
    int i =0;
    int flag = 0;

    printf("Digite um Numero Inteiro");
    scanf("%d",&numero);

    if (numero <= 1) {
        printf("Nao e primo");
    } else {
        for (i = 2; i <= numero / 2; i++) {
            if (numero % i == 0) {
                printf("Nao e primo");
                flag = 1;
                break;
            }
        }
        if (flag == 0) printf("E primo");
    }

    return 0;
}
