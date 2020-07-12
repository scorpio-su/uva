#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,b;
    while (cin >> n >> b && !(n == 0 && b == 0)){
        int r=1;
        unordered_map<int, int> pos;
        printf(".");
        while (!(n == 0 || pos.count(n))){ //pos have number
            if (!(r%50)) puts("");
            pos[n]=r;
            r++;
            n*=10;
            printf("%d",n/b);
            n%=b;
        }
        puts("");
        if (n== 0) printf("This expansion terminates.\n");
        else printf("The last %d digits repeat forever.\n", r - pos[n]);
    }
}