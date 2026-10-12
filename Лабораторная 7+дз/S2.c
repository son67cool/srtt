#include <stdio.h>
#include <locale.h>
#include <math.h>

int main() 
{
	setlocale(LC_CTYPE, "RUS");
	float x, y;
	char c;

	printf("Введите операцию:");
	scanf_s("%f %c %f\n", &x, &c, &y);

	switch (c)
	{
	case '+':
		printf("Ответ: %f\n", x + y);
		break;
	case '-':
		printf("Ответ: %f\n", x - y);
		break;
	case '*':
		printf("Ответ: %f\n", x * y);
		break;
	case '/':
		if (y != 0)
		{
			printf("Ответ: %f\n", x / y);
		}
		else {
			printf("на ноль делить нельзя\n");
		}
			break;
	case '^':
		printf("Ответ: %f\n", pow(x, y));
		break;
	default:
		printf("ошибка\n");
	}
	return 0;
}
		



	

