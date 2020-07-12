#include <iostream>
using namespace std;

int main()
{
    long s,d;
    while (cin >> s >> d){
        long cout1=s;
        while (s<d){
            cout1++;
            s+=cout1;
        }
        cout << cout1 << "\n";
    }

}
