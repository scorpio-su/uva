#include <iostream>
using namespace std;

long f(long x){
    long sum1=0;
    while(x!=0)
    {
        sum1+=x%10;
        x/=10;
    }
    return sum1;
}

int main()
{
    long num;
    while (cin >> num)
    {
        if (num ==0) break;
        while (f(num)>=10) num=f(num);
        cout << f(num) << "\n";
    }

}
