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

	printf("총합 : %d", total);
	return 0;
}

	1번 문제 scanf 함수도 서식을 정할 수 있음!

scanf("%c,%d,%lf,%s", &c, &n, &f, str);

	2번 문제 puts함수는 개행을 함.  fputs함수는 개행을 안함.

	3번문제  16진수X 8진수O 데이터를 어떻게 받아들이냐

	4번문제 getchar() 과 fflush(stdin) 
	EOF는 파일의 끝을 의미하며 -1을 반환한다. 콘솔입출력함수는 파일입출력함수에서 파생되었음.
	키보드 입력 버퍼  ->  프로세스 입력 버퍼 -> getchar 함수호출에 의한 반환.

	scanf함수도 EOF를 만나면 -1을 반환한다. 그런데 실행을 해보니 컨트롤 + z 즉 EOF를 3번입력해야 된다 왜그럴까? ->찾아보기
	scanf함수는 fflush함수를 안써도 되는데 그이유는 scanf함수는 공백을 데이터로 간주하지않음. 즉 소멸됨.
*/
