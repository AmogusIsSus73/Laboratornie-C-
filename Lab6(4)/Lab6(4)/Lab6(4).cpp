//задание 4 ЛР 6 
#include <stdio.h>
#include <Windows.h>

void main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int n;
    int i = 0;
    int num = 2;

    printf("Введите количество чисел: ");
    scanf_s("%d", &n);

    do {
        printf("%d ", num);
        num += 2;
        i += 1;
    } while (i < n);

}
