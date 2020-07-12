#include <iostream>
#include <cmath>
#define _for(i,a,b) for(int i=(a);i<(b);i++)
using namespace std;

int main ()
{
    int n;
    while (cin >> n)
    {
        if (n == 0) break;
        int comp[n]={true,true,false};
        int num=0;
        _for(i,2,n){
            if (!comp[i])
                for(int j=i+i;j<n;j+=i)
                    comp[j]=true;
        }
        for(int i=0;i<=n/2;i++){
            if (!comp[i] && !comp[n-i]) num++;
        }
        cout << num << endl;
    }
    return 0;

}
