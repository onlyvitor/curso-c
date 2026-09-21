#include "lista03.h"
#include <stdio.h>
#include <string.h>

void ex02_03(){
    char str[60];
    scanf(" %s", str);
    char charlegal='a';
    scanf(" %c", &charlegal);

    if(strchr(str, charlegal)){
        printf("tem esse caractere fi\n");
    } else {
        printf("caractere nao ta la maninho\n");
    }
}