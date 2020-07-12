#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin >> t;
    while (t--)
    {
        int n;cin >> n;
        bool a[3700] = {0};
        memset(a,0,sizeof(a));
        //cout << n <<"\n";
        int num,num1=0,n1;cin >> num;
        while(num--){
            cin >> n1;
            for (int i=n1;i<=n;i+=n1){
                if (i%7==6||!(i%7)||a[i]) continue;
                a[i]=1;
                num1++;
                //cout << i <<"\n";
            }
        }
        cout << num1 << "\n";
    }
}
