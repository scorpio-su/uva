#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    string s;
    int num=1;
    string ans[7]={"UNKNOWN","ENGLISH","SPANISH","GERMAN","FRENCH","ITALIAN","RUSSIAN"};
    while (cin >> s)
    {
        int n=0;
        if (s == "#") break;
        if (s == "HELLO") n=1;
        else if (s == "HOLA") n=2;
        else if (s == "HALLO") n =3;
        else if (s == "BONJOUR") n=4;
        else if (s == "CIAO") n=5;
        else if (s == "ZDRAVSTVUJTE") n=6;
        else n=0;
        cout << "Case " << num++ << ": " << ans[n] << endl;
    }
    return 0;
}
