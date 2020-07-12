#include <iostream>

using namespace std;

int main ()
{
	int i,j;
	while (cin >> i >> j)
	{
		printf("%d %d ",i,j);
		if (i>j){
			int temp;
			temp=j;
			j=i;
			i=temp;
		}
		int max1=0;
		for (int k=i;k<=j;k++){
			int len=1;
			for (int n=k;;len++)
			{
				if (n==1) break;
				else {
					if (n%2) n=3*n+1;
					else n/=2;
				}
			}
			max1=max(max1,len);
		}
		cout << max1 << endl;
	}
	return 0;
	
}
