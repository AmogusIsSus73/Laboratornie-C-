#include <stdio.h>
#include <math.h>

#include <Windows.h>

void main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	float h;
	printf("Введите скорость в метрах в секунду = ");
	scanf_s("%f", &h);
	float g = 9.8;
	float t = sqrt(2 * h / g);

	printf("Предмет падает с высоты %f метров\n", h);
	printf("Он коснётся земли через %f секунд\n", t);
}