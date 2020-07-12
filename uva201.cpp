#include <bits/stdc++.h>
#define _rep(i,a,b) for(int i=(a);i<=(b);i++)
#define _for(i,a,b) for( int i=(a);i<(b);i++)
using namespace std;

const int maxn=16;
int n,m,vexp[maxn][maxn], hexp[maxn][maxn], h[maxn][maxn], v[maxn][maxn], square[maxn];

int main(){
    char buf[4]; int x, y;
    for (int t=1;scanf("%d",&n) == 1;t++){
        if (t>1) printf("\n**********************************\n\n");
        memset(vexp,0,sizeof(vexp)), memset(hexp,0,sizeof(hexp)), memset(h,0,sizeof(h)), memset(v,0,sizeof(v)), memset(square,0,sizeof(square));

        scanf("%d",&m);
        _for(i,0,m){
            scanf("%s%d%d",buf,&x,&y);
            if (buf[0] == 'H') h[x][y]=1;
            else v[y][x] =1;
        }

        for(int i=n;i>=1;i--) for(int j=n;j>=1;j--){
            if (h[i][j]) hexp[i][j]= hexp[i][j+1]+1;
            if (v[i][j]) vexp[i][j]= vexp[i+1][j]+1;
        }

        _rep(i,1,n) _rep(j,1,n){
            int maxs=min(hexp[i][j],vexp[i][j]);
            _rep(s,1,maxs) if (hexp[i+s][j] >= s && vexp[i][j+s] >= s) square[s]++;
        }

        printf("Preblem #%d\n\n",t);
        bool ok=false;
        _rep(i,1,n) if (square[i]){
            ok=true;
            printf("%d square (s) of size %d\n",square[i],i);
        }
        if (!ok) puts("No completed squares can be found.");
    }
}