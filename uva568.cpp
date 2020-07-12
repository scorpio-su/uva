#include <iostream>
#define _for(i,a,b) for(int i=(a);i<=(b);i++)
using namespace std;


int main ()
{
	int n1=1,n;
	while (cin >> n)
	{
		n1=1;
		if (n == 0){
			printf("%4d -> 1\n",0);
		}else{
			_for(i,1,n){
				n1*=i;
				while(!(n1%10)) n1/=10;
				n1=n1%100000;
			}
			printf("%5d -> %d\n",n,n1%10);
		}
	}
	return 0;
}
