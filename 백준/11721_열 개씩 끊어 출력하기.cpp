#include <stdio.h>
#include <string.h>

int main()
{
	char arr[100];
	scanf("%s", arr);
	int i = 0, length = strlen(arr);
	do {
		printf("%c", arr[i++]);
		if (i % 10 == 0) printf("\n");
	} while (i < length);
}
