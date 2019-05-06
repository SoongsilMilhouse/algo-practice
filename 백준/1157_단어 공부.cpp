#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#define TOTAL_ALP 26

int getMaxInt(int* n, int size, int* location);
int main()
{
	char arr[1000001], ch;
	int result[TOTAL_ALP], i = 0, maxInt, arrLen, location = 0;
	bool moreThanOne = false;

	memset(arr, '\0', sizeof(arr));
	memset(result, 0, sizeof(result));

	while ((ch = getchar()) != '\n') {
		if (ch >= 'A' && ch < 'a')
			arr[i++] = ch + ('a' - 'A');
		else arr[i++] = ch;
	}

	arrLen = strlen(arr);

	for (i = 0; i < arrLen; i++) {
		result[arr[i] - 'a']++;
	}

	maxInt = getMaxInt(result, TOTAL_ALP, &location);

	for (i = 0; i < TOTAL_ALP; i++) {
		if (i == location) continue;
		else {
			if (result[i] == maxInt)
				moreThanOne = true;
		}
	}

	printf("%c", moreThanOne == true ? '?' : (char)(location + 'A'));
}
int getMaxInt(int* n, int size, int* location) {
	int max = n[0];

	for (int i = 1; i < size; i++) {
		if (n[i] > max) {
			max = n[i];
			*location = i;
		}
	}
	return max;
}
