#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_CTYPE, "RUS");
	int k = 3, h = 333;
	printf("дано:\n");
	printf("%7d\n", k);
	printf("%7d\n", h);
	printf("-------------\n\t");
	printf("ответ:\n");
	printf("%+08.7f\n", (float)k / h);
	return 0;
}
