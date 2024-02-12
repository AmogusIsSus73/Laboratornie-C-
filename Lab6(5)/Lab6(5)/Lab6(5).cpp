//задание 5 ЛР 6 
#include <stdio.h>
#include <Windows.h>

void main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int n;
    int a;
    int i = 0;

    printf("Введите количество чисел: ");
    scanf_s("%d", &n);

    printf("Введите число, которому будут кратны другие числа: ");
    scanf_s("%d", &a);

    int num = a;

    do {
        printf("%d ", num);
        num += a;
        i++;
    } while (i < n);
}
