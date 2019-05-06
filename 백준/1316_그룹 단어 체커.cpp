#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main()
{
	bool isGroupWord;
	char word[101];
	int n, i, j, k, word_len, cnt = 0;

	scanf("%d", &n);

	for (i = 0; i < n; i++) {
		isGroupWord = true;
		scanf("%s", word);
		word_len = strlen(word);

		for (j = 0; j < word_len; j++) {
			for (k = j + 1; k < word_len; k++) {
				if (word[j] == word[k]) {
					if (word[k - 1] != word[k]) {
						isGroupWord = false;
						break;
					}
					else continue;
				}
			}
			if (!isGroupWord) break;
		}

		cnt++;
		if (!isGroupWord) cnt--;
	}

	printf("%d", cnt);
}
