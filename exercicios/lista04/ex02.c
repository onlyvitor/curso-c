#include "lista04.h"
#include <stdio.h>

void ex02_04()
{
    retangulo rect;

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

    float largura = rect.inferiorDireito.x - rect.superiorEsquerdo.x;
    float altura = rect.inferiorDireito.y - rect.superiorEsquerdo.y;
    float area = largura * altura;
    float perimetro = 2 * largura + 2 * altura;
    float diagonal = ex01_04(rect.superiorEsquerdo, rect.inferiorDireito);

    printf("Area: %.2f\n", area);
    printf("Perimetro: %.2f\n", perimetro);
    printf("Diagonal: %.2f\n", diagonal);
}
