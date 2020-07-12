#include <iostream>
#include <cstring>
using namespace std;



int main ()
{
	string a[] = {" atahs "," rajah "," hkal "," ituk "};
	string s;
	int num=1;
	while (cin >> s)
	{
		string st1;
		for (int i=s.size()-1,j=1;i>=0;i--,j++){
			if(j==3) st1+=a[0];
			else if (j==4) st1 += a[1];
			else if (j == 6) st1 += a[2];
			else if (j == 8){
				st1 += a[3];
				j = 1;
			}
			st1+=s[i];
		}
		cout << num++ << ".";
		for (int i=st1.length()-1;i>=0;i--)
		 cout << st1[i];
		cout << endl;
	}
	return 0;
	
}
