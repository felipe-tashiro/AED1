#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int const TAM = 50000;
void merge(int v[], int esq, int meio, int dir) {
    int tam1 = meio - esq + 1;
    int tam2 = dir - meio;

    int *esqTemp = (int *)malloc(tam1 * sizeof(int));
    int *dirTemp = (int *)malloc(tam2 * sizeof(int));

    for (int i = 0; i < tam1; i++)
        esqTemp[i] = v[esq + i];
    for (int i = 0; i < tam2; i++)
        dirTemp[i] = v[meio + 1 + i];

    int i = 0, j = 0, k = esq;

    while (i < tam1 && j < tam2) {
        if (esqTemp[i] <= dirTemp[j]) {
            v[k] = esqTemp[i];
            i++;
        } else {
            v[k] = dirTemp[j];
            j++;
        }
        k++;
    }

    while (i < tam1) {
        v[k] = esqTemp[i];
        i++;
        k++;
    }

    while (j < tam2) {
        v[k] = dirTemp[j];
        j++;
        k++;
    }

    free(esqTemp);
    free(dirTemp);
}

void mergeSort(int v[], int esq, int dir) {
    if (esq < dir) {
        int meio = esq + (dir - esq) / 2;

        mergeSort(v, esq, meio);
        mergeSort(v, meio + 1, dir);

        merge(v, esq, meio, dir);
    }
}

int main() {
    clock_t t;
    int vetor[TAM];


    srand((unsigned)time(NULL));


    for (int a = 0; a < TAM; a++) {
        vetor[a] = rand() % TAM;
    }

    t = clock();
    mergeSort(vetor, 0, TAM - 1);
    t = clock() - t;

    printf("Tempo de execucao: %lf ms\n", ((double)t) / (CLOCKS_PER_SEC / 1000));

    return 0;
}
