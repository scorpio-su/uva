#include <iostream>
using namespace std;

int main ()
{
	int num,fr,en;
	cin >> num;
	for (int i=0;i<num;i++){
		cin >> fr >> en;
		int sum =0;
		for (int j=fr;j<=en;++j){
		if ( j & 1 )
			sum += j;
		}
		cout << "Case " << i+1 << ": " << sum << endl;
	}
	return 0; 
}
