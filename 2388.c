//2388 - Tacógrafo

#include <stdio.h>

int main() {

    int n, v, t, dist;

    scanf("%d", &n);
    dist = 0;

    for (int i = 1; i <= n; i++){
        scanf("%d %d", &t, &v);

        dist = dist + t*v;
    }

    printf("%d", dist);

    return 0;
}
