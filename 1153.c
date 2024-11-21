//1153 - Fatorial Simples

#include <stdio.h>

int fatorial(n){
    if (n == 1){
        return 1;
    }else{
        return n*fatorial(n-1);
    }
}

int main() {
    int n, fato;
    scanf("%d", &n);
    fato = fatorial(n);
    printf("%d\n", fato);

    return 0;
}
