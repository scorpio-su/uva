#include <iostream>
#include <stack>
using namespace std;

const int maxn=1000+10;

int main()
{
	int n,target[maxn];
	while (scanf("%d",&n) == 1){
		stack<int> s;
		if (n == 0) break;
		for (;;){
			scanf("%d",&target[1]);
			if (target[1] == 0) {
				cout << endl;
				break;	
			}
			for (int i=2;i<=n;i++) scanf("%d",&target[i]); 
			bool ok=1;
			int a=1,b=1;
			while (b<=n){
				if (a==target[b]){
					a++;
					b++;
				}
				else if (!s.empty() && s.top() == target[b]){
					s.pop();
					b++;
				}
				else if (a<=n) s.push(a++);
				else {
					ok=0;
					break;
				}
			}
		printf("%s\n", ok? "Yes" : "No");
		}
	}
	return 0;
}
