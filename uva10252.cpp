#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    string s1,s2;
    int ch1[26],ch2[26],ch[26];
    while (getline(cin,s1)){
        getline(cin,s2);
        memset(ch,0,sizeof(ch));
        memset(ch1,0,sizeof(ch1));
        memset(ch2,0,sizeof(ch2));
        for (int i=0;i<s1.length();i++) ch1[s1[i]-'a']++;
        for (int i=0;i<s2.length();i++) ch2[s2[i]-'a']++;
        for (int i=0;i<26;i++){
            if (ch1[i]>ch2[i]) ch[i]=ch2[i];
            else ch[i]=ch1[i];
            if (ch[i]>0){
                for (int j=0;j<ch[i];j++) cout << char(i+'a');
            }
        }
        cout << "\n";
    }
}
