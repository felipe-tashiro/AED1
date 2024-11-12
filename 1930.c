//1930 - Tomadas

#include <stdio.h>

int main() {

    int T1, T2, T3, T4;

    scanf("%d %d %d %d", &T1, &T2, &T3, &T4);

    int total = T1 + T2 + T3 + T4;

    int tomadas = total - 3;

    printf("%d\n", tomadas);

    return 0;
}
