#include <cstdio>
#include <iostream>

using namespace std;

int main ()
{
	int n,iou=1;
	scanf("%d",&n);
	while (n--){
		int num;
		char s1;
		scanf("N = %d",&num);
		//cin >> s1 >> s1 >> num;
		long int a[num*num];
		bool tes=true;
		for (int i=0;i<num*num;i++) {
			cin >> a[i];
			if (a[i]<0){
					tes=false;
			}
		}
		for (int i=0;i<(num*num)/2;i++){
			if (!tes) break;
			if (a[i] != a[(num*num)-i-1]){
					tes=false;
					break;
				}
		}
		printf ("Test #%d: ",iou++);
		printf ( tes ? "Symmetric.\n" : "Non-symmetric.\n");
	}
}
