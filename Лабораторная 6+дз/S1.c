#include <stdio.h>

#include <locale.h>

int main() {
	setlocale(LC_CTYPE, "RUS");
	int year;
	printf("Введите год:\n");
	scanf_s("%d", &year);
		if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
			printf("Год %d високосный\n", year);
		}
		else {
			printf(" Год %d не високосный \n", year);
		}
	return 0;

}

	
