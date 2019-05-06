#include <stdio.h>
#include <string.h>

char arr[11];

int main()
{
	int arr_len;
	scanf("%s", arr);
	arr_len = strlen(arr);

	for (int i = 0; i < arr_len; i++) {
		for (int j = i + 1; j < arr_len; j++) {
			if (arr[i] < arr[j]) {
				int tmp = arr[i];
				arr[i] = arr[j];
				arr[j] = tmp;
			}
		}
	}

	for (int i = 0; i < arr_len; i++)
		printf("%c", arr[i]);
}