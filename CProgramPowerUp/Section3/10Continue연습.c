/*#include <stdio.h>

10번문제는 확장성에 대해 생각해볼 문제.같은 문제라도 for문은 두번쓸수있는 것을 한번쓰는게
고칠때 더 효율적임.

int main(void) {
	int n1, n2;
	int start, end;
	int i, sum;

	fputs("두 개의 정수 입력 : ", stdout);
	scanf("%d %d", &n1, &n2);
	start = n1 > n2 ? n2 : n1;
	end = n1 > n2 ? n1 : n2;
	sum = 0;
	for (i = start; i <= end; i++) {
		// !(i%3) || !(i%5) 로도 표현가능.
		if (i % 3 == 0 || i % 5 == 0) {
			printf("%d는 합에서 제외\n", i);
			continue;
		}
		sum += i;
	}

	printf("%d과 %d을 포함하여 그 사이에 있는 정수들의 합: %d", n1, n2, sum);



	return 0;
}*/