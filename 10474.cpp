#include <iostream>
#include <algorithm>
using namespace std;

int main ()
{
	int n,q,x,kase=1;
	while (cin >> n >> q)
	{
		if (n ==0&&q==0) break;
		int a[n];
		for (int i=0;i<n;i++) cin >> a[i];
		sort(a,a+n);
		printf("CASE# %d:\n",kase++);
		while (q--){
			cin >> x;
			int p=lower_bound(a,a+n,x)-a;
			if (a[p] == x) printf ("%d found at %d\n",x,p+1);
			else printf("%d not found\n",x);
		}
	}
}
