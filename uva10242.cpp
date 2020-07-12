#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    double x[4],y[4];
    while (~scanf("%lf %lf",&x[0],&y[0])){
        double x1,y1; x1=x[0];y1=y[0];
        //bool tes=true;
        for (int i=1;i<4;i++){
            scanf("%lf %lf",&x[i],&y[i]);
            //cin >> x[i+1] >> y[i+1];
            x1+=x[i]; y1+=y[i];
            //cout << x[i] << ' ' << y[i] << "\n";
            //cout << x1 << ' ' << y1 << "\n";
            for (int j=0;j<i;j++){
                if ((x[i]==x[j]) && (y[i]==y[j])){
                    x1-=(x[i]*3);
                    y1-=(y[i]*3);
                    //cout << x[j] << ' ' << y[j] << "\n";
                    break;
                }
            }
        }
        printf("%.3lf %.3lf\n",x1,y1);
    }

}
