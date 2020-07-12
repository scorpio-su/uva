#include <iostream>
using namespace std;

int main()
{
    int t;cin >> t;
    while (t--)
    {
        int num,tem,hex,bin;cin >> num;
        hex=bin=0; tem=num;
        while (num){
            bin+=num%2;
            num/=2;
        }
        int i;
        while (tem){
            i=tem%10;
            if (i==1||i==2||i==4||i==8)hex++;
            else if (i==3||i==5||i==6||i==9) hex+=2;
            else if (i==7)hex+=3;
            tem/=10;
        }
        cout << bin << ' ' << hex << "\n";

    }

}
