#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Russian");
    int k;
    printf("Введите число:\n");
    scanf_s("%d", &k);
    int m = 1 + rand() % 10;
    if (m == k) {
        printf("Верно\n");
    }
    else {
        printf("Неверно\n");
    }
    return 0;
}