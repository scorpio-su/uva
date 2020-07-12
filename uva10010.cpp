#include <bits/stdc++.h>
using namespace std;

char c[51][51],word[51];
int m,n;
/*int dir[8][2]={{-1,1},{0,1},{1,1},{1,0},
                {1,-1},{0,-1},{-1,-1},{-1,0}};*/

void upper_to_lower(char c[]){
    for (int i=0; c[i]; i++)
        if (c[i]>='A' && c[i]<='Z')
            c[i] += 32;
}

bool test(int i, int j){
    /*int x;
    for (x=1; i-x>=0 && word[x]==c[i-x][j];) {x++; if (word[x]=='\0') return 1;}
    for (x=1; i+x<m  && word[x]==c[i+x][j];) {x++; if (word[x]=='\0') return 1;}
    for (x=1; j-x>=0 && word[x]==c[i][j-x];) {x++; if (word[x]=='\0') return 1;}
    for (x=1; j+x<n  && word[x]==c[i][j+x];) {x++; if (word[x]=='\0') return 1;}
    for (x=1; i-x>=0 && j-x>=0 && word[x]==c[i-x][j-x];) {x++; if (word[x]=='\0') return 1;}
    for (x=1; i+x<m  && j-x>=0 && word[x]==c[i+x][j-x];) {x++; if (word[x]=='\0') return 1;}
    for (x=1; i-x>=0 && j+x<n  && word[x]==c[i-x][j+x];) {x++; if (word[x]=='\0') return 1;}
    for (x=1; i+x<m  && j+x<n  && word[x]==c[i+x][j+x];) {x++; if (word[x]=='\0') return 1;}
    return 0;*/
    for(int x=1;word[x]==c[i-x][j+x]&& i-x>=0 && j+x<n;) {x++;if(word[x] == '\0')return 1;}//{-1,1}
    for(int x=1;word[x]==c[i][j+x] && j+x<n;) {x++;if(word[x] == '\0')return 1;}//{0,1}
    for(int x=1;word[x]==c[i+x][j+x]&& i+x<m && j+x<n;) {x++;if(word[x] == '\0')return 1;}//{1,1}
    for(int x=1;word[x]==c[i+x][j] && i+x<m;) {x++;if(word[x] == '\0')return 1;}//{1,0}
    for(int x=1;word[x]==c[i+x][j-x] && i+x<m && j-x>=0;) {x++;if(word[x] == '\0')return 1;}//{1,-1}
    for(int x=1;word[x]==c[i][j-x] && j-x>=0;) {x++;if(word[x] == '\0')return 1;}//{0,-1}
    for(int x=1;word[x]==c[i-x][j-x] && i-x>=0 && j-x>=0;) {x++;if(word[x] == '\0')return 1;}//{-1,-1}
    for(int x=1;word[x]==c[i-x][j] && i-x>=0 ;) {x++;if(word[x] == '\0')return 1;}//{-1,0}
    return 0;
}


int main()
{
    int t; scanf("%d",&t);
    while (t--){
        scanf("%d%d",&m,&n);
        for(int i =0;i<m;i++){
            scanf("%s",&c[i]);
            upper_to_lower(c[i]);
        }
        /*for(int i =0;i<m;i++)
            printf("%s",c[i]);
        cout << "\n";*/
        int k; scanf("%d",&k);
        while (k--)
        {
            bool te1=true;
            scanf("%s",word);
            upper_to_lower(word);
            /*for(int i=0;i<strlen(word);i++) cout << word[i];
            cout << "\n";*/
            for(int i=0;i<m && te1;i++){
                for(int j =0;j<n && te1;j++){
                    if (word[0]==c[i][j] && test(i,j)){
                        printf("%d %d\n",i+1,j+1);
                        te1=false;
                    }
                }
            }

            //cout <<"\n";
        }
        if (t) printf("\n");
    }

}
