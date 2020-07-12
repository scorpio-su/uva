#include <iostream>
using namespace std;

char c[]="`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";

int main()
{
	char cs;
	int i;
	while((cs=getchar())!=EOF){
		bool fooil=false;
		for(i=0;c[i]&&c[i]!=cs;i++);
		if(c[i]) putchar(c[i-1]);
		else putchar(cs);
	}
	return 0;
}
