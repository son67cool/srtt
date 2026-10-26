#include <stdio.h>

int main(void)
{
    int n;
    char answer;

    do
    {
        printf("введите число: ");
        scanf_s("%d", &n);

        int f = 0;

        while (n >= 10)
        {
            int last = n % 10;
            int prev = (n / 10) % 10;

            if (last == prev)
            {
                printf("Соседние одинаковые цифры: %d %d\n", prev, last);
                f = 1;
            }

            n = n / 10;
        }

        if (f == 0)
        {
            printf("Соседних одинаковых цифр нет\n");
        }

        printf("Продолжить? (да/нет): ");
        scanf_s(" %c", &answer);

    } while (answer != 'n' && answer != 'N');

    return 0;
}