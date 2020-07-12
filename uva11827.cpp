#include <iostream>
#include <sstream>
#include <algorithm>
#include <cstring>
#define _for(a,b,c) for(int (a)=(b);(a)<(c);(a)++)
using namespace std;
int gcd(int  a,int b){
	if (!(a%b))
		return b;
	else
		return gcd (b , a%b) ;
}

int main()
{
	int t;
	string s;
	cin >> t;
	getline(cin,s);
	while (t--)
	{
		int a[101], m=0,max1=0;
		getline(cin,s);
		stringstream ss;
		ss<<s;
		while(ss>>a[m]) m++;
		sort(a,a+m);
		_for(i,0,m-1){
			_for(j,i+1,m)
				max1=max(max1,gcd(a[j],a[i]));
		}
		cout << max1 << endl;
	}
}
