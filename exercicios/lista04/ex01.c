#include <stdio.h>
#include <math.h>

typedef struct pontos
{
    float x;
    float y;
} pontos;

float ex01_04(pontos in1, pontos in2)
{
    float result = sqrt((in2.x - in1.x) * (in2.x - in1.x) + (in2.y - in1.y) * (in2.y - in1.y));
    return result;
}