#include <stdio.h>
#include <stdlib.h>

int main()
{

  float valor;
  int dia;
  float Total;

  printf("\nDigite o Valor da comprar R$");
  scanf("%f",&valor);

  printf("\nMural de dia");
  printf("\n1- Segunda");
  printf("\n2- Terca");
  printf("\n3- Quarta");
  printf("\n4- Quinta");
  printf("\n5- Sexta");
  printf("\n6- Sabado");
  printf("\n7- Domingo");
  
  printf("\nDigite o  Numero da Semana(Com Base no mutal em cima)");
  scanf("%d", &dia);

  if (valor > 100)
  {
    switch (dia)
    {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
      Total = valor * 0.90;
      break;
    case 6:
    case 7:
    Total = valor * 0.85;
      break;
    }
  }

  printf("\nValor da compra :%.1f", valor);
  printf("\nValor com desconto :%.1f",Total);

  return 0;
}