#include "lista03.h"
#include <stdio.h>
#include <string.h>

void ex01_03()
{
    int i;
    int size = 0;

    printf("escreva uma palavara:\n");
    char sla[50];
    char sla2[50];

    scanf("%s", sla);
    for (i = strlen(sla) - 1; i != -1; i--)
    {
        sla2[size++] = sla[i];
    }

    if (strcmp(sla, sla2) == 0)
    {
        printf("eh um palindromo msm magrao: ");
    }
    else
    {
        printf("ta louco djow isso nao eh um palindromo nao: ");
    }

    printf("%s\n", sla2);
}