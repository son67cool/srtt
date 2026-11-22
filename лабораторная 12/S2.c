#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>


int rand10(int mmax) {
    return 1 + rand() % mmax;
}


void rand10_array(int arr[], int n, int mmax) {
    for (int i = 0; i < n; i++) {
        arr[i] = rand10(mmax);
    }
}

int main() {
    setlocale(LC_ALL, "Russian");
    srand((unsigned int)time(NULL));

    int N = 100;
    int K = 10;
    int R = 40;

    int array[100];
    int counter[10] = { 0 };

   
    rand10_array(array, N, K);


    for (int i = 0; i < N; i++) {
        counter[array[i] - 1]++;
    }

    
    int nmax = 0;

    for (int i = 1; i < K; i++) {
        if (counter[i] > counter[nmax]) {
            nmax = i;
        }
    }

 
    printf("Гистограмма частот:\n");

    for (int i = 0; i < K; i++) {
        int x = (double)counter[i] / counter[nmax] * R;

        printf("%2d | ", i + 1);

        for (int j = 0; j < x; j++) {
            printf("*");
        }

        printf(" (%d)\n", counter[i]);
    }

    return 0;
}