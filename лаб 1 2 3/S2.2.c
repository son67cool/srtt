#include <stdio.h>
#include <locale.h>
int main() {
	setlocale(LC_CTYPE, "RUS");
	int N = 21, K = 12, W, L, B, T, D, R;
	W = (N * 60) + 12;
	L = 24 - N;
	B = 60 - K;
	T = (13 * 60) + 12;
	D = N / 24;
	R = K / 24;
	printf("Сейчас %d часов %d минут 00 секунд\n", N, K);
	printf("Идёт %d минута суток\n", W);
	printf("До полуночи осталось %d часов и %d минут\n", L, B);
	printf("С 8.00 прошло %d секунд\n", T);
	printf("Текущий час = %d суток и текущая минута = %d часа\n", D, R);
	return 0;
}