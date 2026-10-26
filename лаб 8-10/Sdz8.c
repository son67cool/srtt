#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Russian");

    double x;
    printf("Введите x: ");

    if (scanf_s("%lf", &x) != 1) {
        printf("Ошибка\n");
        return 1;
    }

    double ch = 1.0, zn = 1.0;

    for (int i = 2; i <= 64; i += 2) {
        ch *= (x - (i - 1));
        zn *= (x - i);
    }

    if (zn == 0.0) {
        printf("Ошибка: denominator is zero\n");
    }
    else {
        double res = ch / zn;
        printf("результат: %.6f\n", res);
    }

    return 0;
}
