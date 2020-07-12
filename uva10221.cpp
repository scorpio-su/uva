#include<iostream>
#include <cstring>
#include <cmath>
#include <stdio.h>
using namespace std;

int main()
{
    double r,rad;
    string s;
    while (cin >> r >> rad >> s){
        if (s=="min") rad/=60;
        if (rad>180) rad=360-rad;
        r+=6440;
        double a=2*r*sin(rad*atan(1)*4/180/2),b=2*r*atan(1)*4*rad/360; //pi=atan(1)*4 and asin(1)*2 and acos(0)*2
        printf("%.6f %.6f\n",b,a);
    }
}
