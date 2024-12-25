//2455 - Gangorra

#include <stdio.h>

int main() {

    int p1, c1, p2, c2;

    scanf("%d %d %d %d", &p1, &c1, &p2, &c2);
    int dif = p2*c2 - p1*c1;
    if (dif < 0){
        printf("-1\n");
    }else if (dif > 0){
        printf("1\n");
    }else printf("0\n");

    return 0;
}
