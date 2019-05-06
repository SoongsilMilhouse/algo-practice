#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n, x, i;
	int *a;
	scanf("%d %d", &n, &x);
	a = (int *)malloc(sizeof(int)*n);

	for (i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	for (i = 0; i < n; i++) {
		if (a[i] < x)
			printf("%d ", a[i]);
	}

	free(a);
}
