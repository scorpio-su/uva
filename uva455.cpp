#include <iostream>
#include <cstring>
#define _for(c,a,b) for(int (c)=(a);(c)<(b);(c)++)
#define _rep(c,a,b) for(int (c)=(a);(c)<=(b);(c)++)
using namespace std;

int main(){
	int t;
	char s[256];
	cin >> t;
	bool fr =true;
	while (t--) 
	{
		if (fr) fr = false;
		else puts("");
		cin >> s;
		int sz = strlen(s);
		_rep (p,1,sz){
			if (sz%p) continue;
			bool ans = true;
			_for (i,0,p){
				for (int j=i+p;j<sz;j+=p)
					if (s[j] != s[i]){
						ans = false;
						break;
					}
				if (!ans) break;
			}
			if (ans) { cout << p << endl; break; }
		}
	}
	return 0;
}
