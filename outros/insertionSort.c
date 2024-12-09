#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int const TAM = 50000;

void insertionSort(int v[TAM]) {
    int i, j, x;
    for (j = 1; j < TAM; j++) {
        x = v[i];
        for (i = j-1; i >= 0 && v[i] > x; i--)
            v[i+1] = v[i];
        v[i+1] = x;
    }
}

int main() {
    clock_t t;
    int vetor[TAM];

    srand((unsigned)time(NULL));

    for (int a = 0; a < TAM; a++)
        vetor[a] = rand() % TAM;

    t = clock();
    insertionSort(vetor);
    t = clock() - t;

    printf("Tempo: %lf ms\n", ((double)t) / (CLOCKS_PER_SEC / 1000));

    return 0;
}
