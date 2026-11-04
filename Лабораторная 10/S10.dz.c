#include <stdio.h>
#include <locale.h>
#include <math.h>

float area_square(float r);
void definition_square();
void draw_square(int a);

int main() {
    setlocale(LC_ALL, "Russian");

    float r;
    int choice;

    printf("Введите радиус r:\n");
    scanf_s("%f", &r);

    printf("\nВыберите действие:\n");
    printf("1. Рассчитать площадь\n");
    printf("2. Вывести определение фигуры\n");
    printf("3. Нарисовать фигуру\n");

    scanf_s("%d", &choice);

    switch (choice) {
    case 1:
        printf("Площадь квадрата: %f\n", area_square(r));
        break;

    case 2:
        definition_square();
        break;

    case 3:
        draw_square((int)(2 * r));
        break;

    default:
        printf("Неверный выбор\n");
    }

    return 0;
}

float area_square(float r) {
    return 4 * r * r;
}

void definition_square() {
    printf("Квадрат — это правильный четырёхугольник, у которого все стороны равны и все углы прямые\n");
}

void draw_square(int a) {
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < a; j++) {
            printf("*");
        }
        printf("\n");
    }
}
