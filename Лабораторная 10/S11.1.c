#include <stdio.h>
#include <locale.h>
#include <math.h>
#define N 10

int main() {
	setlocale(LC_ALL, "Russian");
	float A[N];
	for (int i = 0; i < N; i++) {
		
		printf("Введите А[%d]: ", i + 1);
		scanf_s("%f", &A[i]);
		
	}
	float B[N];
	for (int i = 0; i < N; i++) {
		B[i] = ceil(A[i]);
	}
	printf("\nИндекс\tИсходное\tОкругленное\n");
	for (int i = 0; i < N; i++) {
		printf("%d\t%f\t%f\n", i, A[i], B[i]);
	}
	float sum = 0;
	
	for (int i = 0; i < N; i++) {
		sum += A[i];
	}
	float average;
	average = sum / N;
	printf("Среднее арифметическое: %f \n", average);
	return 0;
	}
	
