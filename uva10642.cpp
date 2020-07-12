#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int t; cin >> t;
    for (int i=1;i<=t;i++)
    {
        int x1,x2,y1,y2; cin >> y1 >> x1 >> y2 >> x2;
        long long m=(x1+y1)*(1+x1+y1)/2+y1;
        long long n=(x2+y2)*(1+x2+y2)/2+y2;
        printf("Case %d: %lld\n",i,n-m);
    }

}
