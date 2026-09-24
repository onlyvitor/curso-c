#include <stdio.h>
#include "lista02.h"

int ex02()
{
    printf("escreva um numero de 1 a 7: ");
    int num;
    scanf("%d", &num);

    switch (num)
    {
    case 1:
        printf("domingo\n");
        break;
    case 2:
        printf("segunda\n");
        break;
    case 3:
        printf("terça\n");
        break;
    case 4:
        printf("quarta\n");
        break;
    case 5:
        printf("quinta\n");
        break;
    case 6:
        printf("sexta\n");
        break;
    case 7:
        printf("sabado\n");
        break;
    default:
        printf("numero invalido\n");
        return 1;
    }

    return 0;
}