#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n, a, b, i;
	scanf("%d", &n);
	int *result = (int *)malloc(sizeof(int)*n);
	
	for (i = 0; i < n; i++) {
		scanf("%d %d", &a, &b);
		result[i] = a + b;
	}
	for (i = 0; i < n; i++) {
		printf("%d\n", result[i]);
	}
	free(result);
}
