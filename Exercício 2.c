#include <stdio.h>
#include <stdlib.h>

int main(){

float numero;
int dia; 
float valor;

printf("digite o preço do Produto que voce deseja");
scanf("%f",&numero);

  printf("\nMural de dia");
  printf("\n1- Segunda"  );
  printf("\n2- Terca"    );
  printf("\n3- Quarta"   );
  printf("\n4- Quinta"   );
  printf("\n5- Sexta"    );
  printf("\n6- Sabado"   );
  printf("\n7- Domingo"  );

printf("Digite o Dia da Semana(Com base no mural do dia)");
scanf("%d",&dia);


if (numero >100)
{
    switch (dia)
{
case 1:
case 2:
case 3:
case 4:
case 5:
   valor= numero - 0.01;
    break;
case 6:
case 7:
  valor = numero - 0.15;
    break;
}
}






    return 0;
}