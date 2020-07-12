#include <iostream>
using namespace std;

int main()
{
    int n;
    while (cin >> n){
        int u=1,d=6,l=4,r=3,f=5,b=2;
        if (n==0) break;
        while (n--){
            string s; cin >> s;
            switch(s[0]){
            case 'n':
                u=f;
                f=d;
                d=b;
                b=7-f;
                break;
            case 'e':
                u=r;
                r=d;
                d=l;
                l=7-r;
                break;
            case 's':
                u=b;
                b=d;
                d=f;
                f=7-b;
                break;
            case 'w':
                u=l;
                l=d;
                d=r;
                r=7-l;
                break;
            }

        }
        cout << u << "\n";
    }
}
