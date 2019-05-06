#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdbool.h>
#define N 1000002

int main()
{
	bool firstCharEmpty = false;
	char str[N], ch;
	int spaceCount = 0, nullPoint, i = 0;
	
	fgets(str, N, stdin);
	str[strlen(str) - 1] = '\0';
	nullPoint = strlen(str) - 1;

	while (str[i] != '\0') {
		if (!isspace(str[0])) {			//첫문자 문자일 경우
			if (isspace(str[i++]))
				spaceCount++;
		}
		else {					//첫문자 공백일 경우
			firstCharEmpty = true;
			if (isspace(str[i++]))
				spaceCount++;
		}
	}
	
	if (!firstCharEmpty) spaceCount++;				//첫문자 문자인 경우 +1
	if (!firstCharEmpty && str[nullPoint] == ' ')	spaceCount--;	//첫문자 문자 && 널문자 앞 공백
	if (firstCharEmpty && str[nullPoint] == ' ')	spaceCount--;	//첫문자 공백 && 널문자 앞 공백

	printf("%d", spaceCount);
}
