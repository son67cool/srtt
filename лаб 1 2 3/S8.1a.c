#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_CTYPE, "RUS");
	int a, b = 1;
	printf("Введите степень n:\n");
	scanf_s("%d", &a);
	for (int i = 0;i <= a;i++) {
		printf("2^%d =%d\n", a, b);
		b *= 2;
	}
	return 0;
}