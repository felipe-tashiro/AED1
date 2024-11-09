//2006 - Identificando o Chá

#include <stdio.h>
int main()
{
    int cha, n , i, total=0;
    scanf("%d", &cha);
    for(i=0; i<5; i++)
    {
        scanf("%d", &n);
        if(n==cha) total++;
    }
    printf("%d\n", total);
    return 0;
}
