#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    long num;
    while (cin >> num){
        short tes=1;
        long num1=0;
        for (int i=2;i<=sqrt(num);i++){
            if (!(num%i)){tes=0;break;}//�쥻not
        }
        //cout << tes << endl;
        if (tes){
            long temp=num;
            while (num>0){
                num1*=10;
                num1+=num%10;
                num/=10;
            }
            num=temp;
            if (num1!=num){
                tes=2;
                for (int i=2;i<=sqrt(num1);i++){
                    if (!(num1%i)){tes=1;break;}
                }
            }
            //cout << endl;
        }
        //cout << tes << endl;
        if (tes==0) cout << num  << " is not prime.\n";//���O
        else if (tes==1) cout << num << " is prime.\n";//���@
        else if (tes==2) cout << num  << " is emirp.\n";//���
    }
}
