#include <stdio.h>
#include <math.h>

#include <Windows.h>

void main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	float h = 12;
	float g = 9.8;
	float t = sqrt(2 * h / g);

	printf("Предмет падает с высоты %f метров\n", h);
	printf("Он коснётся земли через %f секунд\n", t);
}