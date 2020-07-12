#include <bits/stdc++.h>
using namespace std;

char an[105][105];

void fil(int x,int y){
    for (int i=-1;i<=1;i++){
        for(int j=-1;j<=1;j++){
            if (an[x+i][y+j]!='*') an[x+i][y+j]++;
        }
    }
}

int main()
{
    //ios::sync_with_stdio(false);
    //cin.tie(0);cout.tie(0);
    int t=1;
    int n,m;
    while (cin >> n >> m ){
            if (!n && !m) break;
            if (t!=1) cout << "\n";

         for (int i=1;i<=n;i++){ //ªì©l¤Æ
             for (int j=1;j<=m;j++) an[i][j]='0';
         }

         for (int i=1;i<=n;i++){
             for (int j=1;j<=m;j++){
                char c;
                c=getchar();
                while (c == '\n') c=getchar();

                if (c == '*'){
                    an[i][j]='*';
                    fil(i,j);
                }
             }
         }

        //printf("Field #%d:\n",t++);
        cout << "Field #" <<t++ <<":\n";
         for (int i=1;i<=n;i++){
             for (int j=1;j<=m;j++){
                    cout << an[i][j];
            }
            cout << "\n";
         }
    }
}
