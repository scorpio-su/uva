#include <iostream>
#include <cstring>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

int main()
{
    char c[1001];
    while (gets(c) != 0){
        int a[256]={0};
        int n=strlen(c);
        for (int i=0;i<n;i++){
            a[c[i]]++;
        }
        //cout << n;
        //cout << "\n";
        for (int i=1;i<n;i++){
            for(int j=256;j>0;j--){
                if(a[j]==i) cout << j << ' ' << i << "\n";
            }
        }
        cout << "\n";
    }
}
