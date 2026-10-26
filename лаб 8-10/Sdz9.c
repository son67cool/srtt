#include <stdio.h>

int main(void)
{
    char simv;
    int size;
    int again;

    do
    {
        printf("Введите символ для фигуры: ");
        scanf(" %c", &simv);

        printf("Введите размер стороны: ");
        scanf("%d", &size);

        for (int i = 1; i <= size; i++)
        {
            for (int j = 1; j <= size; j++)
            {
                if (i == 1 || i == size || j == 1 || j == size)
                {
                    printf("%c ", simv);
                }
                else
                {
                    printf("  ");
                }
            }

            printf("\n");
        }

        printf("Продолжить? (1 - да, 0 - нет): ");
        scanf("%d", &again);

    } while (again != 0);

    return 0;
}