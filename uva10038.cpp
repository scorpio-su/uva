#include <iostream>
#include <cmath>
using namespace std;

int main ()
{
	int n;
	while (cin >> n)
	{
		int a[n];
		bool tes[n]={false};
		int tes2=true;
		cin >> a[0];
		for (int i=1;i<n;i++) {
			cin >> a[i];
			tes[abs(a[i]-a[i-1])] =true;
		}
		for (int i=1;i<n;i++) {
			if (tes[i] != true)  {
				tes2=false;
				break;	
			}
		}
		cout << (tes2 ? "Jolly" : "Not jolly") << endl;
	}
}
