#include <stdio.h>

int main()
{
	int testCase, i, j, m, n, k, result, arr[16];
	scanf("%d", &testCase);

	for (i = 0; i < testCase; i++) {
		scanf("%d", &k);
		scanf("%d", &n);

		for (j = 0; j < 16; j++) {
			arr[j] = j;
		}

		for (j = 0; j < k; j++) {
			for (m = 0; m < 15; m++) {
				arr[m + 1] = arr[m] + arr[m + 1];
			}
		}

		printf("%d\n", arr[n]);
	}
}
