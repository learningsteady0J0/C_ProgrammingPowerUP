#include <stdio.h>
#define BINARY_COUNT 50
int main(void) {
	int num;
	int binary_arr[BINARY_COUNT];
	int i = 0;

	scanf("%d", &num);
	while ((double)num / 2 != 0) {
		binary_arr[i] = num % 2;
		num -= binary_arr[i];   // 굳이 할필요가 없다.  num /= 2를 형변환을 안하고 진행시키면 소수점이 떨어져나감.
		num /= 2;
		i++;
	}

	for (i--; i >= 0; i--) {
		printf("%d ", binary_arr[i]);
	}

	return 0;



}