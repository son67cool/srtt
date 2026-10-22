#include <stdio.h>
#include <locale.h>
int main() {
	setlocale(LC_CTYPE, "RUS");
	int k = 326, pr, ps, sr, sum, hh;
	pr = k / 100;
	ps = k % 10;
	sr = k / 10 % 10;
	sum = pr + ps + sr;
	hh = ps * 100 + sr * 10 + pr;
	printf("Последняя цифра числа %d\n", k % 10);
	printf("Первая цифра числа %d\n", k / 100);
	printf("Сумма цифр числа %d\n", sum);
	printf("Число наоборот %d\n", hh);
}



