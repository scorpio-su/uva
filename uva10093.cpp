#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    string a="0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
    string s;
    int num1[62]; for(int i=0;i<62;i++) num1[i]=i;
    while (getline(cin,s)){
        int sum=0,max1=0;
        for(int i=0;i<s.size();i++){
            for(int j=0;j<62;j++){
                if(s[i]==a[j]){
                    sum+=num1[j];
                    if (max1<num1[j]) max1=num1[j];
                    break;
                }
            }
        }
        int i;
        for (i=max1;i<62;i++){
            if(sum==0){//�u��0�N��G�i��
                cout<<"2"<<endl;
                break;
            }
            if (!(sum%i)){
                cout << i+1 << "\n";
                break;
            }
        }
        if (i== 62) cout << "such number is impossible!" << "\n";
    }

}
