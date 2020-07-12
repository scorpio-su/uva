/*用兩個陣列，一個放ASCII，一個計算次數
兩個陣列索引值必須配合好
最後再用氣泡排列將陣列照題目要求排好
*/
#include <iostream>
#include<string>
using namespace std;

int main()
{
    int r=0;
    string s;
    const int n=96;
    while (getline(cin,s)){
        if(r) cout << "\n";
        int acs[n]={0},cou[n]={0};
        for(int i=0;i<n;i++) acs[i]=i+32;
        for(int i=0;i<s.size();i++) cou[s[i]-32]++;
        for (int i=0;i<n;i++){
            for(int j=0;j<n-i-1;j++){
                if(cou[j]>cou[j+1]){
                    int temp=acs[j];
                    acs[j]=acs[j+1];
                    acs[j+1]=temp;

                    temp=cou[j];
                    cou[j]=cou[j+1];
                    cou[j+1]=temp;
                }
                else if(cou[j] == cou[j+1]&&acs[j]<acs[j+1]){
                    int temp=acs[j];
                    acs[j]=acs[j+1];
                    acs[j+1]=temp;
                }
            }
        }

        for(int i=0;i<n;i++){
            if(cou[i]!=0) cout << acs[i] << ' ' << cou[i] << "\n";
        }

        r=1;
    }

}
