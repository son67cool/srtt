#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main() {
    setlocale(LC_ALL, "Russian");
    printf("*******************************************************************************************\n");
    printf("*                                                                                                                                                     *\n");
    printf("*     Курсовой проект по дисциплине: Основы программирования и алгоритмизации  *\n");
    printf("*            Тема: Реализация динамического многомерного массива                                   *\n");
    printf("*               Выполнила: Поликарпова С.К., группа бОТИ-262                                                *\n");
    printf("*                                                                                                                                                     *\n");
    printf("*******************************************************************************************\n");

    int menu;

    do {
        printf("\nГЛАВНОЕ МЕНЮ\n");
        printf("1 - Создать и обработать матрицу\n");
        printf("2 - Завершить программу\n");
        printf("Выберите действие: ");

        scanf_s("%d", &menu);

        if (menu == 1) {

            int n, m;
            printf("Введите количество строк\n");
            scanf_s("%d", &n);
            printf("Введите количество столбцов\n");
            scanf_s("%d", &m);

            if (n > 0 && m > 0) {
                printf("Всё хорошо\n");
            }
            else {
                printf("Ошибка\n");
                return 1;
            }

            int** A;
            A = (int**)malloc(n * sizeof(int*));

            if (A == NULL) {
                printf("Ошибка! Нехватка памяти\n");
                return 1;
            }

            for (int i = 0; i < n; i++) {
                A[i] = (int*)malloc(m * sizeof(int));
                if (A[i] == NULL) {
                    printf("Ошибка! Нехватка памяти\n");

                    for (int j = 0; j < i; j++) {
                        free(A[j]);
                    }
                    free(A);
                    return 1;
                }
            }

            int choice;

            printf("Выберите способ заполнения матрицы:\n");
            printf("1 - Вручную\n");
            printf("2 - Случайными числами\n");

            if (scanf_s("%d", &choice) != 1) {
                printf("Ошибка ввода!\n");
                return 1;
            }

            if (choice == 1) {
                for (int i = 0; i < n; i++) {
                    for (int j = 0; j < m; j++) {
                        printf("Введите элемент [%d][%d]: ", i + 1, j + 1);
                        scanf_s("%d", &A[i][j]);
                    }
                }
            }
            else if (choice == 2) {
                for (int i = 0; i < n; i++) {
                    for (int j = 0; j < m; j++) {
                        A[i][j] = rand() % 21 - 10;
                    }
                }
            }
            else {
                printf("Ошибка\n");
                return 1;
            }


            printf("Исхрдная матрица\n");
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < m; j++) {
                    printf("%d ", A[i][j]);
                }
                printf("\n");
            }

            int maxelement = A[0][0], maxstr = 0, maxstol = 0;
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < m; j++) {
                    if (abs(A[i][j]) > abs(maxelement)) {
                        maxelement = A[i][j];
                        maxstr = i;
                        maxstol = j;
                    }
                }
            }
            printf("Максимальный по модулю элемент: %d\n", maxelement);
            printf("Строка: %d\n", maxstr + 1);
            printf("Столбец: %d\n", maxstol + 1);

            int k;
            printf("Введите номер строки и столбца k\n");
            scanf_s("%d", &k);
            if (k < 1 || k > n || k > m) {
                printf("Ошибка\n");
                return 1;
            }

            int temp;
            for (int j = 0; j < m; j++) {
                temp = A[maxstr][j];
                A[maxstr][j] = A[k - 1][j];
                A[k - 1][j] = temp;
            }
            for (int i = 0; i < n; i++) {
                temp = A[i][maxstol];
                A[i][maxstol] = A[i][k - 1];
                A[i][k - 1] = temp;
            }
            printf("Преобразованная матрица\n");
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < m; j++) {
                    printf("%d  ", A[i][j]);
                }
                printf("\n");
            }
            for (int i = 0; i < n; i++) {
                free(A[i]);
            }
            free(A);
        }
        else if (menu == 2) {
            printf("Программа завершена\n");
        }
        else {
            printf("Неверный пункт меню!\n");
        }

    } while (menu != 2);
    return 0;
}


