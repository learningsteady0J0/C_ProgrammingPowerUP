/*#include <stdio.h>

int main(void) {
	int total = 0;
	int input = 0;
	int ret;

	while (1) {
		fputs("hihi: ", stdout);
		ret = scanf("%d", &input);
		if (ret == EOF) {
			break;
		}
		total += input;
	}

	printf("���� : %d", total);
	return 0;
}

	1�� ���� scanf �Լ��� ������ ���� �� ����!

scanf("%c,%d,%lf,%s", &c, &n, &f, str);

	2�� ���� puts�Լ��� ������ ��.  fputs�Լ��� ������ ����.

	3������  16����X 8����O �����͸� ��� �޾Ƶ��̳�

	4������ getchar() �� fflush(stdin) 
	EOF�� ������ ���� �ǹ��ϸ� -1�� ��ȯ�Ѵ�. �ܼ�������Լ��� ����������Լ����� �Ļ��Ǿ���.
	Ű���� �Է� ����  ->  ���μ��� �Է� ���� -> getchar �Լ�ȣ�⿡ ���� ��ȯ.

	scanf�Լ��� EOF�� ������ -1�� ��ȯ�Ѵ�. �׷��� ������ �غ��� ��Ʈ�� + z �� EOF�� 3���Է��ؾ� �ȴ� �ֱ׷���? ->ã�ƺ���
	scanf�Լ��� fflush�Լ��� �Ƚᵵ �Ǵµ� �������� scanf�Լ��� ������ �����ͷ� ������������. �� �Ҹ��.
*/
