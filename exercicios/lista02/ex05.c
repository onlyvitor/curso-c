#include "lista02.h"
#include <stdio.h>

int primo(int n, int i)
{
    if (n <= 1)
        return 0;
    if (i == 0)
        i = 2;
    if (i * i > n)
        return 1;
    if (n % i == 0)
        return 0;
    return primo(n, i + 1);
}

int ex05()
{
    int num;
    scanf("%d", &num);

    if (primo(num, 0))
    {
        printf("%d é primo\n", num);
    }
    else
    {
        printf("%d não é primo\n", num);
    }

    return 0;
}