#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_CTYPE, "RUS");
	int n, m, s = 0, k = 0;
	scanf_s("%d", &n);
	scanf_s("%d", &m);
	for (int i = m; i >= n; i--) {
		s += i;
		printf("выполнено %d раз", k++);
	}
	printf("резуьтат: %d", s);
}