#include "lista03.h"
#include <stdio.h>

void ex08_03()
{
    int array[3][2] = {
        {1, 2},
        {1, 2},
        {6, 4}};
    int newArray[3][2];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            newArray[j][i] = array[i][j];
        }
    }

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", newArray[i][j]);
        }
        printf("\n");
    }
}