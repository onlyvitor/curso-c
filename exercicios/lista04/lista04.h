#ifndef lista04
typedef struct pontos
{
    float x;
    float y;
} pontos;

typedef struct retangulo
{
    pontos superiorEsquerdo;
    pontos inferiorDireito;
} retangulo;

float ex01_04(pontos in1, pontos in2);
void ex02_04();
#endif