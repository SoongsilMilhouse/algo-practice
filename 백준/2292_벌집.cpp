#include <stdio.h>

int main()
{
	int n, cnt = 1, left = 2, right = 7;
	scanf("%d", &n);

	while (1) {
		if (n == 1) break;

		if (left <= n && n <= right) {
			cnt++; 
			break;
		}
		else {
			left += cnt * 6;
			right += (cnt + 1) * 6;
			cnt++;
		}
	}

	printf("%d", cnt);
}
