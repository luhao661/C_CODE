#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main(void)
//{
//	char name[40];
//	float cash = 123.44f;
//	scanf("%s",name);
//	printf("The %s family just may be $%.2f dollars richer!\n",name,cash);
//
//	return 0;
//}


//һЩ��ƥ�������ת��
//#define PAGES 336
//#define WORDS 65618
//int main(void)
//{
//	short num = PAGES;
//	short mnum = -PAGES;
//
//	printf("num as short and unsigned short: %hd %hu\n",num,num);
//	printf("-num as short and unsigned short: %hd %hu\n", mnum, mnum);
//	printf("num as int and char: %d %c\n", num, num);
//	printf("WORDS as int,short, and char:  %d %hd %c\n", WORDS,WORDS,WORDS);
//
//	return 0;
//}


//��ƥ��ĸ�����ת��
//int main(void)
//{
//	float n1 = 3.0;
//	double n2 = 3.0;
//	long n3 = 2000000000;
//	long n4 = 1234567890;
//
//	printf("%.1e %.1e %.1e %.1e\n",n1,n2,n3,n4);
//	printf("%ld %ld\n",n3,n4);
//	printf("%ld %ld %ld %ld\n\n",n1,n2,n3,n4);
//	printf("%zd,%zd,%zd,%zd\n\n",sizeof(short),sizeof(int),sizeof(long),sizeof(long long));
//
//	return 0;
//}


//printf()�ķ���ֵ
//int main(void)
//{
//	int a = 100;
//	int b;
//
//	b = printf("%d is boiling point.\n",a);
//	printf("The printf() function printed %d characters.\n",b);
//
//	return 0;
//}


//��ӡ�ϳ����ַ���
//int main(void)
//{
//	printf("Hello, young lovers, wherever you are.\n");
//	printf("Hello, young "                                                                                                      "lovers,"     " wherever you are.\n");
//	printf("Hello, young "
//		                                                          "lovers, wherever you are.\n");
//	printf("Hello, young lovers, \
//wherever you are.\n");
//
//	return 0;
//}


//��ʱʹ��&
/*int main(void)
{
	int age;
	char name[30];

	scanf("%d%s",&age,name);
	printf("%d,%s\n",age, name);

	return 0;
}*/


//��ʽ�ַ���
//int main(void)
//{
//	int n, m;
//	scanf("%d%d",&n,&m);
//	printf("%d,%d",n,m);
//
//	return 0;
//}


//%c
//int main(void)
//{
//	char ch;
//	scanf("%c",&ch);
//	printf("%c\n",ch);
//	
//	return 0;
//}


 //ʹ�ñ������ֶ�
//int main(void)
//{
//	unsigned width, precision;
//	int number = 256;
//	double weight = 242.5;
//
//	printf("Enter a field width:\n");
//	scanf("%d",&width);
//	printf("The number is:%*d:\n",width,number);
//	printf("Now enter a width and a precision:\n");
//	scanf("%d  %d",&width,&precision);
//	printf("weight=%*.*f\n",width,precision,weight);
//
//	return 0;
//}


//���������ǰ��������
//int main(void)
//{
//	int n;
//
//	scanf("%*d%*d%d",&n);
//	printf("The last integer was %d\n",n);
//	return 0;
//}


//��ӡ�̶��ֶο�ȣ�ʹ�б�����
int main(void)
{
	printf("%9d%9d%9d\n",123,456,789);
	printf("%9d%9d%9d\n", 12, 45622, 79);
	printf("%9d%9d%9d\n", 12300, 2, 789123);
	printf("%c%c%c",'H',105,'\41');
	return 0;
}
