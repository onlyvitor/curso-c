#include "lista07.h"

// 
void ex02_07(){
    int num=8;

    if(num == 0 || num == 1){
        printf("%d",num);
    }

    int array[num];
    array[0]=1;

    int *p=0;

    for (int i = 2; i < num;  i++){
        p = &array[i-2];
        array[i]= *p + *(p + 1);
        printf("%d\n", array[i]);
    }
}
