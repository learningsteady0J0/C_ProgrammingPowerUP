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

	printf("%d���� ¦���� ��: %d\n", num, add);
	printf("%d���� Ȧ���� ��: %d\n", num, even);

	fputs("2�̻��� �����Է�: ",stdout);
	scanf("%d", &num);
	sum = 0;
	for (i = 1; 1; i++) {
		if (sum > num) {
			i--;
			printf("%d�� ���Ҷ� ó��%d�� �ѱ��.\n", i, num);
			printf("���ϱ��� ��: %d\n", sum - i);
			printf("������ ��: %d\n", sum);
			break;
		}
		sum += i;

	}


	return 0;
}