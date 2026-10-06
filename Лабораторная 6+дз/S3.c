#include <stdio.h>
#include <locale.h>
int main()
{
	int d1, m1, y1;
	int d2, m2, y2;
	setlocale(LC_CTYPE, "RUS");
	printf("Введите дату рождения Миллы:\n");
	scanf_s("%d %d %d", &d1, &m1, &y1);

	printf("Введите дату рождения Насти:\n");
	scanf_s("%d %d %d", &d2, &m2, &y2);
	if (y1 > y2) {
		printf("Milla");
	}
	else if (y1 < y2) {
		printf("Nasty");
	}
	else if (m1 > m2) {
		printf("Milla");
	}
	else if (m1 < m2) {
		printf("Nasty");
	}
	else if (d1 > d2) {
		printf("Milla");
	}
	else {
		printf("Nasty");
	}
	return 0;
}


