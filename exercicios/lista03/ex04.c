#include "lista03.h"
#include <stdio.h>
#include <string.h>

void ex04_03()
{
    int quant;
    char str[20];
    scanf(" %s", str);
    char charlegal;
    scanf(" %c", &charlegal);

    for (size_t i = 0; i < strlen(str); i++)
    {
        if (str[i] == charlegal)
        {
            quant++;
        }
    }

    printf("%d", quant);
}