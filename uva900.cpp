#include <iostream>
using namespace std;

int main ()
{
	int n;
	while (cin >> n){
		if (n == 0) break;
		long int a[n+1];
		a[0]=1;
		a[1]=1;
		for (int i=2;i<=n;++i) a[i] = a[i-1] +a[i-2];
		cout << a[n] << endl; 
	}
	return 0;
}
