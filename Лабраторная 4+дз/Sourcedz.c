#include <stdio.h>
#include <locale.h>
int main() {
	setlocale(LC_CTYPE, "RUS");
	int kah, a, b, c;
	printf("~Контроль качества игрушек~\n");
	printf("Введите вес игрушек:\n");
	scanf_s("%d %d %d", &a, &b, &c);

	kah = (a % 7 == 0 && b % 7 == 0 && c % 7 == 0);
	printf("Технологические нормы соблюдены (1 - да, 0 - нет): %d\n ", kah);
	return 0;


}