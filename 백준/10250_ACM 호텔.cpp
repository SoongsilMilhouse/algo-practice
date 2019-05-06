#include <stdio.h>
int main()
{
	int testCase, H, W, N;
	scanf("%d", &testCase);

	for (int i = 0; i < testCase; i++) {
		scanf("%d %d %d", &H, &W, &N);
		printf("%d\n", (N % H == 0 ? H : N % H) * 100 + (N % H == 0 ? N / H : N / H + 1));
	}
}