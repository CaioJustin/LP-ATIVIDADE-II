#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (){

//Considerando um projeto de e-commerce, implemente um programa que solicite ao usuário o código do produto (1 - Camiseta, 2 - Calça, 3 - Sapato). 
//Com base na escolha do usuário, exiba a mensagem informando o produto selecionado e seu preço.

setlocale(LC_ALL,"portuguese");


printf("\nProdutos Vendidos");
printf("\n1 - Camiseta");
printf("\n2 - Cal�a");
printf("\n3 - Sapato");

int codigo;

printf("\nSelecione uma roupa(Com base no numero):");
scanf("%d",&codigo);

switch (codigo)
{
case 1:
    printf("\nO Produto seleciona foi  \nproduto :camiseta \nPre�o :R$10");
    break;
case 2:
  printf("\nO Produto Selecionado foi \n Produto :Cal�a \n Valor :R$12");
  break;
case 3:
 printf("\nO Produto Selecionado foi \n Produto : Sapato \n Valor :R$30");
  break;
default:
    printf("\nERRO!");
    break;
}

 return 0;
}