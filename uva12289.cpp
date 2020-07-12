#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s,s1="one";
        cin >> s;
        int num=0;
        if (s.size() == 5) printf("3\n");
        else{
            for(int i=0;i<3;i++) if (s[i]!=s1[i]) num++;
            if (num>1) printf("2\n");
            else printf("1\n");
        }
    }
    return 0;
}
