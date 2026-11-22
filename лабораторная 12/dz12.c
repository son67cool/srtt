#include <stdio.h>
#include <locale.h>

int* sort(int* begin, int* end) {
    int* p = begin;

    while (p < end) {
        if (*p > 0) {
            int* q = p + 1;

            while (q < end) {
                if (*q > 0 && *p > *q) {
                    int temp = *p;
                    *p = *q;
                    *q = temp;
                }
                q++;
            }
        }
        p++;
    }

    return begin;
}

int main() {
    setlocale(LC_ALL, "Russian");

    int a[8];
    int n = 8;

    printf("Введите 8 чисел:\n");
    for (int i = 0; i < n; i++) {
        scanf_s("%d", &a[i]);
    }

    printf("\nИсходный массив:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    sort(a, a + n);

    printf("\n\nМассив после упорядочивания положительных элементов:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}