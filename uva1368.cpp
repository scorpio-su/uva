#include <iostream>
#include <vector>
#include <assert.h>
#include <algorithm>
#define _for(a,b,c) for(int(a)=(b);(a)<(c);(a)++)
using namespace std;

struct chcnt{
	int num;
	char c;
	void inti(char ch){
		c=ch;
		num=0;
	}
	bool operator<(const chcnt& cc2) const{
		return num > cc2.num || (num == cc2.num && c< cc2.c);
	}
};

int main()
{
	int t;
	vector<string> seq;
	char dis[256] ={0};
	dis['A'] = 0; dis['C']=1; dis['G'] =2; dis['T'] =3;
	string line;
	cin >> t;
	while (t--)
	{
		seq.clear();
		int n,m;
		cin >> m >> n;
		_for(i,0,m){
			cin >> line;
			assert(line.size() == n);
			seq.push_back(line);
		}
		string anstr;
		int ans=0;
		vector<chcnt> css(4);
		_for(i,0,n){
			css[0].inti('A');
			css[1].inti('C');
			css[2].inti('G');
			css[3].inti('T');
			_for(j,0,m){
				css[dis[seq[j][i]]].num++;
			}
			sort(css.begin(), css.end());
			anstr += css.front().c;
			ans += (m-css.front().num);
		}
		cout << anstr << endl << ans << endl;
	 }
	 return 0; 
}
