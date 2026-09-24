#include "lista03.h"
#include <stdio.h>
#include <string.h>

void ex03_03()
{
    char str[60];
    scanf(" %s", str);
    char str2[60];
    scanf(" %s", str2);

    if (strstr(str, str2) != NULL)
    {
        printf("verdadeiro magrão");
    }
    else
    {
        printf("falso demais magrao");
    }
}