#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main() {
	setlocale(LC_ALL, "Russian");
	int n, * A;
	printf("Введите количество элементов массива\n");
	scanf_s("%d", &n);
	A = (int*)malloc(n * sizeof(int));

	if (A == NULL) {
		printf("Ошибка! Нехватка памяти\n");
		return 1;
	}
	printf("Введите элемент массива\n");
	for (int i = 0; i < n; i++) {
		scanf_s("%d", &A[i]);
	}
	int min = A[0], minindex = 0;

	for (int i = 0; i < n; i++) {
		if (abs(A[i]) < abs(min)) {
			min = A[i];
			minindex = i;
		}
	}
	int sum = 0;
	for (int i = minindex + 1; i < n; i++) {
		sum += A[i];
	}
	printf("Сумма элементов после минимального:\n", sum);
	free(A);
	return 0;
}

