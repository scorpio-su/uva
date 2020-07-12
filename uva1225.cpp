#include <bits/stdc++.h>
#define _for(a,b,c) for(int (a)=(b);(a)<(c);(a)++)
#define _eap(a,b,c) for(int (a)=(b);(a)<=(c);(a)++)
using namespace std;

int main ()
{
	int t,num;
	cin >>t;
	while (t--){
		int n[10]={0,0,0,0,0,0,0,0,0,0};
		stringstream ss;
		cin >> num;
		_eap(i,1,num) ss<<i;
		string s;
		s=ss.str();
		_for(i,0,s.size()) n[(s[i]-'0')]++;
		//cout << s << endl;
		_for(i,0,10) cout << n[i] << " ";
		cout << endl;
	}
	return 0;
}
