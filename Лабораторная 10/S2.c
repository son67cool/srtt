#include <stdio.h>
#include <locale.h>
#include <math.h>

double sin_n(double x, int N) {
	double sum = 0;
	double term = x;
	int k;
	
	for (k = 1; k <= N; k++) {
		sum += term;
		term = term * (-x * x) / ((2 * k) * (2 * k + 1));
		
	}
	return sum;
}
double sin_eps(double x, double eps) {
	double sum = 0;
	double term = x;
	int k = 1;

	while (fabs(term) >= eps) {
		sum += term;
		term = term * (-x * x) / ((2 * k) * (2 * k + 1));
		k += 1;
	}
	return sum;
}
int main() {
	setlocale(LC_ALL, "Russian");
	double x, eps, result;
	int N;

	printf("Введите значение х:\n");
	scanf_s("%lf", &x);
	printf("Введите количество слагаемых:\n");
	scanf_s("%d", &N);
	printf("Введите точность:\n");
	scanf_s("%lf", &eps);
	result = sin(x);
	double res_n = sin_n(x, N);
	double res_eps = sin_eps(x, eps);

	printf("Обычный синус: %12lf\n", result);
	printf("Синус с количиством слагаемых: %12lf\n", res_n);
	printf("Синус с точностью: %.12lf\n", res_eps);



	return 0;
}