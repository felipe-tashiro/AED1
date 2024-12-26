//1985 - MacPRONALTS

#include <stdio.h>

int main() {

    int a, p, total;
    scanf("%d", &a);
    float preco = 0;
    for (int i = 1; i <= a; i++){
        scanf("%d %d", &p, &total);

        if (p == 1001){
            preco += 1.50*total;
        }else if (p == 1002){
            preco += 2.50*total;
        }else if (p == 1003){
            preco += 3.50*total;
        }else if (p == 1004){
            preco += 4.50*total;
        }else if (p == 1005){
            preco += 5.50*total;
        }
    }

    printf("%2.2f\n", preco);

    return 0;
}
