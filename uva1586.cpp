#include <iostream>
#define _for(a,b,c) for(int (a)=(b);(a)<(c);(a)++)
#include <cstring>
#include <assert.h>
using namespace std;

int main ()
{
	int t;
	char buf[256],s;
	double ans,w[256];
	w['C'] = 12.01,w['H'] = 1.008, w['O'] = 16.0, w['N'] = 14.01;
	cin >> t;
	while (t--)
	{
		cin >> buf;
		ans=0;
		int sz = strlen(buf),cnt =-1;
		s =0;
		_for (i,0,sz){
			char c =buf[i];
			if (isupper(c)){
				if (i){
					if (cnt == -1) cnt =1;
					ans += w[s] * cnt;
				}
				s =c;
				cnt = -1;
			}else{
				assert(isdigit(c));
				if (cnt == -1) cnt =0;
				cnt = cnt *10 + c-'0';
			}
		}
		if (cnt == -1) cnt =1;
		ans += w[s] * cnt;
		printf("%.3lf\n",ans);
	}
	return 0;
}
