#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main(void)
//{
//	char ch;
//
//	while ((ch = getchar()) != '#')
//		putchar(ch);//��д��putchar();    ��ᱨ��putchar()�������١�
//
//	return 0;
//}


//ʹ��EOF
//int main(void)
//{
//	int ch;
//
//	while ((ch=getchar()) != EOF)
//		putchar(ch);
//
//	return 0;
//}


#if 0
//�����ֳ���1
int main(void)
{
	printf("ѡ��һ��1~100�����֡�Ȼ���һ᳢�Բ²⡣");
	printf("\n������y��ʾ��ȷ������n��ʾ����\n");

	int num=1;
	printf("������%d��",num);
	while(getchar()!='y')
		printf("������%d��\n", ++num);//������\n���룬������λ���ִ�����飡

	printf("�ã��Ҳµ��ˣ�\n");

	return 0;
}
#endif


#if (0)
//�����ֳ���2
int main(void)
{
	printf("ѡ��һ��1~100�����֡�Ȼ���һ᳢�Բ²⡣");
	printf("\n(����y��ʾ��ȷ������n��ʾ����)\n");

	int num = 1;
	printf("������%d��\n", num);
	while (getchar() != 'y')
	{
		printf("������%d��\n", ++num);
		//if (getchar == '\n')       //����
		//if (getchar() != '\n')     //��Ҳ���ԡ�������������һ���ַ���y��n��
		while (getchar() != '\n')
		continue;
	}
	printf("�ã��Ҳµ��ˣ�\n");

	return 0;
}
#endif


#if 0
//�����ֳ���3
int main(void)
{
	printf("ѡ��һ��1~100�����֡�Ȼ���һ᳢�Բ²⡣");
	printf("\n(����y��ʾ��ȷ������n��ʾ����)\n");

	int num = 1;
	printf("������%d��\n", num);
	//while (getchar() != 'y')
	//{
	//	if (getchar() == 'n')                                          //��Ҫһ����������ת
	//		printf("������%d��\n", ++num);
	//	else
	//		printf("��Ǹ����ֻ�ܻ�Ӧy��n\n");

	//	while (getchar() != '\n')
	//		continue;
	//}
	char ch;
	while ((ch=getchar()) != 'y')
	{
		if (ch == 'n')
			printf("������%d��\n", ++num);
		else
			printf("��Ǹ����ֻ�ܻ�Ӧy��n\n");

	//	while (ch != '\n')                                              //�����쳣�����ٶ�ȡ���롣
			while (getchar() != '\n')
			continue;
	}
	printf("�ã��Ҳµ��ˣ�\n");

	return 0;
}
#endif


#if 0
//�������������ָ���Ĳ�����ӡ�ַ�
void display(char ch, int hang, int lie);
int main(void)
{
	int row, column;
	int ch;
	printf("������һ����ĸ�������������֣�\n");

	while ((ch = getchar()) != '\n')
	{
		scanf("%d%d",&row,&column);
		display(ch,row,column);
		printf("������һ����ĸ�������������֣�\n");
		printf("����Enter�Խ���\n");
	}

	return 0;
}
void display(char ch, int hang, int lie)
{
	int hang1 = hang;
	int lie1 = lie;
	for (hang = 1; hang <= hang1; hang++)
	{
		for (lie = 1; lie <= lie1; lie++)
			putchar(ch);
		printf("\n");
	}
}
#endif


#if 0
//�������������ָ���Ĳ�����ӡ�ַ�������
void display(char ch, int hang, int lie);
int main(void)
{
	int row, column;
	int ch;
	printf("������һ����ĸ�������������֣�\n");

	while ((ch = getchar()) != '\n')
	{
		if (scanf("%d%d", &row, &column) != 2)//scanf��������ʱ�����Ե��ո񣬻س���
			break;
		display(ch, row, column);

		while (getchar() != '\n')//���ĵ�column���\n
			continue;

		printf("������һ����ĸ�������������֣�\n");
		printf("����Enter�Խ���\n");
	}
	printf("�ټ���\n");

	return 0;
}
void display(char ch, int hang, int lie)
{
	int hang1 = hang;
	int lie1 = lie;
	for (hang = 1; hang <= hang1; hang++)
	{
		for (lie = 1; lie <= lie1; lie++)
			putchar(ch);
		printf("\n");
	}
}
#endif


#if 1
//��getchar()��ȡ��������룬����ʾ�û�����
int main(void)
{
	int input;
	char ch;

	while (scanf("%d", &input) != 1)
	{
		while ((ch = getchar()) != '\n')
			putchar(ch);
		printf("����һ�����������������룺\n");
	}

		printf("%d",input);

	return 0;
}
#endif