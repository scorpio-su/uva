#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int num;
    while (cin >> num)
    {
        if(num==0) break;
        int ans=0;
        string s,s1;
        while (num>0){
            if (num%2) {
                s+='1';
                ans++;
            }
            else s+='0';
            num/=2;
        }
        //cout << s;
        for (int i=s.size()-1;i>=0;i--) s1+=s[i];
        cout << "The parity of "<< s1 << " is " << ans << " (mod 2).\n";
    }
}
