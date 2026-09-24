#include "lista02.h"
#include <stdio.h>

int ex03()
{
    int num1;
    int num2;

    printf("escreva dois numeros:\n");

    scanf("%d", &num1);
    scanf("%d", &num2);

    if (num1 > num2)
    {
        printf("%d\n", num1);
    }
    else if (num1 < num2)
    {
        printf("%d\n", num2);
    }
    else
    {
        printf("=\n");
    }

    return 0;
}