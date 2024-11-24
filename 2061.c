//2061 - As Abas de Péricles

#include <stdio.h>
#include <string.h>

int main() {

    int n, m;
    char acao[10];

    scanf("%d %d\n", &n, &m);
    for (int i = 0; i < m; ++i)
    {
        scanf("%s\n", &acao);

        if (strcmp(acao, "fechou") == 0)
        {
            n = n+1;
        }
        else
        {
            n = n-1;
        }
    }

    printf("%d\n", n);
    return 0;
}
