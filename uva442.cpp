#include <iostream>
#include <string>
#include <stack>
using namespace std;

struct matrix{
	int a,b;
	matrix(int a=0,int b=0) :a(a) ,b(b) {}
}m[26];

stack<matrix> s;

int main ()
{
	int n;
	cin >> n;
	for (int i=0;i<n;i++){
		string name;
		cin >> name;
		int k =name[0] -'A';
		cin >> m[k] .a >> m[k].b ;
	}
	string exp;
	while (cin >> exp)
	{
		int len=exp.length();
		bool error =false;
		int ans=0;
		for (int i=0;i<len;i++)
		{
			if (isalpha(exp[i])) s.push(m[exp[i]-'A']);
			else if (exp[i] == ')'){
				matrix m2=s.top() ; s.pop();
				matrix m1=s.top() ; s.pop();
				if (m1.b != m2.a) {
					error=true;
					break;
				}
				ans += m1.a* m1.b*m2.b;
				s.push(matrix (m1.a,m2.b));
			}
		}
		if (error) cout << "error" << endl;
		else cout << ans << endl;
	}
	return 0;
}
