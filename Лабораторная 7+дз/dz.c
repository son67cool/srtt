
#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_CTYPE, "RUS");

    char a, b, c, d;
    int year = 0;

    printf("Введите четыре римские цифры по очереди:\n");

    scanf_s(" %c", &a);
    scanf_s(" %c", &b);
    scanf_s(" %c", &c);
    scanf_s(" %c", &d);

    switch (a)
    {
    case 'M': year += 1000; break;
    case 'D': year += 500; break;
    case 'C': year += 100; break;
    case 'L': year += 50; break;
    case 'X': year += 10; break;
    case 'V': year += 5; break;
    case 'I': year += 1; break;
    }

    switch (b)
    {
    case 'M': year += 1000; break;
    case 'D': year += 500; break;
    case 'C': year += 100; break;
    case 'L': year += 50; break;
    case 'X': year += 10; break;
    case 'V': year += 5; break;
    case 'I': year += 1; break;
    }

    switch (c)
    {
    case 'M': year += 1000; break;
    case 'D': year += 500; break;
    case 'C': year += 100; break;
    case 'L': year += 50; break;
    case 'X': year += 10; break;
    case 'V': year += 5; break;
    case 'I': year += 1; break;
    }

    switch (d)
    {
    case 'M': year += 1000; break;
    case 'D': year += 500; break;
    case 'C': year += 100; break;
    case 'L': year += 50; break;
    case 'X': year += 10; break;
    case 'V': year += 5; break;
    case 'I': year += 1; break;
    }

    printf("Обычное значение года: %d\n", year);

    return 0;
}
