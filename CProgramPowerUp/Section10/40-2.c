#include <stdio.h>

int main()
{
	char str[500];
	int buf[10];
	int cnt;
	FILE * fp1, *fp2;
	scanf("%s", str);
	fp1 = fopen(str, "rb");
	fp2 = fopen("good.jpg", "wb");
	
	if (fp1 == NULL)
	{
		puts("���Ͽ��� ����");
	}

	while (1)
	{
		cnt = fread(buf, sizeof(int), 10, fp1);

		if (cnt < 10)
		{
			fwrite(buf, sizeof(int), cnt, fp2);

			if (feof(fp1) != 0) {
			break;
		}
			else {
				puts("�����߻�");
				return -1;
			}
		}
		fwrite(buf, sizeof(int), cnt, fp2);
	}
	puts("���Ϻ��� �Ϸ�");

	return 0;
}