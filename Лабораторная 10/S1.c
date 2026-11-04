#include <stdio.h>
#include <locale.h>
#include <math.h>

    double fa(double x) {
        double y;

        if (x <= 3) {
            y = pow(x, 2) - 3 * x + 9;
        }
        else {
            y = 1.0 / (pow(x, 3) + 3);
        }
        return y;
    }
    double fb(double x) {
        double y;
        y = x * exp(-sin(pow(x, 2)));
        return y;

    }
    int main() {
        setlocale(LC_ALL, "Russian");
        int choice;
        double x;
        double a, b;
       

        printf("Введите значение х:");
        scanf_s("%lf", &x);
        a = fa(x);
        b = fb(x);

        printf("\n Выберите действие: \n");
        printf("1. Произведение функций\n");
        printf("2. Разность квадратов\n");
        printf("3. Удвоенная сумма\n");
        printf("4. Выход\n");
        scanf_s("%d", &choice);

        switch (choice) {
        case 1:
            printf("%lf\n", a * b);
            break;
        case 2:
            printf("%lf\n",pow(a, 2) - pow(b, 2));
            break;
        case 3:
            printf("%lf\n",2 * (a + b));
            break;
        case 4:
            printf("Выход\n");
            break;
        default:
            printf("Неправильный выбор!\n");
            break;
        }
       
       
       
    }