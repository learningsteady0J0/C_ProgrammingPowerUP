/*#include <stdio.h>

��ü������ for�� �ʱ�ȭ �ݺ����� �������� �����Ҷ� �Ǵ� ������ Ƚ����ŭ �ݺ����Ѿ��� �� ���� ����.
while�� ���� �������� �𸣴� Ż�������� �����ϴ� ���, Ż���� ���θ� ���۰� ���� �ƴ� �߰����� �Ǵ��ؾ��ϴ� ��� ���� ����.

int main(void) {

	int num;
	int i;

	while (1) {
		fputs("1�̻��� ���� �Է�", stdout);
		if (scanf("%d", &num) == EOF) {
			break;
		};


		if (num <= 0) {
			fputs("1�̻��� ������ �Է��ϼ��� �Ѥ�!\n", stdout);
			continue;
		}
		puts("12�� �����");
		for (i = 1; i <= num; i++) {
			if (num%i == 0) {
				printf("%d ", i);
			}
		}
		fputs("\n", stdout);
	}


	return 0;
}*/