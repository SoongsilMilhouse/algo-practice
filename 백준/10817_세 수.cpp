#include <stdio.h>

int main()
{
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	if (a > b) {
		if (b > c) printf("%d", b);		// a>b>c
		else {
			if (a > c) printf("%d", c);	// a>c>b
			else printf("%d", a);		// c>a>b
		}
	}
	else {
		if (a > c) printf("%d", a);		// b>a>c
		else {
			if (b > c) printf("%d", c);	// b>c>a
			else printf("%d", b);		// c>b>a
		}
	}
}
