#include "lista03.h"
#include <stdio.h>

void ex05_03(int array[10]) {
    int high = array[0];
    int low = array[0];
    int nums = 0;

    for (int i = 0; i < 10; i++) {
        nums += array[i];

        if (array[i] > high) {
            high = array[i];
        }
        if (array[i] < low) {
            low = array[i];
        }
    }

    int mid = nums / 10;

    printf("media: %d\nmaior: %d\nmenor: %d\n", mid, high, low);
}