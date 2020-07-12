#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	while (n--){
		int m,d,day;
		cin  >> m >> d;
		int sum = d+5;
		for (int i=m-1;i>0;i--){
			if (i == 1 ||i == 3 ||i == 5 ||i == 7 ||i == 8 ||i == 10 ||i == 12) sum +=31;
			else if (i == 2) sum +=28;
			else sum += 30;
		}
		day = (sum % 7);
		switch(day){
			case (1):
				printf("Monday\n");
				break;
			case (2):
				printf("Thesday\n");
				break;
			case (3):
				printf("Wadnesday\n");
				break;
			case (4):
				printf("Thursday\n");
				break;
			case (5):
				printf("Friday\n");
				break;
			case (6):
				printf("Saturday\n");
				break;
			case (0):
				printf("Sunday\n");
				break;
		}
	}
	return 0;
}
