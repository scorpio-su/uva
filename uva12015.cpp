#include <bits/stdc++.h>
using namespace std;

struct site
{
  string name;
  int v;
};

site web[10];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t,num=1;
    cin >> t;
    while (t--)
    {
        int ma1=-1;
        for (int i=0;i<10;i++){
            cin >> web[i].name >> web[i].v;
            ma1=max(ma1,web[i].v);
        }
        //printf("Case #%d:\n",num++);
        cout << "Case #" << num++ << ":\n";
        for (int i=0;i<10;i++){
            if (web[i].v == ma1) cout << web[i].name << endl;
        }
    }
    return 0;
}
