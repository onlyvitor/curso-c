#include <stdio.h>

typedef struct Carro {
    char nome[20];
    int val;
} carro;

void ex04_07(){
    carro carros[5];
    printf("escreva um carro\n");

    for(int i = 0; i < 5; i++){
        printf("nome: \n");
        scanf(" %s", carros[i].nome);
        printf("valor: \n");
        scanf(" %d", &carros[i].val);
    }

    carro *initial_pointer = &carros[0];
    carro *final_pointer = &carros[4];

    for(; initial_pointer <= final_pointer; initial_pointer++, final_pointer--){
        printf("carro: %s\n tem valor de %d\n", initial_pointer->nome, initial_pointer->val);
        printf("carro: %s\n tem valor de %d\n", final_pointer->nome, final_pointer->val);
    }
    
}
