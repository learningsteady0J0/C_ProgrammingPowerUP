/*#include <stdio.h>

������ ¦�� Ȧ�� ���鶧 for��ø�� �� �ѹ��� ���°� ����Ʈ

int main(void) {
	int number;
	int i, j ,k;
	while (1) {
		fputs("Ȧ�� ��(1)  ¦�� ��(2):",stdout);
		scanf("%d", &number);
		if (number != 1 && number != 2) {
			fputs("�߸��� �Է��Դϴ� 1�Ǵ� 2�� �Է����ּ���\n",stdout);
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

	fputs("���� �Է�: ", stdout);
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