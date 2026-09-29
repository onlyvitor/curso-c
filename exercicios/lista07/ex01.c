#include "lista07.h"

void soma(int *pnum1, int *pnum2)
{
    printf("resultado: %d + %d = %d", *pnum1, *pnum2, *pnum1 + *pnum2);
}

// ponteiros legais
void ex01_07()
{
    int num1 = 0;
    int num2 = 0;
    printf("escreva um numero: ");
    scanf("%d", &num1);
    printf("escreva um numero: ");
    scanf("%d", &num2);

    soma(&num1, &num2);
}