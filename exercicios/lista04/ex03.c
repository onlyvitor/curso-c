#include "lista04.h"
#include <stdio.h>

void ex03_04()
{
    retangulo rect;
    pontos ponto;

    printf("Digite as coordenadas do ponto superior esquerdo do retangulo\n");
    printf("x: ");
    scanf("%f", &rect.superiorEsquerdo.x);
    printf("y: ");
    scanf("%f", &rect.superiorEsquerdo.y);

    printf("Digite as coordenadas do ponto inferior direito do retangulo\n");
    printf("x: ");
    scanf("%f", &rect.inferiorDireito.x);
    printf("y: ");
    scanf("%f", &rect.inferiorDireito.y);

    printf("Digite as coordenadas do ponto\n");
    printf("x: ");
    scanf("%f", &ponto.x);
    printf("y: ");
    scanf("%f", &ponto.y);

    float minX = rect.superiorEsquerdo.x < rect.inferiorDireito.x ? rect.superiorEsquerdo.x : rect.inferiorDireito.x;
    float maxX = rect.superiorEsquerdo.x < rect.inferiorDireito.x ? rect.inferiorDireito.x : rect.superiorEsquerdo.x;
    float minY = rect.superiorEsquerdo.y < rect.inferiorDireito.y ? rect.superiorEsquerdo.y : rect.inferiorDireito.y;
    float maxY = rect.superiorEsquerdo.y < rect.inferiorDireito.y ? rect.inferiorDireito.y : rect.superiorEsquerdo.y;

    if (ponto.x >= minX && ponto.x <= maxX && ponto.y >= minY && ponto.y <= maxY)
    {
        printf("O ponto esta inserido dentro do retangulo\n");
    }
    else
    {
        printf("O ponto nao esta inserido dentro do retangulo\n");
    }
}
