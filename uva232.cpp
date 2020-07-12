#include <bits/stdc++.h>
#define _for(i,a,b) for( int i=(a);i<(b);i++)
using namespace std;

struct Point{
    int x,y;
    Point(int x=0,int y=0):x(x),y(y){}
};
typedef Point Vector;
Vector operator +(const Vector& a,const Vector& b) {return Vector(a.x+b.x,a.y+b.y);}

int r,c;
const int maxc=16;
inline bool vaild(const Point& p) {return p.x>=0 && p.x<r && p.y>=0 && p.y<c;} //邊界處理

int main()
{
    const Vector dl(0,-1),dr(0,1),du(-1,0),dd(1,0);
    char buf[maxc];
    char grid[maxc][maxc];
    for (int t=1;scanf("%d%d",&r,&c)==2&&r;t++){
        vector <int> across,down;
        vector <Point> eilg;
        if (t>1) puts("");
        printf("puzzle #%d:\n",t);
        _for(i,0,r){
            scanf("%s",grid[i]);
            _for(j,0,c){
                if(grid[i][j]=='*') continue;
                Point p(i,j),lef=p+dl,up=p+du;
                bool iscro= !vaild(lef) || grid[lef.x][lef.y] == '*';
                bool isdo= !vaild(up) || grid[up.x][up.y] == '*';
                if (iscro) across.push_back(eilg.size());
                if(isdo) down.push_back(eilg.size());
                if (iscro || isdo) eilg.push_back(p);
            }
        }
        int buflen;
        puts("Across");
        for(auto n:across){
            buflen=0,memset(buf,0,sizeof(buf));
            Point p=eilg[n];
            while(vaild(p) && grid[p.x][p.y]!='*'){
                buf[buflen++] = grid[p.x][p.y];
                p=p+dl;
            }
            printf("%3d.%s\n",n+1,buf);
        }
        puts("Down");
        for(auto n : down){
            buflen=0,memset(buf,0,sizeof(buf));
            Point p=eilg[n];
            while (vaild(p) && grid[p.x][p.y] !='*'){
                buf[buflen++] = grid[p.x][p.y];
                p=p+dd;
            }
            printf("%3d.%s\n",n+1,buf);
        }

    }
    return 0;
}
