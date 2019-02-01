#include <stdio.h>


int main(void) {
	
	int num;
	int add=0, even=0;
	int i,sum;
	
	scanf("%d", &num);

	for (i = 0; i <= num; i++) {
		if (!(i % 2)) {
			even += i;
		}
		else {
			add += i;
		}
	}

	printf("%d이하 짝수의 합: %d\n", num, add);
	printf("%d이하 홀수의 합: %d\n", num, even);

	fputs("2이상의 정수입력: ",stdout);
	scanf("%d", &num);
	sum = 0;
	for (i = 1; 1; i++) {
		if (sum > num) {
			i--;
			printf("%d를 더할때 처음%d를 넘긴다.\n", i, num);
			printf("더하기전 수: %d\n", sum - i);
			printf("더한후 수: %d\n", sum);
			break;
		}
		sum += i;

	}


	return 0;
}