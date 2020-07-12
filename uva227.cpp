#include <iostream>
#include <cstring>
#include <map>
#include <vector>
#include <assert.h>
#define _for(a,b,c) for(int (a)=(b);(a)<(c);(a)++)
#define _rep(a,b,c) for(int (a)=(b);(a)<=(c);(a)++)
using namespace std;

struct point{
    int x,y;
    point(int x=0,int y=0):x(x),y(y) {}
};
typedef point Vector;
Vector operator+ (const Vector& A,const Vector& B)
{ return Vector(A.x+B.x, A.y+B.y); }

const int gs = 5;
vector<string> grid;
point epos;
map<char, Vector> dirs;

bool val(const point& p){
    return p.x >= 0 && p.x < gs && p.y >= 0 && p.y < gs;
}

bool trymove(char cmd){
    if (!dirs.count(cmd)) return false;
    assert(dirs.count(cmd));
    point p;
	p.x = epos.x + dirs[cmd].x;
	p.y = epos.y + dirs[cmd].y;
    if (!val(p)) return false;
    swap(grid[p.x][p.y],grid[epos.x][epos.y]);
    epos = p;
    return true;
}

void printgr(){
    _for(i,0,gs){
        _for(j,0,gs){
            if (j) cout << " ";
            cout << grid[i][j];
        }
        cout << endl;
    }
}

int main ()
{
    int t=1;
    string line;
    dirs['A'] =Vector(-1, 0);
    dirs['B'] =Vector(1, 0);
    dirs['L'] =Vector(0, -1);
    dirs['R'] =Vector(0, 1);
    while(1){
        grid.clear();
        epos.x=-1; epos.y=-1;
        _for(i,0,gs){
            getline(cin,line);
            if (line == "Z") return 0;
            assert(line.size() == gs);
            _for(j,0,gs){
                if (line[j] == ' '){
                    assert(epos.x == -1 && epos.y == -1);
                    epos.x = i;
                    epos.y = j;
                }
            }
            grid.push_back(line);
        }
        char mov;
        string mov1;
        while (1)
        {
            getline(cin , line);
            assert(!line.empty());
            bool end = *(line.rbegin()) == '0';
            if (!end) mov1.append(line);
            else mov1.append(line,0,line.size()-1);
            if (end) break;
        }

        bool legal = true;
        _for(i,0,mov1.size())
            if (!trymove(mov1[i])) { legal = false; break;}
        if (t >1) cout << endl;
        cout << "Puzzle #" << t++ << ":" << endl;
        if (legal) printgr();
        else cout << "This puzzle has no final configuration." << endl;
    }
    return 0;
}
