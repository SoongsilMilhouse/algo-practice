#include <stdio.h>
#include <string.h>
#define TOTAL_ALP 26

int main()
{
	char arr[101];
	int result[TOTAL_ALP], i;
	scanf("%s", arr);
	int max_len = strlen(arr);

	for (i = 0; i < TOTAL_ALP; i++) {
		result[i] = -1;
	}

	for (i = 0; i < max_len; i++) {
		if (result[arr[i] - 'a'] == -1)
			result[arr[i] - 'a'] = i;
		else
			continue;
	}

	for (i = 0; i < TOTAL_ALP; i++)
		printf("%d ", result[i]);
}