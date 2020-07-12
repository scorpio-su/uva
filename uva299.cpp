#include <iostream>
using namespace std;

int main()
{
    int t; cin >> t;
    while (t--){
        int l;cin >> l;
        long long a[l],num=0;
        for (int i=0;i<l;i++) cin >> a[i];
        for (int i=0;i<l-1;i++){
            for (int j=i+1;j<l;j++){
                if (a[i]>a[j]){
                    long long temp=a[i];
                    a[i]=a[j];
                    a[j]=temp;
                    num++;
                }
            }
        }
        cout <<"Optimal train swapping takes "<< num <<" swaps.\n";
    }

}
