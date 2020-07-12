#include <bits/stdc++.h>
using namespace std;

struct p{
    int num;
    int acs;
};

bool cmp(const p a,const p b){
    if (a.num == b.num) return a.acs>b.acs;
    else return a.num<b.num;
}

int main()
{
    const int n=256;
    int b1[256];
    p ans[256/2];
    string s;
    while (cin >> s){
        int num=0;
        for (int i=0;i<256;i++){ans[i].acs=ans[i].num=0;}
        for (int i=0;i<s.size();i++)  b1[s[i]]++;
        for (int i=0;i<256;i++){
            if (!b1[i])continue;
            else {
                ans[num].acs=i;
                ans[num].num=b1[i];
                num++;
            }
        }
        //cout << num;
        sort(ans,ans+num,cmp);
        for (int i=0;i<num;i++) cout << ans[i].acs << ' ' << ans[i].num << "\n";
        cout << "\n";
    }
}
