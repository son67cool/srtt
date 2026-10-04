Лабораторная работа 5

Домашняя работа

<img width="616" height="277" alt="image" src="https://github.com/user-attachments/assets/c46e2cba-fcaa-49d1-83c6-717cfc9735c6" />

    #include <stdio.h>
    #include <locale.h>
    #include <math.h>
    int main()
    {
    double x = 3.981 * pow(10, -2);
    double y = -1.625 * pow(10, 3);
    double z = 0.512;
    double a;
    setlocale(LC_CTYPE, "RUS");

    a = pow(2, -x) * sqrt(x + sqrt(sqrt(fabs(y)))) * pow(exp(x - 1 / sin(z)), 1.0 / 3);
    printf("Ответ: %f\n", a);

    return 0;
    }
