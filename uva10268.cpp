#include <iostream>
#include <sstream>
#include <cmath>
using namespace std;

long long pow1(long long x,long long y){
    if (y == 0) return 1;
    if (y&1) return x*pow1(x*x,y/2);
    else return pow1(x*x,y/2);
}

int main()
{
    long x;
    long long a[1000000];
    while (cin >> x){
        string s;
        getline(cin,s);
        getline(cin,s);
        stringstream ss;
        ss<<s;
        long long n=0;
        while (ss >> a[n]) n++;
        long long ans=0; n-=1;
        for (int i=0;i<n;i++){
            ans+= (n-i)*a[i]*pow1(x,n-i-1); //<cmath>的pow會有問題
        }
        cout << ans << "\n";
    }
}
