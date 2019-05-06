#include <stdio.h>

char arr[10];
int countArr[10];

int main()
{
	int a, b, c, i, result;
	scanf("%d %d %d", &a, &b, &c);
	result = a * b * c;

	for (i = 0; i < 10; i++)
		countArr[i] = 0;

	sprintf(arr, "%d", result);

	for (i = 0; i < 10; i++) {
		if (arr[i] == '0') countArr[0]++;
		else if (arr[i] == '1') countArr[1]++;
		else if (arr[i] == '2') countArr[2]++;
		else if (arr[i] == '3') countArr[3]++;
		else if (arr[i] == '4') countArr[4]++;
		else if (arr[i] == '5') countArr[5]++;
		else if (arr[i] == '6') countArr[6]++;
		else if (arr[i] == '7') countArr[7]++;
		else if (arr[i] == '8') countArr[8]++;
		else if (arr[i] == '9') countArr[9]++;
	}

	for (i = 0; i < 10; i++)
		printf("%d\n", countArr[i]);
}
