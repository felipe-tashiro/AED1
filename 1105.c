//1105 - Sub-Prime

#include <stdio.h>

int main(){
    int sal[21];
    int B, N, dev, cred, val, pos;

    while(scanf("%d %d", &B, &N)){
        if(!B && !N)    break;

        for(int i = 1; i <= B; ++i){
            scanf("%d", &sal[i]);
        }

        for(int i = 0; i < N; ++i){
            scanf("%d %d %d", &dev, &cred, &val);

            sal[dev] -= val;
            sal[cred] += val;
        }

        pos = 1;
        for(int i = 1; i <= B; ++i){
            if(sal[i] < 0){
                pos = 0;
                break;
            }
        }

        printf("%c\n", pos ? 'S' : 'N');
    }
    
    return 0;
}
