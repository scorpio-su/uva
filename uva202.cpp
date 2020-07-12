#include <bits/stdc++.h>
using namespace std;

map<int,int> pos;

void solve(int n,const int b, string& ans, int& r)
{
    assert(n%b && n<b);
    ans=".";
    pos.clear();
    while(1)
    {
        n*=10;
        int p=pos[n];
        if (!p) pos[n]=ans.size();
        else{
            r=ans.size()-p;
            if (r>50) {ans.erase(p+50);ans+="...";}
            ans.insert(p,"(");
            ans+=")";
            break;
        }
        if (n<b) {ans+="0";continue;} //如果沒法除

        int div=n/b;
        ans+=(char)(div + '0');
        n%=b;
        if (n == 0) {ans+="(0)";r=1;break;}
    }
}

int main()
{
    int a,b;
    while (cin >> a >> b)
    {
        string ans=".(0)";
        int r=1;
        if (a%b) solve(a%b,b,ans,r);
        printf("%d/%d = %d%s\n",a,b,a/b,ans.c_str());
        printf("   %d = number of digits in repeating cycle\n\n",r);
    }
}
