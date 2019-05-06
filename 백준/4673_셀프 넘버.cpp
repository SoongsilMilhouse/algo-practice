#include <stdio.h>
#include <stdbool.h>

void testSelfNumber(bool arr[]);
int main()
{
	int n = 1,i;
	bool arr[20000];

	for (i = 1; i < 10001; i++) {
		arr[i] = true;
	}
	testSelfNumber(arr);
	for (i = 1; i < 10001; i++) {
		if (arr[i] == true)
			printf("%d\n", i);
	}
}
void testSelfNumber(bool arr[]) {
	int i, n = 1, sum;

	for (i = 1; i < 10001; i++) {
		sum = 0;
		n = i;
		sum += n;
		while (1) {
			sum += n % 10;
			n = n / 10;
			if (n == 0) break;
		}
		arr[sum] = false;
	}
}
