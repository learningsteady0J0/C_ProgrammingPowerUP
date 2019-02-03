/* #include <stdio.h>
#define STR_MAX 100

strcmp을 새로 구현할 때 절묘함에 감탄.
널포인트의 값은 0인 것을 기억하고 활용하기.

int strLen(char * str) {
	int len = 0;
	while (str[len++] != '\0') {
	}

	return len - 1; // 널문자 빼기

}

int strCpy(char * str1, char * str2)
{
	int len = strLen(str2) + 1;
	int i;

	for (i = 0; i < len; i++) {
		str1[i] = str2[i];
	}


	return len;

}

int strCat(char*str1, char*str2) {
	int len1 = strLen(str1);
	int len2 = strLen(str2) + 1;
	int i;

	for (i = 0; i < len2; i++) {
		str1[len1 + i] = str2[i];
	}


	return len1 + len2;
}

int strCmp(char*str1, char*str2)
{

	int i;


	for (i = 0; str1[i] != '\0' || str2[i] != '\0'; i++) {
		if (str1[i] > str2[i]) {
			return 1;
		}
		else if (str1[i] < str2[i]) {
			return -1;
		}
	}

	return 0;


}
int main(void)
{
	char str1[STR_MAX] = "GOOD morning?";
	char str2[STR_MAX] = "HaHaHa!";
	char buffString[STR_MAX];

	printf("length of \"%s\" : %d \n", str1, strLen(str1));
	printf("length of \"%s\" : %d \n", str2, strLen(str2));

	strCpy(buffString, str1);
	printf("copy string : \"%s\" \n", buffString);

	strCat(buffString, str2);
	printf("concat string : \"%s\" \n", buffString);

	printf("cmp str1, str1 : %d \n", strCmp(str1, str1));
	printf("cmp str2, str2 : %d \n", strCmp(str2, str2));
	printf("cmp str1, str2 : %d \n", strCmp(str1, str2));
	printf("cmp str2, str1 : %d \n", strCmp(str2, str1));

	return 0;
}*/