#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main()
{
	const char* croAlphabet[] = { "c=","c-","dz=","d-","lj","nj","s=","z=" };
	char word[101];
	char* pWord = NULL;
	int cnt = 0, word_len;
	bool isCroAlphabet;

	scanf("%s", word);

	word_len = strlen(word);
	pWord = word;

	for (int i = 0; i < word_len; i++) {
		isCroAlphabet = false;

		if (strncmp(pWord, "dz", 2) == 0) {
			if (pWord[2] == '=') {
				pWord += 3; i += 2; cnt++;
				isCroAlphabet = true;
			}
			else {
				pWord += 1; cnt++;
				isCroAlphabet = false;
			}
		}
		else {
			cnt++;

			for (int j = 0; j < 8; j++) {
				if (strncmp(pWord, croAlphabet[j], 2) == 0) {
					pWord += 2; i += 1;
					isCroAlphabet = true;
					break;
				}
			}
		}

		if (!isCroAlphabet) pWord++;
	}

	printf("%d", cnt);
}
