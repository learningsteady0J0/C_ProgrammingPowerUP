/*#include <stdio.h>
#define ARR_LEN 5

���� ���� �˰����� ����ϱ� ���ؼ��� ������ �迭�� ���� �޸� ������ ������ ����Ǿ� �־���Ѵ�.

int main(void) {
	
	int num[ARR_LEN];
	int i, j,temp;

	for (i = 0; i < ARR_LEN; i++) {
		printf("���� %d �Է�", i+1);
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
	fputs("���ĵ� ���: ", stdout);
	for (i = 0; i < ARR_LEN; i++) {
		printf("%d ", num[i]);
	}

	return 0;
}*/