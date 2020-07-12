#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int t; cin >> t;
    while (t--){
        int a,b; cin >> a >> b;
        if ((a<b) || (a+b)%2) puts("impossible");
        else printf("%d %d\n",(a+b)/2,(a-b)/2);
    }
}
