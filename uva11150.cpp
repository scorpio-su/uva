#include <iostream>
using namespace std;

int main()
{
	int n;
	while (cin >> n)
	{
		int em=0,sum=n;
		do
		{
			em+=(n%3);
			n=n/3;
			if (em>=3)
			{
				n+=(em/3);
				em-=3;
			}
			sum+=n;		
		}while (n!=0);
		if (em == 2) sum+=1;
		cout << sum << endl;
	}
	return 0;
}
