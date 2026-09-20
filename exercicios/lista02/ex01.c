#include <stdio.h>

int ex01() {
    printf("write a number:\n");
    int num=0;
    scanf("%d", &num);

    if(num<0){
        printf("negativo");
    } else {
        printf("positivo");
    }
}