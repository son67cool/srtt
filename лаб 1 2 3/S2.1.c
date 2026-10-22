#include <stdio.h>
#include <locale.h>
int main() {
	setlocale(LC_CTYPE, "RUS");
	printf("%d\n", 1);
	printf("%2d\n", 2);
	printf("%3d\n", 3);
	printf("%4d\n", 4);
	printf("%10.5f\n ", 12.234657);
	printf("делим %d на %d равено %d\n ", 7, 5, 7 / 5);
	printf("умножаем %d на %d равено %d\n ", 2000, 4, 2000 * 4);
	printf("%g разделить %e равно %f\n ", 5., 2000000., 5. / 2000000);
}