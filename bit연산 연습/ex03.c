#include <stdio.h>

int main() {
	unsigned char temp = 0;
	int cnt = 0;
	unsigned char checker = 0;
	unsigned char marker;
	int result = 0;
	int i;
	scanf("%hhd", &temp);

	for (i = 0; i <= 7; i++) {
		checker = (1 << i);
		if (checker & temp) cnt++;
	}

	marker = checker;
	for (i = 0; i < cnt; i++) {
		result |= marker;
		marker >>= 1;
	}

	printf("1의 개수 : %d\n", cnt);
	printf("Shift시의 값은 : %d\n", result);

	return 0;
}