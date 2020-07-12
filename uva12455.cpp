#include <iostream>
#include <algorithm>

using namespace std;

int main ()
{
	int n;
	cin >> n;
	while (n--)
	{
		bool tes=true;
		int goa,num,n1=0,num1;
		cin >> goa >> num;
		num1=num;
		int a[num+1];
		a[num] =0;
		for (int i=0;i<num;i++) cin >> a[i];
		sort(a,a+num+1);
		while (++n1!=num||goa == 0) {
			goa-=a[num1];
			if (goa<0){
				goa += a[num1];
				cout <<"1 "<< goa << endl; 
				n1--;
			}
			num1--;
			if (num1 < 0) {
				tes = false;
				break;
			}
			cout << goa << endl;
		}
		printf(tes ? "Yes\n" : "No\n");
		
	}
}
