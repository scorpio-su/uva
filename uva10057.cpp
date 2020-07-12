#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    while (cin >> n){
        int a[n],min1=65536;
        for (int i=0;i<n;i++) cin >> a[i];
        sort(a,a+n);
        int mid=a[n/2],mid2=a[(n-1)/2],coun=0;
        for(int i=0;i<n;i++){
            if(mid2 == a[i]||mid == a[i]) coun++;
        }
        int n_mid=mid-mid2+1;
        cout << mid2 << ' ' << coun << ' ' << n_mid << "\n";
    }
}
