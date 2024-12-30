//2702 - Escolha Difícil

#include <stdio.h>

int main() {

    int Ca, Ba, Pa, Cr, Br, Pr, totalC, totalP, totalB;

    scanf("%d %d %d", &Ca, &Ba, &Pa);
    scanf("%d %d %d", &Cr, &Br, &Pr);

    totalC = Ca - Cr;

	if (totalC > 0)
		totalC = 0;

	totalB = Ba - Br;


	if (totalB > 0)
		totalB = 0;

	totalP = Pa - Pr;


	if (totalP > 0)
		totalP = 0;

	printf("%hd\n", -(totalC + totalB + totalP));

}
