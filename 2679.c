//2679 - Sucessor Par

#include <stdio.h>

int main() {

    int x, y;

    scanf("%d", &x);

    if (x%2 == 0) y = x+2;
    else y = x+1;

    printf("%d\n", y);

    return 0;
}
