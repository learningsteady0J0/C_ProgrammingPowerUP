/*#include <stdio.h>

구구단 짝수 홀수 만들때 for중첩을 단 한번만 쓰는게 포인트

int main(void) {
	int number;
	int i, j ,k;
	while (1) {
		fputs("홀수 단(1)  짝수 단(2):",stdout);
		scanf("%d", &number);
		if (number != 1 && number != 2) {
			fputs("잘못된 입력입니다 1또는 2를 입력해주세요\n",stdout);
			continue;
		}
		break;
	}
	i = number == 1 ? 3 : 2;
	for (; i < 10; i+=2) {

			for (j = 2; j < 10; j++) {
					printf("%d x %d = %d\n", i, j, i*j);
			}

	}

	fputs("정수 입력: ", stdout);
	scanf("%d", &number);

	for (i = 0; i <= 100; i++) {
		for (j = 0; j <= 100; j++) {
			for (k = 0; k <= 100; k++) {
				if (i*j - k == number) {
					printf("%d * %d - %d = %d\n", i, j, k, number);
				}
			}

		}
	}

	return 0;
}*/