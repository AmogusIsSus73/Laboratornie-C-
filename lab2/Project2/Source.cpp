#include <stdio.h>
#include <math.h>

#include <Windows.h>

void main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	float s;
	printf("������� ������� �������� = ");
	scanf_s("%f", &s);

	int price_s;
	printf("������� ��������� 1 ��.����� � RUB = ");
	scanf_s("%d", &price_s);

	int zp;
	printf("������� ������ �������� RUB = ");
	scanf_s("%d", &zp);

	float price = s * price_s;

	int time = price / (zp / 2);

	printf("�������� �������� %f m^2 �� ���� %d RUB/m^2 ����� <%10.1f> RUB\n", s, price_s, price);
	printf("��� �������� %d RUB �� ��� �������� ����� ������ %d �������\n", zp, time);
}