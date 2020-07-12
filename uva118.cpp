#include <iostream>
#include <cstring>
using namespace std;

const int pa[4][2]={{1,0},
                    {0,-1},
                    {-1,0},
                    {0,1}};

int main()
{
    int x,y,x1,y1,k;cin >> x >> y;
    char c;bool test[100][100]={};
    while (cin >> x1 >> y1>> c){
        bool tes=false;string s;
        if (c=='E') k=0;
        if (c=='S') k=1;
        if (c=='W') k=2;
        if (c=='N') k=3;
    //cout << x1 <<" " << y1 << " " << k;
        cin >> s;
        for (int i=0;i<s.size();i++) {
            if (s[i]=='L')k--;
            else if (s[i]=='R')k++;
            else if (s[i]=='F'){
                if (x<x1+pa[k][0]||y<y1+pa[k][1]||y1+pa[k][1]<0||x1+pa[k][0]<0) {
                    if (x1==0&&y1==0||k==2||k==1)continue;
                    if (!test[x1+pa[k][0]][y1+pa[k][1]])
                    {
                        tes=test[x1+pa[k][0]][y1+pa[k][1]]=true;
                        break;
                    }

                }
                else{x1+=pa[k][0];y1+=pa[k][1];}
            }
            //cout << x1 <<" " << y1 << " " << k << "\n";
            if (k==4)k=0;
            if (k==-1)k=3;
        }
        char a[]={'E','S','W','N'};
        cout << x1 <<" " << y1 << " " << a[k];
        cout << ((tes)?" LOST\n":"\n");
    }

}
