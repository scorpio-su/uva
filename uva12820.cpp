#include <bits/stdc++.h>
using namespace std;

int main()
{
    int pa[26];
    int t,k=1;string s;
    while (cin >> t){
        int num=0;
        while (t--){
            memset(pa,0,sizeof(pa));
            cin >> s;
            int g=0;
            bool tes=false;
            for (int i=0;i<s.size();i++) pa[s[i]-'a']++;
            //for (int i=0;i<30;i++) cout << pa[i];
            //cout << endl;
            for (int i=0;i<26;i++){
                if (pa[i]) {
                    g++;
                    for (int j=i+1;j<26;j++){
                        if (pa[i]==pa[j]) {tes=true; break;}
                    }
                }

            }
            if (!tes&&s.size()!=1&&g!=1) num++;
        }
        printf("Case %d: %d\n",k++,num);
    }
}
