/*#include <stdio.h>

10�������� Ȯ�强�� ���� �����غ� ����.���� ������ for���� �ι������ִ� ���� �ѹ����°�
��ĥ�� �� ȿ������.

int main(void) {
	int n1, n2;
	int start, end;
	int i, sum;

	fputs("�� ���� ���� �Է� : ", stdout);
	scanf("%d %d", &n1, &n2);
	start = n1 > n2 ? n2 : n1;
	end = n1 > n2 ? n1 : n2;
	sum = 0;
	for (i = start; i <= end; i++) {
		// !(i%3) || !(i%5) �ε� ǥ������.
		if (i % 3 == 0 || i % 5 == 0) {
			printf("%d�� �տ��� ����\n", i);
			continue;
		}
		sum += i;
	}

	printf("%d�� %d�� �����Ͽ� �� ���̿� �ִ� �������� ��: %d", n1, n2, sum);



	return 0;
}*/