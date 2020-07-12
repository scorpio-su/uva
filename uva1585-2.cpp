#include <iostream>
#include <cstring>
#define _for(c,a,b) for(int (c)=(a);(c)<(b);(c)++)
using namespace std;

int main ()
{
	char s[128];
	int n;
	scanf("%d\n",&n);
	while (n--){
		gets(s);
		int num=0,sum=0,sz = strlen(s);
		_for (i,0,sz){
			if (s[i] == 'O') sum += (++num);
			else num =0;
		}
		cout << sum << endl;
	}
	return 0;
}
