#include <stdio.h>
#include <stdlib.h>

int main()
{
	int origin, n, tmp, cycle = 0;
	int a = 0;
	int b = 0;
	scanf("%d", &n);
	origin = n;

	while (1) {
		if (n < 0 ||  n > 99) break;
		else {
			a = n / 10;
			b = n % 10;
			tmp = a + b;
			n = 10 * b + tmp % 10;
			cycle++;
			if (n == origin) break;
		}
	}
	printf("%d", cycle);
}
