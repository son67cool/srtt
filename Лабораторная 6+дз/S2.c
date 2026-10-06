#include <stdio.h>
#include <locale.h>
#include <math.h>
int main()
{
	int x;

	setlocale(LC_CTYPE, "RUS");

	printf("Введите число:\n");
	scanf_s("%d", &x);

	if (x >= 8) 
	{
		printf("y = %f\n", -pow(x, 2) + x - 9);
	}
	else 
	{
		printf("y = %f\n", 1.0 / (pow(x, 4) - 6));
	}

	return 0;

}