#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//��ϰ��
//2.
#if 0
int main(void)
{
	//putchar('H');
	//putchar('\007');
	putchar('\b');
	return 0;
}
#endif


//3.
#if 0
int main(void)
{
	char ch;
	int count = 0;

	while ((ch = getchar()) != EOF)
	{
		if (ch == '\n')
			;			
		else
			count++;
	}

	printf("��%d���ַ�(�������з�)",count);

	return 0;
}
#endif


//�����ϰ
//1.
#if 1
int main(void)
{
	printf("�������ַ���\n");

	char ch;
	int count = 0;

	while ((ch = getchar()) != EOF)
	{
		if (ch != '\n')
			count++;
		else
			;
	}

	printf("��ȡ��%d���ַ�\n",count);

	return 0;
}
#endif
