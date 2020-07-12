#include <bits/stdc++.h>
using namespace std;

struct p{
    char c1;
    int num;
};

bool cmp(const p a, const p b){
    if (a.num==b.num) return a.c1<b.c1;
    else return a.num>b.num;
}

int main()
{
    p a[27];
    char c[10000];
    //初始化
    for (int i=0;i<27;i++){
        a[i].num=0;
        a[i].c1=i+'A';
    }
    int t; scanf("%d\n",&t);//cin 會少一次
    while (t--){
         cin.getline(c,10000);
        for (int i=0;i<strlen(c);i++){
            if (isalpha(c[i])){
                if (islower(c[i])) c[i]-=32;
                a[c[i]-'A'].num++;
            }
        }
        //cout << t << endl;
    }
    sort(a,a+26,cmp);
    for (int i=0;i<27,a[i].num>0;i++) cout << a[i].c1 << ' ' << a[i].num << "\n";

}
