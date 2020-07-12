#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t,num2=1;
    cin >> t;
    while (t--)
    {
        int n,num,num1;
        int upp=0,lo=0;
        cin >> n >> num;
        for(int i=0;i<n-1;i++){
            cin >> num1;
            if (num>num1) lo++;
            if (num<num1) upp++;
            num=num1;
        }
        cout << "Case " << num2++ << ": " << upp << " " << lo << endl;
    }
    return 0;
}
