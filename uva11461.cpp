#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    long a, b;
    while (cin >> a >> b)
    {
        if (a == 0 && b ==0) break;
        if (a>b) swap(a,b);
        int sum=0;
        for (int i=sqrt(a);i<=sqrt(b);i++){
            if (i*i>=a && i*i<=b) sum++;
        }
        printf("%d\n",sum);
    }
    return 0;
}
