#include <iostream>

using namespace std;

int main ()
{
	string s1,s2;
	while (cin >> s1 >>s2)
	{
		int ounum=0;
		string s3,s4;
		bool tesn=false;
		if (s1[0] == '0' && s2[0] == '0') break;
		for (int i=10;i>s1.length();i--) s3+='0';
		for (int i=10;i>s2.length();i--) s4+='0';
		s3+=s1;
		s4+=s2;
		//cout << s3 << endl << s4 << endl;
		for (int i=10;i>=0;i--){
			int num = s3[i] - '0' + (tesn);
			num += s4[i]-'0';
			if (num >=10) {
				++ounum; 
				tesn = true;
			}
			else tesn =false;
		}
		//cout << s3 << endl;
		if (ounum == 0) cout << "No carry operation." << endl;
		else if (ounum == 1) cout << ounum << " carry operation." << endl;
		else cout << ounum << " carry operations." << endl;
	}
}
