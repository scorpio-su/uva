#include <iostream>

using namespace std;

int main ()
{
	int n;
	cin >> n;
	int outnum=0;
	while (n--){
		outnum++;
		string s,s1;
		cin >> s;
		s1 ="";
		for (int i=0;i<s.length();) {
			int num=0,index;
			if (isalpha(s[i])) index =i;
			for (;;){
				if (isdigit(s[++i])){
				num=num*10+(s[i]-'0');
				}
				else break;
			}
			for (int j=0;j<num;j++) s1 +=s[index];
		}
		cout << "Case "<< outnum << ": " << s1 << endl;
	}
}
