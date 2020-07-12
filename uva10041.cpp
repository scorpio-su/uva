#include <cstdio>
#include <algorithm>
#include <cmath>
#include <cstring>
using namespace std;

//vector<int> r;
int main ()
{
	int n,num;
	scanf("%d",&n);
	while (n--)
	{
		scanf("%d",&num);
		int m[num];
		//r.clear();
		memset(m,0,sizeof(m));
		for (int i=0;i<num;i++) scanf("%d",&m[i]);
		sort(m,m+num);
		int mid=m[num/2], sum=0;
		for (int i=0;i<num;i++) sum += abs(m[i]-mid);
		printf("%d\n",sum);
	}
	return 0;
}
