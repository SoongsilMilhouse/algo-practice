/*
 *	개선의 여지가 있는 코드
 *	char 배열을 선언하면 더욱 코드를 간결하게 만들 수 있다. 
 *	또한 6과 9를 구별하는 로직을 개선하는게 좋을 듯 하다. (너무 세세하게 구분함.)
 */
#include <stdio.h>
#define ARRLEN 10

void addOneSet(int arr[]);

int main()
{
	int n, num, set = 1;
	int arr[ARRLEN];
	scanf("%d", &n);

	for (int i = 0; i < ARRLEN; i++)
		arr[i] = 1;

	while (n > 0) {
		num = n % 10;
		n -= num;

		for (int i = 0; i < ARRLEN; i++) {
			if (i == num) {
				if (num == 6 || num == 9) {
					if (arr[6] == 0 && arr[9] == 0) {
						addOneSet(arr);
						set++;	arr[num]--;
					}
					else if (arr[6] > 0 && arr[9] == 0)
						arr[6]--;
					else if (arr[6] == 0 && arr[9] > 0)
						arr[9]--;
					else
						arr[num]--;
				}
				else {
					if (arr[i] > 0)
						arr[i]--;
					else {
						addOneSet(arr);
						set++;	arr[i]--;
					}
				}
			}
		}

		n /= 10;
	}

	printf("%d", set);
}

void addOneSet(int arr[]) {
	for (int i = 0; i < ARRLEN; i++)
		arr[i]++;
}
