#include <iostream>
using namespace std;

int main ()
{
	int a,b,c;
	while (cin >> a >> b)
	{
		for (;;)
		{
			c=a%b;
			if ( c == 0){
				cout << b << endl;
				break;
			}else{
				a=b;
				b=c;
			}
		}
		
	}
	return 0;
}
