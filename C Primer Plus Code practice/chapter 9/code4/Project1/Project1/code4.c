#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//
#if 0

#endif


//��ϰ��
//4.
#if 0
int sum(int a,int b);
int main(void)
{
	int a, b;

		printf("�ó��������������֮��\n");
		printf("����������������\n");

		while ((scanf("%d%d", &a, &b)) != 2)
		{
			scanf("%*s");
			printf("���������룡\n");
		}
	
		printf("%d+%d=%d\n\n", a, b, sum(a,b));
	
	return 0;
}
int sum(int a,int b)
{
		return (a+b);
}
#endif


//5.
#if 0
double sum(double a,double b);
int main(void)
{
	double a, b;

	printf("�ó����������С��֮��\n");
	printf("����������С����\n");

	while ((scanf("%lf%lf", &a, &b)) != 2)
	{
		scanf("%*s");
		printf("���������룡\n");
	}

	printf("%.2lf+%.2lf=%.2lf\n\n", a, b, sum(a, b));

	return 0;
}
double sum(double a, double b)
{
	return (a + b);
}
#endif


//6.
#if 0
void alter(int*, int*);
int main(void)
{
	int x,y;
	printf("����������������\n");
	scanf("%d%d",&x,&y);
	printf("��������ǣ�x=%d��y=%d\n",x,y);
	alter(&x,&y);
	printf("����x=%d��y=%d\n", x, y);

	return 0;
}
void alter(int*x, int*y)
{
	int temp1, temp2;
	temp1 = *x;
	temp2 = *y;
	*x = *x + *y;
	*y = temp1 - temp2;
}
#endif


//8.
#if 0
int bijiao(int, int, int);
int main(void)
{
	int a, b, c;
	printf("�Ƚ�3�������е����ֵ��\n");
	scanf("%d%d%d",&a,&b,&c);
	
	printf("���ֵ�ǣ�%d\n\n", bijiao(a, b, c));

	return 0;
}
//int bijiao(int a, int b, int c)
//{
//	if (a >= b && a >= c)
//		return a;
//	else if (b >= a && b >= c)
//		return b;
//	else if (c >= a && c >= b)
//		return c;
//	else
//		return -6666;//��ʾ����
//}
//����
			int bijiao(int a, int b, int c)
			{
				int max = a;
				if (b > max)
					max = b;
				if (c > max)
					max = c;

				return max;
			}
#endif


//9.
#if 1
#define MIN 1
#define MAX 4
void showmenu(void);
int get_choice(int a, int b);
int main(void)
{
	showmenu();

	while (get_choice(MIN, MAX) !=4)
	{
		printf("����ִ�г���\n");
		printf("ִ����ϣ�\n");
		showmenu();
	}
	printf("�ټ���\n");

	return 0;
}
void showmenu(void)
{
	printf("Please choose one of the following :\n");
	printf("1)copy files		2)move files\n");
	printf("3)remove files		4)quit\n");
	printf("Enter the number of your choice:");
}
int get_choice(int a, int b)
{
	int choice;
	int biaoji;
	while ((biaoji=scanf("%d", &choice)) && (choice<a || choice>b))//��������ֲ��ڷ�Χ��ʱִ�У���������ĸ��ִ��return 4
	{
		while (getchar(choice) != '\n')
			continue;
		//scanf("%*s");    //������5����Ҫ����һ�����ֲ�ִ�к�����䡣����䲻������Ҫ��
		showmenu();
		printf("\n���������룡_______\b\b\b\b");
	}

	if (biaoji)                               //  if(biaoji   !=   1)
		return choice;					  //  choice=4;
	else                                       //   return choice;
		return 4;
}
#endif