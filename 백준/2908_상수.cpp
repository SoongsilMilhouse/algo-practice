#include <stdio.h>

int main()
{
	int a, b;
	scanf("%d %d", &a, &b);

	a = a - (a / 100) * 100 - (a % 10) + (a % 10) * 100 + (a / 100);
	b = b - (b / 100) * 100 - (b % 10) + (b % 10) * 100 + (b / 100);

	printf("%d", a > b ? a : b);
}

