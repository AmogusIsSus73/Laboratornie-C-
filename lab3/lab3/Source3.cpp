#include <stdio.h>
#include <Windows.h>

void main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	int t;
	printf("������� �����������: ");
	scanf_s("%d", &t);

	if (t < 18) {
		printf("�������\n");
	}
	if (18 <= t && t < 22){
		printf("���������\n");
	}
	if (22 <= t && t < 26){
		printf("�����\n");
	}
	if (t >= 26){
		printf("�����\n");
	}
}