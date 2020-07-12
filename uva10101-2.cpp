#include <iostream>
#include <cstring>
using namespace std;

void num_out(long long n){
	if (n == 0) return;
	
	if (n/10000000){
		num_out(n/10000000);
		cout << " kuti";
		n%=10000000;
	}
	
	if (n/100000){
		num_out(n/100000);
		cout << " lakh";
		n%=100000;
	}
	
	if (n/1000){
		num_out(n/1000);
		cout << " hajar";
		n%=1000;
	}
	
	if (n/100){
		num_out(n/100);
		cout << " shata";
		n%=100;
	}
	if (n) printf(" %lld",n);
	
}

int main ()
{
	long long num;
	int n1=1;
	while (cin >> num)
	{
		printf("%4d.",n1++);
		if (num) num_out(num);
		else cout << " 0";
		cout << endl;
	}
	return 0;
	
}
