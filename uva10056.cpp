#include <iostream>
#include <cmath>
#include<stdio.h>
using namespace std;

int main()
{
    int t;cin >> t;
    while (t--){
        int n,n1;
        double p;
        cin >> n >> p >> n1;
        printf("%.4f\n",(p==0.0)?p: p*pow(1-p,n1-1) / (1-pow(1-p,n)));
    }

}
