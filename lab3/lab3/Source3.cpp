#include <stdio.h>
#include <Windows.h>

void main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	int t;
	printf("Введите температуру: ");
	scanf_s("%d", &t);

	if (t < 18) {
		printf("Холодно\n");
	}
	if (18 <= t && t < 22){
		printf("Прохладно\n");
	}
	if (22 <= t && t < 26){
		printf("Тепло\n");
	}
	if (t >= 26){
		printf("Жарко\n");
	}
}