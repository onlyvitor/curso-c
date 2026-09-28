#include <stdio.h>

#define TAM_NOME 50
#define MAX_ACESSORIOS 20

typedef struct acessorio
{
    char nome[TAM_NOME];
    float valor;
} acessorio;

typedef struct carro
{
    char nome[TAM_NOME];
    float valor;
    acessorio acessorios[MAX_ACESSORIOS];
    int qtdAcessorios;
} carro;

void ex04_04()
{
    int qtdCarros;
    printf("Digite a quantidade de carros: ");
    scanf("%d", &qtdCarros);

    for (int i = 0; i < qtdCarros; i++)
    {
        carro c;
        c.qtdAcessorios = 0;

        printf("\nCarro %d\n", i + 1);
        printf("Digite o nome do carro: ");
        scanf("%s", c.nome);
        printf("Digite o valor base do carro: ");
        scanf("%f", &c.valor);

        printf("Digite a quantidade de acessorios: ");
        scanf("%d", &c.qtdAcessorios);

        for (int j = 0; j < c.qtdAcessorios; j++)
        {
            printf("Acessorio %d - nome: ", j + 1);
            scanf("%s", c.acessorios[j].nome);
            printf("Acessorio %d - valor: ", j + 1);
            scanf("%f", &c.acessorios[j].valor);
        }

        float total = c.valor;
        printf("\n=== Resumo do carro ===\n");
        printf("Nome: %s\n", c.nome);
        printf("Valor base: %.2f\n", c.valor);
        printf("Acessorios:\n");
        for (int j = 0; j < c.qtdAcessorios; j++)
        {
            total += c.acessorios[j].valor;
            printf("  %s: %.2f\n", c.acessorios[j].nome, c.acessorios[j].valor);
        }
        printf("Valor total: %.2f\n", total);
    }
}
