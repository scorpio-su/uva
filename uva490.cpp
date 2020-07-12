#include <iostream>
using namespace std;

int main()
{
    string sens[105];
    short pos=0;
    int len=0;
    while (getline(cin,sens[pos])){
        if (len<sens[pos].size()) len=sens[pos].size();
        pos++;
    }
    for (int i=0;i<len;i++){
        for (int j=pos-1;j>-1;j--){
            if (sens[j].size() <= i) cout <<' ';
            else cout << sens[j][i];
        }
        cout << "\n";
    }
}
