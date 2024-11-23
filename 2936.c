//2936 - Quanta Mandioca?

#include <stdio.h>

int main() {

    int c, btt, bto, m, i, total;

    scanf("%d", &c);
    scanf("%d", &btt);
    scanf("%d", &bto);
    scanf("%d", &m);
    scanf("%d", &i);

    total = c*300 + btt*1500 + bto*600 + m*1000 + i*150 + 225;

    printf("%d\n", total);

    return 0;
}
