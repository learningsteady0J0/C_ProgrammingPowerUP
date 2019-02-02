/*#include <stdio.h>

int main(void) {
	int num1, num2;
	int sum, max, min;
	int i;

	while (1) {
		printf("1이상의 정수 입력: ");
		scanf("%d", &num1);
		if (num1 >= 1) {
			break;
		}
		printf("1 이상의 정수를 입력해야합니다.\n");
	}
	sum = 0;
	for (i = 0; i <= num1; i++) {
		sum += i;
	}
	printf("1부터 %d까지의 합은%d\n", num1, sum);

	fputs("두 개의 정수 입력: ", stdout);
	scanf("%d %d", &num1, &num2);

	max = num1 > num2 ? num1 : num2;
	min = num1 > num2 ? num2 : num1;
	sum = 0;
	for (i = min; i <= max; i++) {
		sum += i;
	}
	printf("%d과 %d을 포함하여 그 사이에 있는 정수들의 합 : %d", num1, num2, sum);



	return 0;
}*/