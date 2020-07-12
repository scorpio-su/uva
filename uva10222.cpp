#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    string a="`1234567890-=qwertyuiop[]asdfghjkl;'zxcvbnm,./",s;
    //`1234567890-=qwertyuiop[]asdfghjkl;'zxcvbnm,./
    while (getline(cin,s)){
        for(int i=0;i<s.size();i++){
            if(isupper(s[i])) s[i]+=32;
            if (s[i]==' ') {cout << ' '; continue;}
            else if (s[i]=='\\') {cout << '[';continue;}
            else if (s[i]=='a') {cout << ']';continue;}
            else if (s[i]=='s') {cout << '\\';continue;}
            for(int j=0;j<a.length();j++){
                if (s[i] == a[j]){
                    cout << a[j-2];
                    break;
                }
            }
        }
        cout << "\n";
    }
}
