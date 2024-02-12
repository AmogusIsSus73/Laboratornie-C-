#include <stdio.h>
#include <Windows.h>

void main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int n;
    int i = 0;
    int num = 1;

    printf("Введите кол-во чисел: ");
    scanf_s("%d", &n);

    do {
        printf("%d ", num);
        num += 2;
        i++;
    } while (i <= n);

}

