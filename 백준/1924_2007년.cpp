#include <stdio.h>

int main()
{
	int x, y, i, result=0;			
	int day[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31 };
	scanf("%d %d", &x, &y);
	for (i = 0;i < x;i++) 
		result += day[i];

	result = (result + y)%7;
	
	if (result == 0) printf("SUN");
	else if (result == 1) printf("MON");
	else if (result == 2) printf("TUE");
	else if (result == 3) printf("WED");
	else if (result == 4) printf("THU");
	else if (result == 5) printf("FRI");
	else if (result == 6) printf("SAT");
}
