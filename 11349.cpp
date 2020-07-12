#include <cstdio>

using namespace std;

int main ()
{
	int n,iou=1;
	scanf("%d",&n);
	while (n--){
		int num;
		scanf("N = %d",&num);
		long int a[num][num];
		bool tes=true;
		for (int i=0;i<num;i++) {
			for (int j=0;j<num;j++) {
			scanf("%ld",&a[i][j]);
			if (a[i][j]<0){
					tes=false;
				}
			}
		}
		for (int i=0;i<num;i++){
			if (!tes) break;
			for (int j=0;j<num-i;j++){
				if (a[i][j] != a[num-i-1][num-j-1]){
					tes=false;
					break;
				}
			}
		}
		printf ("Test #%d: ",iou++);
		printf(tes ? "Symmetric.\n" : "Non-symmetric.\n");
	}
}
