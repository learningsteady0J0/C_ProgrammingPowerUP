#include <stdio.h>
#define BINARY_COUNT 50
int main(void) {
	int num;
	int binary_arr[BINARY_COUNT];
	int i = 0;

	scanf("%d", &num);
	while ((double)num / 2 != 0) {
		binary_arr[i] = num % 2;
		num -= binary_arr[i];   // ���� ���ʿ䰡 ����.  num /= 2�� ����ȯ�� ���ϰ� �����Ű�� �Ҽ����� ����������.
		num /= 2;
		i++;
	}

	for (i--; i >= 0; i--) {
		printf("%d ", binary_arr[i]);
	}

	return 0;



}