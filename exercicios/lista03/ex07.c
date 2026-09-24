#include "lista03.h"
#include <stdio.h>

void ex07_03()
{
    int array1[2][2] = {
        {1, 2},
        {1, 2}};
    int array2[2][2] = {
        {3, 4},
        {5, 4}};

    int result[2][2];

    // i=linha
    // j=coluna
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            result[i][j] = array1[i][j] + array2[i][j];
        }
    }

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("resultado[%d][%d]=%d\n", i, j, result[i][j]);
        }
    }
}