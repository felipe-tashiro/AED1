//1087 - Dama

#include<stdio.h>
#include<math.h>

int main (){
	int x1,y1,x2,y2;
	int res =2;
	int x,y;

	while((scanf("%d %d %d %d", &x1, &y1, &x2, &y2))&&(x1 != 0 || y1 !=0 || x2 != 0 || y2 != 0)){
		x = fabs(x1 - x2);
		y = fabs (y1 - y2);

		if (x1 == x2 && y1 == y2){
			res = 0;
			printf("%d\n", res);
		}else if (x1 == x2 && y1 != y2){
			res = 1;
			printf("%d\n", res);
		}else if (x1 != x2 && y1 == y2){
			res = 1;
			printf("%d\n", res);
		}else if (x == y){
			res = 1;
			printf("%d\n", res);
		}else {
			res = 2;
			printf("%d\n", res);
		}
	}
	return 0;
}
