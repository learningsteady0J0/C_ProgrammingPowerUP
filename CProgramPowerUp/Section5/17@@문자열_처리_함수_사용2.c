/*#include <stdio.h>
#include <string.h>
//�Լ��� ���θ���� �͵� �߿��� �ɷ������� ������ �Լ��� �ʿ信���� �ٲ㼭 Ȱ���ϴ� �͵� �߿���.
//������ �迭�� ���ڿ� �ִ� ��� !  A[5][5] ��� srtcpy , strlen (A[5],�����) ����!
#define STR_ARR 5
#define STR_LAN 7
int main(void) {
	char str[STR_ARR][STR_LAN];
	char ch[STR_LAN];
	int i, j;
	int	str_len1, str_len2;

	for (i = 0; i < STR_ARR ; i++) {
		fgets(ch, sizeof(ch), stdin);  //gets(str[i]) ����
		strcpy(str[i], ch);
	}

	for (i = 0; i < STR_ARR-1; i++) {
		for (j = 0; j < STR_ARR - 1; j++) {
			str_len1 = strlen(str[j]);
			str_len2 = strlen(str[j + 1]);

			if (str_len1 > str_len2) {
				strcpy(ch, str[j]);
				strcpy(str[j], str[j + 1]);
				strcpy(str[j + 1], ch);
			}
		}
	}

	for (i = 0; i < STR_ARR; i++) {

		printf("%s", str[i]);

	}




	return 0;
}*/