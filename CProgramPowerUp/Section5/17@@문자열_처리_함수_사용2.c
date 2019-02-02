/*#include <stdio.h>
#include <string.h>
//함수를 새로만드는 것도 중요한 능력이지만 기존의 함수를 필요에따라 바꿔서 활용하는 것도 중요함.
//이차원 배열에 문자열 넣는 방법 !  A[5][5] 라면 srtcpy , strlen (A[5],블라블라) 가능!
#define STR_ARR 5
#define STR_LAN 7
int main(void) {
	char str[STR_ARR][STR_LAN];
	char ch[STR_LAN];
	int i, j;
	int	str_len1, str_len2;

	for (i = 0; i < STR_ARR ; i++) {
		fgets(ch, sizeof(ch), stdin);  //gets(str[i]) 가능
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