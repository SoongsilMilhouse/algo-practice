#include <stdio.h>
#include <string.h>

int main()
{
	char word[16];
	int wordLen, i, neededTime = 0;
	scanf("%s", word);
		
	wordLen = strlen(word);

	for (i = 0; i < wordLen; i++) {
		if (word[i] == 'Z') {
			neededTime += 10;
			continue;
		}

		if (word[i] >= 'S') {
			word[i] = --word[i];
		}

		neededTime += (word[i] - 'A') / 3 + 3;
	}

	printf("%d", neededTime);
}
