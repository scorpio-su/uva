#include <iostream>
#include <algorithm>
#include <stdio.h>
using namespace std;

int change(string s){
    int num=0;
    for (int i=s.size()-1,num1=1;i>=0;i--,num1*=2){
        num+=num1*(s[i]-'0');
    }
    return num;
}

int main()
{
    int t,num=1;scanf("%d",&t);
    while (t--){
        string s1,s2;
        cin >> s1 >> s2;
        int a=change(s1),b=change(s2);
        printf("Pair #%d: ",num++);
        //cout << a <<' '<<b<< ' ' ;
        if (__gcd(a,b)!=1) cout << "All you need is love!\n";
        else cout << "Love is not all you need!\n";
    }

}
