/*
 *	개선의 여지가 있는 코드
 *	n * (n + 1) / 2; 를 사용하면 stage를 보다 간결하게 구할 수 있다.
 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int x, stage, i = 1;
	int* arr;
	scanf("%d", &x);

	while (1) {
		x -= (i++);
		if (x <= 0) {
			stage = --i;
			x += i;
			break;
		}
	}

	arr = (int *)malloc(sizeof(int) * stage);

	for (int i = 0; i < stage; i++) {
		arr[i] = stage - i;
	}

	if (stage % 2 == 0)
		printf("%d/%d", arr[stage - x], stage + 1 - x);
	else
		printf("%d/%d", arr[x - 1], stage + 1 - arr[x - 1]);
}