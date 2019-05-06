#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i;
	double n, max = 0, sum = 0;
	scanf("%lf", &n);
	double *arr = (double*)malloc(sizeof(double)*n);

	for (i = 0;i < n;i++) {
		scanf("%lf", &arr[i]);
		if (arr[i] > max) {
			max = arr[i];
		}
	}
	for (i = 0; i < n; i++) {
		sum += (arr[i] / max) * 100;
	}

	printf("%.2lf", sum / n);
}
