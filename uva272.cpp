#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
    char c;
    bool tes=false;
    while ((c=getchar()) != EOF){
        if (c == '"'){
            if (tes) printf("''"); //cout << "''";
            else printf("``");//cout << "``";
            tes=!tes;
        }
        else printf("%c",c);//cout << c;
    }
}
