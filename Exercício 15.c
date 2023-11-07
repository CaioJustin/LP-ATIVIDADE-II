#include <stdio.h>

int main()
{

    int convert;
    int num;

    printf("Tipo de conversao \n\n1= milha para kilometro \n\n2= kilometro para milha \n\n3= celsius para fahrenheit \n\n4 = fanheirt para celsius");
    scanf("%d",&convert);



    printf("\nDigite um numero");
    scanf("%d", &num);

    switch (convert)
    {
    case 1:
        convert = num * convert;
        printf("Conversao :%d mi", convert);
        break;
    case 2:
        convert = num / convert;
        printf("Conversao :%d km", convert);
        break;
    case 3:
        convert = (num * 1.8) + 32;
        printf("conversao :%d c", convert);
    case 4:
        convert = (num / 1.8) + 32;
        printf("conversao:%d f ", convert);
        break;
    }

    return 0;
}