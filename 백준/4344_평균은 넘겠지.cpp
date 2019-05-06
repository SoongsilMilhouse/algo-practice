#include <stdio.h>
#include <stdlib.h>

int main()
{
	int testCase, i, j, n, count = 0, sum = 0;
	double average = 0;
	int *arr;
	double *result;

	scanf("%d", &testCase);
	result = (double *)malloc(sizeof(double)*testCase);

	for (i = 0; i < testCase; i++) {
		average = 0; sum = 0;
		scanf("%d", &n);
		arr = (int *)malloc(sizeof(int)*n);
		for (j = 0; j < n; j++) {
			scanf("%d", &arr[j]);
			sum += arr[j];
		}
		average = sum / n;
		for (j = 0;j < n;j++) {
			if (arr[j] > average)
				count++;
		}
		result[i] = count * 100.0 / n;
	}

	for (i = 0; i < testCase; i++)
		printf("%.3lf%%\n", result[i]);
}
