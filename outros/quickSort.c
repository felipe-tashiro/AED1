#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int const TAM = 20000;

int partition(int v[], int baixo, int alto) {
    int pivot = v[alto]; 
    int i = baixo - 1; 

    for (int j = baixo; j < alto; j++) {
        if (v[j] <= pivot) {
            i++;
            // Troca v[i] e v[j]
            int temp = v[i];
            v[i] = v[j];
            v[j] = temp;
        }
    }

    int temp = v[i + 1];
    v[i + 1] = v[alto];
    v[alto] = temp;

    return i + 1;
}

void quickSort(int v[], int baixo, int alto) {
    if (baixo < alto) {
        // Encontrar o índice de partição
        int pi = partition(v, baixo, alto);

        // Ordenar os elementos antes e depois da partição
        quickSort(v, baixo, pi - 1);
        quickSort(v, pi + 1, alto);
    }
}

int main() {
    clock_t t;
    int vetor[TAM];

    srand((unsigned)time(NULL));

    for (int a = 0; a < TAM; a++) {
        vetor[a] = rand() % TAM;
    }

    t = clock(); //armazena tempo
    quickSort(vetor, 0, TAM - 1);
    t = clock() - t; //tempo final - tempo

    printf("Tempo de execucao: %lf ms\n", ((double)t)/((CLOCKS_PER_SEC/1000)));

    return 0;
}