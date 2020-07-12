#include <iostream>
#include <string>
using namespace std;

int main ()
{
	string s;
	while (cin >> s)
	{
		int num=0;
		int sum1=0;
		for (int i=0;i< s.length();i++){
			if (s[i] == 'o') num ++;
		else num=0;
		sum1 +=num;
		}
		cout << sum1 << endl;
	}
}
