#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    int num;
    int contPar = 0;
    int contImpar = 0;
    float somaPar = 0;
    float somaImpar = 0;
    setlocale(LC_ALL,"portuguese");

    printf("Digite um numero inteiro (ou um numero negativo para sair): ");
    scanf("%d", &num);

    while(num >= 0) {
        if(num % 2 == 0) {
            contPar++;
            somaPar += num;
        } else {
            contImpar++;
            somaImpar += num;
        }

        printf("Digite um numero inteiro (ou um numero negativo para sair): ");
        scanf("%d", &num);
    }

    printf("Quantidade de numeros pares: %d\n", contPar);
    printf("Quantidade de numeros impares: %d\n", contImpar);

    if(contPar > 0) {
        printf("Media aritmetica dos numeros pares: %.2f\n", somaPar/contPar);
    }

    if(contImpar > 0) {
        printf("Media arimetica dos numeros Ãimpares: %.2f\n", somaImpar/contImpar);
    }

    return 0;
}
