/*
 *	������ ������ �ִ� �ڵ�
 *	n * (n + 1) / 2; �� ����ϸ� stage�� ���� �����ϰ� ���� �� �ִ�.
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