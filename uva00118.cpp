#include <iostream>
#include <cstring>
using namespace std;

int main ()
{
	int tox,toy;
	int x,y,pat;
	char p;
	cin >> tox >> toy;
	while (cin >> x >> y >> p){
		bool tes=true;
		if (p == 'N') pat=0;
		else if (p == 'E') pat=1;
		else if (p == 'S') pat=2;
		else pat=3;
		string s;
		s="";
		cin >> s;
		for (int i=0;i<s.length();i++)
		{
			if (s[i] =='L') {
				pat-=1;
				if (pat == -1) pat =3;		
			}
			else if (s[i] == 'R') {
				pat +=1;	
				if (pat == 4) pat =0;
			}
			else{
				if (pat == 0) y++;
				else if (pat ==1) x++;
				else if (pat == 2) y--;
				else x--;
			}
			if (x >=tox || y >=toy || x<0 || y<0) {
			/*if (pat == 0) y--;
			else if (pat ==1) x--;
			else if (pat == 2) y++;
			else x++;*/
			tes=false;
		}
		}
		/*if (x >=tox || y >=toy) {
			if (pat == 0) y--;
			else if (pat ==1) x--;
			else if (pat == 2) y++;
			else x++;
			tes=false;
		}*/
		if (pat == 0) p='N';
		else if (pat ==1) p='E';
		else if (pat == 2) p='S';
		else p='W';
		cout << x << " " << y << " "<< p ;
		printf(tes ? "\n" : " LOST\n");
	}
} 
