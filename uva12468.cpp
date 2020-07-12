#include <stdio.h>
#include <math.h>

int main ()
{
	int a,b;
	while (scanf("%d%d",&a,&b) == 2){
		if (a == -1&&b == -1) break;
		if (a>b){
			int up1=a-b,down1=b+(100-a);
			printf("%d\n", up1 < down1 ? up1 : down1);
		}
		else if (a == b) printf("0\n");
		else{
			int up1=b-a,down1=a+(100-b);
			printf("%d\n", up1 < down1 ? up1 : down1);
		}
	}
	return 0;
}
