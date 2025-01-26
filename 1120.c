//1120 - Revisão de Contrato

#include <string.h>
#include <stdio.h>

int main(){
    int n, p;
    char D, N[101], res[101];

    while(scanf("%c %s\n", &D, &N) != EOF){
        if(D == '0' && !strcmp(N, "0"))    break;

        p = 0;
        n = strlen(N);
        memset(res, '\0', sizeof(res));

        for(int i = 0; i < n; ++i){
            if(N[i] != D)   res[p++] = N[i];
        }

        p = 0;
        n = strlen(res);
        while(p < n){
            if(res[p] != '0')  break;
            ++p;
        }

        if(p == n){
            printf("0\n");
        }else{
            strcpy(res, res + p);
            printf("%s\n", res);
        }
    }

    return 0;
}
