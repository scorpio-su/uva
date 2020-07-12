#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
using namespace std;

const int maxd=1000;
vector<int> r;

int main ()
{
	int n,num,s;
	cin >> n;
	while (n--)
	{
		cin >> num;
		r.clear();
		for (int i=0;i<num;i++) {
			cin >> s;
			r.push_back(s);
		}
		sort(r.begin(),r.end());
		int mid=r[num/2], sum=0;
		for (int i=0;i<num;i++) sum += abs(r[i]-mid);
		cout << sum << endl;
	}
	return 0;
}
