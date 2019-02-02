/*#include <stdio.h>
#define ARR_LEN 5

버블 정렬 알고리즘을 사용하기 위해서는 대상들이 배열과 같은 메모리 구조에 나란히 저장되어 있어야한다.

int main(void) {
	
	int num[ARR_LEN];
	int i, j,temp;

	for (i = 0; i < ARR_LEN; i++) {
		printf("숫자 %d 입력", i+1);
		scanf("%d", &num[i]);
	}

	for (i = 0; i < ARR_LEN-1; i++) {
		for (j = 0; j < ARR_LEN-1-i; j++) {
			if (num[j] > num[j + 1]) {
				temp = num[j];
				num[j] = num[j + 1];
				num[j + 1] = temp;
			}
		}
	}
	fputs("정렬된 출력: ", stdout);
	for (i = 0; i < ARR_LEN; i++) {
		printf("%d ", num[i]);
	}

	return 0;
}*/