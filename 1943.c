//1943 - Top N

#include <stdio.h>

int main() {

    int n, k;
    scanf("%d", &n);

    if (n == 1){
        k = 1;
    }else if (n > 1 && n <= 3){
        k = 3;
    }else if (n > 3 && n <= 5){
        k = 5;
    }else if (n > 5 && n <= 10){
        k = 10;
    }else if (n > 10 && n <= 25){
        k = 25;
    }else if (n > 25 && n <= 50){
        k = 50;
    }else k = 100;

    printf("Top %\n", k);

    return 0;
}
