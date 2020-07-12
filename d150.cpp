#include <iostream>
#include <algorithm>
using namespace std;

void swap (int *in0 ,int *in1 ){
     int a ;
     
     a=*in0 ;
     *in0 =*in1 ;
     *in1 =a ;
}

int main ()
{
	int n;
	cin >> n;
	while (n--)
	{
		int nupay;	
		cin >> nupay;
		int in1[nupay];
		for (int i=0;i<nupay;i++) cin >> in1[i];
		for (int i=0;i<nupay-1;i++){
			int min_index=i;
			for (int j=i+1;j<nupay;j++){
				if (in1[min_index] < in1[j]) min_index=j;
			}
			if (min_index != i) swap(&in1[min_index], &in1[i]);
		}
		long long out=0;
		for (int i=2;i<nupay;i+=3) out += in1[i];
		cout << out << endl;
	}
 } 
