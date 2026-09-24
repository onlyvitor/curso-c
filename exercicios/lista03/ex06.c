#include "lista03.h"
#include <stdio.h>

void ex06_03()
{
    int array1[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    int array2[3][3] = {
        {2, 3, 4},
        {4, 5, 6},
        {7, 8, 9}};

    int result[3][3];

    // i=linha
    // j=coluna
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            result[i][j] = array1[i][j] * array2[i][j];
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("resultado[%d][%d]=%d\n", i, j, result[i][j]);
        }
    }
}