#include <stdio.h>
#include <math.h>

#include <Windows.h>

void main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	float s;
	printf("¬ведите площадь квартиры = ");
	scanf_s("%f", &s);

	int price_s;
	printf("¬ведите стоимость 1 кв.метра в RUB = ");
	scanf_s("%d", &price_s);

	int zp;
	printf("¬ведите размер зарплаты RUB = ");
	scanf_s("%d", &zp);

	float price = s * price_s;

	int time = price / (zp / 2);

	printf(" вартира площадью %f m^2 по цене %d RUB/m^2 стоит <%10.1f> RUB\n", s, price_s, price);
	printf("ѕри зарплате %d RUB на эту квартиру нужно копить %d мес€цев\n", zp, time);
}