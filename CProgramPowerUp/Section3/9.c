/*#include <stdio.h>

int main(void) {
	int num1, num2;
	int sum, max, min;
	int i;

	while (1) {
		printf("1�̻��� ���� �Է�: ");
		scanf("%d", &num1);
		if (num1 >= 1) {
			break;
		}
		printf("1 �̻��� ������ �Է��ؾ��մϴ�.\n");
	}
	sum = 0;
	for (i = 0; i <= num1; i++) {
		sum += i;
	}
	printf("1���� %d������ ����%d\n", num1, sum);

	fputs("�� ���� ���� �Է�: ", stdout);
	scanf("%d %d", &num1, &num2);

	max = num1 > num2 ? num1 : num2;
	min = num1 > num2 ? num2 : num1;
	sum = 0;
	for (i = min; i <= max; i++) {
		sum += i;
	}
	printf("%d�� %d�� �����Ͽ� �� ���̿� �ִ� �������� �� : %d", num1, num2, sum);



	return 0;
}*/