#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//������ʹ�ü򵥺���
#if 0
#define WIDTH 40
void starbar(void);
int main(void)
{
	starbar();
	printf("123\n");
	printf("1234\n");
	starbar();

	return 0;
}
void starbar(void)
{
	int i;
	for (i = 1; i <= WIDTH; i++)
		printf("*");
	putchar('\n');
}
#endif


//ʹ��ӡ�����־��С�
#if 0
#define WIDTH 40
#define NAME "GIGATHINK, INC."
#define ADDRESS "Hangzhou, Xiaoshan"
#define PLACE "Beiganjiedao"
#define SPACE ' '                             //ע�ⲻ��д��" "
#include<string.h>

void showzifu(char ch, int num);//�ɴ�ӡ*�ţ�Ҳ�ɴ�ӡ�ո�ĺ�����
int main(void)
{
	showzifu('*',WIDTH);
//	putchar("\n");    ����
	putchar('\n');


	showzifu(SPACE,12);
	printf("%s",NAME);
	putchar('\n');

	int konggeshuliang = (WIDTH - strlen(ADDRESS)) / 2;
	showzifu (SPACE, konggeshuliang);//ʵ�ʲ��������ǳ��������������ʽ
	printf("%s",ADDRESS);
	putchar('\n');

	konggeshuliang = (WIDTH - strlen(PLACE)) / 2;
	showzifu(SPACE, konggeshuliang);
	printf("%s",PLACE);
	putchar('\n');

	showzifu('*', WIDTH);
	putchar('\n');

	return 0;
}
void showzifu(char ch, int num)
{
	int i;
	for (i = 1; i <= num; i++)
		printf("%c",ch);
	
}
#endif


//�ҳ����������н�С��һ��
#if 0
int bijiaodaxiao(int num5, int num6);//num5, num6 �Ǽ����������뺯��������β���һ�£�
int main(void)
{
	int num1, num2;

	begin:	printf("����������������\n");
	while(scanf("%d%d", &num1, &num2) != 2)  //����д����scanf(" % d % d", &num1, &num2) 
	{
	while (getchar() != '\n')
		continue;
	printf("�������������������룡");
	}
	
	printf("%d,%d",num1,num2);
	printf("��Сֵ��%d\n",bijiaodaxiao(num1,num2));
	goto begin;

	return 0;
}
int bijiaodaxiao(int num1, int num2)
{
	if (num1 > num2)
		num1 = num2;
	
	return num1;
}
#endif


//�ݹ���ʾ
#if 0
void up_and_down(int);
int main(void)
{
	up_and_down(1);

	return 0;
}
void up_and_down(int n)
{
	printf("Level %d: n location %p\n",n,&n);
	if (n < 4)
		up_and_down(n + 1);
	printf("LEVEL %d: n location %p\n", n, &n);

}
#endif


//ʹ��ѭ���͵ݹ����׳�
#if 0
int xunhuan(int);
int digui(int);

int main(void)
{
	int num;
	printf("������һ����������Χ��0~12:\n(��q���˳�)");

	while (scanf("%d", &num) == 1)
	{
		if (num < 0)
			printf("�������\n");
		else if (num > 12)
			printf("���볬�����Χ��\n");
		else
		{
			printf("%d�Ľ׳���%d\n",num,xunhuan(num));
			printf("%d�Ľ׳���%d\n", num, digui(num));
		}
	}

	return 0;
}
int xunhuan(int num)
{
	int i;
	for (i = 1;num>1;num--)
		i *=num;

	return i;
}
int digui(int num)
{
	int i;

	if (num > 0)
		i = num * digui(num - 1);
	else
		i = 1;

	return i;
}
#endif


//�õݹ飬��ʾʮ���ƶ�Ӧ�Ķ�������
#if 1
void huaweierjinzhi(int);

int main(void)
{
	unsigned long num;

	printf("������һ����������q���˳�����\n");

	while (scanf("%d", &num) == 1)
	{
		printf("ת��Ϊ�������ǣ�");
		huaweierjinzhi(num);
		printf("\n��������һ��������\n");
	}

	return 0;
}
void huaweierjinzhi(int num)
{
	int yushupanduan;//�����ж�

	yushupanduan = num % 2;
	if (num >= 2)
		huaweierjinzhi(num/2);

	//putchar(yushupanduan ? '0' : '1');
	printf("%d", yushupanduan);//����

	return;

}
#endif


//�õݹ���ʾ쳲��������е���
#if 0
unsigned long fibonacci(unsigned);
int main(void)
{
	int num;

	printf("�˳���չʾ쳲��������еĵ�n���ֵ\n");
	printf("������һ��������\n");

	while (scanf("%d",&num) == 1)
	{
		printf("쳲��������еĵ�%d��ֵΪ%d",num,fibonacci(num));

		printf("\n��������룺\n");
	}
	
	return 0;
}
unsigned long fibonacci(unsigned num)
{
	if (num > 2)
		return fibonacci(num - 1) + fibonacci(num - 2);
	else
		return 1;
}
#endif
