#include <stdio.h>
#define ARR_LENGTH 5

int main()
{
	int arr[ARR_LENGTH];
	int i, sum = 0;

	for (i = 0; i < ARR_LENGTH; i++)
		scanf("%d", &arr[i]);

	for (i = 0; i < ARR_LENGTH; i++) {
		if (arr[i] < 40) {
			arr[i] = 40;
			sum += arr[i];
		}
		else
			sum += arr[i];
	}

	printf("%d", sum / ARR_LENGTH);
}
