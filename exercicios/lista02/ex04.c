#include <stdio.h>
#include "lista02.h"

int ex04(){
    printf("90-100: A\n80-89: B\n70-79: C\n60-69: D\n< 60: F");
    printf("escreva a nota d aluno:\n");

    int nota;
    char nota_letra;

    scanf("%d",&nota);

    if(nota>=90){
        nota_letra='A';
        printf("%c\n", nota_letra);
    } else if(nota <=89 && nota >= 80){
        nota_letra='B';
        printf("%c\n", nota_letra);
    } else if (nota <= 79 && nota >= 70){
        nota_letra='C';
        printf("%c\n", nota_letra);
    } else if(nota <= 60 && nota >= 69){
        nota_letra='D';
        printf("%c\n", nota_letra);
    } else if(nota<60){
        nota_letra='F';
        printf("%c\n", nota_letra);
    }

    return 0;

}