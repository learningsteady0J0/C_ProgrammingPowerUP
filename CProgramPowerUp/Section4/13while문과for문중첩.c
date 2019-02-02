/*#include <stdio.h>

대체적으로 for은 초기화 반복조건 증감문이 존재할때 또는 정해진 횟수만큼 반복시켜야할 때 쓰기 좋음.
while은 언제 만족될지 모르는 탈출조건이 존재하는 경우, 탈출의 여부를 시작과 끝이 아닌 중간에서 판단해야하는 경우 쓰기 좋음.

int main(void) {

	int num;
	int i;

	while (1) {
		fputs("1이상의 정수 입력", stdout);
		if (scanf("%d", &num) == EOF) {
			break;
		};


		if (num <= 0) {
			fputs("1이상의 정수를 입력하세요 ㅡㅡ!\n", stdout);
			continue;
		}
		puts("12의 약수들");
		for (i = 1; i <= num; i++) {
			if (num%i == 0) {
				printf("%d ", i);
			}
		}
		fputs("\n", stdout);
	}


	return 0;
}*/