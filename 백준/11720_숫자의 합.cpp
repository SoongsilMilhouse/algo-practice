#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n, i, sum = 0;
	scanf("%d", &n);
	char *arr = (char *)malloc(sizeof(char)*n);
	scanf("%s",arr);

	for (i = 0;i < n; i++) 
		sum += arr[i] - 48;

	printf("sum:%d\n", sum);
	free(arr);
}
