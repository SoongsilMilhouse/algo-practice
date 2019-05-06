#include <stdio.h>

int main()
{
	int n, hanSoo = 0;
	scanf("%d", &n);
	int hundreds = 0, tens = 0, units = 0, origin;
	origin = n;

	if (n < 100) {
		hanSoo = n;
	}
	else if (100 <= n && n <= 1000) {
		hanSoo = 99;
		for (int i = 100; i <= origin; i++) {
			n = i;
			hundreds = n / 100;
			n -= hundreds * 100;
			tens = n / 10;
			n -= tens * 10;
			units = n;
			if ((hundreds - tens) == (tens - units))
				hanSoo++;
		}
		
	}
	printf("%d", hanSoo);
}
