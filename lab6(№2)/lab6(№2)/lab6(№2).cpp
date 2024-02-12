//задание 2 ЛР 6 

#include <stdio.h>

void main() {
    int i;
    int stepen;

    stepen = 1;
    i = 0;

    do {
        printf("2^%d = %d\n", i, stepen);
        i += 1;
        stepen = stepen * 2;
    } while (i <= 5);
}
