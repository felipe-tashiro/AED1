//2381 - Lista de Chamada

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int comp(const void* x, const void* y){
	return strcmp((char*)x,(char*)y);
}

int main(void) {
	int K, N;
	char chamada[200][50];

	scanf("%d %d\n", &N, &K);
	for(int i = 0; i < N; ++i){
		scanf("%s", &chamada[i]);
	}

	qsort(chamada, N, sizeof(char) * 50, comp);

	printf("%s\n", chamada[K - 1]);

	return 0;
}
