#include <bits/stdc++.h>
using namespace std;

#define USE_CPPIO() ios_base::sync_with_stdio(0); cin.tie(0)
map <string,int> m;

int main()
{
    int n;cin >> n;
    string s;
    getchar();getchar();
    bool te=false;
    while (n--){
        m.clear();
        int sum1=0;
        while (getline(cin, s) && s != ""){
            if (!m.count(s)) m[s]=1;
            else m[s]++;
            sum1++;
        }
       // for (auto &i :m)
            //printf("%s %.4lf\n",i->first.c_str(),i->second*100.0/sum1);
        if (te) puts("");
        for(map<string, int>::iterator i = m.begin(); i != m.end(); i++)
			cout << i->first << " " << fixed << setprecision(4) << i->second*100.0/sum1 << endl;
        te=true;
    }
}
