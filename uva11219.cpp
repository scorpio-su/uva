#include <stdio.h>

int main ()
{
	int num,num1=0,x;
	int nod,nom,noy;
	int brid,brim,briy;
	scanf("%d",&num);
	while (num--)
	{
		scanf("%d/%d/%d",&nod,&nom,&noy);
		scanf("%d/%d/%d",&brid,&brim,&briy);
		x= (noy-briy)-(nom<brim) - (nom == brim && brid>nod);
		printf("Case #%d: ",++num1);
		if (x<0) printf("Invalid birth date\n");
		else if (x>130) printf("Check birth date\n");
		else printf("%d\n",x);
	}
}
