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
#if 0
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


//2.
#if 0
int main(void)
{
	printf("�������ַ���\n");
	int ch;
	int num=0;

	while ((ch = getchar()) != EOF)
	{
		if (num % 10 == 0)
		{
			putchar('\n');		
		}
		num++;
		switch (ch)
		{
		case '\n':
			printf("\n\\n-%-8d", ch);
		break;
		case '\t':
			printf("\\t-%-8d",ch);
		break;
		case 1:
			printf("^A-%-8d",ch);
		break;
		default:
			printf("%c-%-8d", ch, ch);
		}	
	}

	return 0;
}
#endif


//3.
#if 0
int main(void)
{
	printf("�������ַ���\n");
	int ch;
	int upjishu= 0;
	int lowjishu = 0;

	while ((ch = getchar()) != EOF)
	{
		if (ch >= 65 && ch <= 90)
			upjishu++;
		if (ch >= 97 && ch <= 122)
			lowjishu++;
	}
	printf("�����еĴ�д��ĸ������%d\n",upjishu);
	printf("�����е�Сд��ĸ������%d\n", lowjishu);

	return 0;
}
#endif 


//4.
#if 0
int main(void)
{
	printf("�������ַ���\n");
	int ch;
	int dancibiaoji = 0;
	int dancishu = 0;

	while ((ch = getchar()) != EOF)
	{
		if (ch != ' ' && dancibiaoji != 1)
			dancibiaoji = 1;
		
		if ((ch == ' ' ||ch=='\n') && dancibiaoji == 1)
		{
			dancibiaoji = 0;
			dancishu++;
		}
		//覴ã���������س�ʱ������������1

	}
	printf("���ʸ�����%d\n", dancishu);


	return 0;
}
//4.��
# elseif  0
int main(void)
{
	printf("�������ַ���\n");
	int ch;
	int dancibiaoji = 0;
	int dancishu = 0;
	float zimushu=0.0F;

	while ((ch = getchar()) != EOF)
	{
		if(ch!=' '&&ch!='\n')
		zimushu++;

		if (ch != ' ' &&ch!='\n' && dancibiaoji != 1)
		{
			dancibiaoji = 1;
			dancishu++;
		}

		if ((ch == ' ' || ch == '\n') && dancibiaoji == 1)
		{
			dancibiaoji = 0;		
		}
		

	}
	printf("���ʸ�����%d\n", dancishu);
	printf("ƽ��ÿ�����ʵ���ĸ����%.2f\n\n",zimushu/dancishu);

	return 0;
}
#endif


//5.
#if 0
int erfenfa1(int a);
int erfenfa2(int b);

int main(void)
{
	printf("ѡ��һ��1~100�����֡�Ȼ���һ᳢�Բ²⡣");
	printf("\n(����y��ʾ��ȷ������n��ʾ����)\n");

	int num = 50;
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
	int ch;
	int a,b;
	while ((ch = getchar()) != 'y')
	{
		while (getchar() != '\n')//1��
			continue;

		while (ch != 'n'&&ch!='y')
		{
			putchar(ch);
			printf("��������ʶ���ָ�������y��n\n");
			ch = getchar();
			while (getchar() != '\n')//2��
				continue;
		}

		if (ch == 'y')
			break;
		
		kaishi1:printf("�����ǲ´��˻��ǲ�С�ˣ�������d��ʾ��С�ˣ�����u��ʾ�´��ˣ�\n");
		ch = getchar();

		if (ch == 'd')
		{
			a= num;
			printf("������%d��\n",  erfenfa1(a));
			num = erfenfa1(a);
		}
		else if (ch == 'u')
		{
			b = num;
			printf("������%d��\n", erfenfa2(b));
			num = erfenfa2(b);
		}
		else
		{
			printf("��Ǹ����ֻ�ܻ�Ӧd��u\n");
			while (getchar() != '\n')//3.��
				continue;
			goto kaishi1;
		}
		while (getchar() != '\n')//4.��
			continue;
	}
	printf("�ã��Ҳµ��ˣ�\n");


	return 0;
}                                                       //���ַ��޷�ʵ��
int erfenfa1 (int a)
{
	const int MAX = 100;
	int num1;
	num1 = (a + MAX) / 2;

	return num1;
}
int erfenfa2(int b)
{
	const int MIN = 0;
	int num2;
	num2 = (b + 0) / 2;

	return num2;
}
#endif


//6.��P205
#if 1
int get_first(void);
int main(void)
{
	printf("�������ַ���\n");
	int ch;

	ch = get_first();

	printf("������ĵ�һ���ǿհ��ַ��ǣ�\n");
	putchar(ch);

	return 0;
}
int get_first(void)//�ú������ڷ��ض�ȡ���ĵ�һ���ǿհ��ַ���
{
	int ch;

	while ((ch = getchar())== ' '|| ch == '\n' || ch == '\t')
		continue;

	while (getchar() != '\n')
		continue;

	return ch;
}
#endif
