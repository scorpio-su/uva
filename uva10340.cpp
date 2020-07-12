#include <bits/stdc++.h>
using namespace std;

const int len=100024;

int main()
{
    char s[len], t[len];
    while(scanf("%s%s",&s,&t) == 2)
    {
        int slen=strlen(s), tlen=strlen(t);
        bool tes=true;
        for(int i=0,j=0;i<slen;j++,i++){
            while (s[i]!=t[j] && j<tlen) j++;
            if (j == tlen){tes=false;break;}
        }
        printf("%s\n", tes?"Yes":"No");
    }
    return 0;
}
