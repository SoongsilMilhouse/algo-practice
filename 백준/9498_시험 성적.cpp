#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	if (n >= 90) putchar('A');
	else if (n >= 80) putchar('B');
	else if (n >= 70) putchar('C');
	else if (n >= 60) putchar('D');
	else putchar('F');

}
