#include <stdio.h>
#include <string.h>
#define STR_MAXLEN 21

int main()
{
	int testCase, repeatTimes, strLen, i, j, k;
	char str[STR_MAXLEN];

	scanf("%d", &testCase);

	for (i = 0; i < testCase; i++) {
		scanf("%d %s", &repeatTimes, str);
		strLen = strlen(str);

		for (j = 0; j < strLen; j++) {
			for (k = 0; k < repeatTimes; k++)
				printf("%c", str[j]);
		}
		printf("\n");
	}
}
