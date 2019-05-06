#include <stdio.h>

int main()
{
	int arr[9];
	int i, playOrder = 0;	// 0: mixed, 1: ascending, 2: descending
	
	for (i = 1; i < 9; i++)
		scanf("%d", &arr[i]);

	if (arr[1] == 1) {
		for (i = 1; i < 9; i++)
			if (arr[i] == i)
				playOrder = 1;
			else {
				playOrder = 0;
				break;
			}
	}
	else if (arr[1] == 8) {
		for (i = 1; i < 9; i++)
			if (arr[i] == 9 - i) {
				playOrder = 2;	
			}
			else {
				playOrder = 0;
				break;
			}
	}

	if (playOrder == 0) printf("mixed");
	else if (playOrder == 1) printf("ascending");
	else if (playOrder == 2) printf("descending");
}
