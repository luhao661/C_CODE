#define _CRT_SECURE_NO_WARNINGS 1
//chapter
//code
#if 0
#endif


//chapter 2
#if 0
#include <stdio.h>
int  main(void)
{
	int a =/*��Ҳ��һ��ע��*/ 1;
	printf("I am a smart computer\n");//����һ��ע��
	printf("my favorite number is %d becasuse it is the first.\n", a);/*��Ҳ��һ��ע��*/
	return 0;
}
//����һ��ע��
/*��Ҳ��һ��ע��*/
#endif


#if 0
#include <stdio.h>
int main(void)
{
	int a, b;

	a = 2;
	b = a * 6;
	printf("There are %d and %d", a, b);
	return 0;
}
#endif


#if 0
#include <stdio.h>
//void diaoyong(void);
//int main(void)
//{
//	printf("�ҽ�����һ������\n");
//	diaoyong();
//	printf("���óɹ�\n");
//
//}
//void diaoyong(void)
//{
//	printf("����\n");
//}

int main(void)
{
	int n, n2, n3;
	n = 5;
	n2 = n * n;
	n3 = n2 * n2;
	/**/
	printf("%d %d %d", n, n2, n3);
	return 0;
}
#endif


#if 0
#include <stdio.h>

//2.12�����ϰ
//��1���ӡ����
/*int main(void)
{
	printf("��·�");
	printf("��\n");
	printf("·�");
	printf("��");
	printf("·�");
}*/
#define �� "��"
#define ��  "·�"
int main(void)
{

	printf("%s%s", ��, ��);
	return 0;
}

//��3���ӡ����ת��Ϊ����
//int main(void)
//{
//	int a, b;//���������
//	a = 23;
//	printf("�ҵ�������%d��, �����൱��%d�졣",a , b=a*365);
//}

//��4��
//void jolly(void);
//void deny(void);
//int main(void)
//{
//	//��while              
//	int i = 1;
//	while(i < 4)
//	{
//		i++;
//		jolly();
//	}
//	deny();
//
//	/*��if */
//	/*int i = 1;
//	if (i < 4)
//	{
//		i++;
//		jolly();
//		goto start ;
//
//	}
//	else  
//		deny();*/                        //if���жϣ�while����ѭ��
//
//
//	return 0;
//}       
//
//void jolly(void)
//{
//	printf("For he's a jolly good fellow!\n");
//}
//void deny(void)
//{
//	printf("which nobody can deny!");
//}


//��5��
//void br();
//void ic();
//int main(void)
//{
//	br();
//	printf(", ");
//	ic();
//	printf("\n");
//	ic();
//	printf("\n");
//	br();
//}
//void br()
//{
//	printf("Brazil, Russia");
//}
//void ic()
//{
//	printf("India, China");
//}

//��6��
//int main(void)
//{
//	int toes = 10;
//	int erbei, pinfang;
//	printf("toes=%d, ����Ϊ%d, ƽ��Ϊ%d��", toes, erbei=2*toes, pinfang=toes*toes);
//
//}

//��7��
//void smile(void);
//int main(void)
//{
//	smile(); smile(); smile();
//	printf("\n");
//	smile(); smile();
//	printf("\n");
//	smile();
//}
//void smile (void)
//{
//	printf("Smile!");
//}

//��8��
//void one_three(void);
//void two(void);
//int main(void)
//{
//	printf("starting now:\n");
//	one_three();
//	printf("done!");
//}
//void one_three(void)
//{
//	printf("one\n");
//	two();
//	printf("three\n");
//}
//void two(void)
//{
//	printf("two\n");
//}
#endif


//chapter 3
//code1.c
#if 0
#include <stdio.h>
//int main (void)
//{
//	float weight;
//	float value;
//	printf("Are you worth your weight in platinum?\n");
//	printf("Let's check it out.\n");
//	printf("Please enter your weight in pounds:");
//	scanf("%f", &weight);
//
//	value = 1700.0 * weight * 14.5833;
//	printf("Your weight in platinum is worth $%.2f.\n",value);
//	return 0;
//}


//int main()
//{
//	int ten = 10;
//	int two = 2;
//	printf("%d��%d��%d\n",ten, two, ten-two);
//	printf("%d��%d��%d\n",ten);/*����д��*/
//	printf("%d��%d��%d\n", ten , two, 8);//��Ҳ��
//	return 0;
//
//}
//
//


//��ʮ���ƣ��˽��ƣ�ʮ�����ƴ�ӡʮ������100
//int main(void)
//{
//	short x=100;
//	printf("dec=%d octal=%o hex=%x\n",x,x,x);
//	printf("dec=%#d octal=%#o hex=%#x\n", x, x, x);
//	return 0;
//}

//����int��ϵͳ�������ֵ
//int main(void)
//{
//	int i = 2147483647;
//	long int   j = 4294967295;
//	printf("%d,%d,%d\n",i,i+1,i+2);
//	printf("%d,%d,%d",j,j+1,j+2);
//	return 0;
//}


//����printf()������
//int main(void)
//{
//	unsigned int un = 3000000000;
//	short end = 200;
//	long big = 65537;
//	long long  verybig = 12345678908642;
//	printf("un=%u and not %d\n",un,un);
//	printf("end=%hd and %d\n",end,end);
//	printf("big=%ld and not %hd\n",big,big);
//	printf("very big =%lld and not %ld\n\a",verybig, verybig);
//	printf("�˸�\b\b\b");
//	printf(" ˫����\"");
//	printf("�ʺ�\?\n");
//	printf("�ʺţ�");
//	printf("123");
//	printf("���Իس�����    \r");
//	//����д��      printf("��˵,��a \ is a backslash."\n") ;     
//	printf("��˵,\" a \\ is a backslash.\"\n");
//	return 0;
//	
//}


int main(void)
{
	char a = '\a';
	printf("\a");
	return 0;
}

#endif


//chapter 3
//code2.c
#if 0
//��ʾ��ĸ�Ĵ�����
#include <stdio.h>
//int main(void)
//{
//	char ch;
//	printf("Please enter a character.\n");
//	scanf("%c",&ch);
//	printf("The code for %c is %d.\n",ch,ch);
//	return 0;
//}

//�����ַ�ʽ��ʾfloat���͵�ֵ
//#include <stdio.h>
//int main(void)
//{
//	float aboat = 3200.0;
//	double abet = 2.14e9;
//	long double dip = 5.32e-5;
//	printf("%f  %e\n",aboat,aboat);
//	printf("%f  %e\n",abet,abet);
//	printf("%Lf  %le\n",dip,dip);
//}

//�������������
//int main(void)
//{
//	float a, b;
//	b = 2.0e20 + 1;
//	a = 2.0e20;
//	printf("b-a=%lf\n",b-a);
//	return 0;
//}


//��ӡ���ʹ�С
//int main(void)
//{
//	printf("int�Ĵ�С��%zd bytes.\n",sizeof(int));
//	printf("char�Ĵ�С��%zd bytes.\n",sizeof(char));
//	printf("short�Ĵ�С��%zd bytes.\n",sizeof(short));
//	printf("long�Ĵ�С��%zd bytes.\n", sizeof(long));
//	printf("long long�Ĵ�С��%zd bytes.\n", sizeof(long long));
//	printf("float�Ĵ�С��%zd bytes.\n", sizeof(float));
//	printf("double�Ĵ�С��%zd bytes.\n", sizeof(double));
//	printf("long double�Ĵ�С��%zd bytes.\n", sizeof(long double));
//	printf("int�Ĵ�С��%zd bytes.\n", 
//		sizeof(int));
//	float a = 31415.92653589;
//	printf("%f",a);
//	return 0;
//}


//������������
//int main(void)
//{
//	int n = 4;
//	int m = 5;
//	float f = 7.0f;
//	float g = 8.0f;
//
//	printf("%d\n",n,m);
//	printf("%d,%d,%d\n",n);
//	printf("%d,%d\n",f,g);
//	return 0;
//}

//ʹ��ת������
int main(void)
{
	float salary;

	//printf("\aEnter your desired monthly salary:");
	//printf(" $____\b\b\b\b");
	//scanf("%f",&salary);
	//printf("\n\t$%.2f a month is $%.2f a year.",salary,salary*12.0);
	//printf("\rGee!\n\n\n\n\n");
	char a = '9';
	printf("%C", a);
	return 0;

}
#endif


//chapter 3
//code3.c
#if 0
#include<stdio.h>
//void main(void)
//{
//	/*float a = 6.0f;
//	printf("%.1f",a);
//	return 0;*/
//	long a = 100000;
//	printf("%ld\n",a);
//	printf("\\040\n");
//	float log = 2.71828;
//	printf("%.5f",log);
//}


//��1��
//int main(void)
//{
//	int a=2147483647;
//	float b = 3e38f;
//	float c = 0.123e-10f;
//	printf("a=%d,a+1=%d\n",a,a+1);//�������磨������long�ͱ�ʾ�ķ�Χ��
//	printf("b=%f\n",b);							//����������
//	printf("c/2=%f\n\n",c/2);				//����������
//	return 0;
//}


//��2��
//int main(void)
//{
//	int a;
//	printf("������һ��ASCII��ֵ:____\b\b\b\b");
//	scanf("%d",&a);
//	printf("\n\t��Ӧ���ַ���%c",a);
//	printf("\r����!\n\n\n");
//	return 0;
//}

//��3��
//int main(void)
//{
//	printf("\aStartled by the sudden sound, Sally shouted,");      //��char ch='\a';   printf("%c",ch);
//	printf("\n\"By the Great Pumpkin, What was that!\"");
//	return 0;
//}


//��4��
//int main(void)
//{
//	float a;
//	printf("Enter a floating-point value:");
//	scanf("%f",&a);
//	printf("fixed-point notation :%f",a);
//	printf("\nexponential notation :%e",a);
//	printf("\np notation :%.2a\n\n\n",a);
//	return 0;
//}


//��5��
/*int main(void)
{
	float a;
	float b=3.156e7f;

	printf("������������䣺____\b\b\b");
	scanf("%f",&a);
	printf("�������Ӧ�������ǣ�%.0f��\n\n",a*b);

	return 0;
}*/


//��6��
int main(void)                                                              //�������ڿ�ͷ��#define 
{
	float a;

	printf("������ˮ�Ŀ�������_____\b\b\b\b\b");
	scanf("%f", &a);
	float b = a * 950;
	float c = 3.0e-23;
	printf("\n����ˮ���ӵ�������%e\n\n", b / c);

	return 0;
}


//��7��
//int main(void)
//{
//	float a;
//	printf("��������ߣ�Ӣ�磩��______\b\b\b\b\b");
//	scanf("%f",&a);
//	printf("��������%.2f����\n\n",a*2.54);
//
//	return 0;
//}


//��8��
//int main(void)
//{
//	//float a;
//	//printf("�����뱭����______\b\b\b\b\b");
//	//scanf("%f",&a);
//	//printf("%.1fƷ��\n",a/2);
//	//printf("%.1f��˾\n",a*8);
//	//printf("%.1f����\n", a*16);
//	//printf("%.1f����\n", a*16*3);
//	//getchar();
//	//return 0;
//	
//}
#endif


//chapter 4
//code1.c
#if 0
#include<stdio.h>
//#define praise "�����"
//int main(void)
//{
//	char name[60];
//
//	printf("���������ʲô��");
//	scanf("%s",name);
//	printf("Hello,%s.       %s\n\n",name,praise);
//
//	return 0;
//}


//sizeof �� strlen ������
//#include <string.h>
//#define praise "�����"
//int main(void)
//{
//	char name[40];
//
//	printf("��������ǣ�");
//	scanf("%s",name);
//	printf("������%s��%s",name,praise);
//	printf("���������%zd���ַ����ȣ�����ռ%zd���ֽڴ�С",strlen(name),sizeof (name));
//
//	return 0;
//}	


//ʹ���Ѷ���ĳ��������ų�������ʾ������
#define PI 3.14159
int main(void)
{
	float area, circum, radius;
	printf("����������İ뾶�ǣ�\n");
	scanf("%f", &radius);
	area = PI * radius * radius;
	circum = 2 * PI * radius;
	printf("����������ܳ���%8.2f,�����%8.2f", circum, area);
	return 0;
}
#endif


//chapter 4
//code2.c
#if 0
#include<stdio.h>
//ʹ��limit.h��float.hͷ�ļ��ж���ķ��ų�������ʾ������
//#include<limits.h>
//#include<float.h>
//int main(void)
//{
//	printf("Some numer limits for this system:\n");
//	printf("Biggest int:%d\n",INT_MAX);
//	printf("Smallest long long:%lld\n",LLONG_MIN);
//	printf("One byte = %d bits on this system.\n",CHAR_BIT);
//	printf("Largest double=%e\n",DBL_MAX);
//	printf("Smallest normal float:%e\n",FLT_MIN);
//	printf("float precision = %d digits\n",FLT_DIG);
//	printf("float epsilon = %e\n",FLT_EPSILON);
//	return 0;
//}


//ʹ��%g
//int main(void)
//{
//	printf("%g\n",123.45);
//	printf("%g\n",3.141);
//	printf("%g\n", 3.1415); 
//	printf("%g\n", 3.14159); 
//	printf("%g\n", 3.141592); 
//	printf("%g\n", 3.1415926e2); 
//
//	return 0;
//}


//ʹ��ת��˵��
//#define PI 3.141593
//int main(void)
//{
//	int number = 7;
//	float pies = 12.75;
//	int cost = 7800;
//	printf("The %d contestants ate %f berry pies.\n",number,pies);
//	printf("The value of pi is %.2f.\n",PI);
//	printf("Farewell! thou art too dear for my possessing,\n");
//	printf("%c%d\n",'$',2*cost);
//	printf("%zu\n",sizeof(number));
//	printf("%-20s\n",   "abc");
//	printf("%+6.2f\n", -3.14159);
//	printf("%+6.2f\n", 3.14159);
//	printf("% 6.2f\n", -3.14159);
//	printf("%02d\n", -3);
//	printf("%6d\n", 3);
//	printf("%06d\n", 3);
//
//	printf("%#8.0f\n",12345.6789);
//	printf("%#8.0g\n", 12345.6789);
//	return 0;
//}


//�ַ����
//#define PAGES 959
//int main(void)
//{
//	printf("*%d*\n",PAGES);
//	printf("*%2d*\n", PAGES);
//	printf("*%10d*\n", PAGES);
//	printf("*%-10d*\n", PAGES);
//
//	return 0;
//}


//���������η������
//int main(void)
//{
//	const double RENT = 3852.99;
//
//	printf("*%f*\n",RENT);
//	printf("*%e*\n", RENT);
//	printf("*%4.2f*\n", RENT);
//	printf("*%3.1f*\n", RENT);
//	printf("*%10.3f*\n", RENT);
//	printf("*%10.3e*\n", RENT);
//	printf("*%+4.2f*\n", RENT);
//	printf("*%010.2f*\n", RENT);
//
//	printf("**%5d**%5.3d**%05d**%05.3d**\n",6,6,6,6);
//	return 0;
//}


//�ַ�����ʽ
#define �ַ��� "Authentic imitation"
int main(void)
{
	printf("[%2s]\n", �ַ���);
	printf("[%24s]\n", �ַ���);
	printf("[%24.5s]\n", �ַ���);
	printf("[%-24.5s]\n", �ַ���);

	return 0;
}
#endif


//chapter 4
//code3.c
#if 0
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
int main(void)
{
	char ch;
	scanf("%c", &ch);
	printf("%c\n", ch);

	return 0;
}


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
//int main(void)
//{
//	printf("%9d%9d%9d\n",123,456,789);
//	printf("%9d%9d%9d\n", 12, 45622, 79);
//	printf("%9d%9d%9d\n", 12300, 2, 789123);
//	printf("%c%c%c",'H',105,'\41');
//	return 0;
//}
#endif


//chapter 4
//code4.c
#if 0
#include<stdio.h>
//int main(void)
//{
//	char a[30];
//	int b;
//	scanf("%s",&a);
//	printf("%s\n",a);
//	scanf("%d",&b);
//	printf("%d",b);
//
//	return 0;
//}

//
//int main(void)
//{
//	printf("%c%c%c",'H',105,'\41');
//	return 0;
//}


//#define Q "abc"
//int main(void)
//{
//	printf("\"%s\"",Q);
//
//	return 0;
//}


//5.��ӡ���
//#define BOOK "War and Peace"
//int main(void)
//{
//	float cost = 12.99;
//	float percent = 80.0;
//
//	printf("This copy of \"%s\" sells for $%.2f.\n",BOOK,cost);
//	printf("That is %.0f%% of list.", percent);
//
//	return 0;
//}
//



//int main(void)
//{
//	int n;
//	scanf("%*s%d",&n);
//	printf("%d",n);
//
//	return 0;
//}
//

//4.8�����ϰ
//1.
//int main(void)
//{
//	char name1[10];
//	char name2[10];
//
//	printf("�������������\n");
//	scanf("%s",name2);
//	printf("����������գ�\n");
//	scanf("%s",name1);
//	printf("�������(��+��)��%s,%s",name2,name1);
//
//	return 0;
//}



//2.
//int main(void)
//{
//	char name[30];
//	printf("������������֣�");
//	scanf("%s",name);
//	printf("\"%s\"\n",name);
//	printf("\"%20s\"\n",name);
//	printf("\"%-20s\"\n",name);
//	printf("%*s\n",strlen(name)+3, name);
//
//	return 0;
//}


//3.
//int main(void)
//{
//	float a;
//	printf("������һ������ֵ��");
//	scanf("%f",&a);
//	printf("The input is %.1f or %.1e\n",a,a);
//	printf("The input is %+.3f or %.3E\n",a,a);
//
//	return 0;
//}


//4.
//int main(void)
//{
//	float a;
//	char name[20];
//	printf("���������(cm)�����������");
//	scanf("%f  %s",&a,name);
//	printf("%s, you are %.3f (m) tall",name,a/100.0);
//
//	return 0;
//}


//5.
//int main(void)
//{
//	float speed, size;
//	printf("�����������ٶ�(Mb/S),���ļ���С(MB)��_____\b\b\b\b\b");
//	scanf("%f%f",&speed,&size);
//	printf("At %.2f megabits per sencond, a file of %.2f megabytes\n",speed,size);
//	printf("downloads in %.2f seconds.\n",size/(speed/8));
//	return 0;
//}


//6.
//#include <string.h>
//int main(void)
//{
//	char name1[20];
//	char name2[20];
//	
//	printf("�������û�������");
//	scanf("%s",name2);
//	printf("�������û����գ�");
//	scanf("%s",name1);
//	printf("%s %s\n",name2,name1);
//	printf("%*zd %*zd\n\n",strlen(name2),strlen(name2),strlen(name1),strlen(name1));  // ��û��дͷ�ļ�����%zd������д���
//	printf("%-s %-s\n", name2, name1);
//	printf("%-*zd %-*zd\n\n",strlen(name2),strlen(name2),strlen(name1),strlen(name1));
//
//	return 0;
//}


//7.
//#include <float.h>
//int main(void)
//{
//	float a = 1.0 / 3.0;
//	double b = 1.0 / 3.0;
//	printf("��ʾС�����6λ��%.6f\n",a);
//	printf("��ʾС�����12λ��%.12f\n", a);
//	printf("��ʾС�����16λ��%.16f\n\n\n", a);
//	printf("��ʾС�����6λ��%.6f\n", b);
//	printf("��ʾС�����12λ��%.12f\n", b);
//	printf("��ʾС�����16λ��%.16f\n", b);
//	printf("float precision = %d digits\n",FLT_DIG);
//	printf("double preision = %d digits\n",DBL_DIG);
//
//	return 0;
//}


//8.
#define YINLI_TO_QIANMI    1.609
#define JIALUN_TO_SHENG 3.785
int main(void)
{
	float mileage, jialun;
	float qianmi, sheng, consume;

	printf("���������е����(Ӣ��)�����ĵ�������(����)��");
	scanf("%f %f", &mileage, &jialun);
	printf("����ÿ����������ʻ��Ӣ����Ϊ��");
	printf("%.1fӢ��/����,", mileage / jialun);
	qianmi = mileage * YINLI_TO_QIANMI;
	sheng = jialun * JIALUN_TO_SHENG;
	consume = sheng / qianmi * 100;
	printf("�൱��ÿ�ٹ�������������Ϊ��");
	printf("%.1f��/100����\n\n\n", consume);
	return 0;
}
#endif


//chapter 5
//code1.c
#if 0
#include<stdio.h>
//shoes ����
//#define ADJUST 7.31
//int main(void)
//{
//	const double SCALE = 0.333;
//	double shoe, foot;
//
//	printf("shoe size (men's)     foot length\n");
//	shoe = 3.0;
//	while (shoe < 18.5)
//	{
//		foot = SCALE * shoe + ADJUST;
//		printf("%10.1f %15.2f inches\n",shoe,foot );
//		shoe += 1;
//	}
//
//	return 0;
//}


//���ظ�ֵ
//int main(void)
//{
//	int a, b, c;
//	a = b = c = 10;
//	printf("%5d%5d%5d",a,b,c);
//	return 0;
//}


//����1~20��ƽ��
//int main(void)
//{
//	int num = 1;
//	while (num < 21)
//	{
//		printf("%4d%6d\n",num,num*num);
//		num++;
//	
//
//	return 0;
//}


//ָ������
//int main(void)
//{
//	const double CROP = 2E16;
//	double current, total;
//	int count = 1;
//
//	printf("square         grains            total               ");
//	printf("fraction of   \n");
//	printf("                added           grains               ");
//	printf("world total\n");
//	total = current = 1.0;
//
//	printf("%4d %17.2E %16.2E %28.16f%%\n", count, current, total, total / CROP*100);
//
//	while (count < 64)
//	{
//		count++;
//		current = 2.0 * current;
//		total = total + current;
//		printf("%4d %17.2E %16.2E %28.16f%%\n",count,current,total,total/CROP*100);
//	}
//
//	return 0;
//}


//����
//int main(void)
//{
//	printf("����������5/4  6/3  7/4\n");
//	printf("�����  ��  %d   %d    %d\n",5/4,6/3,7/4);
//	printf("������������5/4    6/3   7/4\n");
//	printf("�����  ��  %.2f  %.2f  %.2f", 5./4., 6. / 3., 7./ 4.);
//
//	return 0;
//}


//���ȼ�����
//int main(void)
//{
//	int top, score;
//	top = score = -(2 + 5) * 6 + (4 + 3 * (2 + 3));
//	printf("top=%d, score=%d\n",top,score);
//
//	return 0;
//}


//sizeof size_t
//int main(void)
//{
//	int n = 0;
//	size_t intsize;
//
//	intsize = sizeof(int);
//	printf("n=%d, n has %zd bytes; all ints have %zd bytes;\n",n,sizeof n,intsize);
//	return 0;
//}


//����ģ�����%������ת���ɷֺ���
//int main(void)
//{
//	int sec, min, left;
//
//	printf("������ת���ɷ��Ӻ��룡\n");
//	scanf("%d",&sec);
//	while (sec > 0)
//	{
//		min = sec / 60;
//		left = sec % 60;
//		printf("%d seconds is %d minutes, %d seconds.\n",sec,min,left);
//		printf("Enter next value (<=0 to quit):\n");
//		scanf("%d",&sec);
//	}
//	printf("Done!");
//	return 0;
//}
#endif


//chapter 5
//code2.c
#if 0
#include <stdio.h>
//++��ǰ׺�ͺ�׺������
//int main(void)
//{
//	int a, b;
//	a = b = 1;
//	int a_post, pre_b;
//
//	a_post = a++;
//	pre_b = ++b;
//	printf("a   a_post   b    pre_b\n");
//	printf("%1d%5d%8d%5d\n",a,a_post,b,pre_b);
//
//	return 0;
//}


//�ݼ������
//int main(void)
//{
//	int count = 101;
//	while (--count > 0)
//	{
//		printf("������%d��\n",count);
//		printf("����1��,\n");
//		printf("��ʣ%d��\n\n",count-1);
//			
//	}
//
//		return 0;
//}


//��������
//int main(void)
//{
//	int n,y;
//	n = 3;
//	y = n+++n++;
//	printf("y=%d, n=%d",y,n);
//
//	return 0;
//}


//����ǰ20�������ĺ�
//int main(void)
//{
//	int count, sum;
//
//	count = 0;
//	sum = 0;
//	while (count++ < 20)
//	{
//		sum = sum + count;
//		printf("sum=%d\n",sum);
//
//	}
//
//	return 0;
//}


//�����͸������
//int main(void)
//{
//	int index, sam;
//	index = 0;
//	//while (index++ < 10)
//	//	sam = 10 * index + 2;
//	//printf("sam=%d\n",sam);
//	while (index++ < 10)
//	{
//		sam = 10 * index + 2;
//		printf("sam=%d\n",sam);
//	}
//	return 0;
//}


//�Զ�����ת��
//int main(void)
//{
//	char ch;
//	int i;
//	float fl;
//
//	fl = i = ch = 'C';
//	printf("ch = %c, i = % d, fl = %2.2f\n ",ch,i,fl);
//	ch = ch + 1;
//	i = fl + 2 * ch;
//	fl = 2.0 * ch + i;
//	printf("ch = %c, i = %d, fl = %2.2f\n",ch,i,fl);
//	ch = 1107;
//	printf("Now ch = %c\n",ch);
//	ch = 80.89;
//	printf("Now ch = %c\n",ch);
//
//	return 0;
//}


//ǿ������ת��
//int main(void)
//{
//	int mice1, mice2;
//	mice1 = 1.6 + 1.7;
//	printf("%d\n",mice1);
//	mice2 = (int)1.6  + (int)1.7;
//	printf("%d\n", mice2);
//
//	return 0;
//}


//����һ����һ�������ĺ���
//void pound(int n);
//int main(void)
//{
//	int times = 5;
//	char ch = '!';
//	float f = 6;
//
//	pound(times);
//	pound(ch);
//	pound(f);
//
//	return 0;
//}
//void pound(int n)
//{
//	while (n-- > 0)
//	{
//		printf("#");
//	}
//	printf("\n");
//}
#endif


//chapter 5
//code3.c
#if 0
#include <stdio.h>
//���ܲ��ߵĳ���
const int S_PER_M = 60;
const int S_PER_H = 3600;
const double M_PER_K = 0.62137;
int main(void)
{
	double distk, distm;
	double rate;
	int min, sec;
	int time;
	double mtime;
	int mmin, msec;

	printf("��������ܻ���Ӣ��͹������ÿӢ����ʱ���ٶȣ�Ӣ��/Сʱ��\n");
	printf("���������ܹ��Ĺ�������");
	scanf("%lf", &distk);
	printf("�����������ʱ\n");
	printf("�����������\n");
	scanf("%d", &min);
	printf("����������\n");
	scanf("%d", &sec);

	time = min * S_PER_M + sec;
	distm = M_PER_K * distk;
	rate = distm / ((double)time / S_PER_H);//���ã�double���Ļ����ٶ���infinite
	mtime = time / distm;
	mmin = mtime / S_PER_M;
	msec = (int)mtime % S_PER_M;

	printf("����%1.2f km (%1.2f Ӣ��) Ҫ %d ��, %d �롣\n", distk, distm, min, sec);
	printf("���൱����һӢ����ʱ%d��%d�롣\n", mmin, msec);
	printf("���ƽ���ٶ���%1.2f(Ӣ��/Сʱ)��\n", rate);

	return 0;
}
#endif


//chapter 5
//code4.c
#if 0
#include <stdio.h>
//int main(void)
//{
//	int x;
//	x = (2 + 3) * 10.5;
//	printf("%d",x);
//
//	return 0;
//}


//6.
//#define FORMAT "%s C is cool!\n"
//int main(void)
//{
//	printf(FORMAT,FORMAT);
//	printf("%s C is cool!\n","%s C is cool!\n");
//	return 0;
//}


//9.
//int main(void)
//{
//	��һ
//	int n = 96;
//	while (n++ < 103)
//		printf("%5c",n);
//	
//	//int c = 141;
//	//while (c++ < 147)
//	//	printf("%c",'\c');//���У�c�������
//
//	����
//	char n = 'a' - 1;
//	while (n++ < 'g')
//		printf("%5c",n);
//	return 0;
//}


//�����ϰ
//1.
//#define HOUR 60
//int main(void)
//{
//	int min1, min2, xiaoshi;
//	printf("��������ܰѷ���ת����Сʱ����ӵ���ʽ\n");
//	printf("���������ֵ��");
//	scanf("%d",&min1);
//	while (min1 > 0)
//	{
//		xiaoshi = min1 / HOUR;
//		min2 = min1 % HOUR;
//		printf("%d�����൱��%dСʱ%d����\n",min1,xiaoshi,min2);
//		printf("��������һ������ֵ��");
//		scanf("%d",&min1);
//	}
//	printf("���������Ч��\n");
//	return 0;
//}


//2.
//int main(void)
//{
//	int n = 0;
//	int a;
//	printf("������һ��������");
//	scanf("%d",&a);
//	while (n++ <11)
//	{
//		printf("%d\t",a);
//		a++;
//	}
//
//	return 0;
//}


//3.
//int main(void)
//{
//	int day, week, day1;
//	printf("������������____\b\b\b\b");
//	scanf("%d",&day);
//	while (day > 0)
//	{
//		week = day / 7;
//		day1 = day % 7;
//		printf("%d days are %d weeks, %d days.\n",day,week,day1);
//		printf("������һ��������");
//		scanf("%d",&day);
//	}
//	printf("Done!\n");
//	return 0;
//}


//4.
//#define FEET_TO_CM 30.48
//#define INCH_TO_CM 2.54
//int main(void)
//{
//	float cm, feet, inch;
//	int yushu;
//	printf("��������ߣ���λ�����ף���___\b\b\b");
//	scanf("%f",&cm);
//	while (cm > 0)
//	{
//		feet = cm / FEET_TO_CM;
//		yushu = (int)cm % (int)FEET_TO_CM;//182%30����6��2����ʵ��ӦΪ182/30.48���޷���������
//		inch = yushu / INCH_TO_CM;
//
//		printf("%.1f cm = %d feet, %.1f inches.\n",cm,(int)feet,inch);
//		printf("��һ�������ǣ�������һ��С�ڻ����0���������˳�����");
//		scanf("%f",&cm);
//	}
//	printf("Done!");
//
//	return 0;
//}

//4.����
//#define FEET_TO_CM 30.48
//#define INCH_TO_CM 2.54
//int main(void)
//{
//	float cm, inch;
//	int feet, yushu;
//	printf("��������ߣ���λ�����ף���___\b\b\b");
//	scanf("%f", &cm);
//	while (cm > 0)
//	{
//		feet = cm / FEET_TO_CM;//������ת��������
//		//yushu = (int)cm % (int)FEET_TO_CM;//182%30����6��2����ʵ��ӦΪ182/30.48���޷���������
//		//����Ҫyushu 
//		inch = (cm - FEET_TO_CM * feet) / INCH_TO_CM;//�˻��㲻��Ҫȡ����㷨
//
//		printf("%.1f cm = %d feet, %.1f inches.\n", cm, feet, inch);
//		printf("��һ�������ǣ�������һ��С�ڻ����0���������˳�����");
//		scanf("%f", &cm);
//	}
//	printf("Done!");
//
//	return 0;
//}



//5.
//int main(void)
//{
//	int count, sum;
//
//	count = 0;
//	sum = 0;
//	int day;
//	printf("����������____\b\b\b\b");
//	scanf("%d",&day);
//	while (count++ < day)
//	{
//		sum = sum + count;
//		printf("sum= %d \n",sum);
//	}
//	return 0;
//}


//6.
//int main(void)
//{
//	int count,sum;
//	count = sum = 0;
//	int count1=1;
//	int day;
//
//	printf("����������____\b\b\b\b");
//	scanf("%d",&day);
//	
//	while (count++ < day)                                   //��count��day������ѭ������
//	{
//		sum = sum + count1*count1;
//		printf("count = %-10d   sum = %-10d    \n",count1*count1, sum);
//		count1++;
//	}
//	return 0;
//}
////��������count--���Ӵ�С���ۼӣ����Լ��ٶ���ı�������


//7.
//int main(double n)
//{
//	double dou;
//	printf("������һ��double���͵�����_____\b\b\b\b\b");
//	scanf("%lf",&dou);
//	n = dou;
//	printf("����ֵ�ǣ�%lf",dou*dou*dou);
//
//	return 0;
//}

//7.����
//void lifang(double x);
//int main (void)
//{
//	double y;
//	printf("������һ��double���͵�����_____\b\b\b\b\b");
//	scanf("%lf", &y);
//	lifang(y);
//
//	return 0;
//}
//void lifang(double x)
//{
//	x = x * x * x;
//	printf("%lf",x);
//}


//8.
//int main(void)
//{
//	int a, b;
//	printf("This program computes moduli.\n");
//	printf("Enter an integer to serve as the second operand:");
//	scanf("%d",&b);
//	printf("Now enter the first operand:");
//	scanf("%d",&a);
//	while (a > 0 && b > 0)
//	{
//		printf("%d %% %d is %d\n",a,b,a%b);
//		printf("Enter next number for first operand ( <= 0 to quit ) :");
//		scanf("%d",&a);
//	}
//	printf("Done!\n");
//
//	return 0;
//}


//9.
//void Temperatures(double t);
//int main(void)
//{
//	double huashi;
//	int a;
//
//	printf("������һ�������¶ȣ�");
//	a = scanf("%lf",&huashi);
//	
//	       while (a == 1)                                                   //������while(scanf("%lf",%a)==1)
//			{
//			printf("�����¶ȣ�%.2lf\n", huashi);
//			Temperatures(huashi);
//		/*	printf("�����¶ȣ�%.2lf\n", sheshi);
//			printf("�����¶ȣ�%.2lf\n", kaishi);    */                                        //�˴�����д��Щ��䣬��Ϊ���ú����ж���ı����Ǿֲ�����	                                                                                
//			printf("������һ�������¶�ֵ������q���˳���");                          // ����ֵ�����ı仯Ҳֻ�ڵ��ú�������Ч��
//			a=scanf("%lf",&huashi);
//			}
//	printf("Done!\n");
//	return 0;
//}
////void Temperatures(double t)
////{
////	const double sheshi = 5.0 / 9.0 * (t - 32.0);
////	const double kaishi = sheshi + 237.16;
////	printf("�����¶ȣ�%.2lf\n", sheshi);
////	printf("�����¶ȣ�%.2lf\n", kaishi);
////}
//
////��
//void Temperatures(double t)
//{
//	const double H_TO_S = 32.0;
//	const double C_TO_K = 273.16;
//	double sheshi, kaishi;
//	sheshi = 5.0 / 9.0 * (t - H_TO_S);
//	kaishi = sheshi + C_TO_K;
//	printf("�����¶ȣ�%.2lf\n", sheshi);
//	printf("�����¶ȣ�%.2lf\n", kaishi);
//}
//



//
double Temperatures(double t);
int main(void)
{
	double huashi;
	int a;

	printf("������һ�������¶ȣ�");
	a = scanf("%lf", &huashi);

	while (a == 1)                                                   //������while(scanf("%lf",%a)==1)
	{
		printf("�����¶ȣ�%.2lf\n", huashi);
		Temperatures(huashi);
		printf("�����¶ȣ�%.2lf\n", Temperatures(huashi));//ע��˴��Ĵ���ӡ���д��sheshi

		printf("������һ�������¶�ֵ������q���˳���");
		a = scanf("%lf", &huashi);
	}
	printf("Done!\n");
	return 0;
}

double Temperatures(double t)
{
	const double H_TO_S = 32.0;
	const double C_TO_K = 273.16;
	double sheshi, kaishi;
	sheshi = 5.0 / 9.0 * (t - H_TO_S);
	kaishi = sheshi + C_TO_K;

	return sheshi;
}
//һ��returnֻ�ܷ���һ��ֵ��
#endif


//chapter 6
//code1.c
#if 0
#include <stdio.h>
//�������
//int main(void)
//{
//	long num;
//	long sum=0L;
//	int status;
//
//	printf("������һ��������");
//	status = scanf("%ld",&num);
//	while (status == 1)
//	{
//		sum = sum + num;
//		printf("����������һ������������q���˳����򣩣�");
//		status = scanf("%ld", &num);
//	}
//	printf("��Щ�����ĺ�Ϊ%ld",sum);
//	return 0;
//}


//ע��while()�ֺŵ�λ��
//int main(void)
//{
//	int n = 0;
//	while (n++ < 3);
//	printf("n is %d",n);
//
//	return 0;
//}


//�������Ƚ�
//#include <math.h>
//int main(void)
//{
//	const double PI = 3.1415927;
//	double response;
//
//	printf("What is the value of pi ?\n");
//	scanf("%lf",&response);
//
//	while (fabs(response - PI) > 0.0001)
//	{
//		printf("Try it again !\n");
//		scanf("%lf",&response);
//	}
//	printf("Close enough !\n");
//
//	return 0;
//}


//��ЩֵΪ��
//int main(void)
//{
//	int n = 3;
//
//	while (n)
//	{
//		printf("%2d is ture\n", n--);
//	}
//	printf("%2d is false\n",n);
//
//	n = -3;
//	while (n)
//	{
//		printf("%2d is true\n",n++);
//	}
//	printf("%2d is false\n",n);
//
//	return 0;
//}


//����=���ᵼ������ѭ��
//int main(void)
//{
//	long num;
//	long sum=0L;
//	int status;
//
//	printf("������һ��������");
//	status = scanf("%ld",&num);
//	while (status = 1)
//	{
//		sum = sum + num;
//		printf("����������һ������������q���˳����򣩣�");
//		status = scanf("%ld", &num);
//	}
//	printf("��Щ�����ĺ�Ϊ%ld",sum);
//	return 0;
//}


//ʹ��_Bool
int main(void)
{
	long num;
	long sum = 0L;
	_Bool input;

	printf("������һ��������");
	input = scanf("%ld", &num);
	while (input)
	{
		sum = sum + num;
		printf("����������һ������������q���˳����򣩣�");
		input = scanf("%ld", &num);
	}
	printf("��Щ�����ĺ�Ϊ%ld", sum);
	return 0;
}
#endif


//chapter 6
//code2.c
#if 0
#include <stdio.h>
//forѭ��
//int main (void)
//{
//	const int NUMBER = 10;
//	int count;
//	for (count = 1; count <= NUMBER; count++)
//		printf("123\n");
//
//	return 0;
//}


//ʹ��forѭ������һ��������
//int main(void)
//{
//	int num;
//
//	printf("   n    n�����η�\n");
//	for (num = 1; num <= 6; num++)
//		printf("%5d %6d\n",num,num*num*num);
//
//	return 0;
//}


//���ַ��������ּ���
//int main(void)
//{
//	char ch;
//	for (ch = 'a'; ch <= 'z'; ch++)
//		printf("The ASCII value for %c is %d.\n",ch,ch);
//
//	return 0;
//}


//��һ�����ʽҲ����ʹ��printf()
//int main(void)
//{
//	int num = 0;
//
//	for (printf("Keep entering numbers ! \n"); num != 6; )
//		scanf("%d", &num);
//	printf("That's the one I want!\n");
//	return 0;
//}


//�����ʷ�
//int main(void)
//{
//	const int FIRST = 46;
//	const int NEXT = 20;
//	int kg, cost ;
//	for (kg = 1, cost = FIRST; kg <= 16; kg++, cost += NEXT)
//		printf("%5d $%4.2f \n",kg, cost/100.0);
//
//
//	return 0;
//}


//���ű��ʽ
//int main(void)
//{
//	int house1, house2;
//	house1 = 249, 500;
//	house2 = (249, 500);
//	printf("%d   %d",house1,house2);
//
//
//	return 0;
//}


//�����еĺ�
//int main(void)
//{
//	int count;
//	double time, yiersiliuba;
//	int limit;
//	printf("Enter the number of terms you want :");
//	scanf("%d",&limit);
//	for (count = 1, time = 0 , yiersiliuba = 1 ; count <= limit ; count++ , yiersiliuba *= 2)
//	{
//		time += 1.0 / yiersiliuba;
//		printf("time = %f when terms = %d.\n",time,count);
//	}
//	 
//	return 0;
//}


//��������ѭ��do while
//int main(void)
//{
//	const int secret_code = 13;
//	int a;
//	do
//	{
//		printf("������²�����֣�");
//		scanf("%d",&a);
//	} while (a!= secret_code); 
//	printf("��ϲ�㣬�¶��ˣ�\n");
//
//	return 0;
//}


//ʹ��Ƕ��ѭ��
//#define ROWS 6
//#define COLUMN 10
//int main(void)
//{
//	int row;
//	char ch;
//	for (row = 1; row <= ROWS; row++)
//	{
//		for (ch = 'a'; ch < 'a' + COLUMN; ch++)
//			printf("%c",ch);
//		printf("\n");
//	}
//
//	return 0;
//}


//�����ⲿѭ����Ƕ��ѭ��
//int main(void)
//{
//	const int ROWS = 6;
//	const int COLUMN = 6;
//	int row;
//	char ch;
//	for (row = 0; row < ROWS; row++)
//	{
//		for (ch = 'a'+row; ch < 'a' + COLUMN; ch++)
//			printf("%c", ch);
//		printf("\n");
//	}
//
//	return 0;
//}


//ʹ��ѭ����������
#define SIZE 10
#define PAR 72
int main(void)
{
	int index, score[SIZE];
	int sum = 0;

	printf("������%d���߶��������\n", SIZE);
	for (index = 0; index < SIZE; index++)
		scanf("%d", &score[index]);
	printf("������������ǣ�\n");
	for (index = 0; index < SIZE; index++)
		printf("%3d", score[index]);
	printf("\n");
	for (index = 0; index < SIZE; index++)
		sum += score[index];
	float average = (float)sum / SIZE;
	printf("�ܷ���%d��ƽ������%.2f\n", sum, average);
	printf("��㣨ƽ���ֺͱ�׼��֮���%.0f\n", average - PAR);

	return 0;
}
#endif


//chapter 6
//code3.c
#if 0
#include <stdio.h>
//���������������ݣ������ؼ�������ʹ�ú�������ֵ��ѭ����
//double power(double n, int p);
//int main(void)
//{
//	double x;
//	int exp;
//	
//	printf("������һ�����ֺ͸����ֵ�������������\n");
//	printf("������q���˳�����                 ");
//	while (scanf("%lf%d", &x,& exp) == 2)
//	{
//		printf("%f��%d�η���%f",x,exp, power(x, exp));
//		printf("������һ�����֣�");
//	}
//	printf("Done!");
//
//	return 0;
//}
//double power(double n, int p)
//{
//	double pow = 1;
//	int i;
//
//	for (i = 1; i <= p; i++)
//		pow *= n;
//
//	return pow;
//}


//��ϰ��6.
#define ROWS 4
#define COLUMNS 8
int main(void)
{
	int i, j;
	for (i = 1; i <= ROWS; i++)
	{
		for (j = 1; j <= COLUMNS; j++)
			printf("$");
		printf("\n");
	}

	return 0;
}
#endif


//chapter 6
//code4.c
#if 0
#include <stdio.h>
//�����ϰ
//1.
//int main(void)
//{
//	int i;
//	char ch[26];
//	for (i = 0; i <26; i++)
//		ch[i] = 'a' + i;
//	for (i = 0; i < 26; i++)
//	     printf("%c\n",ch[i]);
//	return 0;
//}


//2.
//int main(void)
//{
//	int i, j;
//	for (i = 1; i <= 5; i++)
//	{
//		for (j = 1; j <= i; j++)
//			printf("$");
//	
//		printf("\n");
//	}
//
//	return 0;
//}


//3.
//int main(void)
//{
//	int i,j;
//	for (i = 0; i <= 5; i++)
//	{
//		for (j = 'F'; j >= 'F' - i; j--)
//			printf("%c",j);
//		printf("\n");
//	}
//
//	return 0;
//}
//����
//for (i = 1; i <= 6; i++)
//{
//	for (j = 1, c = 'F';            j <= i;			 j++, c--)//����һ���±���c��
//		printf("%c",c);
//	printf("\n");
//}


//4.
//int main(void)
//{
//	int i, j,k;
//	for (i = 0; i <=5;i++)
//	{
//		for (j =k= 'A'; j <= k+ i; k=j, j++)
//			printf("%c",j);
//		printf("\n");
//	}
//
//	return 0;
//}
//int main(void)
//{
//	int i;
//	char ch[6];
//	for (i = 0; i < 6; i++)
//		ch[i] = i;
//
//	int j, k;
//	int l=0;
//	for (j = 'A'; j <= 'U'; j++)
//	{
//		printf("%c", j);
//		l++;
//		k = 1;
//		if (k++ <= ch[l])
//			;
//		else
//			printf("\n");
//	}
//
//	return 0;
//}
//�ѵ㣺Ƕ��ѭ���������ѭ����Ƕ��һ��ÿ��1��2��3����������ĸ�����\n��ѭ����
//4.����
//int main(void)
//{
//	int i, j;
//	char ch = 'A';
//
//	for (i = 1; i <= 6; i++)//����6��
//	{
//		for (j = 1;			 j <= i;			j++, ch++)//�ص㣺�ڲ�ѭ��ʹ�õ�ǰ��i������ѭ������
//			printf("%c",ch);
//		printf("\n");
//	}
//
//	return 0;
//}


//5.
//int main(void)
//{
//	char ch;
//	printf("������E�Կ�ʼ����");
//	scanf("%c",&ch);
//
//	int i,j,k,l;
//
//	while (ch == 'E')
//	{
//		for (i = 1; i <= 5; i++)
//		{
//			for (j = 1; j <= 5 - i; j++)
//			{
//				printf(" ");
//				for (k = 'A'; k <= 'A' + i - 1; k++)
//				{
//					printf("%c", k);
//					for (l = 'A' + i - 1; l >= 'A'; l--)//Ƕ�׹��࣬���ˡ�
//						printf("%c", l);
//				}
//			}
//			printf("\n");
//		}
//		scanf("%c",&ch);
//	}
//	printf("Done !\n");
//
//	return 0;
//}
//5.����
//int main(void)
//{
//	char ch1,ch2;
//	printf("���������ӡ����ĸ�������ײ�����ģ���д����ĸ��");
//	scanf("%c",&ch2);
//
//	int i, j, num;
//	ch1 = 'A';
//	num = ch2 - ch1 + 1;//�����ӡ������
//
//	for (i = 1; i <= num; i++)//��ӡ��
//	{
//		for (j = 1; j <= num - i; j++)//��ӡ�ո񣬣�ע����ӡ�ո�������forѭ�������ڽ���������ӡ�ո񼴿ɣ��Ҳ಻�ã�
//			printf(" ");						  //					          (��һ��A���Ŀո��������������仯��		
//			
//		for (ch1 = 'A';		 j <= num;		j++,ch1++)//��ӡ����j�����ٳ�ʼ��
//			printf("%c",ch1);
//		
//		for(ch1-=2,j=1;			j<i;		j++,ch1--)//��ӡ����j��1��������������j��ch1����++��ȴ�ӡ��ֵ��1�����Ҫ��2.
//			printf("%c", ch1);								 //��Ϊj<=i,����ӡA֮ǰ��ֵ@
//																		 //j�Ĳ��������ı�д���ѵ㡣
//	printf("\n");
//	}																	
//
//	return 0;
//}



//6.
//int main(void)
//{
//	int a, b;
//	printf("������������ޣ�");
//	scanf("%d", &a);
//	printf("������������ޣ�");
//	scanf("%d",&b);
//	printf("\n\n");
//
//	int c;
//	printf("����  ƽ��  ����\n");
//	for(c=a;c<=b;c++)
//	printf("%5d%5d%5d\n",c,c*c,c*c*c);
//
//	return 0;
//}


//7.
//int main(void)
//{
//	char ch[20];
//	printf("������һ�����ʣ�_____\b\b\b\b\b");
//	scanf("%s",ch);                                                        //�˴�����forѭ�������鸳ֵ����Ϊ��ȷ��Ҫ�����ַ��ĸ���
//	int i;
//		
//	for (i = strlen(ch)-1; i >= 0; i--)
//		printf("%c",ch[i]);
//	printf("\n\n\n");
//	return 0;
//}


//8.
//int main(void)
//{
//	float a, b;
//	int c;
//
//	printf("������������������");
//	c=scanf("%f%f",&a,&b);
//
//	while (c == 2)
//	{
//		printf("%lf\n",(a-b)/(a*b));
//		printf("�������������������������q���˳�����");
//		c = scanf("%f%f", &a, &b);
//	}
//
//	printf("Done ��\n");
//	
//	return 0;
//}


//9.
double jisuan(float a, float b);
int main(void)
{
	float a, b;
	int c;

	printf("������������������");
	c = scanf("%f%f", &a, &b);

	while (c == 2)
	{

		printf(" (a - b) / (a * b)����ǣ�%lf", jisuan(a, b));
		printf("�������������������������q���˳�����");
		c = scanf("%f%f", &a, &b);
	}

	printf("Done ��\n");

	return 0;
}
double jisuan(float a, float b)
{
	double d;
	d = (a - b) / (a * b);
	return d;
}
#endif


//chapter 6
//code5.c
#if 0
#include <stdio.h>
//10.
//int jisuan(int x, int y);
//int main(void)
//{
//	int a, b;
//	
//	printf("Enter lower and upper integer limits:");
//	scanf("%d%d",&a,&b);
//	while (a < b)
//	{
//		printf("The sums of the squares from %d to %d is %d\n", a * a, b * b, jisuan(a , b ));
//		printf("Enter next set of limits:");
//		scanf("%d%d", &a, &b);
//	}
//	printf("Done\n");
//	return 0;
//}
//int jisuan(int x, int y)
//{
//	int i;
//	int sum=x*x;
//	for (i = x+1 ; i <= y; i++)
//		sum += i*i;
//	return sum;
//}


//11.
//int main(void)
//{
//	int shuzu[8];
//	int last;
//	int i;
//	printf("������˸�������");
//	scanf("%s",shuzu);                            //���ܴ�����ַ���������123��һ������1 2 3 ���м��ÿո����������3����
//	last=strlen(shuzu)-1;
//	for (i = last; i >= 0; i--)
//		printf("%d",shuzu[i]);
//	return 0;
//}

//int main(void)
//{
//	int shuzu[8];
//	int last;
//	int i;
//	printf("������˸�������");
//	for (i = 0; i <= 7; i++)
//		scanf("%d", &shuzu[i]);
////	last = strlen(shuzu) - 1;
//	for (i = 7; i >= 0; i--)
//		printf("%d", shuzu[i]);
//
//	printf("\n\nDone !");
//
//	return 0;
//}


//12.1
//int main(void)
//{
//	int number;
//	float i, j;
//	int k;
//	float sum;
//
//	printf("�����������");
//
//	while (scanf("%d", &number) == 1)
//	{
//		for (i = 1.0, j = 1.0, sum = 0, k = 1; k <= number; j += 1.0, k++)
//		{
//			sum += i / j;
//		}
//		printf("1.0+1.0/2.0+1.0/3.0+....(�ӵ���%d��)", number);
//		printf("��Ϊ%f", sum);
//		printf("\n\n���������(����q���˳�)��");
//	}
//
//	return 0;
//}
//12.2
//int main(void)
//{
//	int number;
//	float i, j;
//	int k;
//	float sum;
//
//	printf("�����������");
//
//	while (scanf("%d", &number) == 1)
//	{
//		for (i = 1.0, j = 1.0, sum = 0, k = 1; k <= number; j += 1.0, k++)
//		{
//			sum = sum+ (     zhengfuhao(k)    )* i / j;
//		}
//		printf("1.0-1.0/2.0+1.0/3.0-....(����%d��)", number);
//		printf("��Ϊ%f", sum);
//		printf("\n\n���������(����q���˳�)��");
//	}
//
//	return 0;
//}
//int zhengfuhao(int a)
//{
//	int l,m;
//	for (l =-1,m=1; m <= a; m++)
//		l *= (-1);
//
//	return l;
//}
//12.3�������е��ܺ�
//int main(void)
//{
//	int number;
//	float i, j;
//	int k;
//	float sum=2.0;
//
//	printf("������������>=3����");
//
//	while (scanf("%d", &number) == 1)
//	{
//		for (i = 2.0, j = 1.0, k = 3;			k <= number;			j += 1.0, k++)
//		{
//			sum += i / (2*j+1.0);
//		}
//		printf("1.0+1.0+2.0/3.0+2.0/5.0+2.0/7.0+....(�ӵ���%d��)", number);
//		printf("��Ϊ%f", sum);
//		printf("\n\n���������(����q���˳�)��");
//	}
//
//	return 0;
//}


//13.
//int main(void)
//{
//	int shuzu[8];
//	int i,index;
//	for (i = 1, index = 0;		 index <= 7;			index++)
//	{
//		i = i * 2;
//		shuzu[index] = i;
//	}
//
//	/*int a;
//	do
//	{
//		for (index = 0; index <= 7; index++)
//		printf("%5d",shuzu[index]);
//		printf("\n����q�Խ�������\n");
//
//	} while (scanf("%d",&a)  ==1);*/
//	//����
//	index = 0;
//	do
//	{
//		printf("%5d",shuzu[index++]);
//	} while (index<8);
//
//	printf("\nDone!");
//
//	return 0;
//}


//14.
//int main(void)
//{
//	double shuzu1[8], shuzu2[8];
//	int index;
//
//	printf("������8��ֵ��");
//	for(index=0;index<=7;index++)
//		scanf("%lf",&shuzu1[index]);//��д����%f����������д���Ҫע����������ƥ��
//	
//	shuzu2[0] = shuzu1[0];
//	for (index = 1; index <= 7; index++)
//		shuzu2[index] = shuzu1[index] + shuzu2[index - 1];               //������P80 Ƕ��ѭ��
//	
//	for (index = 0; index <= 7; index++)
//		printf("%6.2lf",shuzu1[index]);
//	printf("\n");
//	
//	for (index = 0; index <= 7; index++)
//		printf("%6.2lf", shuzu2[index]);
//	printf("\n");
//
//	return 0;
//}


//15.
//int main(void)
//{
//	char ch[256];
//	int index;
//
//	printf("���������ݣ�");
//	do
//	{
//		for (index = 0; index <= 255; index++)
//		scanf("%c", &ch[index]);								//������һֱ��forѭ���У�ֱ���������������
//	} while (ch[index] != '\n');
//
//	for (index = strlen(ch); index >= 0; index--)
//		printf("%c", ch[index]);
//
//	return 0;
//}
//int main(void)
//{
//	char ch[255];
//	int index;
//
//	printf("���������ݣ�");
//
//	for (index = 0; index <= 255; index++)
//	{
//		
//		
//			scanf("%c", &ch[index]);//�����do while ���'\n'
//		
//	}
//
//	for (index = strlen(ch); index >= 0; index--)
//		printf("%c", ch[index]);
//
//	return 0;
//}
//
//15.����
//#include <string.h>
//int main(void)
//{
//	char ch[256];
//	int index=-1;
//
//	printf("���������ݣ�");
//	/*do
//	{
//	  scanf("%c", &ch[index]);								
//	} while (++index, ch[index-1] != '\n');
//	  */
//	do
//	{
//		index++;
//		scanf("%c", &ch[index]);
//	} while (ch[index] != '\n');
//
//	/*do
//	{
//		scanf("%c", &ch[index]);
//		index++;
//	} while (ch[index] != '\n' );*/  //������ⲻ��'\n'����Ϊindex������ƶ���һλ
//
//	printf("���ݵ�����ǣ�");
//	for (index--; index >= 0; index--)					//��д��index=strlen(ch)-1,������ĵ�һ����������ƫ�Ƶ�ַΪ255
//		printf("%c", ch[index]);								//�ĵ�Ԫ�洢�����ݡ�
//
//	return 0;
//}


//16.
//int main(void)
//{
//	float Da=100.0, De=100.0;
//	int n,i;
//	/*printf("����������");
//	scanf("%d",&n);
//
//	printf("Da:\n");
//	for (i = 1; i <= n; i++)
//	{
//		Da += 10;
//		printf("��%d����%8.2f\n", i,Da);
//	}
//
//	printf("De:\n");
//	for (i = 1; i <= n; i++)
//	{
//		De += De*0.05;
//		printf("��%d����%8.2f\n", i, De);
//	}*/
//	n = 0;
//	do
//	{
//		Da += 10;
//		De += De * 0.05;
//		n++;
//	}while(Da > De);
//	printf("��%d��De��DaͶ�ʶ���࣬Da��%8.2f De��%8.2f",n,Da,De);
//
//	return 0;
//}


//17.
//int main(void)
//{
//	float money=1000000.0;
//	int i,n;
//	printf("����������");
//	scanf("%d",&n);
//
//	for (i = 1; i <= n; i++)
//	{
//		money += money * 0.08;
//		money -= 100000;
//		printf("%d���ʣ��%.2f\n",i,money);
//	}
//
//	return 0;
//}
//������do whileѭ��


//18.
//int main(void)
//{
//	int friends;
//	int n,i;
//
//	printf("������������");
//	scanf("%d",&n);
//
//	for (i = 1, friends = 5; friends <= 150&&i<=n; i++)
//	{
//		friends -= i;
//		friends *= 2;
//		printf("��%d����%d������\n",i,friends);
//	}
//
//	return 0;
//}
// 
//int main(void)
//{
//	int friends;
//	int i;
//
//	for (i = 1, friends = 5; friends <= 150; i++)
//	{
//		friends -= i;
//		friends *= 2;
//		printf("��%d����%d������\n",i,friends);
//	}
//
//	return 0;
//}
#endif


//chapter 7
//code1.c
#if 0
#include <stdio.h>
//��֧�ṹif
//int main(void)
//{
//	const int FREEZING = 0;
//	float wendu;
//	int cold_days=0;
//	int all_days=0;
//
//	printf("�������⼸����¶ȣ�����q�Խ������룩");
//	while (scanf("%f", &wendu) == 1)
//	{
//		all_days++;
//		if (wendu < FREEZING)
//			cold_days++;
//	}
//	if (all_days != 0)
//		printf("��%d�죬��%d���¶ȵ���0���϶ȣ�ռ��������%.1f%%��\n",all_days,cold_days,100*(float)cold_days/all_days);
//	if (all_days == 0)
//		printf("û�����ݣ�\n");
//	return 0;
//}


//��getchar putchar
//int main(void)
//{
//	char ch;
//	ch = getchar();
//	while (ch != '\n')
//	{
//		if (ch == ' ')
//			putchar(ch);
//		else
//			putchar(ch + 1);
//		ch = getchar();
//	}
//	putchar(ch);
//	putchar(ch);
//
//	return 0;
//}


//ʹ��ctype.h������ĸ�����ĸ
//#include<ctype.h>
//int main(void)
//{
//	char ch;
//
//	while ((ch = getchar()) != '\n')
//	{
//		if (isalpha(ch))
//			putchar(ch + 1);
//		else
//			putchar(ch);
//	}
//	putchar(ch);
//
//	return 0;
//}


//������
//#define BREAK1 360
//#define BREAK2 468
//#define BREAK3 720
//#define RATE1 0.13230
//#define RATE2 0.15040
//#define RATE3 0.30025
//#define RATE4 0.34025
//#define BASE1 (RATE1*BREAK1)//��һ�����ó���
//#define BASE2 (BASE1+RATE2*(BREAK2-BREAK1))//�ڶ������ó���
//#define BASE3 (BASE2+RATE3*(BREAK3-BREAK2))//���������ó���
//
//int main(void)
//{
//	double yongliang;
//	double money;
//
//	printf("�������õĵ�������λ��ǧ��ʱ����");
//	scanf("%lf",&yongliang);
//	if (yongliang <= BREAK1)
//		money = RATE1 * yongliang;
//	else if (yongliang <= BREAK2)
//		money = BASE1 + RATE2 * (yongliang - BREAK1);
//	else if (yongliang <= BREAK3)
//		money = BASE2 + RATE3 * (yongliang - BREAK2);
//	else 
//		money = BASE3 + RATE4 * (yongliang - BREAK3);//���ĵ����÷�
//	printf("%.1lf�ȵ�Ҫ����%.1lfԪ",yongliang,money);
//
//	return 0;
//}


//�������������������Լ��
//int main(void)
//{
//	long num;
//	long  div;
//	int biaoji;
//
//	printf("������һ��������(��q���˳�)");
//	while (scanf("%ld", &num)==1)
//	{
//		 for (div=2,biaoji=1;(div*div)<=num;div++)
//			if (num % div == 0)
//		{
//			if ((div * div) != num)
//				printf("%ld������Լ���ǣ�%ld��%ld\n", num, div, num / div);
//			else
//				printf("%ld������Լ���ǣ�%ld\n",num,div);
//			biaoji = 0;
//		}
//		if (biaoji)                                               //��ǣ������ж�ĳ���Ƿ������forѭ����
//		{
//		 printf("%ld������\n",num);
//		}
//		printf("��������һ��������(��q���˳�)");
//	}
//	printf("�ټ���\n\n");
//
//	return 0;
//}


//ʹ���߼��������
//#define PERIOD '.'
//int main(void)
//{
//	char ch;
//	int charcount = 0;
//
//	while ((ch = getchar()) != PERIOD)
//	{
//		if (ch != '\"' && ch != '\'')
//			charcount++;
//	}
//	printf("��%d���ǵ�/˫���ŵ��ַ�(���ո�)\n",charcount);
//
//	return 0;
//}


//ͳ�Ƶ���
#define STOP '|'
int main(void)
{
	char ch;
	char qianyigezifu;
	long zifushu = 0;
	long dancishu = 0;
	long hangshu = 0;
	long buwanzhenghangshu = 0;
	int biaoji = 0;

	printf("����������Ե��ı���������|�Խ����ı�д�룩\n");
	qianyigezifu = '\n';
	while ((ch = getchar()) != STOP)
	{
		zifushu++;
		if (ch == '\n')
			hangshu++;
		if (ch != ' ' && ch != '\n' && ch != '\t' && !biaoji)
		{
			biaoji = 1;
			dancishu++;
		}
		if (ch == ' ' || ch == '\n' || ch == '\t' && biaoji)
			biaoji = 0;
		qianyigezifu = ch;
	}
	if (qianyigezifu != '\n')
		buwanzhenghangshu = 1;
	printf("�ַ�����%ld����������%ld��������%ld��������������%ld��\n\n", zifushu, dancishu, hangshu, buwanzhenghangshu);

	return 0;
}
#endif


//chapter 7
//code2.c
#if 0
#include <stdio.h>
//���������
//#define yitong 350//һͰ������ˢ�����
//int main(void)
//{
//	int fenshuamianji;
//	int cans;
//
//	printf("������Ҫ��ˢ�������");
//	while (scanf("%d", &fenshuamianji) == 1)
//	{
//		cans = fenshuamianji / yitong;
//		cans += fenshuamianji % yitong == 0 ? 0 : 1;
//		printf("You need %d %s of paint.\n",cans,cans==1?"can":"cans");
//		printf("������Ҫ��ˢ�������(��q���˳�����)");
//	}
//
//	return 0;
//}


//ʹ��continue ��������ѭ��
//int main(void)
//{
//	const float MIN = 0.0f;
//	const float MAX = 100.0f;
//	float fenshu;
//	float zongfen=0.0f;
//	float min=MAX;
//	float max= MIN;
//	int n=0;
//
//	printf("�������һ������������q���˳���");
//	while (scanf("%f", &fenshu) == 1)
//	{
//		if (fenshu<MIN || fenshu>MAX)
//		{
//			printf("%.1f�Ǹ���Ч��ֵ,���������룡", fenshu);
//			continue;
//		}
//		printf("�ѽ�����ֵ%.1f",fenshu);
//		min = fenshu < min ? fenshu : min;
//		max = fenshu > max ? fenshu : max;
//		zongfen += fenshu;
//		n++;
//		printf("��������һ������������q�Խ������룩");
//	}
//	if (n > 0)
//	{
//		printf("%d��������ƽ������%.1f\n", n, zongfen / n);
//		printf("������ͷ��ǣ�%.1f��߷��ǣ�%.1f", min, max);
//	}
//	else
//		printf("û����Чֵ���룡");
//
//	return 0;
//}


//continue �Ӻδ�����ѭ����
//1.
//int main(void)
//{
//	char ch;
//	int count = 0;
//	while (count < 5)
//	{
//		ch = getchar();
//		if (ch == '\n')
//			continue;
//		putchar(ch);
//		count++;
//	}
//	printf("\nDone!\n\n");
//
//	return 0;
//}
//2.
//int main(void)
//{
//	char ch;
//	int count;
//	for (count=0;count < 5;count++)
//	{
//		ch = getchar();
//		if (ch == '\n')
//			continue;
//		putchar(ch);
//	}
//	printf("\nDone!\n\n");
//
//	return 0;
//}
//

//ʹ��break�˳�ѭ��
//int main(void)
//{
//	float length, width;
//	printf("�����볤���εĳ���");
//	while (scanf("%f", &length) == 1)
//	{
//		printf("�������");
//		if (scanf("%f", &width) != 1)
//			break;
//		printf("�����%.1f\n",length*width);
//	}
//	printf("Done !");
//
//	return 0;
//}


//switch
#include<ctype.h>
int main(void)
{
	char ch;
	printf("������һ����ĸ���һ�����Ը���ĸ��ͷ�Ķ������ƣ�\n");
	printf("(����#���˳�)                                                         ");
	while ((ch = getchar()) != '#')
	{

		if (islower(ch))
			switch (ch)
			{
			case 'a':
				printf("argali, a wild sheep of Asia\n");
				break;
			case 'b':
				printf("babirusa, a wild pig of Malay\n");
				break;
			default:
				printf("That's a stumper !\n");
			}
		else
			printf("��ֻ�ܽ���Сд��ĸ~\n");
		while ((getchar()) != '\n')
			continue;
		printf("��������룺\n");
	}
	printf("�ټ���\n");

	return 0;
}
#endif


//chapter 7
//code3.c
#if 0
#include <stdio.h>
//��ϰ��10.
//int main(void)
//{
//	char ch;
//	scanf("%c", &ch);
//	while (ch != 'b')
//	{
//		if (ch =='q')
//		{
//			printf("Step 1\n");
//			printf("Step 2\n");
//		}
//		if (ch == 'c')
//			printf("Step 1\n");
//		if (ch=='h')
//		{
//			printf("Step 1\n");
//			printf("Step 3\n");
//			printf("Step 2\n");
//		}
//		
//		scanf("%c", &ch);
//	}
//	printf("Done\n");
//
//	return 0;
//}

//��ϰ��10.����
//int main(void)
//{
//	char ch;
//
//	while ((ch = getchar()) != '#')
//	{
//		if (ch == '\n')
//			continue;
//		printf("Step 1\n");
//
//		if (ch == 'b')
//			break;
//
//		if (ch != 'c')
//		{
//			if (ch == 'h')
//				;
//			else if (ch == 'q')
//				printf("Step 2\n");
//			printf("Step 3\n");
//		}
//	}
//	printf("Done\n");
//
//	return 0;
//}


//�����ϰ
//1.
//#define STOP '#'
//int main(void)
//{
//	printf("�������ַ�������#ֹͣ��");
//	char ch;
//	int space=0;
//	int huanhang=0;
//	int others=0;
//	while ((ch = getchar()) != STOP)
//	{
//		if (ch == ' ')
//			space++;
//		if (ch == '\n')
//			huanhang++;
//		else if (ch != ' ')//��Ϊ�����Ҳ�Ϊ�ո�
//			others++;
//		//������if...    else if...    else...
//	}
//	printf("��������ַ�����%d���ո�%d�����з���%d�������ַ���",space,huanhang,others);
//	
//	return 0;
//}


//2.
//#define STOP '#'
//int main(void)
//{
//	char ch;
//	int jishu=0;
//	printf("�������ַ���������#�ַ�ʱֹͣ��\n");
//
//	while ((ch = getchar()) != STOP)
//	{
//		if (ch == '\n')
//			continue;
//		//jishu++;                ������ڴ˴�����һ�лᵽ���߸��ͻ��У��˺���в���ÿ8������
//		if (jishu % 8 == 0)
//			printf("\n");
//		jishu++;
//		printf("%c-%-5d",ch,ch);
//
//	}
//	printf("\nDone ��\n");
//	return 0;
//}

//2.��
//#define STOP '#'
//int main(void)
//{
//	char ch;
//	int jishu = 0;
//	printf("�������ַ���������#�ַ�ʱֹͣ��\n");
//
//	while ((ch = getchar()) != STOP)
//	{
//		
//		//jishu++;      ��д����ߣ����һ��ֻ��7��
//		if (jishu++ % 8 == 0)
//			printf("\n");
//		
//		if (ch == '\n')
//			printf("'\\n'-%-5d",ch);
//		else
//		   printf("'%c'-%-5d", ch, ch);
//
//	}
//	printf("\nDone ��\n");
//	return 0;
//}


//3.
//int main(void)
//{
//	int num;
//	int oushu=0;
//	int sum1=0;
//	int jishu = 0;
//	int sum2=0;
//	printf("���������֣�����0�Խ�������\n");
//	
//
//	while (scanf("%d", &num)&&num != 0)
//	{
//
//		if (num != 0 && num % 2 == 0)
//		{
//			oushu++;
//			sum1 += num;
//		}
//		if (num % 2 != 0)
//		{
//			jishu++;
//			sum2 += num;
//		}
//	}
//	printf("����ż��%d��������%d����\n",oushu,jishu);
//	printf("ż����ƽ��ֵ��%.2f\n������ƽ��ֵ��%.2f\n",(float)sum1/oushu,(float)sum2/jishu);
//	return 0;
//}


//4.
//int main(void)
//{
//	char ch;
//	int num=0;
//	printf("�������ַ���������#��ֹͣ��");
//	while ((ch = getchar()) != '#')
//	{
//		if (ch == '��')
//		{
//			ch = '!';
//			num++;
//		}
//		else
//
//		if (ch == '!')
//		{
//				ch = '!!';
//				num++;
//		}
//			
//	}
//	printf("%c",ch);
//	printf("������%d���滻",num);
//	
//	return 0;
//}

//int main(void)
//{
//	int index = -1;
//	char ch[256];
//	int cishu = 0;
//
//	printf("�������ַ���������#��ֹͣ��");
//	do
//	{
//		index++;
//		scanf("%c",&ch[index]);
//		if (ch[index] == '.')
//		{
//			ch[index] = '!';
//			cishu++;
//		}
//		else if (ch[index] == '!')
//		{
//			ch[index] = '!';
//			index++;
//			ch[index] = '!';
//			cishu++;
//		}
//	} while (ch[index]!='#');
//
//	int a = index;
//	for(index=0;index<=a-1;index++)
//	printf("%c",ch[index]);
//	printf("\n");
//	printf("������%d���滻\n\n",cishu);
//
//	return 0;
//}

//����
//int main(void)
//{
//	int cishu = 0;
//	char ch;
//
//	printf("�������ַ���������#��ֹͣ���룩");
//
//	while (scanf("%c",&ch)&&ch!='#')
//	{
//		if (ch == '.')
//		{
//			printf("!");
//			cishu++;
//		}
//		else if (ch == '!')
//		{
//			printf("!!");
//			cishu++;
//		}
//		else
//			printf("%c",ch);//�˴�������putchar();
//	}
//	printf("������%d���滻\n\n", cishu);
//	return 0;
//}


//5.
//int main(void)
//{
//	int index = -1;
//	char ch[256];
//	int cishu = 0;
//
//	printf("�������ַ���������#��ֹͣ��");
//	do
//	{
//		index++;
//		scanf("%c", &ch[index]);
//		switch (ch[index])
//		{
//		case '.':
//
//			ch[index] = '!';
//			cishu++;
//			break;
//		case '!':
//
//			ch[index] = '!';
//			index++;
//			ch[index] = '!';
//			cishu++;
//			break;
//		}
//	} while (ch[index] != '#');
//
//	int a = index;
//	for (index = 0; index <= a - 1; index++)
//		printf("%c", ch[index]);
//	printf("\n");
//	printf("������%d���滻\n\n", cishu);
//
//	return 0;
//}
//������ case '!'  case'.'  default: printf("%c",ch);

//6.
//int main(void)
//{
//	printf("�������ַ���������#��ֹͣ��");
//	char ch;
//	int biaoji = 0;
//	int cishu = 0;
//
//	while ((ch = getchar()) != '#')
//	{
//		if (ch == 'e' && !biaoji)
//		biaoji = 1;//����e����Ǵ򿪣�����i����ǹرա�         ����e�������i����ǹرա�
//		
//		if (biaoji && ch == 'i')
//			{
//				cishu++;
//				biaoji = 0;
//			}
//		else if(ch!='e')
//				biaoji = 0;
//		
//	}
//	printf("ei����%d��",cishu);
//
//	return 0;
//}
//����
//int main(void)
//{
//	int cishu = 0;
//	int halfpair = 0;
//	char ch;
//	printf("�����룺����#�˳���");
//	while ((ch = getchar()) != '#')
//	{
//		switch (ch)
//		{
//		case 'e':
//				halfpair = 1;
//				break;
//		case 'i':
//			if (halfpair == 1)
//			{
//				cishu++;
//				halfpair = 0;
//			}
//			break;
//		default://��e�ͷ�i������ձ�ǡ�
//			halfpair = 0;
//		}
//	}
//	printf("%d��",cishu);
//
//	return 0;
//}

//7.
//#define BREAK1 300
//#define BREAK2 450
//#define RATE1 0.15
//#define RATE2 0.2
//#define RATE3 0.25
//
//#define BASE1 (RATE1*BREAK1)
//#define BASE2 (BASE1+(RATE2)*(BREAK2-BREAK1))
//int main(void)
//{
//	float hours;
//	float shui;
//	float zonge;
//	float jinshouru;
//	printf("��������һ�ܹ�����Сʱ����\n");
//	scanf("%f",&hours);
//	if (hours >= 40)//�Ƿ��мӰ�ʱ��
//		hours = (hours - 40) * 1.5 + 40;
//
//	zonge = hours * 10.0;
//
//	if (zonge <= BREAK1)
//		shui = zonge * RATE1;
//	else if (zonge <= BREAK2)
//		shui = BASE1 + (zonge - BREAK1) * RATE2;
//	else
//		shui = BASE2 + (zonge - BREAK2) * RATE3;
//		
//	jinshouru = zonge - shui;
//
//	printf("�����ܶ%.2f		˰��%.2f		�����룺%.2f\n",zonge,shui,jinshouru);
//
//	return 0;
//}
//��������Сʱ��   С�ڵ���30Сʱ   С�ڵ���40Сʱ    40Сʱ���ϣ�ϸ��Ϊ��������450��Ԫ���º����ϣ�

//8.
//#define BREAK1 300
//#define BREAK2 450
//#define RATE1 0.15
//#define RATE2 0.2
//#define RATE3 0.25
//
//#define BASE1 (RATE1*BREAK1)
//#define BASE2 (BASE1+(RATE2)*(BREAK2-BREAK1))
//int main(void)
//{
//	float hours;
//	float zonge;
//	float shui;
//	float jinshouru;
//	int num;
//	float meixiaoshi;
//
//	printf("********************************************************************\n");
//	printf("Enter the number corresponding to the desired pay rate or action:\n");
//	printf("1) $8.75/hr				2)$9.33/hr\n");
//	printf("3) $10.00/hr				4)$11.20/hr\n");
//	printf("5) quit\n");
//	printf("********************************************************************\n");
//
//	while (scanf("%d", &num)==1)
//	{
//		if (num < 1 || num > 5)
//		{
//			printf("����Ƿ������������룡");
//			continue;
//		}
//		switch (num)
//		{
//		case 1:
//			meixiaoshi = 8.75;
//			break;
//		case 2:
//			meixiaoshi = 9.33;
//			break;
//		case 3:
//			meixiaoshi = 10.0;
//			break;
//		case 4:
//			meixiaoshi = 11.20;
//			break;
//		case 5:
//			goto tuichu;
//		}
//
//		printf("\n��������һ�ܹ�����Сʱ����\n");
//		scanf("%f", &hours);
//
//		if (hours >= 40)//�Ƿ��мӰ�ʱ��
//			hours = (hours - 40) * 1.5 + 40;
//
//		zonge = hours * meixiaoshi;
//
//		if (zonge <= BREAK1)
//			shui = zonge * RATE1;
//		else if (zonge <= BREAK2)
//			shui = BASE1 + (zonge - BREAK1) * RATE2;
//		else
//			shui = BASE2 + (zonge - BREAK2) * RATE3;
//
//		jinshouru = zonge - shui;
//
//		printf("�����ܶ%.2f		˰��%.2f		�����룺%.2f\n", zonge, shui, jinshouru);
//	
//	tuichu:break;
//	}
//
//	return 0;
//}

//8.��
#define BREAK1 300
#define BREAK2 450
#define RATE1 0.15
#define RATE2 0.2
#define RATE3 0.25

#define BASE1 (RATE1*BREAK1)
#define BASE2 (BASE1+(RATE2)*(BREAK2-BREAK1))
void showmenu(void);
int main(void)
{
	float hours;
	float zonge;
	float shui;
	float jinshouru;
	int num;
	float meixiaoshi;

	showmenu(0);
	while (scanf("%d", &num) == 1)
	{
		if (num < 1 || num > 5)
		{
			printf("����Ƿ������������룡");
			continue;
		}
		switch (num)
		{
		case 1:
			meixiaoshi = 8.75;
			break;
		case 2:
			meixiaoshi = 9.33;
			break;
		case 3:
			meixiaoshi = 10.0;
			break;
		case 4:
			meixiaoshi = 11.20;
			break;
		case 5:
			goto tuichu;
		}

		printf("\n��������һ�ܹ�����Сʱ����\n");
		scanf("%f", &hours);

		if (hours >= 40)//�Ƿ��мӰ�ʱ��
			hours = (hours - 40) * 1.5 + 40;

		zonge = hours * meixiaoshi;

		if (zonge <= BREAK1)
			shui = zonge * RATE1;
		else if (zonge <= BREAK2)
			shui = BASE1 + (zonge - BREAK1) * RATE2;
		else
			shui = BASE2 + (zonge - BREAK2) * RATE3;

		jinshouru = zonge - shui;

		printf("�����ܶ%.2f		˰��%.2f		�����룺%.2f\n", zonge, shui, jinshouru);

		printf("��������\n");
		showmenu();

	}

tuichu:printf("�ټ���\n");
	return 0;
}

void showmenu(void)
{
	printf("********************************************************************\n");
	printf("Enter the number corresponding to the desired pay rate or action:\n");
	printf("1) $8.75/hr				2)$9.33/hr\n");
	printf("3) $10.00/hr				4)$11.20/hr\n");
	printf("5) quit\n");
	printf("********************************************************************\n");

}
#endif


//chapter 7
//code4.c
#if 0
#include <stdio.h>
//9.
//int main(void)
//{
//	unsigned int num;
//	unsigned long div;
//	int biaoji;
//	int num1;
//
//	printf("������һ����������");
//	scanf("%d",&num);
//
//	printf("С�ڻ����%d�����������������ǣ�", num);
//	printf("%5d",2);
//
//	for (num1 = 3; num1 <= num; num1++)
//	{
//		for (div = 2, biaoji = 1; (div * div) <= num1; div++)
//		{
//			if (num1 % div == 0)
//			{
//				biaoji = 0;
//			}
//		}
//		if (biaoji)
//			printf("%5d",num1);
//	}
//
//	return 0;
//}
//9.��
//int main(void)
//{
//	unsigned int num;
//	unsigned long div;
//	int biaoji;
//	int num1;
//
//	printf("������һ����������(��0���˳�����)");
//	while (scanf("%d", &num) == 1)
//	{
//		if (num < 2)
//		{
//			if (num == 0)
//				break;//break��Ƕ�׵�if�Ҳ���˳�whileѭ��
//			printf("%d�Ƿ�,���������룡",num);
//			continue;
//		}
//
//		printf("С�ڻ����%d�����������������ǣ�", num);
//		printf("%5d", 2);
//				
//			for (num1 = 3; num1 <= num; num1++)
//			{
//				for (div = 2, biaoji = 1; (div * div) <= num1; div++)
//				{
//					if (num1 % div == 0)
//					biaoji = 0;
//				}
//
//					if (biaoji)
//					printf("%5d", num1);
//			}
//		
//			printf("\n������һ����������(��0���˳�����)");
//
//	}
//
//	printf("Done !\n");
//	return 0;
//}


//10.
//#define DANSHEN_BREAK 17850
//#define HUZHU_BREAK 23900
//#define YIHUN_GONGYOU_BREAK 29750
//#define YIHUN_LIYI_BREAK 14875
//#define RATE1 0.15
//#define RATE2 0.28
//#define DANSHEN_BASE						       (DANSHEN_BREAK*RATE1)
//#define HUZHU_BASE							     	   (HUZHU_BREAK*RATE1)
//#define YIHUN_GONGYOU_BASE	               (YIHUN_GONGYOU_BREAK*RATE1)
//#define YIHUN_LIYI_BASE                              (YIHUN_LIYI_BREAK*RATE1)
//int main(void)
//{
//START:	printf("*****************************************************\n");
//	printf("������������״̬��Ӧ�����֣�\n");
//	printf("1)����		2)����\n3)�ѻ飬����	4)�ѻ飬����\n");
//	printf("*****************************************************\n");
//
//	int choice;
//	float shui;
//	float gongzi;
//
//	while (scanf("%d", &choice) == 1)
//	{
//		if (choice < 1 || choice>4)
//		{
//			printf("�����������ٴ����룺\n");
//			continue;
//		}
//
//		printf("���������Ĺ��ʣ�");
//		while (scanf("%f", &gongzi) != 1)
//		{
//			printf("�����������ٴ����룺\n");
//			break;//��Ϊcontinue,������qʱ������ѭ������Ϊscanfһֱ�����Ǳ�������q
//		}
//
//		switch (choice)
//		{
//		case 1:
//		if (gongzi <= DANSHEN_BREAK)
//			shui = gongzi * RATE1;
//		else
//			shui = DANSHEN_BASE + (gongzi - DANSHEN_BREAK) * RATE2;
//		break;
//
//		case 2:
//			if (gongzi <= HUZHU_BREAK)
//			shui = gongzi * RATE1;
//			else
//			shui = HUZHU_BASE + (gongzi - HUZHU_BREAK) * RATE2;
//			break;
//
//		case 3:
//				if (gongzi <= YIHUN_GONGYOU_BREAK)
//					shui = gongzi * RATE1;
//				else
//					shui = YIHUN_GONGYOU_BASE + (gongzi - YIHUN_GONGYOU_BREAK) * RATE2;
//				break;
//
//		case 4:
//			if (gongzi <= YIHUN_LIYI_BREAK)
//				shui = gongzi * RATE1;
//			else
//				shui = YIHUN_LIYI_BASE + (gongzi - YIHUN_LIYI_BREAK) * RATE2;
//			break;
//		}
//
//	printf("��Ӧ��˰��%.2fԪ\n\n\n", shui);
//	goto START;
//	}
//
//	printf("�ټ���\n");
//	return 0;
//}
//����������goto �õ��ú�������ʾ˰�ռƻ���


//11.
//#define yangjijiage 2.05
//#define tiancaijiage 1.15
//#define huluobojiage 1.09
//int main(void)
//{
//	char choice;
//	float yangji=0,tiancai=0,huluobo=0;
//	float bangshu,shoujia,zhekou=0;
//	float yunfeibaozhuangfei;
//
//	printf("****************************************************\n");
//	printf("������Ҫ������߲�ǰ��Ӧ����ĸ������q�˳���\n");
//	printf("(a ��			��b���\n");
//	printf("(c ���ܲ�		\n");
//	printf("****************************************************\n");
//	
//	
//	while (1)
//	{
//		scanf("%c", &choice);
//
//		switch (choice)
//		{
//		case 'a':
//			printf("�����������\n");
//			scanf("%f", &yangji);
//			break;
//		case 'b':
//			printf("�����������\n");
//			scanf("%f", &tiancai);
//			break;
//		case 'c':
//			printf("�����������\n");
//			scanf("%f", &huluobo);
//			break;
//		}
//			
//		if (choice == 'q')
//			break;
//		
//    	printf("������Ҫ������߲�ǰ��Ӧ����ĸ������q�˳���\n");//Ϊʲô��λ���ִ�����飿��������
//		//if (choice == '\n')
//			//continue;
//	} 
//
//		bangshu = yangji + tiancai + huluobo;
//		shoujia = yangji * yangjijiage + tiancai * tiancaijiage + huluobo * huluobojiage;
//
//		if (shoujia >= 100)
//			zhekou = shoujia * 0.95;
//
//		if (bangshu == 0)
//			yunfeibaozhuangfei = 0.0;
//		else if (bangshu <= 5)
//			yunfeibaozhuangfei = 6.5;
//		else if (bangshu <= 20)
//			yunfeibaozhuangfei = 14;
//		else 
//			yunfeibaozhuangfei = 14 + (bangshu - 20) * 0.5;
//
//
//		printf("�󼻵��ۣ�		2.05\n��˵��ۣ�		1.15\n���ܲ����ۣ�		1.09\n");
//		printf("*****************************\n");
//		printf("��������������λ��������%.2f\n",bangshu);
//		printf("�������߲˷��ã�	%.2f\n",shoujia);
//		printf("�������ܷ��ã�		%.2f\n",shoujia-zhekou);
//		printf("�ۿۣ�			%.2f\n",zhekou);
//		printf("�˷ѺͰ�װ�ѣ�		%.2f\n",yunfeibaozhuangfei);
//		printf("�ܼƣ�			%.2f\n",shoujia-zhekou+yunfeibaozhuangfei);
//		printf("*****************************\n");
//
//	printf("�ټ���\n");
//
//	return 0;
//}


#if 0
//11.��
#define yangjijiage 2.05
#define tiancaijiage 1.15
#define huluobojiage 1.09
void showmenu(void);
float getweight(void);
int main(void)
{
	char choice = '!';
	float yangji = 0, tiancai = 0, huluobo = 0;
	float bangshu, shoujia, zhekou = 0;
	float yunfeibaozhuangfei;

	do
	{
		showmenu(0);
	HELP:	scanf("%c", &choice);//������a,��switch��ִ����Ϻ�ִ��showmenu,�������������\n,��Ҳִ��showmenu.

		switch (choice)
		{
		case 'a':
			yangji += getweight();
			break;
		case 'b':
			tiancai += getweight();
			break;
		case 'c':
			huluobo += getweight();
			break;
		default:
		{
			if (choice == '\n')
				goto HELP;
			else
				printf("����������������룡\n");
		}
		}

	} while (choice != 'q');

	bangshu = yangji + tiancai + huluobo;
	shoujia = yangji * yangjijiage + tiancai * tiancaijiage + huluobo * huluobojiage;

	if (shoujia >= 100)
		zhekou = shoujia * 0.95;

	if (bangshu == 0)
		yunfeibaozhuangfei = 0.0;
	else if (bangshu <= 5)
		yunfeibaozhuangfei = 6.5;
	else if (bangshu <= 20)
		yunfeibaozhuangfei = 14;
	else
		yunfeibaozhuangfei = 14 + (bangshu - 20) * 0.5;


	printf("�󼻵��ۣ�		2.05\n��˵��ۣ�		1.15\n���ܲ����ۣ�		1.09\n");
	printf("*****************************\n");
	printf("��������������λ��������%.2f\n", bangshu);
	printf("�������߲˷��ã�	%.2f\n", shoujia);
	printf("�������ܷ��ã�		%.2f\n", shoujia - zhekou);
	printf("�ۿۣ�			%.2f\n", zhekou);
	printf("�˷ѺͰ�װ�ѣ�		%.2f\n", yunfeibaozhuangfei);
	printf("�ܼƣ�			%.2f\n", shoujia - zhekou + yunfeibaozhuangfei);
	printf("*****************************\n");

	printf("�ټ���\n");

	return 0;
}

void showmenu(void)
{
	printf("****************************************************\n");
	printf("������Ҫ������߲�ǰ��Ӧ����ĸ������q�˳���\n");
	printf("(a ��			��b���\n");
	printf("(c ���ܲ�		\n");
	printf("****************************************************\n");
}

float getweight(void)
{
	float weight;
	printf("�����������\n");
	scanf("%f", &weight);

	return weight;
}
#endif


//��
#define yangjijiage 2.05
#define tiancaijiage 1.15
#define huluobojiage 1.09
void showmenu(void);
float getweight(void);
int main(void)
{
	char choice;
	float yangji = 0, tiancai = 0, huluobo = 0;
	float bangshu, shoujia, zhekou = 0;
	float yunfeibaozhuangfei;

	do
	{
		showmenu(0);
		choice = getchar();

		while (getchar() != '\n')
			continue;

		switch (choice)
		{
		case 'a':
			yangji += getweight();
			break;
		case 'b':
			tiancai += getweight();
			break;
		case 'c':
			huluobo += getweight();
			break;
		default:
			printf("����������������룡\n");
		}


	} while (choice != 'q');

	bangshu = yangji + tiancai + huluobo;
	shoujia = yangji * yangjijiage + tiancai * tiancaijiage + huluobo * huluobojiage;

	if (shoujia >= 100)
		zhekou = shoujia * 0.95;

	if (bangshu == 0)
		yunfeibaozhuangfei = 0.0;
	else if (bangshu <= 5)
		yunfeibaozhuangfei = 6.5;
	else if (bangshu <= 20)
		yunfeibaozhuangfei = 14;
	else
		yunfeibaozhuangfei = 14 + (bangshu - 20) * 0.5;


	printf("�󼻵��ۣ�		2.05\n��˵��ۣ�		1.15\n���ܲ����ۣ�		1.09\n");
	printf("*****************************\n");
	printf("��������������λ��������%.2f\n", bangshu);
	printf("�������߲˷��ã�	%.2f\n", shoujia);
	printf("�������ܷ��ã�		%.2f\n", shoujia - zhekou);
	printf("�ۿۣ�			%.2f\n", zhekou);
	printf("�˷ѺͰ�װ�ѣ�		%.2f\n", yunfeibaozhuangfei);
	printf("�ܼƣ�			%.2f\n", shoujia - zhekou + yunfeibaozhuangfei);
	printf("*****************************\n");

	printf("�ټ���\n");

	return 0;
}

void showmenu(void)
{
	printf("****************************************************\n");
	printf("������Ҫ������߲�ǰ��Ӧ����ĸ������q�˳���\n");
	printf("(a ��			��b���\n");
	printf("(c ���ܲ�		\n");
	printf("****************************************************\n");
}

float getweight(void)
{
	float weight;
	printf("�����������\n");
	scanf("%f", &weight);

	while (getchar() != '\n')//�����з�
		continue;

	return weight;
}
#endif


//chapter 8
//code1.c
#if 0
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

	int num = 1;
	printf("������%d��", num);
	while (getchar() != 'y')
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
	while ((ch = getchar()) != 'y')
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
		scanf("%d%d", &row, &column);
		display(ch, row, column);
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

	printf("%d", input);

	return 0;
}
#endif
#endif


//chapter 8
//code2.c
#if 0
#include<stdio.h>
#if 0
//������֤
long yanzheng_zhengshu(void);
int yanzheng_limits(long num1, long num2, long num3, long num4);
long qiupinfanghe(long start, long end);

int main(void)
{
	const long MIN = -10000000L;
	const long MAX = +10000000L;
	long start;
	long end;
	long answer;

	printf("�˳�������ض���Χ�ڵ�����������ƽ���͡�\n");
	printf("���������޾�����0�Խ�������");
	printf("���������ޣ�\n");

	start = yanzheng_zhengshu();//��һ��������֤
	printf("���������ޣ�\n");
	end = yanzheng_zhengshu();

	while (start != 0 || end != 0)
	{
		if (yanzheng_limits(start, end, MIN, MAX))//�ڶ���������֤
			printf("���������룡\n");
		else
		{
			answer = qiupinfanghe(start, end);
			printf("%ld��%ld��������ƽ����Ϊ%ld\n", start, end, answer);
		}

		printf("\n\n���������ޣ�\n");
		start = yanzheng_zhengshu();//��һ��������֤
		printf("���������ޣ�\n");
		end = yanzheng_zhengshu();
	}

	return 0;
}

long yanzheng_zhengshu(void)
{
	long input;
	char ch;

	while (scanf("%ld", &input) != 1)
	{
		while ((ch = getchar()) != '\n')
			putchar(ch);
		printf("����һ�����������������룡\n");
	}

	return input;
}

int yanzheng_limits(long num1, long num2, long num3, long num4)
{
	int biaoji = 0;

	if (num1 > num2)
	{
		printf("���޴������ޣ�����\n");
		biaoji = 1;
	}
	if (num1 < num3 || num2 < num3)
	{
		printf("ֵС��MIN������\n");
		biaoji = 1;
	}
	if (num1 > num4 || num2 > num4)
	{
		printf("ֵ����MAX������\n");
		biaoji = 1;
	}
	return biaoji;
}

long qiupinfanghe(long start, long end)
{
	long i;
	long sum = 0;

	for (i = start; i <= end; i++)
		sum += i * i;

	return sum;
}
#endif


#if 1
//ʵ��ֻ����ȷ����Ӧ����switch����
char shuruyanzheng(void);
char get_first(void);

int main(void)
{
	int choice;

	while ((choice = shuruyanzheng()) != 'q')
	{
		switch (choice)
		{
		case 'a':
			printf("a");
			break;
		case 'b':
			printf("b");
			break;
		case 'c':
			printf("c");
			break;
		default:
			printf("error !\n");
		}
	}

	return 0;
}

char shuruyanzheng(void)
{
	int ch;
	printf("\n******************\n");
	printf("���������ѡ��\n");
	printf("a	b	\n");
	printf("c	q\n");
	printf("******************\n");
	/*ch = getchar();                                 //��һ
	while (getchar() != '\n')
				continue;*/
	ch = get_first();

	while ((ch < 'a' || ch>'c') && ch != 'q')
	{
		printf("�������������룡\n");
		/*ch = getchar();
		while (getchar() != '\n')
			continue;*/
		ch = get_first();
	}

	return ch;
}

char get_first(void)//���������ö���һ����ĸ���ܵĺ�����
{
	char ch1;
	ch1 = getchar();
	while (getchar() != '\n')
		continue;

	return ch1;
}
#endif
#endif


//chapter 8
//code3.c
#if 0
#include <stdio.h>
//��ϰ��
//2.
#if 0
int main(void)
{
	putchar('H');
	//putchar('\007');
	//putchar('\b');
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
		/*	if (ch == '\n')
				;
			else
				count++;*/
		if (ch > ' ')
			count++;//��ͳ�ƿո�ascii����ǰ�ķǴ�ӡ�ַ���
	}

	printf("��%d���ַ�(�������з�)", count);

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

	printf("��ȡ��%d���ַ�\n", count);

	return 0;
}
#endif


//2.
#if 0
int main(void)
{
	printf("�������ַ���\n");
	int ch;
	int num = 0;

	while ((ch = getchar()) != EOF)
	{
		if (num % 10 == 0)
		{
			putchar('\n');
		}
		num++;  //覴ã����뻻�з���֮��ĵ�һ�п��ܲ��ܷ�10���С�


		switch (ch)
		{
		case '\n':
			printf("\n\\n-%-8d", ch);
			break;
		case '\t':
			printf("\\t-%-8d", ch);
			break;
		case 1:
			printf("^A-%-8d", ch);
			break;
		default:
			printf("%c-%-8d", ch, ch);
		}

	}

	return 0;
}
#endif
//2.����
#if 0
int main(void)
{
	printf("�������ַ���\n");
	int ch;
	int num = 0;

	while ((ch = getchar()) != EOF)
	{


		if (num++ == 10)  //��10���з�����
		{
			printf("\n");
			num = 1;
		}

		//������if ...else if...
		if (ch > ' ')
			printf("\'%c\'--%3d", ch, ch);
		else if (ch == '\n')
		{
			printf("\\n--\\n\n");
			num = 0;                         //ʹ����\n����µ�һ�п�ʼ���ҷ�10���С�
		}
		else if (ch == '\t')
			printf("\\t--\\t");
		else
			printf("\'%c\'--^%c", ch, (ch + 64));//ctrl+A�ȷ���ʾ�ַ��Ĵ���

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
	int upjishu = 0;
	int lowjishu = 0;

	while ((ch = getchar()) != EOF)
	{
		if (ch >= 65 && ch <= 90)
			upjishu++;
		if (ch >= 97 && ch <= 122)
			lowjishu++;
	}
	printf("�����еĴ�д��ĸ������%d\n", upjishu);
	printf("�����е�Сд��ĸ������%d\n", lowjishu);

	return 0;
}
#endif 
//������ʹ��ctype.hͷ�ļ��ڵ�islower(),isupper()


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

		if ((ch == ' ' || ch == '\n') && dancibiaoji == 1)
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
#elif  0
int main(void)
{
	printf("�������ַ���\n");
	int ch;
	int dancibiaoji = 0;
	int dancishu = 0;
	float zimushu = 0.0F;

	while ((ch = getchar()) != EOF)
	{
		/*if(ch!=' '&&ch!='\n')
		zimushu++;*/
		if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
			zimushu++;

		if (ch != ' ' && ch != '\n' && dancibiaoji != 1)
		{
			dancibiaoji = 1;
			dancishu++;
		}

		if ((ch == ' ' || ch == '\n') && dancibiaoji == 1)
		{
			dancibiaoji = 0;
		}
		//ͳ�Ƶ��ʷ�����
		/*if (ch == ' ' || ch == ',' || ch == '.' || ch = '\n')
			dancishu++;*/

	}
	printf("���ʸ�����%d\n", dancishu);
	printf("ƽ��ÿ�����ʵ���ĸ����%.2f\n\n", zimushu / dancishu);

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
	int a, b;
	while ((ch = getchar()) != 'y')
	{
		while (getchar() != '\n')//1��
			continue;

		while (ch != 'n' && ch != 'y')
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
			a = num;
			printf("������%d��\n", erfenfa1(a));
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
int erfenfa1(int a)
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
//5.����
#if 0
//int erfenfa1(int a,int b,int c);  //���ڶ��ַ������õ��ú�������Ϊhead tail guess ������������仯��
//int erfenfa2(int a,int b,int c);  //�����õĺ����ı����ı仯ֻ���ڵ��ú�������Ч,���������в���Ч��

int main(void)
{
	printf("ѡ��һ��1~100�����֡�Ȼ���һ᳢�Բ²⡣");
	printf("\n(����y��ʾ��ȷ������n��ʾ����)\n");

	//***************************************************
	//���ַ���
	int head = 1;
	int tail = 100;
	int guess = (head + tail) / 2;
	printf("������%d��\n", guess);
	//***************************************************

	int ch;

	while ((ch = getchar()) != 'y')
	{
		while (getchar() != '\n')//1��
			continue;

		while (ch != 'n' && ch != 'y')
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

		if (ch == 'd')//��С��
		{
			head = guess + 1;
			guess = (head + tail) / 2;
			printf("������%d��\n", guess);
		}
		else if (ch == 'u')//�´���
		{
			tail = guess - 1;
			guess = (head + tail) / 2;
			printf("������%d��\n", guess);
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
}
//int erfenfa1(int a,int b,int c)//aΪhead��bΪtail��cΪguess
//{
//	a = c + 1;
//	c = (a + b) / 2;
//
//	return c;
//}
//int erfenfa2(int a,int b, int c)
//{
//	const int MIN = 0;
//	int num2;
//	num2 = (b + 0) / 2;
//
//	return num2;
//}
#endif



//6.��P205
#if 0
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

	/*while (    (ch = getchar())== ' '         ||        ch == '\n'       ||         ch == '\t')
		continue;

	while (getchar() != '\n')
		continue;*/

		//������
	do
	{
		ch = getchar();
	} while (ch == ' ' || ch == '\n' || ch == '\t');  //ע�⣺��������\n��

	return ch;
}
#endif
#endif


//chapter 8
//code4.c
#if 0
#include<stdio.h>
//7.
#if 0
#define BREAK1 300
#define BREAK2 450
#define RATE1 0.15
#define RATE2 0.2
#define RATE3 0.25

#define BASE1 (RATE1*BREAK1)
#define BASE2 (BASE1+(RATE2)*(BREAK2-BREAK1))
void showmenu(void);
int get_first(void);
int yanzhengshuru(int a);

int main(void)
{
	float hours;
	float zonge;
	float shui;
	float jinshouru;
	int ch;
	float meixiaoshi;

	showmenu(0);
	while ((ch = get_first()) != 'q')
	{
		if (yanzhengshuru(ch))
		{
			printf("����Ƿ������������룡\n");
			continue;
		}
		switch (ch)
		{
		case 'a':
			meixiaoshi = 8.75;
			break;
		case 'b':
			meixiaoshi = 9.33;
			break;
		case 'c':
			meixiaoshi = 10.0;
			break;
		case 'd':
			meixiaoshi = 11.20;
			break;
		default:
			goto tuichu;
		}

		printf("��������һ�ܹ�����Сʱ����\n");
		scanf("%f", &hours);                                      //ע�⣺scanf()��ȡ����ʱ������'\n'������'\n'���ڻ�����

		if (hours >= 40)//�Ƿ��мӰ�ʱ��
			hours = (hours - 40) * 1.5 + 40;

		zonge = hours * meixiaoshi;

		if (zonge <= BREAK1)
			shui = zonge * RATE1;
		else if (zonge <= BREAK2)
			shui = BASE1 + (zonge - BREAK1) * RATE2;
		else
			shui = BASE2 + (zonge - BREAK2) * RATE3;

		jinshouru = zonge - shui;

		printf("�����ܶ%.2f		˰��%.2f		�����룺%.2f\n", zonge, shui, jinshouru);

		printf("��������\n");
		showmenu();

	}

tuichu:printf("�ټ���\n");
	return 0;
}

void showmenu(void)
{
	printf("********************************************************************\n");
	printf("Enter the number corresponding to the desired pay rate or action:\n");
	printf("a) $8.75/hr				b)$9.33/hr\n");
	printf("c) $10.00/hr				d)$11.20/hr\n");
	printf("q) quit\n");
	printf("********************************************************************\n");

}
int get_first(void)
{
	int ch;
	while ((ch = getchar()) == '\n' || ch == '\t' || ch == ' ')
		continue;
	while (getchar() != '\n')
		continue;

	return ch;
}
int yanzhengshuru(int a)
{
	int biaoji = 0;
	if (a < 'a' || a > 'd')
		biaoji = 1;

	return biaoji;
}
#endif


//8.
#if 0
int showmenu(void);
int get_first(void);
int xuanzegongnengyanzheng(int a);
int first_number_input_yanzheng(int b);
int second_number_input_yanzheng(int c);

int main(void)
{
	showmenu();
	int ch;
	while ((ch = get_first()) != 'q')
	{
		if (xuanzegongnengyanzheng(ch))
		{
			//putchar("������������������!\n"); ��������д
			printf("������������������!\n");
			continue;
		}

		//putchar("Enter first number:");
		printf("Enter first number:");

		float first_number;
		int a;
		while (1)
		{
			a = scanf("%f", &first_number);
			//if (first_number_input_yanzheng(  scanf("%f", &first_number)  )      ����д������
			if (first_number_input_yanzheng(a))
			{
				while (getchar() != '\n')//����scanf�Ĵ������룬scanf����\n�������뻺����
				//putchar(first_number);   putchar�����������������
					continue;

				printf("������������������!\n");
				printf("�����������˵2.5, -1.7E8 ��:");
				continue;
			}
			else
				break;
		}
		//������
		//while (scanf("%f", &first_number) != 1)
		//{
		//	while ((a = getchar()) != '\n')
		//		continue;
		//	printf("������������������!\n");
		//	printf("�����������˵2.5, -1.7E8 ��:");
		//}

		printf("Enter second number:");

		float second_number;
		int b;
		while (1)
		{
			b = scanf("%f", &second_number);
			if (second_number_input_yanzheng(b))
			{
				while (getchar() != '\n')
					continue;

				printf("������������������!\n");
				continue;
			}
			else if (ch == 'd' && second_number == 0)
			{
				printf("�����������㣬������һ������ֵ��\n");
				continue;
			}

			else
				break;
		}


		switch (ch)
		{
		case 'a':
			printf("%.2f+%.2f=%.2f\n", first_number, second_number, first_number + second_number);
			break;
		case 's':
			printf("%.2f-%.2f=%.2f\n", first_number, second_number, first_number - second_number);
			break;
		case 'm':
			printf("%.2f*%.2f=%.2f\n", first_number, second_number, first_number * second_number);
			break;
		case 'd':
			printf("%.2f/%.2f=%.2f\n", first_number, second_number, first_number / second_number);
			break;
		}
		showmenu();
	}

	printf("Bye.\n");

	return 0;
}

int showmenu(void)
{
	printf("Enter the operation of your choice:\n");
	printf("a. add		s. subtract\n");
	printf("m. multiply	d. divide\n");
	printf("q. quit\n");
}
int get_first(void)
{
	int ch;
	while ((ch = getchar()) == '\n' || ch == '\t' || ch == ' ')
		continue;

	while (getchar() != '\n')
		continue;

	return ch;
}
int xuanzegongnengyanzheng(int a)
{
	int biaoji = 0;

	if (a > 'd' || a < 'a')
		biaoji = 1;

	return biaoji;
}
int first_number_input_yanzheng(int b)
{
	int biaoji = 0;

	if (b == 0)//��sanf()��û�м�⵽��
		biaoji = 1;

	return biaoji;
}
int second_number_input_yanzheng(int c)
{
	int biaoji = 0;

	if (c == 0)
		biaoji = 1;

	return biaoji;
}
#endif
#endif


//chapter 9
//code1.c
#if 0
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
	showzifu('*', WIDTH);
	//	putchar("\n");    ����
	putchar('\n');


	showzifu(SPACE, 12);
	printf("%s", NAME);
	putchar('\n');

	int konggeshuliang = (WIDTH - strlen(ADDRESS)) / 2;
	showzifu(SPACE, konggeshuliang);//ʵ�ʲ��������ǳ��������������ʽ
	printf("%s", ADDRESS);
	putchar('\n');

	konggeshuliang = (WIDTH - strlen(PLACE)) / 2;
	showzifu(SPACE, konggeshuliang);
	printf("%s", PLACE);
	putchar('\n');

	showzifu('*', WIDTH);
	putchar('\n');

	return 0;
}
void showzifu(char ch, int num)
{
	int i;
	for (i = 1; i <= num; i++)
		printf("%c", ch);

}
#endif


//�ҳ����������н�С��һ��
#if 0
int bijiaodaxiao(int num5, int num6);//num5, num6 �Ǽ����������뺯��������β���һ�£�
int main(void)
{
	int num1, num2;

begin:	printf("����������������\n");
	while (scanf("%d%d", &num1, &num2) != 2)  //����д����scanf(" % d % d", &num1, &num2) 
	{
		while (getchar() != '\n')
			continue;
		printf("�������������������룡");
	}

	printf("%d,%d", num1, num2);
	printf("��Сֵ��%d\n", bijiaodaxiao(num1, num2));
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
	printf("Level %d: n location %p\n", n, &n);
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
			printf("%d�Ľ׳���%d\n", num, xunhuan(num));
			printf("%d�Ľ׳���%d\n", num, digui(num));
		}
	}

	return 0;
}
int xunhuan(int num)
{
	int i;
	for (i = 1; num > 1; num--)
		i *= num;

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
		huaweierjinzhi(num / 2);

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

	while (scanf("%d", &num) == 1)
	{
		printf("쳲��������еĵ�%d��ֵΪ%d", num, fibonacci(num));

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
#endif


//chapter 9
//code2.c
#if 0
#include <stdio.h>
#include "hotel.h"
int main(void)
{
	int nights;
	double fangjia;
	int xuanze;

	while ((xuanze = menu()) != QUIT)
	{
		switch (xuanze)
		{
		case 1:
			fangjia = HOTEL1;
			break;
		case 2:
			fangjia = HOTEL2;
			break;
		case 3:
			fangjia = HOTEL3;
			break;
		case 4:
			fangjia = HOTEL4;
			break;
		default:
			printf("����δ֪����");
			break;
		}
		nights = getnights();
		showprice(fangjia, nights);
	}
	printf("�ټ���\n\n\n");

	return 0;
}
#endif


//chapter 9
//code3.c
#if 0
#include <stdio.h>
//�鿴�������洢�ںδ�
#if 0
void beidiaohanshu(void);
int main(void)
{
	int a, b;
	a = 1, b = 2;

	printf("��main�����У�a��ַΪ%p��b��ַΪ%p\n", &a, &b);
	beidiaohanshu();

	return 0;
}
void beidiaohanshu(void)
{
	int a, b;
	a = 1, b = 2;

	printf("�ڱ��������У�a��ַΪ%p��b��ַΪ%p\n", &a, &b);
}

#endif


//ʹ��returnֻ�ܴ���һ��������ֵ���޷���������������ֵ������
//ʹ��ָ������������������ֵ������
#if 1
void jiaohuan(int*, int*);  //��д��void jiaohuan(int, int);    �򱻵�����������Ч��
int main(void)
{
	int x = 5, y = 10;
	printf("ԭ����x=%d��y=%d\n", x, y);
	jiaohuan(&x, &y);
	printf("���ڣ�x=%d��y=%d\n", x, y);

	return 0;
}
void jiaohuan(int* x, int* y)
{
	int temp;
	temp = *y;
	*y = *x;
	*x = temp;
}
#endif
#endif


//chapter 9
//code4.c
#if 0
#include <stdio.h>
//
#if 0

#endif


//��ϰ��
//4.
#if 0
int sum(int a, int b);
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

	printf("%d+%d=%d\n\n", a, b, sum(a, b));

	return 0;
}
int sum(int a, int b)
{
	return (a + b);
}
#endif


//5.
#if 0
double sum(double a, double b);
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
	int x, y;
	printf("����������������\n");
	scanf("%d%d", &x, &y);
	printf("��������ǣ�x=%d��y=%d\n", x, y);
	alter(&x, &y);
	printf("����x=%d��y=%d\n", x, y);

	return 0;
}
void alter(int* x, int* y)
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
	scanf("%d%d%d", &a, &b, &c);

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

	while (get_choice(MIN, MAX) != 4)
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
	while ((biaoji = scanf("%d", &choice)) && (choice<a || choice>b))//��������ֲ��ڷ�Χ��ʱִ�У���������ĸ��ִ��return 4
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
#endif


//chapter 9
//code5.c
#if 0
#include <stdio.h>
//
#if 0

#endif


//�����ϰ
//1.
#if 0
double min(double x, double y);
int main(void)
{
	double a, b;
	printf("�˳���Ƚ���������ֵ�Ľ�Сֵ\n");
	printf("��������������ֵ��_________\b\b\b\b\b\b\b\b");
	scanf("%lf%lf", &a, &b);
	printf("��Сֵ�ǣ�%.3lf", min(a, b));

	return 0;
}
double min(double x, double y)
{
	if (x >= y)															//if(x<y)   return x;                                  //return x<y? x:y;
		x = y;														    	//else    return y;

	return x;
}
#endif


//2.
#if 0
void chline(char ch, int i, int j);
int main(void)
{
	char ch;
	int i, j;
	printf("�˳����ӡָ���ַ�������������\n");
	printf("������Ҫ��ӡ���ַ���_________\b\b\b\b\b\b\b\b");
	scanf("%c", &ch);
	printf("������Ҫ��ӡ��������������_________\b\b\b\b\b\b\b\b");
	scanf("%d%d", &i, &j);
	chline(ch, i, j);

	return 0;
}
void chline(char ch, int i, int j)
{
	int lie, hang;
	for (hang = 1; hang <= j; hang++)
	{
		for (lie = 1; lie <= i; lie++)
			printf("%c", ch);
		putchar('\n');
	}
}
#endif


//3.
#if 0
void chline(char ch, int i, int j);
int main(void)
{
	char ch;
	int i, j;
	printf("�˳����ӡָ���ַ�������������\n");
	printf("������Ҫ��ӡ���ַ���_________\b\b\b\b\b\b\b\b");
	scanf("%c", &ch);
	printf("������Ҫ��ӡ��������������_________\b\b\b\b\b\b\b\b");
	scanf("%d%d", &i, &j);//i��   j��
	chline(ch, i, j);

	return 0;
}
void chline(char ch, int i, int j)
{
	int lie, hang;
	for (hang = 1; hang <= j; hang++)
	{
		for (lie = 1; lie <= i; lie++)
			printf("%c", ch);
		putchar('\n');
	}
}
#endif


//4.
#if 0
double tiaohepinjunshu(double x, double y);
int main(void)
{
	double a, b;
	printf("�˳����ӡ�������ĵ���ƽ����\n");
	printf("������������������_________\b\b\b\b\b\b\b\b");
	scanf("%lf%lf", &a, &b);
	printf("����ƽ������%.3lf\n", tiaohepinjunshu(a, b));

	return 0;
}
double tiaohepinjunshu(double x, double y)
{
	double jieguo1, jieguo2;
	double daoshu_x = 1 / x, daoshu_y = 1 / y;

	jieguo1 = (daoshu_x + daoshu_y) / 2;
	jieguo2 = 1 / jieguo1;                                                 //�����������Ϊ  return 2/(1/x+1/y);

	return jieguo2;
}
#endif


//5.
#if 0
void larger_of(double* x, double* y);
int main(void)
{
	double a, b;
	printf("�˳�����������Ľϴ��߸�ֵ��������\n");
	printf("������������������_________\b\b\b\b\b\b\b\b");
	scanf("%lf%lf", &a, &b);
	larger_of(&a, &b);
	printf("���ڣ�������Ϊ%.3lf��%.3f%\n", a, b);

	return 0;
}
void larger_of(double* x, double* y)
{
	if (*x >= *y)                                                         //���������ű��ʽ
		*y = *x;                                                            //           return *x>*y? (*y=*x) : (*x=*y);
	else
		*x = *y;

	return;
}
#endif


//6.
#if 0
void paidaxiao(double* x, double* y, double* z);//�Ŵ�С
int main(void)
{
	double a, b, c;
	printf("�˳����������������С��������\n");
	printf("������������������_________\b\b\b\b\b\b\b\b");
	scanf("%lf%lf%lf", &a, &b, &c);
	paidaxiao(&a, &b, &c);
	printf("���ڣ�����������%.3lf��%.3f��%.3f\n", a, b, c);

	return 0;
}
/*void paidaxiao(double* x, double* y, double* z)
{
	double min, middle, max;
	if (*x <= *y && *x <= *z)
		min = *x;
	else if (*y <= *x && *y <= *z)
		min = *y;
	else if (*z <= *x && *z <= *y)
		min = *z;

	if (*x >= *y && *x >= *z)
		max = *x;
	else if (*y >= *x && *y >= *z)
		max = *y;
	else if (*z >= *x && *z >= *y)
		max = *z;

	if (min < *x && *x < max)// (min <= *x && *x <= max)���У���������� 1 2 3��������� 1 1 3
		middle = *x;
	else if (min < *y && *y < max)
		middle = *y;
	else if (min < *z && *z < max)
		middle = *z;


	*x = min;
	*y = middle;//覴ã�������������ֵ����ȵ�ʱ����������
	*z = max;
}*/
//����
void paidaxiao(double* x, double* y, double* z)//�����Ƚϼ���
{
	double temp;
	if (*x > *y)
	{
		temp = *x;
		*x = *y;
		*y = temp;
	}
	if (*x > *z)
	{
		temp = *x;
		*x = *z;
		*z = temp;
	}
	if (*y > *z)
	{
		temp = *y;
		*x = *z;
		*y = temp;
	}
}
#endif


//7.
#if 0
int panduanzimu(int ch);//�ж���ĸ
int main(void)
{
	int ch;
	printf("�˳����ܱ��������ÿ���ַ��Ƿ�����ĸ\n");
	printf("�������ַ���\n");
	while ((ch = getchar()) != EOF)//ch=getchar()���С����Ҫ��
	{
		if (panduanzimu(ch) == -1)//�������ĸʱ
			printf("��");

		else if (panduanzimu(ch) == -2)//����س�ʱ
		{
			printf("��(������\\n)");
			printf("\n����������ַ���\n");
		}

		else
			printf("%-3d", panduanzimu(ch));

	}

	return 0;
}
int panduanzimu(int ch)
{
	int weizhi;

	if (ch >= 65 && ch <= 90)
	{
		weizhi = ch - 64;
	}
	else if (ch >= 'a' && ch <= 'z')
		weizhi = ch - 96;
	else if (ch == '\n')
		weizhi = -2;
	else
		weizhi = -1;

	return weizhi;
}
#endif
//7.��
#if 0
int panduanzimu(int ch);//�ж���ĸ
int main(void)
{
	int ch;
	printf("�˳����ܱ��������ÿ���ַ��Ƿ�����ĸ\n");
	printf("�������ַ���\n");
	while ((ch = getchar()) != EOF)//ch=getchar()���С����Ҫ��
	{
		if (ch == '\n')
			continue;//������з�������

		if (panduanzimu(ch) == -1)//�������ĸʱ
			printf("��");
		else
			printf("%-3d", panduanzimu(ch));

	}

	return 0;
}
int panduanzimu(int ch)
{
	int weizhi;

	if (ch >= 65 && ch <= 90)
	{
		weizhi = ch - 64;
	}
	else if (ch >= 'a' && ch <= 'z')
		weizhi = ch - 96;
	else
		weizhi = -1;

	return weizhi;
}
#endif


//8.
#if 0
double power(double n, int p);
int main(void)
{
	double x;
	int exp;

	printf("������һ�����ֺ͸����ֵ�������������\n");
	printf("������q���˳�����                 ");
	while (scanf("%lf%d", &x, &exp) == 2)
	{
		printf("%.2f��%d�η���%.2f\n", x, exp, power(x, exp));

		if (x == 0 && exp == 0)
			printf("0��0����δ���壬��˴���Ϊ1\n");

		printf("������һ�����֣�");
	}
	printf("Done!");

	return 0;
}
double power(double n, int p)
{
	double pow = 1;
	int i;
	int p1;

	if (p > 0)
	{
		for (i = 1; i <= p; i++)
			pow *= n;
	}
	else if (p < 0)
	{
		p1 = -p;
		for (i = 1; i <= p1; i++)
			pow *= n;
		pow = 1 / pow;
	}
	else if (p == 0 && n == 0)
		pow = 1;
	else if (p == 0 && n != 0)
		pow = 1;

	return pow;
}
//����
/*double power(double n, int p)
{
	double pow = 1;
	int i;
	if (n == 0 && p == 0)
	{
		printf("0��0����δ���壬�ʷ���ֵ��1\n");
		return 1;
	}
	if (n == 0)
		return 0;
	if (p == 0)
		return 1;
	if (p > 0)
	{
		for (i = 1; i <= p; i++)
			pow *= n;
		return pow;
	}
	if(p<0)
	{
		for (i = 1; i <= -p; i++)
			pow *= n;
		return 1/pow;
	}
}*/
#endif


//9.
#if 0
double power(double n, int p);
int main(void)
{
	double x;
	int exp;

	printf("������һ�����ֺ͸����ֵ�������������\n");
	printf("������q���˳�����                 ");
	while (scanf("%lf%d", &x, &exp) == 2)
	{
		printf("%.2f��%d�η���%.2f\n", x, exp, power(x, exp));

		if (x == 0 && exp == 0)
			printf("0��0����δ���壬��˴���Ϊ1\n");

		printf("������һ�����֣�");
	}
	printf("Done!");

	return 0;
}
/*double power(double n, int p)
{
	double pow ;
	int i;
	int p1;

	if (p > 0)
	{
		pow = n * power(n, p - 1);//power(2,3)�������pow=2*power(2,2)    power(2,2)�����pow=2*power(2,1)
													// power(2,1)�����pow=2*power(2,0)    power(2,0)�����pow=1,����power(2,0)�ķ���ֵ��1��
												   //�ɴ˿�֪2��3����Ϊ8��
	}


	else if (p == 0)    //�����if (p < 0)��Ҳ���������
	{
		if (n != 0)
		{
			pow = 1;
			return pow;//Ϊʲô��������Ҳ���ԣ�
		}
		else
			return 1;
	}


	if (p < 0)
	{
		p1 = -p;
		pow = n * power(n, p1 - 1);   //�ݹ�ʱ��p1-1��ֵ�����β�p����ִ��if(p>0)�ĺ����顣
		pow = 1 / pow;
		return pow;
	}
}*/
//����
double power(double n, int p)
{
	double pow = 1;
	int i;
	if (n == 0 && p == 0)
	{
		return 1;
	}
	if (n == 0)
		return 0;
	if (p == 0)
		return 1;

	if (p > 0)
		return n * power(n, p - 1);
	else
		return power(n, p + 1) / n;
}
#endif


//10.
#if 0
void to_base_n(int daichuli, int jinzhi);//������    ����

int main(void)
{
	unsigned long num1, num2;

	printf("������һ�������ͰѴ���ת���ɵ�(2~10)����������q���˳�����\n");

	while (scanf("%d%d", &num1, &num2) == 2)
	{
		printf("ת��Ϊ%d�����ǣ�", num2);
		to_base_n(num1, num2);

		printf("\n��������һ�������ͰѴ���ת���ɵ�(2~10)����������q���˳�����\n");
	}

	return 0;
}
void to_base_n(int daichuli, int jinzhi)
{
	int yushupanduan;//�����ж�

	yushupanduan = daichuli % jinzhi;

	if (daichuli >= jinzhi)
		to_base_n(daichuli / jinzhi, jinzhi);

	//putchar(yushupanduan==0 ? '0' : '1');
	printf("%d", yushupanduan);//����

	return;
}
#endif


//11.
#if 0
unsigned long Fibonacci(unsigned n);
int main(void)
{
	unsigned int num;

	printf("�˳�����ѭ������ݹ����쳲�������\n");
	printf("������Ҫ�����쳲��������ĵڼ��______\b\b\b\b\b");
	while (scanf("%d", &num) == 1)
	{
		printf("��%d��쳲���������%ld\n", num, Fibonacci(num));
		printf("������Ҫ�����쳲��������ĵڼ��______\b\b\b\b\b");
	}
	printf("�ټ���\n");

	return 0;
}
unsigned long Fibonacci(unsigned n)
{
	int shuzu[256];
	shuzu[0] = 1;
	shuzu[1] = 1;

	int i;

	for (i = 2; i <= n - 1; i++)//i=2��shuzu[2]�൱��쳲������ĵ�3���ֵ
	{
		shuzu[i] = shuzu[i - 1] + shuzu[i - 2];
	}

	unsigned long jieguo = shuzu[i - 1];//ע����д��shuzu[i]����ʾ����ȷ����Ϊforѭ������iֵ��i��+1
																//�д���õ����ݴ��������ĳ�������ֵӦ����i-1��
	return jieguo;
}
#endif
//9.����
#if 1
void Fibonacci(unsigned n);
int main(void)
{
	unsigned int num;

	printf("�˳�����ѭ������ݹ����쳲�������\n");
	printf("������Ҫ�����쳲��������ĵڼ��______\b\b\b\b\b");
	while (scanf("%d", &num) == 1)
	{
		printf("��%d��쳲���������\n", num);
		Fibonacci(num);
		printf("������Ҫ�����쳲��������ĵڼ��______\b\b\b\b\b");
	}
	printf("�ټ���\n");

	return 0;
}
void Fibonacci(unsigned n)
{
	unsigned long f1, f2, temp;

	f1 = f2 = 1;

	for (int i = 1; i <= n; i++)
	{                                                               // f1   f2
		printf("%lu��", f1);                              //  1    1      2
		temp = f1 + f2;                                 //         f1    f2
		f1 = f2;//��ǰ�����ֵ����
		f2 = temp;
	}
	printf("\n");

	return;
}
#endif
#endif


//chapter 10
//code1.c
#if 0
#include <stdio.h>
//
#if 0
#endif


//��ʼ������
#if 0
#define MONTHS 12
int main(void)
{
	int days[MONTHS] = { 31,28,31,30,31,30,31,31,30,31,30,31 };

	int index;
	for (index = 0; index < MONTHS; index++)
		printf("Month %3d has %2d days. \n", index + 1, days[index]);

	return 0;
}
#endif


//δ��ʼ������ĺ��
#if 0
#define MONTHS 12
int main(void)
{
	int days[MONTHS];

	int index;
	for (index = 0; index < MONTHS; index++)
		printf("Month %3d has %2d days. \n", index + 1, days[index]);

	return 0;
}
#endif


//���ֳ�ʼ������ĺ��
#if 0
#define MONTHS 12
int main(void)
{
	int days[MONTHS] = { 31,28 };

	int index;
	for (index = 0; index < MONTHS; index++)
		printf("Month %3d has %2d days. \n", index + 1, days[index]);

	return 0;
}
#endif


//�ñ���������Ԫ�ظ���
#if 0
int main(void)
{
	int days[] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	int index;

	printf("%zd\n", sizeof days);//����daysռ48���ֽڣ�intռ32λ��4���ֽڣ�
	for (index = 0; index < sizeof days; index++)
		printf("Month %3d has %2d days. \n", index + 1, days[index]);

	putchar('\n');

	for (index = 0; index < sizeof days / sizeof days[0]; index++)//sizeof days/sizeof days[0]=12
		printf("Month %3d has %2d days. \n", index + 1, days[index]);

	return 0;
}
#endif


//ʹ�ó�ʼ����
#if 0
#define MONTHS 12
int main(void)
{
	int days[MONTHS] = { 31,28,[4] = 31,    30,[1] = 29 };//29�Ḳ�ǵ�28��30��������ֵΪ5����

	int index;
	for (index = 0; index < MONTHS; index++)
		printf("Month %3d has %2d days. \n", index + 1, days[index]);

	return 0;
}
#endif


//ʹ�ö�λ�������ÿ����ܽ�ˮ������ƽ����ˮ����ÿ�¶�ƽ����ˮ��
#if 0
#define MONTHS 12
#define YEARS 5
int main(void)
{
	const float rain[YEARS][MONTHS] =
	{
		{4.3,4.3,4.3,3.0,2.0,1.2,0.2,0.2,0.4,2.4,3.5,6.6},
		{8.5,8.2,1.2,1.6,2.4,0.0,5.2,0.9,0.3,0.9,1.4,7.3},
		{9.1,8.5,6.7,4.3,2.1,0.8,0.2,0.2,1.1,2.3,6.1,8.4},
		{7.2,9.9,8.4,3.3,1.2,0.8,0.4,0.0,0.6,1.7,4.3,6.2},
		{7.6,5.6,3.8,2.8,3.8,0.2,0.0,0.0,0.0,1.3,2.6,5.2}
	};
	int year, month;
	float yuezonghe, nianzonghe;

	printf("  ��           ��ˮ��\n");
	for (year = 0, nianzonghe = 0; year < YEARS; year++)
	{
		for (month = 0, yuezonghe = 0; month < MONTHS; month++)
			yuezonghe += rain[year][month];
		printf("%5d%15.1f\n", 2010 + year, yuezonghe);
		nianzonghe += yuezonghe;
	}
	printf("ÿ���ƽ����ˮ��Ϊ%.1f\n", nianzonghe / YEARS);

	printf("�½�ˮ��ƽ��ֵΪ��\n");
	printf("Jan  Feb  Mar  Apr  May  Jun  Jul  Aug  Sep  Oct  Nov  Dec\n");

	for (month = 0; month < MONTHS; month++)
	{
		for (year = 0, yuezonghe = 0; year < YEARS; year++)
			yuezonghe += rain[year][month];//��:5������ÿ��1�·ݵĽ�ˮ��֮��
		printf("%-5.1f", yuezonghe / YEARS);
	}
	printf("\n");

	return 0;
}
#endif


//ָ�����һ�������Ե�ַ��Ӱ��
#if 0
#define SIZE   4
int main(void)
{
	short a[SIZE];
	short* pti;//ָ��short���͵�ָ��
	double b[SIZE];
	double* ptd;

	pti = a;//�������Ǹ�������Ԫ�صĵ�ַ
	ptd = b;
	printf("%23s%23s\n", "short", "double");

	for (int index = 0; index < SIZE; index++)
		printf("pointer+%d:%10p%20p\n", index, pti + index, ptd + index);

	return 0;
}
#endif


//ʹ��ָ���������洢�������е�ֵ
#if 0
#define MONTHS 12
int main(void)
{
	int days[MONTHS] = { 31,28,31,30,31,30,31,31,30,31,30,31 };

	int index;
	for (index = 0; index < MONTHS; index++)
		printf("Month %3d has %2d days. \n", index + 1, *(days + index));

	return 0;
}
#endif


//ʹ��ָ����������е�Ԫ�صĺ�
#if 1
#define SIZE 10
int sum(int* ar, int n);
int main(void)
{
	int marbles[SIZE] = { 20,10,5,39,4,16,19,26,31,20 };
	long answer;

	answer = sum(marbles, SIZE);
	printf("������ܺ�Ϊ��%ld\n", answer);
	printf("����ռ%zd���ֽ�\n", sizeof marbles);

	return 0;
}
int sum(int* ar, int n)
{
	int index;
	int sum = 0;

	for (index = 0; index < n; index++)
		sum += *(ar + index);
	printf("arռ%zd���ֽ�\n", sizeof ar);

	return sum;
}
#endif


//ʹ��ָ����������е�Ԫ�صĺ�(����)
#if 0
#define SIZE 10
int sum(int* start, int* end);
int main(void)
{
	int marbles[SIZE] = { 20,10,5,39,4,16,19,26,31,20 };
	long answer;

	answer = sum(marbles, marbles + SIZE);
	printf("������ܺ�Ϊ��%ld\n", answer);
	printf("����ռ%zd���ֽ�\n", sizeof marbles);

	return 0;
}
int sum(int* start, int* end)
{
	int sum = 0;

	/*while (start < end)
	{
		sum += *start;
		start++;
	}*/
	for (; start < end; start++)
		sum += *start;

	return sum;
}
#endif


//ָ�������е����ȼ�
#if 0
int data[2] = { 100,200 };
int moredata[2] = { 300,400 };
int main(void)
{
	int* p1, * p2, * p3;

	p1 = p2 = data;
	p3 = moredata;

	printf("*p1=%d,         *p2=%d,         *p3=%d\n", *p1, *p2, *p3);
	printf("*p1++=%d,       *++p2=%d,      (*p3)++=%d\n", *p1++, *++p2, (*p3)++);
	printf("*p1=%d,         *p2=%d,         *p3=%d\n", *p1, *p2, *p3);

	return 0;
}
#endif


//ָ�����
#if 0
int main(void)
{
	int shuzu[5] = { 100,200,300,400,500 };
	int* p1, * p2, * p3;

	printf("     shuzu=%p\n", shuzu);                                //ע�⣡ ���������ȼۣ�
	printf("    &shuzu=%p\n", &shuzu);
	printf(" &shuzu[0]=%p\n", &shuzu[0]);

	p1 = shuzu;
	p2 = &shuzu[2];

	printf("ָ��ָ��ĵ�ַ			ָ��ָ���ַ�е�ֵ			ָ�뱾��ĵ�ַ\n");
	printf("p1=%p		*p1=%d					&p1=%p\n", p1, *p1, &p1);

	//ָ��ӷ�
	p3 = p1 + 4;
	printf("p1+4=%p		*(p1+4)=%d\n", p1 + 4, *(p1 + 4));
	p1++;
	printf("p1++��\n");
	printf("p1=%p		*p1=%d			  	        &p1=%p\n", p1, *p1, &p1);

	p2--;
	printf("p2��1��\n");
	printf("p2=%p		*p2=%d			  	        &p2=%p\n", p2, *p2, &p2);

	--p1;
	++p2;
	printf("p1,p2��ԭ\n");

	printf("p1=%p,p2=%p\n", p1, p2);

	//ָ�����
	printf("p1=%p,p2=%p,p2-p1=%td\n", p1, p2, p2 - p1);
	//ָ���ȥһ������
	printf("p3=%p,p3-2=%p\n", p3, p3 - 2);

	//ָ���ĸ�ֵ
	//p1 = p1 + p2;��Ч

	return 0;
}
#endif


//��������ĺ���
#if 0
#define SIZE 5
void show_array(const double* ar, int n);
void mult_array(double ar[], int n, double mult);
int main(void)
{
	double dip[SIZE] = { 20.0,17.66,8.2,15.3,22.22 };

	printf("ԭʼ�������е������ǣ�\n");
	show_array(dip, SIZE);
	printf("����������е������ǣ�\n");
	mult_array(dip, SIZE, 2.5);
	show_array(dip, SIZE);

	return 0;
}
void show_array(const double* ar, int n)
{
	int i;
	for (i = 0; i < n; i++)
		printf("%8.3f", *(ar + i));

	putchar('\n');
}
void mult_array(double ar[], int n, double mult)
{
	int i;
	for (i = 0; i < n; i++)
		ar[i] *= mult;
	//*(ar + i) *= mult;
}
#endif


//���ָ����α�ʾ��ά����
#if 0
int main(void)
{
	int zippo[4][2] = { {2,4},{6,8},{1,3},{5,7} };

	printf("       zippo=%p\n", zippo);                                //��Ҫ����������
	printf("      &zippo=%p\n", &zippo);
	printf("    zippo[0]=%p\n", zippo[0]);
	printf("   &zippo[0]=%p\n", &zippo[0]);
	printf("&zippo[0][0]=%p\n\n\n", &zippo[0][0]);

	printf("zippo=%p, zippo+1=%p\n", zippo, zippo + 1);
	printf("zippo[0]=%p, zippo[0]+1=%p\n", zippo[0], zippo[0] + 1);
	printf("*zippo=%p, *zippo+1=%p\n\n", *zippo, *zippo + 1);

	printf("zippo[0][0]=%d\n", zippo[0][0]);
	printf("*zippo[0]=%d\n", *zippo[0]);
	printf("**zippo=%d\n\n", **zippo);

	printf("zippo[2][1]=%d\n", zippo[2][1]);
	printf("*(*(zippo+2)+1)=%d\n\n", *(*(zippo + 2) + 1));


	return 0;
}
#endif


//ͨ��ָ���ȡ��ά�������Ϣ
#if 0
int main(void)
{
	int zippo[4][2] = { {2,4},{6,8},{1,3},{5,7} };
	int(*p)[2];

	p = zippo;
	printf("p=%p, p+1=%p\n", p, p + 1);
	printf("p[0]=%p, p[0]+1=%p\n", p[0], p[0] + 1);

	printf("*p=%p, *p+1=%p\n", *p, *p + 1);
	printf("p[0][0]=%d\n", p[0][0]);
	printf("*p[0]=%d\n", *p[0]);
	printf("**p=%d\n", **p);
	printf("p[2][1]=%d\n", p[2][1]);
	printf("*(*(p+2)+1)=%d\n", *(*(p + 2) + 1));

	return 0;
}
#endif


//ָ���ָ��
#if 0
int main(void)
{
	int num = 2;
	int* p1;
	int** p2;

	p1 = &num;
	p2 = &p1;

	printf("num=%d\n", num);
	printf("&num=%p\n", &num);
	printf("p1=%p\n", p1);
	printf("&p1=%p\n", &p1);
	printf("p2=%p\n", p2);
	printf("&p2=%p\n\n", &p2);

	printf("*p1=%d\n", *p1);//��д��%p,��Ϊ0000000002
	printf("*p2=%p\n", *p2);
	printf("**p2=%d\n", **p2);

	return 0;
}
#endif


//�����ά����ĺ���
#if 0
#define ROWS 3
#define COLS 4
void sum_rows(int(*ar)[COLS], int rows);//�������е��к�
void sum_cols(int  ar[][COLS], int rows);//�������е��к�
int sum(int  ar[][COLS], int rows);//�������е��ܺ�

int main(void)
{
	int shuzu[ROWS][COLS] = { {2,4,6,8},
													{3,5,7,9},
													{12,10,8,6} };

	sum_rows(shuzu, ROWS);
	sum_cols(shuzu, ROWS);
	printf("��������Ԫ��֮��Ϊ��%d\n", sum(shuzu, ROWS));

	return 0;
}
void sum_rows(int(*ar)[COLS], int rows)
{
	int i, j, sum1;

	for (i = 0; i < rows; i++)
	{
		sum1 = 0;
		for (j = 0; j < COLS; j++)
			//sum1 += shuzu[i][j];     //����дû�ã�ֻ����ָ��
			sum1 += ar[i][j];

		printf("row=%d, sum1=%d\n", i, sum1);

	}
}
void sum_cols(int(*ar)[COLS], int rows)
{
	int i, j, sum2;

	for (i = 0; i < COLS; i++)
	{
		sum2 = 0;
		for (j = 0; j < rows; j++)
			/*			sum2 += ar[i][j];*/                //���󣡣���
			sum2 += ar[j][i];

		printf("column=%d, sum2=%d\n", i, sum2);

	}
}
int sum(int(*ar)[COLS], int rows)
{
	int i, j, sum = 0;

	for (i = 0; i < rows; i++)
	{

		for (j = 0; j < COLS; j++)
			sum += ar[i][j];

	}
	return sum;
}
#endif


//�䳤����(�޷�ʵ��)
#if 0
#define ROWS 3
#define COLS 4

int sum(int rows, int cols, int ar[rows][cols]);//�������е��ܺ�

int main(void)
{
	int shuzu[ROWS][COLS] = { {2,4,6,8},
													{3,5,7,9},
													{12,10,8,6} };

	sum_rows(shuzu, ROWS);
	sum_cols(shuzu, ROWS);
	printf("��������Ԫ��֮��Ϊ��%d\n", sum(ROWS, COLS, shuzu));

	return 0;
}
int sum(int rows, int cols, int ar[rows][cols])
{
	int i, j, sum1;

	for (i = 0; i < rows; i++)
	{
		sum1 = 0;
		for (j = 0; j < COLS; j++)
			//sum1 += shuzu[i][j];     //����дû�ã�ֻ����ָ��
			sum1 += ar[i][j];

		printf("row=%d, sum1=%d\n", i, sum1);

	}
}
#endif


//����������
#if 0
#define COLS 4
int sum2(const int ar[][COLS], int rows);
int sum(const int ar[], int n);
int main(void)
{
	int total1, total2, total3;
	int* p1;
	int* p2[COLS];

	p1 = (int[2]){ 10,20 };
	//p2 = (int[2][COLS]){ {1,2,3,-9},{4,5,6,-8} };   ������޷�ʵ��

	total1 = sum(p1, 2);
	printf("total1=%d\n", total1);

	return 0;
}
int sum(const int ar[], int n)
{
	int i;
	int total = 0;
	for (i = 0; i < n; i++)
	{
		total += ar[i];
	}
	return total;
}
#endif
#endif


//chapter 10
//code2.c
#if 0
#include <stdio.h>
//
#if 1
#endif


//��ϰ��
//4.
#if 0
int main(void)
{
	int* ptr;
	int torf[2][2] = { 12,14,16 };
	ptr = torf[0];

	printf("%d\n", *ptr);
	printf("%d\n", *(ptr + 2));
	printf("%d\n", torf[0][2]);//���torf[1][0]�ϵ�ֵ

	return 0;
}
#endif


//4.
#if 0
int main(void)
{
	int(*ptr)[2];
	int torf[2][2] = { 12,14,16 };
	ptr = torf;

	printf("%d\n", **ptr);
	printf("%d\n", **(ptr + 1));
	printf("%d\n", *(torf[0] + 1));
	return 0;
}
#endif


//6
#if 0
int main(void)
{
	int grid[30][100];
	int a[100] = { [5] = 101,[20] = 101,101,101,101 };

	printf("%p\n%p\n%p\n", &grid[22][0], grid[22], &grid[22]);
	printf("%p\n%p\n%p\n%p\n", &grid[0][0], grid[0], &grid[0], grid);

	return 0;
}
#endif


//10.
#if 0
int main(void)
{
	float rootbeer[10] = { 1,2,3,4,5,6,7,8,9,10 };
	float things[10][5];
	//things[5] = rootbeer;//һά���鲻��ֱ�����ά�����һ�и�ֵ

	return 0;
}
#endif


//13.
#if 0
void show(const double ar[], int n);
int main(void)
{
	double* p;

	/*p=(double[4]) {8,3,9,2};
	show(p,4);*/
	show((double[4]) { 8, 3, 9, 2 }, 4);

	return 0;
}
void show(const double ar[], int n)
{
	double sum = 0;
	int i;
	for (i = 0; i < n; i++)
	{
		sum += *(ar + i);
	}
	printf("��Ϊ%.2f\n", sum);
}
#endif
#if 1
void show2(const double ar2[][3], int n);
int main(void)
{
	/*double (*p)[3];

	p = (double[2][3]){ {8,3,9},{5,4,1} };
	show2(p,2 );*/

	show2((double[2][3]) { {8, 3, 9}, { 5,4,1 } }, 2);

	return 0;
}
void show2(const double ar2[][3], int n)
{
	int i, j;
	double sum = 0;
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 3; j++)
			//sum += ar2[i][j];
			sum += *(*(ar2 + i) + j);
	}
	printf("��Ϊ%.2f", sum);
}
#endif
#endif


//chapter 10
//code3.c
#if 0
#include <stdio.h>
//
#if 1
#endif


//�����ϰ
//1.
#if 0
#define MONTHS 12
#define YEARS 5
double sumnian(int(*ar)[MONTHS], int years);
void sumyue(int(*ar)[MONTHS], int years);

int main(void)
{
	const double rain[YEARS][MONTHS] =                                            //�˴���д��const float rain    ���������ݻ�ܴ󣬷�������
	{
		{4.3,4.3,4.3,3.0,2.0,1.2,0.2,0.2,0.4,2.4,3.5,6.6},
		{8.5,8.2,1.2,1.6,2.4,0.0,5.2,0.9,0.3,0.9,1.4,7.3},
		{9.1,8.5,6.7,4.3,2.1,0.8,0.2,0.2,1.1,2.3,6.1,8.4},
		{7.2,9.9,8.4,3.3,1.2,0.8,0.4,0.0,0.6,1.7,4.3,6.2},
		{7.6,5.6,3.8,2.8,3.8,0.2,0.0,0.0,0.0,1.3,2.6,5.2}
	};
	double nianzonghe;
	nianzonghe = sumnian(rain, YEARS);
	printf("ÿ���ƽ����ˮ��Ϊ%.1f\n", nianzonghe / YEARS);

	printf("�½�ˮ��ƽ��ֵΪ��\n");
	printf("Jan  Feb  Mar  Apr  May  Jun  Jul  Aug  Sep  Oct  Nov  Dec\n");

	sumyue(rain, YEARS);

	//int year, month;
	//float yuezonghe, nianzonghe;

	//printf("  ��           ��ˮ��\n");
	//for (year = 0, nianzonghe = 0; year < YEARS; year++)
	//{
	//	for (month = 0, yuezonghe = 0; month < MONTHS; month++)
	//		yuezonghe += rain[year][month];
	//	printf("%5d%15.1f\n", 2010 + year, yuezonghe);
	//	nianzonghe += yuezonghe;
	//}
	//printf("ÿ���ƽ����ˮ��Ϊ%.1f\n", nianzonghe / YEARS);

	//printf("�½�ˮ��ƽ��ֵΪ��\n");
	//printf("Jan  Feb  Mar  Apr  May  Jun  Jul  Aug  Sep  Oct  Nov  Dec\n");

	//for (month = 0; month < MONTHS; month++)
	//{
	//	for (year = 0, yuezonghe = 0; year < YEARS; year++)
	//		yuezonghe += rain[year][month];//��:5������ÿ��1�·ݵĽ�ˮ��֮��
	//	printf("%-5.1f", yuezonghe / YEARS);
	//}
	//printf("\n");

	return 0;
}
double sumnian(double(*ar)[MONTHS], int years)                                          //����ÿ��Ľ�ˮ��    ע��д������double�ĺ���
{
	int i, j;
	double sum, sumsum = 0.0;

	for (i = 0; i < years; i++)
	{
		for (j = 0, sum = 0.0; j < MONTHS; j++)
		{

			sum += ar[i][j];  //sum += *(*(ar + i) + j);  Ҳ��
			/*sumsum += sum;*/                                                                //ע�⣺sumsum���ڴ˴����У�������sumÿ�����Ӻ��ֵ
		}
		printf("%5d%15.1f\n", 2010 + i, sum);//sum->ÿ���
		sumsum += sum;

	}
	return sumsum;
}
void sumyue(double(*ar)[MONTHS], int years)
{
	int i, j;
	double sum;

	for (i = 0; i < MONTHS; i++)
	{
		for (j = 0, sum = 0.0; j < years; j++)
		{
			sum += *(*(ar + j) + i);																							          //ֻҪÿ���µ��ܺͣ����������µ��ܺ�
		}
		printf("%-5.1f", sum / YEARS);
	}
	return;
}
#endif


//2.
#if 0
void copy_arr(double(*p1), double(*p2), int n);
void copy_ptr(double(*p1), double(*p2), int n);
void copy_ptrs(double(*p1), double(*p2), double* p3);
void show(double* p, int n);

int main(void)
{
	double source[5] = { 1.1,2.2,3.3,4.4,5.5 };
	double target1[5];
	double target2[5];
	double target3[5];

	copy_arr(target1, source, 5);
	show(target1, 5);
	copy_ptr(target2, source, 5);
	show(target2, 5);
	copy_ptrs(target3, source, source + 5);
	show(target3, 5);

	return 0;
}
void copy_arr(double(*p1), double(*p2), int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		p1[i] = p2[i];
	}
}
void copy_ptr(double(*p1), double(*p2), int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		*(p1 + i) = *(p2 + i);
	}
}
void copy_ptrs(double(*p1), double(*p2), double* p3)//ʵ�Σ�target3, source, source+5
{
	int i;
	double* p4;
	p4 = p2;																															//����Ҫ�Ӹ��м�ֵ���洢p2
																																			//��Ϊp2��������Ϊ�ж�ѭ����ֹ������
	for (i = 0; p2 < p3; p2++, i++)
	{
		*(p1 + i) = *(p4 + i);																								      //д��*(p1 + i) = *(p2 + i); ���󣡣�     
	}
}
//������(���ö���һ���м�ֵ)
//for ( i=0   ;p3-p2>i;    i++)
//{
//	*(p1 + i) = *(p2 + i);																								      //д��*(p1 + i) = *(p2 + i); ���󣡣�     
//}
void show(double* p, int n)
{
	int index;
	for (index = 0; index < n; index++)
		printf("%-4.1f", *(p + index));
	//printf("%3.1f", p[index]);
	printf("\n");
}
#endif


//3.
#if 0
int search_max_value(int* p, int n);
int main(void)
{
	printf("��������������(��q����)��\n");

	int num[256];
	int index = -1;
	int num1;
	//int status;
	// 
	//do
	//{
	//	status=scanf("%d", num1);
	//	index++;
	//	num[index] = num1;
	//} while (status== 1);

	while (scanf("%d", &num1) == 1)
	{
		index++;
		num[index] = num1;
	}

	printf("���ֵ�ǣ�%d", search_max_value(num, index + 1));

	return 0;
}
int search_max_value(int* p, int n)//�ҳ������е����ֵ
{
	int max = *p;
	int index;
	for (index = 0; index < n; index++)
	{
		max = ((*(p + index)) > max) ? *(p + index) : max;
	}
	return max;
}
#endif


//4.
#if 0
int search_max_value(double* p, int n);
int main(void)
{
	printf("������С������(��q����)��\n");

	double num[256];
	int index = -1;
	double num1;

	while (scanf("%lf", &num1) == 1)
	{
		index++;
		num[index] = num1;
	}

	printf("���ֵ���±��ǣ�[%d]", search_max_value(num, index + 1));

	return 0;
}
int search_max_value(double* p, int n)//�ҳ������е����ֵ���±�
{
	double max = *p;
	int index;
	for (index = 0; index < n; index++)
	{
		max = ((*(p + index)) > max) ? *(p + index) : max;
	}


	for (index = 0; index < n; index++)
	{
		if (p[index] == max)
		{
			break;
		}
		else
			continue;
	}

	return index;
}
#endif


//5.
#if 0
double max - min_value(double* p, int n);
int main(void)
{
	printf("������С������(��q����)��\n");

	double num[256];
	int index = -1;
	double num1;

	while (scanf("%lf", &num1) == 1)
	{
		index++;
		num[index] = num1;
	}

	printf("���ֵ����Сֵ�Ĳ�ֵ��%.2f", search_max_value(num, index + 1));

	return 0;
}
double max - min_value(double* p, int n)//���������е����ֵ����Сֵ�Ĳ�ֵ
{
	double max = *p;
	int index;
	for (index = 0; index < n; index++)
	{
		max = ((*(p + index)) > max) ? *(p + index) : max;
	}

	double min = p[0];

	for (index = 0; index < n; index++)
	{
		min = ((*(p + index)) < min) ? *(p + index) : min;
	}

	double sub = max - min;

	return sub;
}
#endif


//6.
#if 0
void reverse_value(double* p, int n);
int main(void)
{
	printf("������С������(��q����)��\n");

	double num[256];
	int index = -1;
	double num1;

	while (scanf("%lf", &num1) == 1)
	{
		index++;
		num[index] = num1;
	}

	int yuansugeshu = index + 1;//Ԫ�ظ���

	printf("���������Ԫ���ǣ�");
	for (index = 0; index < yuansugeshu; index++)
		printf("%-6.2f", num[index]);

	putchar('\n');

	reverse_value(num, yuansugeshu);
	printf("    �������к��ǣ�");
	for (index = 0; index < yuansugeshu; index++)
		printf("%-6.2f", num[index]);


	return 0;
}
#endif
#if 0
void reverse_value(double* p, int n)
{
	int index;

	//double temp[n];																//˼·1����num���鿽����һ���������У�Ȼ���num�е�Ԫ�����¸�ֵ
	//double temp[] = {};															// temp[n]���У�n���ǳ���

	double temp;
	for (index = 0; index < n; index++)
	{
		temp = p[n - index - 1];
		p[index] = temp;											//˼·2��ֱ����ָ��
	}																						//						   1.10  2.20  3.30  4.40  5.50
																						   //�������к��ǣ�5.50  4.40  3.30  4.40  5.50
	return;																		   //��ν��??
}																							//���м�������ݴ�ֵ  ʧ�ܣ�    ��β�ཻ���ķ�������
#elif 0
//����
//������������ķ������Ƚ�����
//�Ƚ���������Ԫ�صĴ�С��ϵ��ͨ������Ԫ��λ��������������Ҫ�������Ԫ�ء�
//����Ԫ�������Ƚϣ���Ҫͨ��n-1�αȽϲ��ܱ�֤һ��Ԫ�ص�������λ�á�
void reverse_value(double* p, int n)
{
	double temp;

	for (int i = 0; i < n - 1; i++)
	{
		for (int j = 0; j < n - 1; j++)//��for (int j = 0; j < n - 1-i; j++)	//�ӵ�һ��Ԫ�ؿ�ʼ�������Աȣ�����ֱ���������Ԫ�رȽ��ꡣ
		{																									//	ע���ڲ�ѭ��������в���Ԫ��δ�źá��磺����Ԫ��������λ��
			if (p[j] < p[j + 1])						//�ڲ�ѭ��һ�Σ��ܱ�֤һ��Ԫ�ص���������λ�ã�
			{													//�����ѭ����󣬱�֤����Ԫ�ص���ȷλ�á�
				temp = p[j];
				p[j] = p[j + 1];
				p[j + 1] = temp;
			}
		}
	}

	return;
}
#endif


//7.
#if 0
void copy_ptr(double(*p1)[3], double(*p2)[3], int rows);
//void show(double *p1[3],int rows);  ���󣡣�
void show(double(*p1)[3], int rows);

//������һά���鸴�ƺ���+ѭ��
void copy_ptr_yiwei(double(*p1), double(*p2), int n);

int main(void)
{
	double source[2][3] = { {1.1,2.2,3.3},{4.4,5.5,6.6} };
	double target[2][3];
	//copy_ptr(target,source,2);

	for (int i = 0; i < 2; i++)
		copy_ptr_yiwei(target[i], source[i], 3);

	show(target, 2);

	return 0;
}
void copy_ptr(double(*p1)[3], double(*p2)[3], int rows)
{
	int i, j;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < 3; j++)
			*(*(p1 + i) + j) = *(*(p2 + i) + j);
	}
}
void copy_ptr_yiwei(double(*p1), double(*p2), int n)
{
	for (int index = 0; index < n; index++)
	{
		*(p1 + index) = *(p2 + index);
	}
}
void show(double(*p1)[3], int rows)
{
	//printf("%5.2lf", p1[0][0]);//Ϊʲô����ʾ��  ��Ϊ (* p1)[3] ��д��*p1 [3]
	int i, j;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < 3; j++)
			printf("%5.2lf", p1[i][j]);
		putchar('\n');
	}
}
#endif


//8.
#if 0
void copy_ptr(double(*p1), double(*p2), int n);
void show(double(*p1), int n);

int main(void)
{
	double source[7] = { 1.1,2.2,3.3,4.4,5.5,6.6,7.7 };
	double target[3] = { 0,0,0 };
	copy_ptr(&target[0], &source[0], 3);//����Ԫ�صĵ�ַ��������Ԫ�صĸ���
	show(target, 3);

	return 0;
}
void copy_ptr(double(*p1), double(*p2), int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		*(p1 + i) = *(p2 + 2 + i);//p1������0��1��2  ������ p2������2��3��4����3��4��5��Ԫ�ص�ֵ
	}
}
void show(double(*p1), int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		printf("%5.2lf", p1[i]);
	}
}
#endif


//9.
#if 0
#define N 3
void copy(double(*p1)[5], double(*p2)[5], int rows);
void show(double(*p1)[5], int rows);
//void show(int rows,int cols,double p1[rows][cols]);		//�䳤�����޷�ʵ��

int main(void)
{
	double num[N][5] = {
		{1.0,    2.0,  3.0,  4.0,  5.0},
		{6.0,   7.0,   8.0,  9.0, 10.0},
		{11.0,12.0,13.0,14.0,15.0}
	};
	double target[N][5];
	copy(target, num, N);
	show(target, N);

	return 0;
}
void copy(double(*p1)[5], double(*p2)[5], int rows)
{
	int i, j;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < 5; j++)
			*(*(p1 + i) + j) = *(*(p2 + i) + j);
	}
}
void show(double(*p1)[5], int rows)
{
	int i, j;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < 5; j++)
			printf("%-5.2lf", p1[i][j]);
		putchar('\n');
	}
}
#endif


//10.
#if 0
void chuli(int* p1, int* p2, int* p3, int n);
void show(int* p1, int n);
int main(void)
{
	int shuzu1[4] = { 2,4,5,8 };
	int shuzu2[4] = { 1,0,4,6 };
	int shuzu3[4];

	show(shuzu1, 4);
	show(shuzu2, 4);
	chuli(shuzu3, shuzu2, shuzu1, 4);
	show(shuzu3, 4);

	return 0;
}
void chuli(int* p1, int* p2, int* p3, int n)
{
	int i;
	for (i = 0; i < n; i++)
		*(p1 + i) = *(p2 + i) + *(p3 + i);
}
void show(int* p1, int n)
{
	int i;
	for (i = 0; i < n; i++)
		printf("%3d", p1[i]);
	putchar('\n');
}
#endif


//11.
#if 0
void show(int(*p)[5], int rows);
void chuli(int(*p)[5], int rows);
int main(void)
{
	int shuzu1[3][5] = {
		{1,2,3,4,5},
		{6,7,8,9,10},
		{11,12,13,14,15}
	};

	show(shuzu1, 3);
	chuli(shuzu1, 3);
	printf("��ֵ������\n");
	show(shuzu1, 3);

	return 0;
}
void show(int(*p)[5], int rows)
{
	int i, j;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < 5; j++)
			printf("%4d", p[i][j]);
		putchar('\n');
	}
}
void chuli(int(*p)[5], int rows)
{
	int i, j;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < 5; j++)
			*(*(p + i) + j) *= 2;
	}
}
#endif


//12.
#if 0
#define MONTHS 12
#define YEARS 5
double sumnian(int(*ar)[MONTHS], int years);
void sumyue(int(*ar)[MONTHS], int years);

int main(void)
{
	const double rain[YEARS][MONTHS] =                                            //�˴���д��const float rain    ���������ݻ�ܴ󣬷�������
	{
		{4.3,4.3,4.3,3.0,2.0,1.2,0.2,0.2,0.4,2.4,3.5,6.6},
		{8.5,8.2,1.2,1.6,2.4,0.0,5.2,0.9,0.3,0.9,1.4,7.3},
		{9.1,8.5,6.7,4.3,2.1,0.8,0.2,0.2,1.1,2.3,6.1,8.4},
		{7.2,9.9,8.4,3.3,1.2,0.8,0.4,0.0,0.6,1.7,4.3,6.2},
		{7.6,5.6,3.8,2.8,3.8,0.2,0.0,0.0,0.0,1.3,2.6,5.2}
	};
	double nianzonghe;
	nianzonghe = sumnian(rain, YEARS);
	printf("ÿ���ƽ����ˮ��Ϊ%.1f\n", nianzonghe / YEARS);

	printf("�½�ˮ��ƽ��ֵΪ��\n");
	printf("Jan  Feb  Mar  Apr  May  Jun  Jul  Aug  Sep  Oct  Nov  Dec\n");

	sumyue(rain, YEARS);

	return 0;
}
double sumnian(double(*ar)[MONTHS], int years)                                          //����ÿ��Ľ�ˮ��    ע��д������double�ĺ���
{
	int i, j;
	double sum, sumsum = 0.0;

	for (i = 0; i < years; i++)
	{
		for (j = 0, sum = 0.0; j < MONTHS; j++)
		{

			sum += ar[i][j];  //sum += *(*(ar + i) + j);  Ҳ��
			/*sumsum += sum;*/                                                                //ע�⣺sumsum���ڴ˴����У�������sumÿ�����Ӻ��ֵ
		}
		printf("%5d%15.1f\n", 2010 + i, sum);//sum->ÿ���
		sumsum += sum;

	}
	return sumsum;
}
void sumyue(double(*ar)[MONTHS], int years)
{
	int i, j;
	double sum;

	for (i = 0; i < MONTHS; i++)
	{
		for (j = 0, sum = 0.0; j < years; j++)
		{
			sum += *(*(ar + j) + i);																							          //ֻҪÿ���µ��ܺͣ����������µ��ܺ�
		}
		printf("%-5.1f", sum / YEARS);
	}
	return;
}
#endif


//13.
#if 1
void input_data(double(*p)[5], int rows);//����a
double row_average(double* p, int n);//����b�����㲢����һά����ƽ��ֵ������ѭ�������øú���3��
double total_average(double(*p)[5], int rows);//����c
double find_max_value(double(*p)[5], int rows);//����d
void show(double(*p)[5], int rows, double(*p1), double total_average, double find_max_value);//����e

int main(void)
{
	printf("������3��С������,ÿ����5��С��(�����а�ctrl+Z�Խ�������)��\n");
	double shuzu[3][5];
	input_data(shuzu, 3);

	int i;
	double rowaverage[3];
	for (i = 0; i < 3; i++)
	{
		rowaverage[i] = row_average(shuzu[i], 5);
	}

	double totalaverage = total_average(shuzu, 3);

	double max = find_max_value(shuzu, 3);

	show(shuzu, 3, rowaverage, totalaverage, max);

	return 0;
}
#if 0
void input_data(double(*p)[5], int rows)
{
	int i = 0;
	int j = 0;
	double num;

	//	while (scanf("%lf", &num) ==1)									//Ϊʲôscanf("%lf", &num) !=EOF  �������ã�
	//	{																						//����ĸ�ֵ���飡
	//		for (i = 0; i < rows; i++)
	//		{
	//			for (j = 0; j < 5; j++)
	//				p[i][j] = num;
	//		}
	//	}

		//һά��
		/*while (scanf("%d", &num1) == 1)   //index=-1;
		{
			index++;
			num[index] = num1;
		}*/

		//��ά��
	while (scanf("%lf", &num) == 1)//��������1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 ��������Щֵ�����Գ���
	{
		p[i][j] = num;
		j++;

		if (j == 5)
		{
			i++;
			j = 0;
		}
	}

}
#endif
//��ά������������루������
#if 1
void input_data(double(*p)[5], int rows)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < 5; j++)
			//scanf("%lf",p[i][j]);     //����
			scanf("%lf", &p[i][j]);

	}
}
#endif
double row_average(double* p, int n)	//pָ��shuzu[i]��p�����shuzu[i]�ĵ�ַ����shuzu[i][0]�ĵ�ַ
{
	int i;
	double row_sum = 0.0;
	for (i = 0; i < n; i++)
		row_sum += *(p + i);

	return row_sum / 5;
}
double total_average(double(*p)[5], int rows)
{
	int i, j;
	double sum1, sum2;
	sum2 = 0.0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0, sum1 = 0.0; j < 5; j++)
			sum1 += p[i][j];

		sum2 += sum1;
	}
	//sum2 += sum1;																																					//����λ�ô���

	return sum2 / 15;
}
double find_max_value(double(*p)[5], int rows)
{
	int i, j;
	double max = p[0][0];

	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < 5; j++)
			max = (max > p[i][j]) ? max : p[i][j];
	}

	return max;
}
void show(double(*p)[5], int rows, double(*p1), double total_average, double find_max_value)
{
	//how(shuzu, 3, rowaverage(����), totalaverage, max);

	printf("�����ֵ�ǣ�\n");
	int i, j;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < 5; j++)
			printf("%5.2f", p[i][j]);
		putchar('\n');
	}

	putchar('\n');

	for (i = 0; i < rows; i++)
		printf("һά����%d��ƽ��ֵ-->%5.2f\n", i, p1[i]);

	printf("\n�������ݵ�ƽ��ֵ��%.2lf\n", total_average);

	printf("���ֵ��%.2lf\n", find_max_value);
}
#endif
//������
//��show�������ٵ�����ÿ�����ݵ�ƽ��ֵ���������������ݵ�ƽ��ֵ�����������ֵ������
#endif


//chapter 11
//code1.c
#if 0
#include<stdio.h>
//
#if 1
#endif


//�����б�ʾ�ַ��ļ��ַ�ʽ
#if 0
#define MSG "I am a symbolic string constant"//����һ�������ַ�������
#define LENGTH 81
int main(void)
{
	char words[LENGTH] = "I am a string in an array.";
	const char* p1 = "Something is pointing at me.";
	puts("Here are some strings:");
	puts(MSG);//��һ���ַ���������
	puts(words);//������char�������鷨
	puts(p1);     //������ָ��char��ָ�뷨
	words[8] = 'p';
	puts(words);

	puts("a");//�˴���a���Ǹ��ַ�����
	puts('a');//������ʾ

	/*words = "abc";    //words �������޸�
	puts(words);*/

	return 0;
}
#endif


//���ַ�������ָ��
#if 0
int main(void)
{
	printf("%s, %p, %c\n", "We", "are", *"space farers");

	return 0;
}
#endif


//�Ƚ�������ʽ��ʾ����ָ����ʽ��ʾ�������ַ����Ĳ�֮ͬ��
#if 0
#define MSG "I'm special"
int main(void)
{
	char ar[] = MSG;
	const char* p = MSG;

	printf("I'm special�ĵ�ַ�ǣ�%p\n", "I'm special");
	printf("ar�ĵ�ַ�ǣ�%p\n", ar);
	printf("p�ĵ�ַ�ǣ�%p\n", p);
	printf("MSG�ĵ�ַ�ǣ�%p\n", MSG);
	printf("�ٴ�ӡһ��I'm special��\"I'm special\"�ĵ�ַ�ǣ�%p\n", "I'm special");

	return 0;
}
#endif


//�����ָ�������
#if 0
int main(void)
{
	char heart[] = "I love shuzu";
	const char* head = "I love zhizhen";

	//ֻ��ָ�������++����
	while (*(head) != '\0')
		putchar(*head++);//	putchar(*(head)++); Ҳ��

	putchar('\n');

	//�������޸��ַ���
	char shuzu[] = "frame";
	shuzu[0] = 'l';
	printf("%s", shuzu);

	//�ܷ�ʹ��ָ���޸��ַ�����
	char* word = "frame";
	word[0] = 'l';
	printf("frame");//δ��ӡ��˵�������쳣�жϡ�

	return 0;
}
#endif


//ָ�����飬�ַ�������
#if 0
#define zifushu 40
#define hangshu 5
int main(void)
{
	const char* mytalents[hangshu] = {
	"Adding numbers swiftly",
	"Multiplying accurately",
	"Stashing data",
	"Following instructions to the letter",
	"Understanding the C language"
	};

	char yourtalents[hangshu][zifushu] = {
	" !@#$%$^&*",
	"Sleeping",
	"Watching television",
	"Mailing letters",
	"Reading email"
	};
	int i;

	puts("���������ȽϱȽϣ�");
	printf("%-36s %-25s\n", "My Talents", "Your Talents");
	for (i = 0; i < hangshu; i++)
		printf("%-36s %-25s\n", mytalents[i], yourtalents[i]);

	printf("\nsizeof mytalents: %zd, sizeof yourtalents: %zd\n", sizeof(mytalents), sizeof(yourtalents));

	return 0;
}
#endif


//ʹ��ָ�뿽���ַ���--->ʵ���Ͽ�������ָ���ֵ
#if 0
int main(void)
{
	const char* mesg = "Don't be a fool!";
	const char* copy;

	copy = mesg;
	printf("%s\n", copy);
	printf("mesg=%s; &mesg=%p; vaule=%p\n", mesg, &mesg, mesg);//&mesg:��ʾָ�뱻��ŵĵ�ַ��value:��ʾָ���ֵ
	printf("copy=%s; &copy=%p; vaule=%p\n", copy, &copy, copy);

	return 0;
}
#endif


//ʹ��gets(), puts()
#if 0
int main(void)
{
	char words[81];
	gets(words);

	printf("%s\n", words);
	puts(words);

	return 0;
}
#endif


//ʹ��fgets()��fputs()
#if 0
int main(void)
{
	char words[14];
	puts("�������ַ�����");
	fgets(words, 14, stdin);
	printf("��������ǣ�\n");

	puts(words);
	fputs(words, stdout);

	return 0;
}
#endif
#if 0
int main(void)
{
	char words[10];
	puts("�������ַ�����");
	while (fgets(words, 10, stdin) != NULL && words[0] != '\n')
		fputs(words, stdout);//�ܴ������������

	puts("Done !\n");
	return 0;
}
#endif


//��ȡ�У��滻�洢���ַ����еĻ��з�Ϊ���ַ�����û�л��з����򵱳��ֿ��ַ����Ͷ�������װ���µ��ַ�
#if 0
int main(void)
{
	char words[10];
	puts("�������ַ�����");
	while (fgets(words, 10, stdin) != NULL && words[0] != '\n')//���벻Ϊ^Z ��  '\n'
	{
		int i = 0;
		while (words[i] != '\n' && words[i] != '\0')
			i++;//�����ַ�����ֱ���������з�����ַ�

		if (words[i] == '\n')
			words[i] = '\0';//���������з����ͻ��ɿ��ַ�
		else
			while (getchar() != '\n')
				continue;//���������ַ������������е�ʣ���ַ�����û��else���飬�����ÿ9���ַ�Ϊһ�飬ѭ����ȡ������������

		puts(words);
	}

	puts("Done !\n");
	return 0;
}
#endif


//ʹ��scanf()
#if 0
int main(void)
{
	char name1[11], name2[11];
	int count;

	printf("�������������֣�\n");
	count = scanf("%5s %10s", name1, name2);
	printf("�Ҷ��뵽%d�����֣��ֱ�Ϊ%s��%s", count, name1, name2);

	return 0;
}
#endif


//ʹ��puts()
#if 0
#define DEF "I am a #define string."
int main(void)
{
	char string1[80] = "An array was initialized to me.";
	const char* string2 = "A pointer was initialized to me.";

	puts(DEF);
	puts(string1);
	puts(string2);
	putchar('\n');

	puts(&string1);
	puts(&string1[0]);
	puts(&string1[5]);

	puts(&string2);//���������
	puts(string2 + 4);

	return 0;
}
#endif


//���puts()û�������ַ�
#if 0
int main(void)
{
	char a[] = "a";
	char dont[] = { 'W','O','W','!' };
	puts(dont);

	return 0;
}
#endif


//�Զ����������
#if 0
void put1(const char* string1);//��ӡ�ַ����������\n
int  put2(const char* string2);//��ӡ�ַ�����ͳ�ƴ�ӡ���ַ���
int main(void)
{
	put1("abcdefg");
	put1("hijklmn");
	putchar('\n');

	printf("I count %d characters.\n", put2("opqrst"));//

	return 0;
}
void put1(const char* string1)
{
	while (*string1 != '\0')//��while(*string)
		putchar(*string1++);
}
int  put2(const char* string2)
{
	int count = 0;
	while (*string2)
	{
		putchar(*string2++);
		count++;
	}
	putchar('\n');

	return count;
}
#endif


//ʹ��strlen()���������ַ�������
#if 0
#include <string.h>
void fit(char* string, unsigned int size);
int main(void)
{
	char message[] = "Things should be as simple as possible,"" but not simpler.";//��������Ӧ�ü򻯶����Ǹ���

	puts(message);
	fit(message, 38);
	puts(message);
	puts(message + 39);//��ӡ��message[39]��ʼ�ĵ�ַ�ϵ�����

	return 0;
}
void fit(char* string, unsigned int size)
{
	if (strlen(string) > size)
		string[size] = '\0';//������size=38,���������Ϊ0��37���ַ�
}
#endif


//s_gets()�����ķ���ֵ
#if 0
#include <string.h>
#define SIZE 80
char* s_gets(char* string, int n);
int main(void)
{
	char flower[SIZE];

	printf("%p\n", s_gets(flower, SIZE));																			//�������������^Z��˾����0000000000000000
	printf("%p\n", flower);								//��һ������£�������ͬ
	printf("%p\n", &flower[0]);					    //˵��fgets()�ķ���ֵ��flower������Ԫ�صĵ�ַ
	printf("%d\n", s_gets(flower, SIZE));//��ַ������%d���ʱ���޷���ʾ����

	return 0;
}
char* s_gets(char* string, int n)
{
	char* fanhui;
	int i = 0;
	fanhui = fgets(string, n, stdin);//nΪ80��fgets()ֻ�����79���ַ������Զ�������\0

	if (fanhui)
	{
		while (string[i] != '\n' && string[i] != '\0')
			i++;

		if (string[i] == '\n')
			string[i] = '\0';
		else//��string[i] == '\0'ʱ
			while (getchar() != '\n')
				continue;
	}

	return fanhui;
}
#endif


//ʹ��strcat()������s_gets()����ƴ�������ַ���
#if 0
#include <string.h>
#define SIZE 80
char* s_gets(char* string, int n);
int main(void)
{
	char flower[SIZE];
	char add[] = "s smell like old shoes.";

	puts("What is your favorite flower ?");
	if (s_gets(flower, SIZE))//��û����^Z��ִ��if����
	{
		strcat(flower, add);
		puts(flower);
		puts(add);
	}
	else
		puts("End of file encountered !");

	puts("Bye !");

	return 0;
}
char* s_gets(char* string, int n)
{
	char* fanhui;
	int i = 0;
	fanhui = fgets(string, n, stdin);

	if (fanhui)
	{
		while (string[i] != '\n' && string[i] != '\0')
			i++;

		if (string[i] == '\n')
			string[i] = '\0';
		else
			while (getchar() != '\n')
				continue;
	}

	return fanhui;
}
#endif


//����strcat()��ʹ��strncat()��ƴ�������ַ���
#if 0
#include <string.h>
#define SIZE 30
#define BUGSIZE 13
char* s_gets(char* string, int n);
int main(void)
{
	char flower[SIZE];
	char add[] = "s smell like old shoes.";
	char bug[BUGSIZE];
	int available;

	puts("What is your favorite flower ?");
	s_gets(flower, SIZE);
	printf("flower����Ĵ�С��%zd\n", strlen(flower));//������^Z��flower����Ĵ�С��87

	if (strlen(flower) + strlen(add) + 1 <= SIZE)
	{
		strcat(flower, add);
		puts(flower);
	}


	puts("What is your favorite bug ?");
	s_gets(bug, BUGSIZE);

	available = BUGSIZE - strlen(bug) - 1;//��ֹ��������ַ���������ڴ洢��Ԫ
	strncat(bug, add, available);
	puts(bug);

	puts("Bye !");

	return 0;
}
char* s_gets(char* string, int n)
{
	char* fanhui;
	int i = 0;
	fanhui = fgets(string, n, stdin);

	if (fanhui)
	{
		while (string[i] != '\n' && string[i] != '\0')
			i++;

		if (string[i] == '\n')
			string[i] = '\0';
		else
			while (getchar() != '\n')
				continue;
	}

	return fanhui;
}
#endif


//ʹ��strcmp()�����Ƚ������ַ���
#if 0
#include <string.h>
#define ANSWER "Grant"
#define SIZE 40
char* s_gets(char* string, int n);
int main(void)
{
	char try[SIZE];
	puts("Who is buried in Grant's tomb ?");
	s_gets(try, SIZE);
	while (strcmp(try, ANSWER) != 0)
	{
		puts("No, that's wrong. Try again.");
		s_gets(try, SIZE);
	}
	puts("That's right !\n");

	return 0;
}
char* s_gets(char* string, int n)
{
	char* fanhui;
	int i = 0;
	fanhui = fgets(string, n, stdin);

	if (fanhui)
	{
		while (string[i] != '\n' && string[i] != '\0')
			i++;

		if (string[i] == '\n')
			string[i] = '\0';
		else
			while (getchar() != '\n')
				continue;
	}

	return fanhui;
}
#endif


//strcmp()�ķ���ֵ
#if 0
#include<string.h>
int main(void)
{
	printf("strcmp(\"A\",\"A\") is ");
	printf("%d\n", strcmp("A", "A"));

	printf("strcmp(\"A\",\"B\") is ");
	printf("%d\n", strcmp("A", "B"));

	printf("strcmp(\"B\",\"A\") is ");
	printf("%d\n", strcmp("B", "A"));

	printf("strcmp(\"C\",\"A\") is ");
	printf("%d\n", strcmp("C", "A"));

	printf("strcmp(\"Z\",\"a\") is ");
	printf("%d\n", strcmp("Z", "a"));

	printf("strcmp(\"apples\",\"apple\") is ");
	printf("%d\n", strcmp("apples", "apple"));

	return 0;
}
#endif


//�޶���������������ü�⵽EOF��quit��ﵽ�����������ʱ�˳���
#if 0
#include <string.h>
#define SIZE 80
#define LIM 10
#define STOP "quit"
char* s_gets(char* string, int n);
int main(void)
{
	char input[LIM][SIZE];
	int count = 0;
	printf("���������%d�����ݣ�����quit���˳�����\n", LIM);

	while (count < LIM && s_gets(input[count], SIZE) != NULL && strcmp(input[count], STOP) != 0)
	{																								//��Ϊ&&input[count][0]!='\0'ʵ��������о��˳��Ĺ���
		count++;
	}
	printf("%d��������\n", count);

	return 0;
}
char* s_gets(char* string, int n)
{
	char* fanhui;
	int i = 0;
	fanhui = fgets(string, n, stdin);

	if (fanhui)
	{
		while (string[i] != '\n' && string[i] != '\0')
			i++;

		if (string[i] == '\n')
			string[i] = '\0';
		else
			while (getchar() != '\n')
				continue;
	}

	return fanhui;
}
#endif


//ʹ��strncmp()�Ƚ������ַ�����ָ��λ�õ���ͬ��
#if 0
#include <string.h>
#define LISTSIZE 6
int main(void)
{
	const char* list[LISTSIZE] = {																												//	һ�����飬�ں�6��ָ��
	"astronomy","astounding","astrophysics","ostracize","asterism","astrophobia"
	};
	int count = 0;
	int i;

	for (i = 0; i < LISTSIZE; i++)
		if (strncmp(list[i], "astronomy", 5) == 0)
		{
			printf("Found %s\n", list[i]);
			count++;
		}
	printf("The list contained %d words begining with astro.\n", count);

	return 0;
}
#endif


//��strcpy()���������ַ��������ǿ����ַ����ĵ�ַ��
#if 0
#include <string.h>
#define SIZE 40
#define LIM 5

char* s_gets(char* string, int n);
int main(void)
{
	char qwords[LIM][SIZE];
	char temp[SIZE];
	int i = 0;

	printf("��������q��ͷ��%d�е��ʣ�\n", LIM);
	while (i < LIM && s_gets(temp, SIZE))
	{
		if (temp[0] != 'q')
			printf("%sû����q��ͷ��\n", temp);
		else
		{
			strcpy(qwords[i], temp);
			i++;
		}
	}
	puts("�������ѿ������ַ�����");
	for (i = 0; i < LIM; i++)
		puts(qwords[i]);

	return 0;
}
char* s_gets(char* string, int n)
{
	char* fanhui;
	int i = 0;
	fanhui = fgets(string, n, stdin);

	if (fanhui)
	{
		while (string[i] != '\n' && string[i] != '\0')
			i++;

		if (string[i] == '\n')
			string[i] = '\0';
		else
			while (getchar() != '\n')
				continue;
	}

	return fanhui;
}
#endif


//strcpy()�ķ���ֵ
#if 0
#include <string.h>
#define WORDS "beast"
#define SIZE 40
int main(void)
{
	const char* source = WORDS;
	char target[SIZE] = "Be the best that you can be.";
	char* fanhui;

	puts(source);
	puts(target);

	fanhui = strcpy(target + 7, source);

	puts(target);
	puts(fanhui);//strcpy()������һ��ָ�룬��ʱָ��ָ��target�ĵ�8���ַ���puts��target�ĵ�8���ַ���ʼ��ӡ����beast\0  ֹͣ

	return 0;
}
#endif


//��strncpy()���������ַ��������ǿ����ַ����ĵ�ַ��
#if 0
#include <string.h>
#define SIZE 40
#define LIM 5
#define TARGET_SIZE 7

char* s_gets(char* string, int n);
int main(void)
{
	char qwords[LIM][TARGET_SIZE];
	char temp[SIZE];
	int i = 0;

	printf("��������q��ͷ��%d�е��ʣ�\n", LIM);
	while (i < LIM && s_gets(temp, SIZE))
	{
		if (temp[0] != 'q')
			printf("%sû����q��ͷ��\n", temp);
		else
		{
			strncpy(qwords[i], temp, TARGET_SIZE - 1);
			qwords[i][TARGET_SIZE - 1] = '\0';
			i++;
		}
	}
	puts("�������ѿ������ַ�����");
	for (i = 0; i < LIM; i++)
		puts(qwords[i]);

	return 0;
}
char* s_gets(char* string, int n)
{
	char* fanhui;
	int i = 0;
	fanhui = fgets(string, n, stdin);

	if (fanhui)
	{
		while (string[i] != '\n' && string[i] != '\0')
			i++;

		if (string[i] == '\n')
			string[i] = '\0';
		else
			while (getchar() != '\n')
				continue;
	}

	return fanhui;
}
#endif


//��sprintf()��3����ϳ�Ϊһ���ַ���
#if 0
#include <string.h>
#define  MAX 20

char* s_gets(char* string, int n);
int main(void)
{
	char first[MAX];
	char last[MAX];
	char formal[2 * MAX];
	double prize;

	puts("����������գ�");
	s_gets(first, MAX);
	puts("�������������");
	s_gets(last, MAX);
	puts("��������Ľ����");
	scanf("%lf", &prize);

	sprintf(formal, "%s, %-19s : $%6.2lf", first, last, prize);

	puts(formal);

	return 0;
}
char* s_gets(char* string, int n)
{
	char* fanhui;
	int i = 0;
	fanhui = fgets(string, n, stdin);

	if (fanhui)
	{
		while (string[i] != '\n' && string[i] != '\0')
			i++;

		if (string[i] == '\n')
			string[i] = '\0';
		else
			while (getchar() != '\n')
				continue;
	}

	return fanhui;
}
#endif


//�����ַ������������ַ���
#if 0
#include <string.h>
#define  SIZE 81//�����ַ�������
#define LIM 20  //�����ַ�������

void sort_str(char** strings, int num);
char* s_gets(char* string, int n);
int main(void)
{
	char input[SIZE][LIM];		//����char�Ͷ�ά����
	char* p[LIM];						//�ں�ָ�����������
	int in_count = 0;					//�������������
	int out_count = 0;				//�������������

	printf("���������%d���ַ�����Ȼ���һ��������\n", LIM);
	printf("��Ҫֹͣ������������С�\n");

	while (in_count < LIM && s_gets(input[in_count], SIZE) != NULL && input[in_count][0] != '\0')//s_gets()���\n�滻��\0��������!='\0'
	{
		p[in_count] = input[in_count];//����ָ��ָ���ַ���   �����ڵ�10�µ�       ����char *p��  
																										//						 p=input[in_count]; ��p�����&input[in_count][0]
		in_count++;
	}
	sort_str(p, in_count);
	puts("\n����������õ��ַ�����\n");
	for (out_count = 0; out_count < in_count; out_count++)
		puts(p[out_count]);

	return 0;
}
void sort_str(char** strings, int num)
{
	char* temp;
	int seek1, seek2;

	for (seek1 = 0; seek1 < num - 1; seek1++)//���ѭ��ָ�����ڴ����Ԫ��
	{
		for (seek2 = seek1 + 1; seek2 < num; seek2++)//�ڲ�ѭ���ҳ�Ӧ�洢�ڸ�Ԫ�ص�ֵ
		{
			if (strcmp(strings[seek1], strings[seek2]) > 0)//��ǰһ���ַ���������ĸ��������λ�ں�һ���ַ���������ĸ����
			{
				temp = strings[seek1];
				strings[seek1] = strings[seek2];
				strings[seek2] = temp;
			}
		}
	}
}
char* s_gets(char* string, int n)
{
	char* fanhui;
	int i = 0;
	fanhui = fgets(string, n, stdin);

	if (fanhui)
	{
		while (string[i] != '\n' && string[i] != '\0')
			i++;

		if (string[i] == '\n')
			string[i] = '\0';
		else
			while (getchar() != '\n')
				continue;
	}

	return fanhui;
}
#endif


//��strchr()ʵ��s_gets()���滻\nΪ\0���ܣ���toupper()ʵ���ַ�����Сд��ĸ��Ϊ��д��ĸ����ispunct()ͳ�Ʊ����Ÿ���
#if 0
#include <string.h>
#include<ctype.h>
#define  LIMIT 10
void ToUpper(char* string);
int PunctCount(const char* string);
int main(void)
{
	char line[LIMIT];
	char* find;

	puts("������һ���ַ���");
	fgets(line, LIMIT, stdin);

	find = strchr(line, '\n');
	if (find)
		*find = '\0';					//ȥ�������\n

	ToUpper(line);
	puts(line);

	printf("������ַ�������%d��������\n", PunctCount(line));//ע�⣺���򵽴˽���ִ��һ�飬��������ַ����࣬�������ַ��ڻ�����
																										//��������ѭ��ִ��fgets(line,LIMIT,stdin);   ���Բ���Ҫ��ջ������ˡ�
	return 0;
}
void ToUpper(char* string)
{
	while (*string)
	{
		*string = toupper(*string);
		string++;
	}
}
int PunctCount(const char* string)
{
	int jishu = 0;
	while (*string)
	{
		if (ispunct(*string))
			jishu++;
		string++;
	}
	return jishu;
}
#endif


//ʹ��strtol()�������н���ת��
#if 0
#include <stdlib.h>
#define LIM 30

char* s_gets(char* string, int n);
int main(void)
{
	char number[LIM];
	char* end;
	long value;

	puts("������һ�����֣�����������˳�����");
	while (s_gets(number, LIM) && number[0] != '\n')
	{
		value = strtol(number, &end, 10);
		printf("���루10���ƣ��������10���ƣ���%ld�����������������ַ���%s�����ַ������ַ�ASCII���ǣ�%d\n"
			, value, end, *end);
		//end:�ַ��ĵ�ַ   *end:��ַ�ϵ�ֵ

		value = strtol(number, &end, 16);
		printf("���루16���ƣ��������10���ƣ���%ld�����������������ַ���%s�����ַ������ַ�ASCII���ǣ�%d\n"
			, value, end, *end);
		puts("����������������˳�����");
	}
}
char* s_gets(char* string, int n)
{
	char* fanhui;
	int i = 0;
	fanhui = fgets(string, n, stdin);

	if (fanhui)
	{
		while (string[i] != '\n' && string[i] != '\0')
			i++;

		if (string[i] == '\n')
			string[i] = '\0';
		else
			while (getchar() != '\n')
				continue;
	}

	return fanhui;
}
#endif
#endif


//chapter 11
//code2.c
#if 0
#include<stdio.h>
//
#if 1
#endif


//��ϰ��
//5.
#if 0
char* ptr(char* str);
int main(void)
{
	char* p;
	p = ptr("Ho Ho Ho!");

	return 0;
}
char* ptr(char* str)
{
	char* pc;
	pc = str;
	while (*pc)
		putchar(*pc++);

	do
	{
		putchar(*--pc);
	} while (pc - str);

	return (pc);
}
#endif


//9.
#if 0
#include <string.h>
#define SIZE 80
char* s_gets(char* string, int n);
int main(void)
{
	char flower[SIZE];

	printf("%p\n", s_gets(flower, SIZE));																			//�������������^Z��˾����0000000000000000
	//printf("%d\n", s_gets(flower, SIZE));//��ַ������%d���ʱ���޷���ʾ����
	puts(flower);

	return 0;
}
char* s_gets(char* string, int n)
{
	char* fanhui;
	//int i = 0;
	fanhui = fgets(string, n, stdin);//nΪ80��fgets()ֻ�����79���ַ������Զ�������\0

	if (fanhui)
	{
		while (*string != '\n' && *string != '\0')
			string++;

		if (*string == '\n')
			*string = '\0';
		else
			while (getchar() != '\n')
				continue;
	}

	return fanhui;
}
#endif


//10.
#if 0
#define SIZE 80
int strlen(char* p);
char* s_gets(char* string, int n);
int main(void)
{
	char flower[SIZE];

	puts("�������ַ�����");

	printf("�ַ����׵�ַ��%p\n����Ϊ��", s_gets(flower, SIZE));
	//printf("%d\n", s_gets(flower, SIZE));//��ַ������%d���ʱ���޷���ʾ����
	puts(flower);

	printf("�ַ�������Ϊ%d\n", strlen(flower));

	return 0;
}
int strlen(char* p)
{
	int i;
	for (i = 0; *(p + i) != '\0'; i++)
		;

	//��������У���iΪ0ʱ������forѭ����������һ���ַ�����iΪ0ʱ����forѭ��������iΪ1ʱ�˳�ѭ����
	return i;
}
//������
//int strlen(char* p)
//{
//	int i=0;
//	while (*p++ != '\0')
//		i++;
//
//	return i;
//}
char* s_gets(char* string, int n)
{
	char* fanhui;
	//int i = 0;
	fanhui = fgets(string, n, stdin);//nΪ80��fgets()ֻ�����79���ַ������Զ�������\0

	if (fanhui)
	{
		while (*string != '\n' && *string != '\0')
			string++;

		if (*string == '\n')
			*string = '\0';
		else
			while (getchar() != '\n')
				continue;
	}

	return fanhui;
}
#endif


//11.
#if 0
#include <string.h>
#define SIZE 80
char* s_gets(char* string, int n);
int main(void)
{
	char flower[SIZE];

	printf("s_gets()�ķ��ص�ָ��ĵ�ֵַ%p\n", s_gets(flower, SIZE));
	puts(flower);

	return 0;
}
char* s_gets(char* string, int n)
{
	char* fanhui;
	//int i = 0;
	fanhui = fgets(string, n, stdin);//nΪ80��fgets()ֻ�����79���ַ������Զ�������\0

	char* find;

	if (fanhui)//�����벻Ϊ^Z
	{
		find = strchr(string, '\n');

		if (find)
			*find = '\0';
		else//��δ�ҵ�����find=NULL��ִ��else
			while (getchar() != '\n')//�Ե���������������
				continue;
	}

	return fanhui;
}
#endif


//12.
#if 0
#include <string.h>
#define SIZE 80
char* find_space(char* string);
char* s_gets(char* string, int n);
int main(void)
{
	char flower[SIZE];

	s_gets(flower, SIZE);
	printf("�����������:");
	puts(flower);

	char* find;
	find = find_space(flower);

	if (find != NULL)
	{
		printf("�ո������ַ���:");
		puts(find);
	}
	else
		puts("δ�ҵ��ո�");//��û��else���飬������û�пո���ַ���ʱ����������

	return 0;
}
char* find_space(char* string)
{
	char* find;

	while (*string != ' ' && *string != '\0')
		string++;

	if (*string == ' ')
		find = string;//ָ��ո�ĺ�һ���ַ�
	else//*string=='\0'ʱ
		find = NULL;

	return find;
}
char* s_gets(char* string, int n)
{
	char* fanhui;
	//int i = 0;
	fanhui = fgets(string, n, stdin);//nΪ80��fgets()ֻ�����79���ַ������Զ�������\0

	char* find;

	if (fanhui)//�����벻Ϊ^Z
	{
		find = strchr(string, '\n');

		if (find)
			*find = '\0';
		else//��δ�ҵ�����find=NULL��ִ��else
			while (getchar() != '\n')//�Ե���������������
				continue;
	}

	return fanhui;
}
#endif


//13.
#if 0
#include <string.h>
#include <ctype.h>

#define ANSWER "GRANT"
#define SIZE 40
char* s_gets(char* string, int n);
void ToUpper(char* string);

int main(void)
{
	char try[SIZE];
	puts("Who is buried in Grant's tomb ?");
	s_gets(try, SIZE);
	ToUpper(try);

	while (strcmp(try, ANSWER) != 0)
	{
		puts("No, that's wrong. Try again.");
		s_gets(try, SIZE);
		ToUpper(try);
	}
	puts("That's right !\n");

	return 0;
}
void ToUpper(char* string)
{
	while (*string)
	{
		*string = toupper(*string);
		string++;
	}
}
char* s_gets(char* string, int n)
{
	char* fanhui;
	int i = 0;
	fanhui = fgets(string, n, stdin);

	if (fanhui)
	{
		while (string[i] != '\n' && string[i] != '\0')
			i++;

		if (string[i] == '\n')
			string[i] = '\0';
		else
			while (getchar() != '\n')
				continue;
	}

	return fanhui;
}
#endif
#endif


//chapter 11
//code3.c
#if 0
#include <stdio.h>
//
#if 1
#endif


//�����ϰ
//1.
#if 0
#define LIMT 20
#define SIZE 20
char* duqv(char* string, int n);
int main(void)
{
	char cunchu[LIMT][SIZE];
	puts("�������ַ�:(��������Խ���)");

	int count = 0;
	while (count < LIMT && duqv(cunchu[count], SIZE) != NULL && cunchu[count][0] != '\0')
	{
		count++;
	}

	puts("�������������:");
	for (int i = 0; i < count; i++)
		puts(cunchu[i]);

	return 0;
}
char* duqv(char* string, int n)
{
	char* fanhui;

	fanhui = fgets(string, n, stdin);

	if (fanhui)//���벻Ϊ^Z
	{
		while (*string != '\n' && *string != '\0')
			string++;
		if (*string == '\n')																							//覴ã��޷���������\n
			*string = '\0';
		else//*string == '\0'ʱ
			while (getchar() != '\n')
				continue;
	}
	return fanhui;
}
#endif
//1.��				//˼·����getchar()�Զ���һ����ȡ���ݲ������������еĺ�����
#if 0
#define LENGTH 10
void get_char(char* ar, char* end);
int main(void)
{
	char arr[LENGTH];
	char* p;

	printf("Please enter %d characters.\n", LENGTH);
	get_char(arr, arr + LENGTH);
	printf("\ncharacter array:\n");
	for (p = arr; p < arr + LENGTH; p++)
		putchar(*p);

	//puts(arr);//������puts()����Ϊû��\0���룬������ܷɡ�

	return 0;
}
//void get_char(char* ar, char* end)
//{
//	for (; ar < end; ar++)
//		*ar = getchar();
//}
//��
void get_char(char* ar, char* end)
{
	int i = 0;

	while (ar + i < end)
	{
		*(ar + i) = getchar();
		i++;
	}
}
#endif


//2.
#if 0
#include<string.h>																									
#define LIMT 20																										
#define SIZE 20
char* duqv(char* string, int n);
int main(void)
{
	char cunchu[LIMT][SIZE];
	puts("�������ַ�:(����^Z�Խ���)");

	int count = 0;
	while (count < LIMT && duqv(cunchu[count], SIZE) != NULL)
	{
		count++;
	}

	puts("�������������:");
	for (int i = 0; i < count; i++)
		puts(cunchu[i]);

	return 0;
}
char* duqv(char* string, int n)
{
	char* fanhui;

	fanhui = fgets(string, n, stdin);

	if (fanhui)//���벻Ϊ^Z
	{
		while (*string != '\n' && *string != '\0' && *string != ' ' && *string != '\t')
			string++;
		if (*string == '\n' || *string != ' ' || *string != '\t')
			*string = '\0';
		else//*string == '\0'ʱ
			while (getchar() != '\n')
				continue;
	}
	return fanhui;
}
#endif
//������getchar(),putchar();
#if 0		
int get_char(char* string, int n);
int main(void)
{
	char cunchu[10];
	puts("������10���ַ�:������ո��Ʊ�����з�ʱֹͣ���룩");
	int length = get_char(cunchu, 10);

	puts("�������������:");
	for (int i = 0; i <= length; i++)
		putchar(cunchu[i]);

	return 0;
}
int get_char(char* string, int n)//n��Ԫ�ظ���
{
	int i = 0;
	while (i < n)//i������
	{
		*(string + i) = getchar();//������abc\n    ʱi=3


		if (*(string + i) == ' ' || *(string + i) == '\t' || *(string + i) == '\n')
			break;

		i++;
	}
	return i;
}
#endif


//3.
#if 0
#include <string.h>
#define SIZE 20
char* duqv(char* string, int n);//��ȡ
int main(void)
{
	char cunchu[SIZE];
	puts("�������ַ�:(����Enter����)");

	char* find;
	find = duqv(cunchu, SIZE);

	puts("������ĵ�����:");
	puts(find);

	return 0;
}
char* duqv(char* string, int n)
{
	char* fanhui;

	fanhui = fgets(string, n, stdin);

	char* start = fanhui;// start ���븳һ����ʼֵ

	for (; isalpha(*fanhui) == NULL && fanhui < (string + strlen(string)); fanhui++)//������ո��Ʊ�������з��������뵥��                    
		start = fanhui;																										//strlen()����¼\n	,��������ֻ���뻻�з������								
																																	//覴ã�����\n�����뵥�ʵ������δ�����
	start = fanhui;//startָ���һ���ǿհ��ַ�

	while (*fanhui != ' ' && *fanhui != '\t' && *fanhui != '\n' && *fanhui != '\0')//��һ���ǿհ��ַ�����������пհ��ַ�������\0�ض�
		fanhui++;

	if (*fanhui == ' ' || *fanhui == '\t' || *fanhui == '\n')
	{
		*fanhui = '\0';
	}
	else //*fanhui=='\0ʱ
		while (getchar() != '\n')
			continue;

	return start;
}
#endif
// ���ϵĳ�������'\n'ʱ����Ҫ����ת��Ϊ'\0'�����Դ�������\n�����뵥�ʵ�������ô���
//3.��
#if 0
#include <ctype.h>
#include <string.h>
#define SIZE 20
void duqv(char* string, int n);//��ȡ
int main(void)
{
	char cunchu[SIZE];
	puts("�������ַ�:(����Enter����)");

	duqv(cunchu, SIZE);

	puts("������ĵ�����:");
	//puts(cunchu);
	printf("%s", cunchu);

	return 0;
}
void duqv(char* string, int n)
{
	char temp[SIZE];
	char* temp_p = temp;

	fgets(temp, SIZE, stdin);																						//�л������룬����\nʱ��temp�������������롣
																																//�޷�ʵ����������\n�����뵥�ʵ������
	while (isalpha(*temp_p) == 0)
	{
		if (temp_p >= temp + strlen(temp))//����\nʱ����ѭ��
			break;

		temp_p++;
	}
	while (isalpha(*temp_p))
		*string++ = *temp_p++;

	*string = '\0';
}
#endif
//ʹ��getchar()������ʵ����������\n�����뵥�ʵ������
#if 0
#include<ctype.h>
#define SIZE 20
int get_word(char* ar);
int main(void)
{
	char cunchu[SIZE];
	char* cunchu_p;

	printf("Please enter some text.\n");
	int leng = get_word(cunchu);
	printf("\nWord:\n");
	for (cunchu_p = cunchu; cunchu_p < cunchu + leng; cunchu_p++)
		putchar(*cunchu_p);

	putchar('\n');

	return 0;
}
int get_word(char* string)//�������ĵ�һ������
{
	int length = 0;//��ʾԪ�ظ���
	_Bool inword = 0;

	while (*string = getchar())
	{
		if (isspace(*string) && !inword)                               //������          �ո� (SPC)
																							//'\t'	    0x09	ˮƽ�Ʊ��(TAB)
																							//'\n'	0x0a	���з�(LF)
																							//'\v'	0x0b	��ֱ�Ʊ��(VT)
																							//'\f' 	0x0c    ��ҳ(FF)
																							//'\r'	    0x0d    �س�(CR)
			continue;																	//������ȡ����
		else if (!isspace(*string) && !inword)//��������ĸ
			inword = 1;
		else if (isspace(*string) && inword)//���ٴ�����հ��ַ�
			break;

		length++;//���ʳ��ȼ�һ		
		string++;//ָ���������Ԫ�ص�λ��

		if (length == SIZE)
			break;
	}

	return length;
}
#endif

//4.
#if 0
#include <string.h>
#define SIZE 10
char* duqv(char* string, int n);//��ȡ
int main(void)
{
	char cunchu[SIZE];
	puts("�������ַ�:(����Enter����)");

	char* find;
	find = duqv(cunchu, SIZE);

	puts("������ĵ�����:");
	puts(find);

	return 0;
}
char* duqv(char* string, int n)
{
	char* fanhui;

	fanhui = fgets(string, n, stdin);

	char* start = fanhui;// start ���븳һ����ʼֵ

	for (; isalpha(*fanhui) == NULL && fanhui < (string + strlen(string)); fanhui++)//������ո��Ʊ�������з��������뵥��                    
		start = fanhui;																										//strlen()����¼\n	,��������ֻ���뻻�з������								
																																	//覴ã�ֻ����\n�������δ�����
	start = fanhui;//startָ���һ���ǿհ��ַ�

	while (*fanhui != ' ' && *fanhui != '\t' && *fanhui != '\n' && *fanhui != '\0')//��һ���ǿհ��ַ�����������пհ��ַ�������\0�ض�
		fanhui++;

	if (*fanhui == ' ' || *fanhui == '\t' || *fanhui == '\n')
	{
		*fanhui = '\0';
	}
	else //*fanhui=='\0ʱ
		while (getchar() != '\n')
			continue;

	return start;
}
#endif
//4.��
#if 0
#include<ctype.h>
#define SIZE 20
int get_word(char* string, int n);
int main(void)
{
	char cunchu[SIZE];
	char* cunchu_p;

	printf("Please enter some text.\n");
	int leng = get_word(cunchu, SIZE);
	printf("\nWord:\n");
	for (cunchu_p = cunchu; cunchu_p < cunchu + leng; cunchu_p++)
		putchar(*cunchu_p);

	putchar('\n');

	return 0;
}
int get_word(char* string, int n)
{
	int length = 0;//��ʾԪ�ظ���
	_Bool inword = 0;

	//while (*string = getchar())
	//{
	//	if (isspace(*string) && !inword)                               //������          �ո� (SPC)
	//																						//'\t'	    0x09	ˮƽ�Ʊ��(TAB)
	//																						//'\n'	0x0a	���з�(LF)
	//																						//'\v'	0x0b	��ֱ�Ʊ��(VT)
	//																						//'\f' 	0x0c    ��ҳ(FF)
	//																						//'\r'	    0x0d    �س�(CR)
	//		continue;																	//������ȡ����
	//	else if (!isspace(*string) && !inword)//��������ĸ
	//		inword = 1;
	//	else if (isspace(*string) && inword)//���ٴ�����հ��ַ�
	//		break;

	//	length++;
	//	string++;//ָ���������Ԫ�ص�λ��

	//	if (length == n)
	//		break;
	//}
	//��
	char* temp = string;

	while (temp < string + n)
	{
		*temp = getchar();
		if (isspace(*temp) && !inword)                               //������          �ո� (SPC)
																							//'\t'	    0x09	ˮƽ�Ʊ��(TAB)
																							//'\n'	0x0a	���з�(LF)
																							//'\v'	0x0b	��ֱ�Ʊ��(VT)
																							//'\f' 	0x0c    ��ҳ(FF)
																							//'\r'	    0x0d    �س�(CR)
			continue;																	//������ȡ����
		else if (!isspace(*temp) && !inword)//��������ĸ
			inword = 1;
		else if (isspace(*temp) && inword)//���ٴ�����հ��ַ�
			break;

		length++;
		temp++;//ָ���������Ԫ�ص�λ��		
	}

	return length;
}
#endif


//5.
#if 0
#include <string.h>
#define SIZE 50
char* duqv(char* string, int n);//��ȡ
char* find(char* string, char ch);
int main(void)
{

	while (1)
	{
		char cunchu[SIZE];
		puts("�������ַ�:(����Enter����)");

		duqv(cunchu, SIZE);

		puts("�������������:");
		puts(cunchu);

		char ch;
		puts("������Ҫ���ҵ��ַ�:");
		scanf("%c", &ch);
		while (getchar() != '\n')
			continue;

		char* Find;
		Find = find(cunchu, ch);
		if (Find)
		{
			printf("����ĸ����������Ϊ:");
			puts(Find);
		}
		else
			puts("δ�ҵ����ַ���");
	}
	return 0;
}
char* find(char* string, char ch)
{
	char* find = string;
	while (*find != ch)
	{
		find++;

		if (find == string + strlen(string))//�����������ַ�����strlen����=2��string+2ָ���������һ��Ԫ�صĺ����һ��λ��
		{																	//������if(find=='\0')
			find = NULL;
			break;
		}
	}

	return find;
}
char* duqv(char* string, int n)
{
	char* fanhui;

	fanhui = fgets(string, n, stdin);

	if (fanhui)//���벻Ϊ^Z
	{
		while (*string != '\n' && *string != '\0')
			string++;
		if (*string == '\n')
			*string = '\0';
		else//*string == '\0'ʱ
			while (getchar() != '\n')
				continue;
	}
	return fanhui;
}
#endif


//6.
#if 0
#include<string.h>
int is_within(char ch, char* string);
char* duqv(char* string, int n);

int main(void)
{
	while (1)
	{
		char cunchu[50];
		puts("�������ַ���:");
		duqv(cunchu, 50);

		puts("������ҪѰ�ҵ��ַ�:");
		char ch;
		scanf("%c", &ch);

		int find;
		find = is_within(ch, cunchu);

		printf("find=%d", find);
	}
	return 0;
}
int is_within(char ch, char* string)
{
	int find;

	char* xunzhao;
	xunzhao = string;

	while (*xunzhao != ch)
	{
		xunzhao++;

		if (xunzhao == string + strlen(string))//��ָ��xunzhao ָ���������ĵ�һ��λ�ã��򵯳���
			break;
	}

	find = (*xunzhao == ch) ? 1 : 0;

	//��
	//while (*xunzhao != '\0')
	//{
	//	if (*xunzhao == ch)
	//		return 1;
	//	else
	//		xunzhao++;
	//}
	//return 0;

	return find;
}
char* duqv(char* string, int n)
{
	char* fanhui;

	fanhui = fgets(string, n, stdin);

	if (fanhui)//���벻Ϊ^Z
	{
		while (*string != '\n' && *string != '\0')
			string++;
		if (*string == '\n')
			*string = '\0';
		else//*string == '\0'ʱ
			while (getchar() != '\n')
				continue;
	}
	return fanhui;
}
#endif


//7.
#if 0
char* mystrncpy(char* string1, char* string2, int n);
char* duqv(char* string, int n);
#define SIZE 10
int main(void)
{
	char cunchu[80];
	char temp[80];
	char* fanhui;

	puts("��������������ַ���:");

	while (duqv(temp, 80) && temp[0] != '\0')//����^Z����У�ֹͣ����
	{
		fanhui = mystrncpy(cunchu, temp, SIZE);
		*(cunchu + SIZE - 1) = '\0';//��10��Ԫ�ظ�'\0'

		puts("�������������:");
		puts(cunchu);
		puts(fanhui);

		puts("��������������ַ���:");
	}
	puts("�ټ���");

	return 0;
}
char* mystrncpy(char* string1, char* string2, int n)//n=10��n��Ԫ�ظ���					//ע��Դ�ַ����ȴ���n��strncpy�����Զ����\0
{
	char* fanhui = string1;
	int i;

	for (i = 0; i < n - 1; i++)
	{
		*(string1 + i) = *(string2 + i);//��������9��Ԫ��Ϊֹ
	}

	return fanhui;
}
char* duqv(char* string, int n)
{
	char* fanhui;

	fanhui = fgets(string, n, stdin);

	if (fanhui)//���벻Ϊ^Z
	{
		while (*string != '\n' && *string != '\0')
			string++;
		if (*string == '\n')
			*string = '\0';
		else//*string == '\0'ʱ
			while (getchar() != '\n')
				continue;
	}
	return fanhui;
}
#endif


//8.
#if 0
#include<string.h>
char* string_in(char* string1, char* string2);
char* duqv(char* string, int n);
int main(void)
{
	char cunchu1[80];
	char cunchu2[80];
	char* fanhui;

	puts("����������ҵ��ַ���:");

	while (duqv(cunchu1, 80) && cunchu1[0] != '\0')
	{
		puts("������Ҫ���ҵ��ַ���:");
		duqv(cunchu2, 80);

		fanhui = string_in(cunchu1, cunchu2);

		if (fanhui)
		{
			puts("�����ҵ��ַ�������:");
			puts(fanhui);
		}
		else
			puts("δ�ҵ���");

		puts("����������ҵ��ַ���:");
	}
	puts("�ټ���");

	return 0;
}
char* string_in(char* string1, char* string2)																                                    //覴ã�ֻ֧���������ַ�
{
	char* fanhui = NULL;//�����ȳ�ʼ��

	int biaoji1 = 0, biaoji2 = 0;
	char* xunzhao = string1;
	char* temp = NULL;//�����ȳ�ʼ��

	for (; xunzhao < string1 + strlen(string1); xunzhao++)
	{
		if (*xunzhao == *string2)
		{
			biaoji1 = 1;
			temp = xunzhao;
			break;
		}
	}

	if (biaoji1 == 1)
	{
		xunzhao += 1;
		if (*xunzhao == *(string2 + 1))
		{
			biaoji2 = 1;
		}
	}

	if (biaoji1 == 1 && biaoji2 == 1)
	{
		fanhui = temp;
	}
	else
		fanhui = NULL;

	return fanhui;
}
char* duqv(char* string, int n)
{
	char* fanhui;

	fanhui = fgets(string, n, stdin);

	if (fanhui)//���벻Ϊ^Z
	{
		while (*string != '\n' && *string != '\0')
			string++;
		if (*string == '\n')
			*string = '\0';
		else//*string == '\0'ʱ
			while (getchar() != '\n')
				continue;
	}
	return fanhui;
}
#endif
//8.����																//8.ԭ˼·����������ǣ�ÿ�����һ���ַ�ƥ�䣬����ֻ��֧�������ַ���⡣
#if 0																//��˼·����Ǹ�Ϊ������count��ֻ��count��ֵ���ڼ���ַ����ĳ��ȣ��ŷ����ַ����׵�ַ
#include<string.h>
char* string_in(char* string1, char* string2);
char* duqv(char* string, int n);
int main(void)
{
	char cunchu1[80];
	char cunchu2[80];
	char* fanhui;

	puts("����������ҵ��ַ���:");

	while (duqv(cunchu1, 80) && cunchu1[0] != '\0')
	{
		puts("������Ҫ���ҵ��ַ���:");
		duqv(cunchu2, 80);

		fanhui = string_in(cunchu1, cunchu2);

		if (fanhui)
		{
			puts("���������Ӵ�����Ԫ�ؿ�ͷ���ַ���Ϊ:");
			puts(fanhui);
		}
		else
			puts("δ�ҵ���");

		puts("����������ҵ��ַ���:");
	}
	puts("�ټ���");

	return 0;
}
char* string_in(char* string1, char* string2)
{

	int count = 0;//ƥ��ȼ���
	int length = strlen(string2);

	while (count < length && *string1 != '\0')//��ƥ��δ��ɣ���û���ֵ�string1��ĩβ�ַ���ĵ�һ��λ�á�
	{
		if (*(string1 + count) == *(string2 + count))//��s1��s2�ĵ�һ���ַ�ƥ�䣬�����ֵ��һ��
			count++;
		else
		{
			count = 0;
			string1++;//����ƥ�䣬���ֵ�s1�ĵڶ����ַ���s2�ĵ�һ���ַ���⡣
		}
	}
	if (count == length)
		return string1;//�����������Ӵ����׵�ַ��

	else
		return NULL;
}
char* duqv(char* string, int n)
{
	char* fanhui;

	fanhui = fgets(string, n, stdin);

	if (fanhui)//���벻Ϊ^Z
	{
		while (*string != '\n' && *string != '\0')
			string++;
		if (*string == '\n')
			*string = '\0';
		else//*string == '\0'ʱ
			while (getchar() != '\n')
				continue;
	}
	return fanhui;
}
#endif


//9.
#if 0
#include<string.h>
void fanxu(char* string);
char* duqv(char* string, int n);
int main(void)
{
	char cunchu[80];
	char* fanhui;

	puts("�������������ַ���:");

	while (duqv(cunchu, 80) && cunchu[0] != '\0')
	{
		fanxu(cunchu);
		puts("�������ַ���:");
		puts(cunchu);

		puts("�������������ַ���:");
	}
	puts("�ټ���");

	return 0;
}
void fanxu(char* string)
{
	int size = strlen(string);

	char* temp1 = string + size - 1;//����һ��ָ�룬ָ���������һ��Ԫ��

	char temp2[80];//����һ���ݴ淴�������ݵ�����

	for (int i = 0; i < size; i++)
		*(temp2 + i) = *(temp1 - i);

	temp1 = string;//��temp1ָ��������Ԫ��

	for (int i = 0; i < size; i++)
		*(temp1 + i) = *(temp2 + i);

	temp1[size] = '\0';

	return;
}
char* duqv(char* string, int n)
{
	char* fanhui;

	fanhui = fgets(string, n, stdin);

	if (fanhui)//���벻Ϊ^Z
	{
		while (*string != '\n' && *string != '\0')
			string++;
		if (*string == '\n')
			*string = '\0';
		else//*string == '\0'ʱ
			while (getchar() != '\n')
				continue;
	}
	return fanhui;
}
#endif


//10.
#if 0
#include<string.h>
void delete_space(char* string);
char* duqv(char* string, int n);
int main(void)
{
	char cunchu[80];

	puts("�������ɾ���ո���ַ���:");

	while (duqv(cunchu, 80) && cunchu[0] != '\0')
	{
		delete_space(cunchu);
		puts("����ú���ַ���:");
		puts(cunchu);

		puts("�������ɾ���ո���ַ���:");
	}
	puts("�ټ���");

	return 0;
}
void delete_space(char* string)
{
	char temp1[80];
	strcpy(temp1, string);

	char temp2[80];

	char* fanhui;
	fanhui = strchr(temp1, ' ');

	while (fanhui)
	{
		//*fanhui = *(fanhui+1);//string�����еĴ洢�ո��λ�ñ����һ���ַ�����							//����Ӧ�ñ��ո����ַ�������
		*fanhui = '\0';//��temp1�����ڿո񴦽ض�

		strcpy(temp2, fanhui + 1);//�ո�����ݿ�����temp2

		strcat(temp1, temp2);//temp1��temp2ƴ��

		fanhui = strchr(temp1, ' ');
	}
	//����Ĳ�������Ķ�����string���鱾��
//string = temp1;  //temp1��ַ����string											
//puts(string);																										 //ȷʵɾ���˿ո�	     Ϊʲôû�иı�cunchu��������ݣ�
	strcpy(string, temp1);																						//��Ϊ��������puts(cunchu);cunchuָ��û��ָ��temp1���顣 

	return;
}
char* duqv(char* string, int n)
{
	char* fanhui;

	fanhui = fgets(string, n, stdin);

	if (fanhui)//���벻Ϊ^Z
	{
		while (*string != '\n' && *string != '\0')
			string++;
		if (*string == '\n')
			*string = '\0';
		else//*string == '\0'ʱ
			while (getchar() != '\n')
				continue;
	}
	return fanhui;
}
#endif//��һ��ʹ����ʱ�ַ����洢ɾ���ո����ַ��������ҵ�\0��ƴ�������ַ���
//10.������ʹ�ö��ָ�룬����ԭ�ַ���
#if 0
#include<string.h>
void delete_space(char* string);
char* duqv(char* string, int n);
int main(void)
{
	char cunchu[80];

	puts("�������ɾ���ո���ַ���:");

	while (duqv(cunchu, 80) && cunchu[0] != '\0')
	{
		delete_space(cunchu);
		puts("����ú���ַ���:");
		puts(cunchu);

		puts("�������ɾ���ո���ַ���:");
	}
	puts("�ټ���");

	return 0;
}
void delete_space(char* string)
{
	char* finish = string;//����һ������ú���ַ�����ָ��finish
	int count = 0;//��¼ɾ���Ŀո���

	while (*string != '\0')//��ָ��ԭ�ַ�����ָ��û��������Ԫ�غ�ĵ�һ��λ��
	{
		if (*string != ' ')
			*finish++ = *string++;
		else
		{
			string++;//����⵽�ո��ַ�����ԭ�ַ���ָ�����һλ��
			count++;
		}
	}

	/*while (count--)
		*finish++ = '\0';*/   //����ڴ���ú���ַ�������\0����д�Ļ�����Ϊ��Ȼָ��ԭ�ַ�����ָ��û����finish��\0������
		//ԭ�ַ������\0����Ȼ���ڡ����ǣ��������ɾ���ո���ַ���:
																 //a b c d e f
																//	����ú���ַ��� :
																//abcdefd e f
																//	�������ɾ���ո���ַ��� :
		//���ִ������ԭ��string�Ѿ�ָ����ԭ�ַ�����\0��������ֹ�ˡ������d e f��ԭ�ַ����Ĳ�������

	while (count--)
		*finish++ = '\0';//�����ʣ���ַ���

	return;
}
char* duqv(char* string, int n)
{
	char* fanhui;

	fanhui = fgets(string, n, stdin);

	if (fanhui)//���벻Ϊ^Z
	{
		while (*string != '\n' && *string != '\0')
			string++;
		if (*string == '\n')
			*string = '\0';
		else//*string == '\0'ʱ
			while (getchar() != '\n')
				continue;
	}
	return fanhui;
}
#endif


//11.
#if 0
#include<string.h>
#include<ctype.h>

#define SIZE 81
#define LIM 10
void showmenu(void);
void yuanzifuchuan(char* string[], int n);
void ASCII_paixu(char* string[], int n);
void length_paixu(char* string[], int n);
void first_word_length_paixu(char* string[], int n);
int get_word_length(char* string);

char* duqv(char* string, int n);
int main(void)
{
	char input[LIM][SIZE];
	char* chuli[LIM];//�����ں�ָ�����������
	int shuru_jishu = 0;
	int shuchu_jishu;

	puts("����������10���ַ���:");
	while (shuru_jishu < LIM && duqv(input[shuru_jishu], SIZE) != NULL)
	{
		chuli[shuru_jishu] = input[shuru_jishu];//��ÿ��ָ�븳ֵ
		shuru_jishu++;
	}

	int choice;
	showmenu();
	scanf("%d", &choice);
	while (choice != 5)
	{
		switch (choice)
		{
		case 1:yuanzifuchuan(chuli, shuru_jishu);//��һ��ʵ�Σ��ں�ָ����������飬������10��ָ��
			break;													//ע�⣺shuru_jishu���ϵ���Ԫ�ظ������������������ֵ����Ϊ++����
		case 2:ASCII_paixu(chuli, shuru_jishu);
			break;
		case 3:length_paixu(chuli, shuru_jishu);
			break;
		case 4:first_word_length_paixu(chuli, shuru_jishu);
			break;
		}

		putchar('\n');
		showmenu();
		scanf("%d", &choice);
	}
	putchar('\n');
	puts("�ټ���");

	return 0;
}
void showmenu(void)
{
	puts("*******************************************************************************");
	printf("��������ѡ��Ĺ���:(���빦��ǰ��Ӧ�����ּ���)\n");
	printf("1)��ӡԴ�ַ����б�		2)��ASCII�е�˳���ӡ�ַ���\n");
	printf("3)�����ȵ���˳���ӡ�ַ���	4)���ַ����е�1�����ʵĳ��ȴ�ӡ�ַ���\n");
	puts("5)�˳�");
	puts("*******************************************************************************");
}
void yuanzifuchuan(char* string[], int n)
{
	puts("Դ�ַ����б�:");
	for (int i = 0; i < n; i++)
		puts(string[i]);
}
void ASCII_paixu(char* string[], int n)//n��Ԫ�ظ���
{
	char* string1[LIM];
	for (int i = 0; i < n; i++)
		string1[i] = string[i];//ԭָ�����鿽����string1

	char* temp;
	int top, seek;
	for (top = 0; top < n - 1; top++)//���ָ�����ڶ���Ԫ��
		for (seek = top + 1; seek < n; seek++)
			if (strcmp(string1[top], string1[seek]) > 0)
			{
				temp = string1[top];
				string1[top] = string1[seek];
				string1[seek] = temp;
			}

	puts("������ַ����б�:");
	for (int i = 0; i < n; i++)
		puts(string1[i]);
}
void length_paixu(char* string[], int n)
{
	char* string1[LIM];
	for (int i = 0; i < n; i++)
		string1[i] = string[i];//ԭָ�����鿽����string1

	char* temp;
	int top, seek;
	for (top = 0; top < n - 1; top++)//���ָ�����ڶ���Ԫ��
		for (seek = top + 1; seek < n; seek++)
			if (strlen(string1[top]) > strlen(string1[seek]))
			{
				temp = string1[top];
				string1[top] = string1[seek];
				string1[seek] = temp;
			}

	puts("������ַ����б�:");
	for (int i = 0; i < n; i++)
		puts(string1[i]);
}
void first_word_length_paixu(char* string[], int n)
{
	char* string1[LIM];
	for (int i = 0; i < n; i++)
		string1[i] = string[i];//ԭָ�����鿽����string1

	char* temp;
	int top, seek;

	int dancichangdu[LIM] = { 0,0,0 };//���ָ���ֵ

	//��һ��
	//for (int i = 0; i < n; i++)
	//{
	//	for (int j=0; string1[i][j] != ' '; j++)
	//		dancichangdu[i]++;
	//}

	//������
	for (int i = 0; i < n; i++)
	{
		dancichangdu[i] = get_word_length(string1[i]);
	}


	for (top = 0; top < n - 1; top++)//���ָ�����ڶ���Ԫ��
		for (seek = top + 1; seek < n; seek++)
			//if (strchr(string1[top],' ') > strchr(string1[seek],' '))//ʧ��
			if (dancichangdu[top] > dancichangdu[seek])
			{
				temp = string1[top];
				string1[top] = string1[seek];
				string1[seek] = temp;
			}

	puts("������ַ����б�:");
	for (int i = 0; i < n; i++)
		puts(string1[i]);
}
char* duqv(char* string, int n)
{
	char* fanhui;

	fanhui = fgets(string, n, stdin);

	if (fanhui)//���벻Ϊ^Z
	{
		while (*string != '\n' && *string != '\0')
			string++;
		if (*string == '\n')
			*string = '\0';
		else//*string == '\0'ʱ
			while (getchar() != '\n')
				continue;
	}
	return fanhui;
}
int get_word_length(char* string)//���㵥�ʳ��ȵĺ���
{
	char* find = string;
	int length = 0;
	while (isalpha(*find) == 0)
		find++;
	while (isalpha(*find) != 0)
	{
		find++;
		length++;
	}
	return length;
}
#endif


//12.
#if 0
#include<string.h>
#include <ctype.h>
#define SIZE 81
int dancishu(char* string);
int daxiezimushu(char* string);
int xiaoxiezimushu(char* string);
int biaodianfuhaoshu(char* string);
int shuzizifushu(char* string);
char* duqv(char* string, int n);
int main(void)
{
	char input[SIZE];

	puts("�������ַ�:");		//�������룺danci1 danci2 DAXIE xiaoxie, haha.       en?   123456
	duqv(input, SIZE);

	printf("����ĵ�����:%d\n", dancishu(input));
	printf("����Ĵ�д��ĸ��:%d\n", daxiezimushu(input));
	printf("�����Сд��ĸ��:%d\n", xiaoxiezimushu(input));
	printf("����ı�������:%d\n", biaodianfuhaoshu(input));
	printf("����������ַ���:%d\n\n", shuzizifushu(input));

	return 0;
}
int dancishu(char* string)
{
	char* find = string;
	int biaoji = 0;
	int count = 0;

	while (find < string + strlen(string))
	{
		if (isalpha(*find) && !biaoji)
		{
			biaoji = 1;
			count++;// ͳ�Ƶ��ʸ���
		}
		if (!isalpha(*find) && biaoji)
			biaoji = 0;// �ѵ����ʵ�ĩβ

		find++;
	}
	return count;
}
int daxiezimushu(char* string)
{
	char* find = string;
	int count = 0;

	while (find < string + strlen(string))
	{
		if (isupper(*find))
			count++;
		find++;
	}
	return count;
}
int xiaoxiezimushu(char* string)
{
	char* find = string;
	int count = 0;

	while (find < string + strlen(string))
	{
		if (islower(*find))
			count++;
		find++;
	}
	return count;
}
int biaodianfuhaoshu(char* string)
{
	char* find = string;
	int count = 0;

	while (find < string + strlen(string))
	{
		if (ispunct(*find))
			count++;
		find++;
	}
	return count;
}
int shuzizifushu(char* string)
{
	char* find = string;
	int count = 0;

	while (find < string + strlen(string))
	{
		if (isdigit(*find))
			count++;
		find++;
	}
	return count;
}
char* duqv(char* string, int n)
{
	char* fanhui;

	fanhui = fgets(string, n, stdin);

	if (fanhui)//���벻Ϊ^Z����EOF��
	{
		while (*string != '\n' && *string != '\0')
			string++;
		if (*string == '\n')
			*string = '\0';
		else//*string == '\0'ʱ
			while (getchar() != '\n')
				continue;
	}
	return fanhui;
}
#endif


//13.
#if 0
#include <stdlib.h>
#include <string.h>
int main(int argc, char** argv)
{
	int i;

	char cunchu[20] = "a";
	char* cunchudezhizhen = cunchu;//ָ��cunchu

	int length = strlen(argv[1]);
	for (int i = 0; i < length; i++)
		*(cunchudezhizhen + i) = *(argv[1] + i);			//argv[1]�����ַ������������Ҳ���ַ��������ָ�롣

	puts(cunchu);
	puts(argv[1]);//���������ʾЧ����ͬ
	putchar('\n');

	//for (i = argc-1; i - 1 >= 1; i--)//4���ַ�������һ����Ϊ��������ʵ����ֻ��3���ַ�����argc=4��
	//strcat(argv[i],argv[i-1]);
	// 

	//strcat(argv[3],argv[2]);
	//strcat(argv[3],argv[1]);

	//puts(argv[3]);																															 //Ч�����ã��ҳ����ӡ�������

	//putchar('\n');

	for (int i = argc - 1; i > 0; i--)
		printf("%s ", argv[i]);

	return 0;
}
#endif


//14.
#if 0
#include <stdlib.h>
#include <string.h>
int main(int argc, char* argv[])
{

	double dishu;//����
	int zhishu;//ָ��
	double jieguo = 1.0;

	dishu = atof(argv[1]);
	zhishu = atoi(argv[2]);

	for (int i = 1; i <= zhishu; i++)
		jieguo *= dishu;

	printf("%.2lf��%d�η�����%.2lf", dishu, zhishu, jieguo);

	return 0;
}
#endif


//15.
#if 0
#include <string.h>
#include <ctype.h>
int atoi(char* string);
char* duqv(char* string, int n);
int main(void)
{

	char cunchu[80];
	puts("�������ַ�:");
	duqv(cunchu, 80);

	int fanhui;
	fanhui = atoi(cunchu);
	printf("atoi()����ú������е��ַ�Ϊ:%s\n", cunchu);
	printf("atoi()�ķ���ֵ��%d\n", fanhui);

	return 0;
}
int atoi(char* string)
{
	int fanhui;
	char* find = string;
	char* temp[80];
	int i = 0;

	for (; find < string + strlen(string); find++)
	{
		if (isdigit(*find) == 0)
		{
			fanhui = 0;
			break;
		}
		else
			fanhui = 1;

		if (*find != '\0')
		{
			temp[i] = *find;																			//������Ȼtemp�е��ַ���������ַ�������������ֵ��
			i++;
		}
	}

	*(temp + 79) = '\0';
	puts(temp);

	return fanhui;
}
char* duqv(char* string, int n)
{
	char* fanhui;

	fanhui = fgets(string, n, stdin);

	if (fanhui)//���벻Ϊ^Z����EOF��
	{
		while (*string != '\n' && *string != '\0')
			string++;
		if (*string == '\n')
			*string = '\0';
		else//*string == '\0'ʱ
			while (getchar() != '\n')
				continue;
	}
	return fanhui;
}
#endif
//15.����
#if 0
#include <string.h>
#include <ctype.h>
int atoi(char* string);
char* duqv(char* string, int n);
int main(void)
{

	char cunchu[80];
	puts("�������ַ�:");
	duqv(cunchu, 80);//��scanf()Ч����ͬ

	printf("atoi()����ú����������Ϊ%d\n", atoi(cunchu));

	return 0;
}
int atoi(char* string)
{
	int result = 0;
	int weiquan = 1;//��λ��Ȩ��1��ʮλ��Ȩ��10
	int length = strlen(string);

	for (int i = length; i > 0; i--)
	{
		if (isdigit(*(string + i - 1)) == 0)//���ж�ĩλ�Ƿ�Ϊ�����ַ�
		{
			printf("���ڷ������ַ���");
			return 0;
		}
		result += (*(string + i - 1) - '0') * weiquan;//�����ַ���ASCII��������ܵõ����֣�

		weiquan *= 10;
	}

	return result;
}
char* duqv(char* string, int n)
{
	char* fanhui;

	fanhui = fgets(string, n, stdin);

	if (fanhui)//���벻Ϊ^Z����EOF��
	{
		while (*string != '\n' && *string != '\0')
			string++;
		if (*string == '\n')
			*string = '\0';
		else//*string == '\0'ʱ
			while (getchar() != '\n')
				continue;
	}
	return fanhui;
}
#endif


//16.
#if 1
#include<ctype.h>
#include<string.h>
void print(void);
void to_up(void);
void to_low(void);
int main(int argc, char* argv[])
{
	if (argc > 2)
		printf("The parameter is incorrect.\n");
	else if (argc == 1 || !strcmp(argv[1], "-p"))//û����ڶ����ַ��������������˵ڶ����ַ�����Ϊ-Pʱ��
		print();
	else if (!strcmp(argv[1], "-u"))//�ȽϺ���ͬ���򷵻�0��ȡ�Ǻ�Ϊ1��
		to_up();
	else if (!strcmp(argv[1], "-l"))
		to_low();
	putchar('\n');

	return 0;
}
void print(void)
{
	char ch;

	while ((ch = getchar()) != EOF)   //�ļ�����
		putchar(ch);
}
void to_up(void)
{
	char ch;

	while ((ch = getchar()) != EOF)
	{
		ch = toupper(ch);
		putchar(ch);
	}
}
void to_low(void)
{
	char ch;

	while ((ch = getchar()) != EOF)
	{
		ch = tolower(ch);
		putchar(ch);
	}
}
#endif
#endif


//chapter 12
//code1.c
#if 0
#include <stdio.h>
//
#if 1
#endif


//�����еı������ڲ���еı���ͬ�������
#if 0
int main(void)
{
	int x = 30;
	printf("x�����飺ֵΪ%d��ַΪ%p\n", x, &x);

	{
		int x = 77;
		printf("x���ڲ�飺ֵΪ%d��ַΪ%p\n", x, &x);
	}

	printf("x�����飺ֵΪ%d��ַΪ%p\n", x, &x);

	while (x++ < 33)//�����xΪ30ʱ���룬x��Ϊ31��������������xΪ33ʱ�ж�Ϊ�ٲ����룬x��Ϊ34��
	{
		int x = 100;
		x++;
		printf("x��whileѭ���У�ֵΪ%d��ַΪ%p\n", x, &x);
	}

	printf("x�����飺ֵΪ%d��ַΪ%p\n", x, &x);

	return 0;
}
#endif


//�µ�C99�����
#if 0
int main(void)
{
	int n = 8;
	printf("�����n=%d����ַ��p=%p\n", n, &n);

	for (int n = 1; n < 3; n++)
		printf("��һ��forѭ��������n=%d����ַ��p=%p\n", n, &n);

	printf("��һ��forѭ��������n=%d����ַ��p=%p\n", n, &n);

	for (int n = 1; n < 3; n++)
	{
		printf("�ڶ���forѭ��������n=%d����ַ��p=%p\n", n, &n);
		int n = 6;
		printf("�ڶ���forѭ�����±���n=%d����ַ��p=%p\n", n, &n);
		n++;//n=6+1=7
	}
	printf("�ڶ���forѭ��������n=%d����ַ��p=%p\n", n, &n);


	return 0;
}
#endif


//ʹ�þֲ���̬��������������ľ�̬���������������������Ӿ�̬�洢�ڣ�
#if 0
void ceshi(void);
int main(void)
{
	int count;
	for (count = 1; count <= 3; count++)
	{
		printf("��������%d:\n", count);
		ceshi();
	}

	return 0;
}
void ceshi(void)
{
	int fade = 1;
	static int stay;//��δ��ʼ����̬������Ĭ��ֵΪ0
	printf("fade=%d     stay=%d\n", fade++, stay++);
}
#endif


//ʹ���ⲿ�������ⲿ���ӵľ�̬������
#if 0
int shuzi;
void ceshi(void);
int main(void)
{
	puts("����������:");
	scanf("%d", &shuzi);

	while (shuzi != 66)
	{
		ceshi();
	}
	puts("����ˣ�");

	return 0;
}
void ceshi(void)
{
	printf("��������ֲ��ԣ����������룡\n");
	scanf("%d", &shuzi);
}
#endif


//ʹ�ö��ִ洢��𣬱�дʵ�ּ���Ȳ����еĳ���													//Ҫ��qiuhehanshu.cһ�����
#if 0
void baogao_zhixincishu(void);//�������ִ�д���
extern void qiuhe(int k);//�������ʵ�δ���ĵȲ��������      extern����ǰ�ļ�ʹ�õĺ����������ڱ�

int count = 0;//����ʽ�������ļ��������ⲿ���Ӿ�̬�洢��-->�ⲿ���ӵľ�̬����

int main(void)
{
	int shuzi;//���������������Զ��洢��-->�Զ�����
	register int i;//���������������Զ��洢��-->�Ĵ�������

	printf("������һ��������(����0���˳�����)��");
	while (scanf("%d", &shuzi) == 1 && shuzi > 0)
	{
		count++;//ʹ���ⲿ���ӵľ�̬����
		for (i = shuzi; i >= 0; i--)					//iΪ0ʱ��ӡѭ�������ͼ�����
			qiuhe(i);

		printf("������һ��������(����0���˳�����)��");
	}
	baogao_zhixincishu();

	return 0;
}
void baogao_zhixincishu(void)//�������ִ�д���
{
	printf("����ִ����%d��\n", count);//ʹ���ⲿ���ӵľ�̬����
}
#endif


//ʹ���ڲ����ӵľ�̬������д����α������ĺ���														//Ҫ��rand1.cһ�����
#if 0//��������
#include<time.h>
extern unsigned int rand1(void);
extern void seed_to_next(unsigned int seed);

int main(void)
{
	int count;
	unsigned seed;

	printf("ʹ��ϵͳʱ����Ϊ��������\n");
	seed_to_next((unsigned int)time(0));

	for (count = 0; count < 10; count++)
		printf("%d\n", rand1());

	return 0;
}
#endif


//ʹ���������뵥Ԫ�ļ���������ӳ���																		//Ҫ��zhitouzi.cһ�����
#if 0
#include<stdlib.h>//�ṩsrand()ԭ��
#include <time.h>//�ṩtime()ԭ��
#include"zhitouzi.h"

int main(void)
{
	int geshu, mianshu, shuzizongshu;
	int status;

	srand((unsigned int)time(0));//��rand()������������������������
	printf("���������ӵ�������(����0���˳�����)\n");

	while (scanf("%d", &mianshu) == 1 && mianshu > 0)
	{
		puts("�ж��ٸ����ӣ�");
		if ((status = scanf("%d", &geshu)) != 1)
		{
			if (status == EOF)
				break;
			else
			{
				puts("��Ӧ������һ��������");
				puts("����������һ��");
				while (getchar() != '\n');
				continue;
				puts("�ж��ٸ����ӣ�");
			}
		}																						 //touzishuzizongshu���ⲿ�����ɱ������ļ��ĺ�������
		shuzizongshu = touzishuzizongshu(geshu, mianshu);//ע�������������뺯������ͬ����Ϊ����ͬ����ж����Դ��󣬱�������֪���õ��ñ������Ǻ�����
		printf("��ʹ��%d��%d�������������%d\n\n", geshu, mianshu, shuzizongshu);

		printf("���������ӵ�������(����0���˳�����)\n");
	}
	printf("touzishuzi()������ִ����%d��", zhitouzicishu);

	return 0;
}
#endif


//ʹ��malloc()ʵ�ֶ�̬�����ڴ�
#if 0
#include<stdlib.h>

int main(void)
{
	double* p;
	int max, number;
	int i = 0;

	puts("Ҫ������ٸ�double���͵�ֵ��");
	if (scanf("%d", &max) != 1)
	{
		puts("��������ֲ���ȷ��");
		exit(EXIT_FAILURE);
	}
	p = (double*)malloc(max * sizeof(double));
	if (p == NULL)
	{
		puts("�����ڴ����ʧ�ܣ�");
		exit(EXIT_FAILURE);
	}

	puts("����������(��q���˳�)��");
	while (i < max && scanf("%lf", p + i) == 1)//����1.1 2.2 3.3 4.4 5.5 6.6 7.7 8.8 9.9 10.10 11.11 12.12 13.13 14.14 15.15
		i++;

	printf("�����������%d�����֣�\n", i);

	number = i;
	for (i = 0; i < number; i++)
	{
		printf("%7.2f", *(p + i));
		if (i % 7 == 6)//ÿ��������7�����֣���һ��iΪ0��6���ڶ���i��7��ʼ��ѭ��������i��ֵ�����������ֵ�����
			putchar('\n');
	}
	if (i % 7 != 0)//��ÿ������û�������ӡ���з�
		putchar('\n');

	puts("Done.");
	free(p);

	return 0;
}
#endif


//�鿴��̬�����Զ����󣬶�̬����Ķ���洢�ںδ�
#if 0
#include<stdlib.h>
#include<string.h>

int waibulianjie_jintai = 30;
const char* p1 = "p1ָ���ַ������������ַ����Ǿ�̬����";

int main(void)
{
	int zidong = 40;
	char* p2 = "p2ָ���ַ������������ַ����Ǿ�̬����";

	char shuzuxinshichuangjian[] = "������ʽ�����ַ���";

	int* p3 = (int*)malloc(1 * sizeof(int));
	*p3 = 35;

	//��char* p4 = (char*)calloc(strlen("abc")+1,sizeof(char));
	char* p4 = (char*)malloc(strlen("abc") + 1);
	strcpy(p4, "abc");

	printf("�ⲿ���ӵľ�̬������%d                                         ��ַ��%p\n", waibulianjie_jintai, &waibulianjie_jintai);
	printf("�ַ����Ǿ�̬����:%s          ��ַ��%p\n", p1, p1);
	printf("�ַ����Ǿ�̬����:%s          ��ַ��%p\n", p2, p2);
	printf("������ʽ�����ַ���:%s		               ��ַ��%p\n", shuzuxinshichuangjian, shuzuxinshichuangjian);
	printf("�Զ�������%d                                                   ��ַ��%p\n", zidong, &zidong);
	printf("��̬����Ķ���%d                                             ��ַ��%p\n", *p3, &p3);
	printf("��̬����Ķ���%s				      	       ��ַ��%p\n", p4, p4);

	free(p3);
	free(p4);

	return 0;
}
#endif
#endif


//chapter 12
//code2.c
#if 0
#include <stdio.h>


//��ϰ��
//8.
#if 1
char color = 'B';
void first(void);
void second(void);
int main(void)
{
	extern char color;

	printf("color in main() is %c\n", color);
	first();
	printf("color in main() is %c\n", color);
	second();
	printf("color in main() is %c\n", color);

	return 0;
}
void first(void)
{
	char color = 'R';
	printf("color in first() is %c\n", color);
}
void second(void)
{
	color = 'G';
	printf("color in second() is %c\n", color);
}
#endif
#endif


//chapter 12
//code3.c
#if 0
#include <stdio.h>
//
#if 1
#endif


//�����ϰ
//1.
#if 0
int critic(int num);
int main(void)
{
	int units;
	printf("How many pounds to a firkin of butter?\n");
	scanf("%d", &units);

	while (units != 56)
	{
		units = critic(units);
	}
	printf("You must have looked it up!\n");

	return 0;
}
int critic(int num)//units��num�ĵ�ַ����ͬ��
{
	printf("No luck, my friend. Try again.\n");
	scanf("%d", &num);

	return num;
}
#endif
//1.������ָ��
#if 0
void critic(int* num);
int main(void)
{
	int units;
	printf("How many pounds to a firkin of butter?\n");
	scanf("%d", &units);

	while (units != 56)
	{
		critic(&units);//��ָ��num����units�ĵ�ַ��
	}
	printf("You must have looked it up!\n");

	return 0;
}
void critic(int* num)
{
	printf("No luck, my friend. Try again.\n");
	scanf("%d", num);//�޸�units��ֵ
}
#endif


//2.																						//��pe12-2a.c, pe12-2a.hһ�����
#if 0
#include "pe12-2a.h"
int main(void)
{
	int mode;

	printf("Enter 0 for metric mode, 1 for US mode :");
	scanf("%d", &mode);
	while (mode >= 0)
	{
		set_mode(mode);
		get_info();
		show_info();
		printf("Enter 0 for metric mode, 1 for US mode ");
		printf("(-1 to quit) :");
		scanf("%d", &mode);
	}
	printf("Done.\n");

	return 0;
}
#endif


//3.																						//��pe12-3a.c, pe12-3a.hһ�����
#if 0
#include "pe12-3a.h"
int main(void)
{
	int mode, mode1;

	printf("Enter 0 for metric mode, 1 for US mode :");
	scanf("%d", &mode);
	while (mode >= 0)
	{
		if (mode == 0 || mode == 1)
			mode1 = mode;//����0��1�����mode1��ֵ��

		if (mode != 0 && mode != 1)//���벻��0�Ҳ���1������ԭ��mode1��ֵ����mode��
		{
			char xianshi1[7] = "US";
			char xianshi2[7] = "metric";
			if (mode1 == 0)
			{
				printf("Invalid mode specified. Mode %d(%s) used.\n", mode1, xianshi2);
				mode = mode1;
			}
			if (mode1 == 1)
			{
				printf("Invalid mode specified. Mode %d(%s) used.\n", mode1, xianshi1);
				mode = mode1;
			}
		}

		mode = set_mode(mode);
		get_info(mode);

		printf("Enter 0 for metric mode, 1 for US mode ");
		printf("(-1 to quit) :");
		scanf("%d", &mode);
	}
	printf("Done.\n");

	return 0;
}
#endif
//��������main()�ж���mode, distance, fuel��
//����������Ϊ��
// 
//void set_mode(int *mode, int n);
//void get_info(int mode,double *distance,double *fuel);
//void show_info(int mode,double distance,double fuel);
// 
//set_mode(&mode, n);
//get_info(mode,&distance,&fuel);
//show_info(mode,distance,fuel);


//4.
#if 0
int count;
int ceshi(void);
int main(void)
{
	int num;
	int cishu;
	puts("Ҫ���ü��Σ�");
	scanf("%d", &num);
	for (int i = 0; i < num; i++)
	{
		cishu = ceshi();
		printf("��������%d��\n", cishu);
	}

	return 0;
}
int ceshi(void)
{
	count++;
	return count;
}
#endif


//5.
#if 0
#include <time.h>
#include<stdlib.h>/*�ṩ rand������ԭ�� */
int tigongshuzi(void);
void paixu(int* p, int num);

int main(void)
{
	srand((unsigned int)time(0));
	int i;
	int shuzu[100];
	for (i = 0; i < 100; i++)
		*(shuzu + i) = tigongshuzi();

	puts("ԭ���֣�");
	for (i = 0; i < 100; i++)
		printf("%5d\n", *(shuzu + i));

	puts("�������к�");
	paixu(shuzu, 100);
	for (i = 0; i < 100; i++)
		printf("%5d\n", *(shuzu + i));

	return 0;
}
int tigongshuzi(void)
{
	int shuzi = rand() % 10 + 1;

	return shuzi;
}
//void paixu(int * p, int num)
//{
//	int* temp;
//	int top, seek;
//
//	for(top=0;top<num-1;top++)
//		for(seek=top+1;seek<num;seek++)
//			if (*(p + top) <= *(p + seek))
//			{
//				temp = p + top;
//				(p+top)= (p + seek);									//ע���˴��ᱨ���������Ǹ����޸ĵ���ֵ��
//				p + seek= temp;										//ԭ��p+top��ָ���ڴ��ϵ�����  P320		
//			}																		//p=p+1��ȷ     p+1=p����
//}
void paixu(int* p, int num)
{
	int temp;
	int top, seek;

	for (top = 0; top < num - 1; top++)
	{
		for (seek = top + 1; seek < num; seek++)
		{
			if (*(p + top) < *(p + seek))
			{
				temp = *(p + seek);
				*(p + seek) = *(p + top);
				*(p + top) = temp;
			}
		}
	}
}
#endif


//6.
#if 0
static unsigned long int next = 1;
int rand(void);
void srand(unsigned int seed);
int tigongshuzi(void);
void tongji(int* p, int num);

int main(void)
{
	unsigned seed;

	printf("��������ѡ����������֣�");
	while (scanf("%d", &seed) == 1)
	{
		srand(seed);
		int shuzu[1000];
		int i;
		for (i = 0; i < 1000; i++)
			*(shuzu + i) = tigongshuzi();

		//for (i = 0; i < 1000; i++)
		//printf("%d\n",shuzu[i]);

		putchar('\n');
		tongji(shuzu, 1000);
		printf("\n��������ѡ����������֣�");
	}

	return 0;
}
void srand(unsigned int seed)
{
	next = seed;
}
int rand(void)
{
	next = next * 1103515245 + 12345;
	return ((unsigned int)(next / 65536) % 32768);
}
int tigongshuzi(void)
{
	int shuzi = rand() % 10 + 1;
	return shuzi;
}
void tongji(int* p, int num)
{
	int jilu[10] = { 0 };

	for (int i = 0; i < 1000; i++)
	{
		if (*(p + i) == 1)
			jilu[0]++;
		if (*(p + i) == 2)
			jilu[1]++;
		if (*(p + i) == 3)
			jilu[2]++;
		if (*(p + i) == 4)
			jilu[3]++;
		if (*(p + i) == 5)
			jilu[4]++;
		if (*(p + i) == 6)
			jilu[5]++;
		if (*(p + i) == 7)
			jilu[6]++;
		if (*(p + i) == 8)
			jilu[7]++;
		if (*(p + i) == 9)
			jilu[8]++;
		if (*(p + i) == 10)
			jilu[9]++;
	}
	printf("���ִ�����1          2            3            4           5           6          7          8          9           10\n");
	for (int i = 0; i < 10; i++)													//�ǣ���P79��
		printf("%12d", *(jilu + i));													//scanf()      �����б�ָ�������ָ��
																								//printf()		�����б������������ͱ��ʽ
}
#endif
//6.��ANSI C ��srand()��rand()
#if 0
#include<time.h>
#include<stdlib.h>
int tigongshuzi(void);
void tongji(int* p, int num);

int main(void)
{
	srand((unsigned int)time(0));
	int shuzu[1000];
	int i;
	for (i = 0; i < 1000; i++)
		*(shuzu + i) = tigongshuzi();

	//for (i = 0; i < 1000; i++)
	//printf("%d\n",shuzu[i]);

	putchar('\n');
	tongji(shuzu, 1000);

	return 0;
}
int tigongshuzi(void)
{
	int shuzi = rand() % 10 + 1;
	return shuzi;
}
void tongji(int* p, int num)
{
	int jilu[10] = { 0 };

	for (int i = 0; i < 1000; i++)
	{
		if (*(p + i) == 1)
			jilu[0]++;
		if (*(p + i) == 2)
			jilu[1]++;
		if (*(p + i) == 3)
			jilu[2]++;
		if (*(p + i) == 4)
			jilu[3]++;
		if (*(p + i) == 5)
			jilu[4]++;
		if (*(p + i) == 6)
			jilu[5]++;
		if (*(p + i) == 7)
			jilu[6]++;
		if (*(p + i) == 8)
			jilu[7]++;
		if (*(p + i) == 9)
			jilu[8]++;
		if (*(p + i) == 10)
			jilu[9]++;
	}
	printf("���ִ�����1          2            3            4           5           6          7          8          9           10\n");
	for (int i = 0; i < 10; i++)													//�ǣ���P79��
		printf("%12d", *(jilu + i));												//scanf()      �����б�ָ�������ָ��
																								//printf()		�����б������������ͱ��ʽ
}
#endif


//7.
#if 0
#include<stdlib.h>//�ṩsrand()ԭ��
#include <time.h>//�ṩtime()ԭ��
#include"zhitouzi.h"

int main(void)
{
	int cishu, geshu, mianshu, shuzizongshu;
	int status;

	srand((unsigned int)time(0));//��rand()������������������������

	printf("�����������ӵĴ���(����q���˳�����)��");

	while (scanf("%d", &cishu) == 1)
	{
		printf("���������ӵ������͸�����");

		if (scanf("%d%d", &mianshu, &geshu) != 2)
		{
			puts("����������һ��");
			while (getchar() != '\n');
			continue;
			printf("���������ӵ������͸�����");
		}

		printf("��������%d��%d��%d������ӵ����֣�\n", cishu, geshu, mianshu);

		int i;
		for (i = 0; i < cishu; i++)
		{
			shuzizongshu = touzishuzizongshu(geshu, mianshu);//ע�������������뺯������ͬ����Ϊ����ͬ����ж����Դ��󣬱�������֪���õ��ñ������Ǻ�����
			printf("%5d", shuzizongshu);

			if (i % 15 == 14)
				putchar('\n');
		}
		if (i % 15 != 0)
			putchar('\n');

		printf("�����������ӵĴ�����(����q���˳�����)");
	}

	printf("\ntouzishuzi()������ִ����%d��", zhitouzicishu);

	return 0;
}
#endif


//8.
#if 0
#include<stdlib.h>
int* make_array(int elem, int val);
void show_array(const int* ar, int n);
int main(void)
{
	int* pa;
	int size;
	int value;

	printf("Enter the number of elements : ");
	while (scanf("%d", &size) == 1 && size > 0)
	{
		printf("Enter the initialization value : ");
		scanf("%d", &value);
		pa = make_array(size, value);
		if (pa)
		{
			show_array(pa, size);
			free(pa);
		}
		printf("Enter the number of elements : ");
	}
	printf("Done.\n");

	return 0;
}
int* make_array(int elem, int val)
{
	int* pa;
	pa = (int*)malloc(elem * sizeof(int));

	for (int i = 0; i < elem; i++)
		*(pa + i) = val;

	return pa;
}
void show_array(const int* ar, int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		printf("%5d", *(ar + i));
		if (i % 8 == 7)
			putchar('\n');
	}
	if (i % 8 != 0)
		putchar('\n');
}
#endif


//9.
#if 0
#include<stdlib.h>//malloc()
#include<string.h>//strlen()
char* make_array(int elem);

int main(void)
{
	int dancishu;
	printf("����Ҫ���뼸�����ʣ�");
	scanf("%d", &dancishu);

	char** p1;
	p1 = make_array(dancishu);

	printf("����������%d�����ʣ�\n", dancishu);
	char temp[200];

	for (int i = 0; i < dancishu; i++)
	{
		scanf("%s", temp);
		char* p2 = (char*)malloc(strlen(temp) * sizeof(char));


	}
	scanf("%s", p1[i]);

	printf("%s", p1[0][0]);

	return 0;
}
char* make_array(int elem)
{
	char** p1 = (char**)malloc(elem * sizeof(char*));
	return p1;
}
#endif
//9.����
#if 0
#include<stdlib.h>//malloc()
#include<string.h>//strlen()
char* make_array(int elem);

int main(void)
{
	int dancishu;
	printf("����Ҫ���뼸�����ʣ�");
	scanf("%d", &dancishu);

	char** p1;
	p1 = make_array(dancishu);//����һ��ָ�����飬ָ�����Ϊ���ڵ�������ָ�붼ָ��char��p1��ָ���ָ�롣

	printf("����������%d�����ʣ�", dancishu);
	char temp[200];

	for (int i = 0; i < dancishu; i++)
	{
		scanf("%s", temp);//����scanf()ÿ��ֻ�ܶ�һ�����ʵĹ��ܣ�ÿ��ѭ�����ӻ���������һ�����ʡ�

		char* p2 = (char*)malloc((strlen(temp) + 1) * sizeof(char));//����ÿ�����ʵĳ��ȣ�����һ�����ʵ��ڴ档

		strcpy(p2, temp);//ÿ�ζ��������ڴ��д���һ�����ʡ�
		*(p1 + i) = p2;//��p1�����ָ�붼ָ���·�����ڴ�ռ䡣
	}

	puts("������������ĵ������У�");
	for (int i = 0; i < dancishu; i++)
		puts(*(p1 + i));
	//printf("%s\n", *(p1+i));

	free(p1);
	puts("��ɣ�");

	return 0;
}
char* make_array(int elem)
{
	char** p1 = (char**)malloc(elem * sizeof(char*));//����һ�����飬�����е�ÿ��Ԫ�ض���ָ��char��ָ�룬��˷���ֵӦ��ָ���ָ��
	return p1;
}
#endif
#endif


//chapter 13
//code1.c
#if 0
#include <stdio.h>
#include <stdlib.h>//�ṩexit()ԭ��
//
#if 1
#endif


//ʹ�ñ�׼I/O
#if 0
int main(int argc, char** argv)
{
	int ch;
	FILE* fp;
	unsigned long count = 0;
	if (argc != 2)
	{
		printf("Usage: %s filename\n", argv[0]);
		exit(EXIT_FAILURE);
	}
	if ((fp = fopen(argv[1], "r")) == NULL)
	{
		printf("Can't open %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while ((ch = getc(fp)) != EOF)
	{
		putc(ch, stdout);
		count++;
	}
	fclose(fp);
	printf("File %s has %lu characters\n", argv[1], count);

	return 0;
}
#endif


//��д�ļ�ѹ������
#if 0
#include <string.h>
#define LEN 40
int main(int argc, char** argv)
{
	FILE* in, * out;
	int ch;
	char name[LEN];
	int count = 0;

	if (argc < 2)
	{
		printf("Usage: %s filename\n", argv[0]);
		exit(EXIT_FAILURE);
	}
	if ((in = fopen(argv[1], "r")) == NULL)//�򿪵�һ���ļ�
	{
		fprintf(stderr, "Can't open %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	strncpy(name, argv[1], LEN - 5);					//�ļ�����������3������
	name[LEN - 5] = '\0';
	strcat(name, ".red");//ע��һ������µڶ����ַ�������ӵ�һ���ַ����ĵ�һ�����ַ�����ʼ���ǡ�    red��reduced

	if ((out = fopen(name, "w")) == NULL)//�򿪵ڶ����ļ�
	{
		fprintf(stderr, "Can't open %s\n", name);
		exit(EXIT_FAILURE);
	}
	while ((ch = getc(in)) != EOF)
	{
		if (count++ % 3 == 0)
			putc(ch, out);
	}
	if (fclose(in) != 0 || fclose(out) != 0)
		fprintf(stderr, "Error in closing files\n");

	return 0;
}
#endif


//ʹ��fprintf()��fscanf()��rewind()
#if 0
#define MAX 41
int main(void)
{
	FILE* fp;
	char words[MAX];

	if ((fp = fopen("wordy.txt", "a+")) == NULL)
	{
		fprintf(stderr, "Can't open \"wordy\" file.\n");
		exit(EXIT_FAILURE);
	}
	puts("������Ҫ�����ļ������ݣ�(�����а�#�Խ�������)");
	while ((fscanf(stdin, "%40s", words) == 1) && (words[0] != '#'))
		fprintf(fp, "%s\n", words);

	puts("�ļ��������ǣ�");
	rewind(fp);
	while (fscanf(fp, "%s", words) == 1)
		puts(words);
	puts("Done !");

	if (fclose(fp) != 0)
		fprintf(stderr, "�ر��ļ�ʧ�ܣ�\n");

	return 0;
}
#endif


//ʹ��fseek()��ftell()�����ӡָ���ļ����ַ�
#if 0
#define MAX 81
int main(void)
{
	char file[MAX];
	char ch;

	FILE* fp;
	long count, last;

	puts("������Ҫ�򿪵��ļ�����");
	scanf("%80s", file);
	if ((fp = fopen(file, "rb")) == NULL)
	{
		fprintf(stderr, "Can't open %s file.\n", file);
		exit(EXIT_FAILURE);
	}

	fseek(fp, 0L, SEEK_END);
	last = ftell(fp);

	for (count = 1L; count <= last; count++)
	{
		fseek(fp, -count, SEEK_END);
		ch = getc(fp);
		if (ch != EOF)
			putchar(ch);
	}
	putchar('\n');
	fclose(fp);

	return 0;
}
#endif


//���ļ������ݸ��ӵ���һ���ļ���ĩβ
#if 1
#include<string.h>//�ṩstrchr()ԭ��
#define BUFSIZE 4096//��������С
#define LEN 81//�ļ�����󳤶�

void appendix(FILE* source, FILE* destination);//���ݸ��Ӻ���
char* s_gets(char* string, int n);//���뺯��

int main(void)
{
	FILE* fpsource, * fptarget;//ָ��Դ�ļ�  ָ��Ŀ���ļ�
	int files = 0;//�����ļ���������

	char file_target[LEN];
	char file_source[LEN];
	int ch;//����ַ���ʾ

	puts("������������Ŀ���ļ�����");
	s_gets(file_target, LEN);
	if ((fptarget = fopen(file_target, "a+b")) == NULL)//����дĿ���ļ�
	{
		fprintf(stderr, "δ�ܴ�Ŀ���ļ���%s\n", file_target);
		exit(EXIT_FAILURE);
	}
	//if (setvbuf(fptarget, NULL, _IOFBF, BUFSIZE) != 0)//����һ�����������
	//{
	//	fprintf(stderr, "δ�ܴ���%s�����������\n", file_target);
	//	exit(EXIT_FAILURE);
	//}

	puts("������Ҫ���������ݵĵ�һ��Դ�ļ�����(��������Խ���)");
	while (s_gets(file_source, LEN) && file_source[0] != '\0')//������У�s_gets()���\nת����\0
	{
		if (strcmp(file_source, file_target) == 0)
			fputs("���ܿ����ļ��������䱾��\n", stderr);
		else if ((fpsource = fopen(file_source, "rb")) == NULL)//��Դ�ļ�
			fprintf(stderr, "δ�ܴ�Դ�ļ���%s\n", file_source);
		else
		{
			//if (setvbuf(fpsource, NULL, _IOFBF, BUFSIZE) != 0)//����һ�����뻺����
			//{
			//	fprintf(stderr, "δ�ܴ���%s�����뻺����\n", file_source);
			//	continue;
			//}

			appendix(fptarget, fpsource);

			if (ferror(fptarget) != 0)
				fprintf(stderr, "д�ļ�%s����\n", fptarget);
			if (ferror(fpsource) != 0)
				fprintf(stderr, "��Դ�ļ�%s����\n", fpsource);
			fclose(fpsource);
			files++;
			printf("�ļ�%s�����Ѹ��ӵ�%s\n", file_source, file_target);

			puts("������Ҫ���������ݵ���һ��Դ�ļ�����(��������Խ���)");
		}
	}
	printf("������ɣ�%d���ļ��������Ѹ��ӵ�%s", files, file_target);

	rewind(fptarget);
	printf("%s�������ǣ�", file_target);
	while ((ch = getc(fptarget)) != EOF)
		putchar(ch);

	fclose(fptarget);

	return 0;
}
void appendix(FILE* target, FILE* source)
{
	size_t bytes;
	static char temp[BUFSIZE];

	while ((bytes = fread(temp, sizeof(char), BUFSIZE, source)) > 0)
		//����ȡ�ļ����ݿ������ڴ��еĵ�ַ���������ݿ�Ĵ�С���������ݿ�����������ȡ���ļ�
		fwrite(temp, sizeof(char), bytes, target);
	//��д����ļ��������ڵ��ڴ��еĵ�ַ����д���ݿ�Ĵ�С����д���ݿ���������д����ļ�
}
char* s_gets(char* string, int n)
{
	char* fanhui;
	char* find;
	fanhui = fgets(string, n, stdin);
	if (fanhui)
	{
		find = strchr(string, '\n');
		if (find)
			*find = '\0';
		else
			while (getchar() != '\n')
				continue;
	}
	return fanhui;
}
//�����У�D:\CODE\C_CODE\C Primer Plus Code practice\chapter 13\code1\Project1\x64\Debug
//Project1.exe
//mubiao.txt
//yuanwenjian1.txt
//yuanwenjian2.txt

//*******ע*****�˳��������ı�ģʽ���Ƕ�����ģʽ��fopen()�����������
#endif


//���ļ��ж�ȡѡ��������
#if 0
#define SIZE 1000
int main(void)
{
	double numbers[SIZE];

	for (int i = 0; i < SIZE; i++)
		numbers[i] = 100.0 * i + 1.0 / (i + 1);//����һ��double���͵�ֵ

	const char* file = "numbers.txt";
	FILE* iofile;

	if ((iofile = fopen(file, "wb")) == NULL)//дģʽ��������ģʽ���ļ���
	{
		fprintf(stderr, "δ�ܴ��ļ�(���ļ����ڴ洢���������)��%s\n", file);
		exit(EXIT_FAILURE);
	}

	fwrite(numbers, sizeof(double), SIZE, iofile);
	//��д����ļ��������ڵ��ڴ��еĵ�ַ����д���ݿ�Ĵ�С����д���ݿ���������д����ļ�
	fclose(iofile);

	if ((iofile = fopen(file, "rb")) == NULL)//��ģʽ��������ģʽ���ļ���
	{
		fprintf(stderr, "δ�ܴ��ļ�(���ļ����ڶ�������)��%s\n", file);
		exit(EXIT_FAILURE);
	}


	printf("������һ������ֵ��0~999����\n");
	int index;
	double value;
	while (scanf("%d", &index) == 1 && index >= 0 && index <= 999)
	{
		long pos = (long)index * sizeof(double);//pos��ƫ����������ȷ��ָ��ָ��double����ֵ��λ��
		fseek(iofile, pos, SEEK_SET);//�ҵ��洢double������ֵ���ļ���ĳ����ֵ��λ��
		fread(&value, sizeof(double), 1, iofile);
		//����ȡ�ļ��������ڴ��еĵ�ַ���������ݿ�Ĵ�С���������ݿ�����������ȡ���ļ�
		printf("�˴���ֵΪ%f\n", value);

		printf("��������һ������ֵ��0~999��������Χ���˳����򣩣�\n");
	}
	fclose(iofile);

	return 0;
}
#endif
#endif


//chapter 13
//code2.c
#if 0
#include<stdio.h>
#include<stdlib.h>//exit()
//��Ҫ���������У��ļ�·���ڣ�D:\CODE\C_CODE\C Primer Plus Code practice\chapter 13\code2\Project1\x64\Debug
//
#if 1
#endif


//��ϰ��
//4.
#if 0
int main(int argc, char** argv)
{
	double temp[1];
	double sum = 0;
	int count = 0;

	if (argc < 1 || argc>2)
	{
		fprintf(stderr, "�������������");
		exit(EXIT_FAILURE);
	}
	else if (argc == 1)
	{
		puts("������С����(����q��ֹͣ)");
		while ((fscanf(stdin, "%lf", temp) == 1))
		{
			sum += *temp;
			count++;
		}
		printf("�������ֵ�����ƽ��ֵ��%.3lf", sum / count);
	}
	else
	{
		FILE* fp;

		if ((fp = fopen(argv[1], "r")) == NULL)
		{
			fprintf(stdout, "Can't open %s file.\n", argv[1]);
			exit(EXIT_FAILURE);
		}

		while (fscanf(fp, "%lf", temp) == 1)//��while(!feof(fp)&&(fscanf(fp, "%lf", temp) == 1))
		{
			sum += *temp;
			count++;
		}
		printf("�������ֵ�����ƽ��ֵ��%.3lf", sum / count);

		fclose(fp);
	}
	puts("\n��ɣ�");

	return 0;
}
#endif
//Ҳ����ʹ��fp=stdin;   �����޲�����������


//5.
#if 0
#include<string.h>
int main(int argc, char** argv)
{
	if (argc != 3)
	{
		fprintf(stderr, "�������������");
		exit(EXIT_FAILURE);
	}

	FILE* fp;

	if ((fp = fopen(argv[2], "r")) == NULL)
	{
		fprintf(stdout, "Can't open %s file.\n", argv[2]);
		exit(EXIT_FAILURE);
	}

	char temp[80];

	puts("�������ַ����У�");

	while ((fgets(temp, 80, fp) != NULL))//fgets()һ��һ�ж��룬��Ϊ���л��塣
	{
		if (strchr(temp, *argv[1]) != NULL)//ע��strchr()�ڶ�������������ֵ�����Ա����*��
			fputs(temp, stdout);
	}
	//������(��ʹ��strchr)
	//while ((fgets(temp, 80, fp) != NULL))
	//{
	//	char* p = temp;
	//	while (*p != '\0')
	//	{
	//		if (*p++ == *argv[1])
	//		{
	//			fputs(temp, stdout);
	//			break;//����ֻ��ӡһ��
	//		}
	//	}
	//}

	fclose(fp);

	puts("��ɣ�");

	return 0;
}//���ԣ�Project1.exe y 13.10.5.txt
#endif


//8.
#if 0
int main(void)
{
	char name[] = "Yan";

	printf("Hello, %s\n", name);
	fprintf(stdout, "Hello, %s\n", name);
	fprintf(stderr, "Hello, %s\n", name);

	return 0;
}
#endif
#endif


//chapter 13
//code3.c
#if 0
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//��Ҫ���������У��ļ�·���ڣ�D:\CODE\C_CODE\C Primer Plus Code practice\chapter 13\code3\Project1\x64\Debug
//
#if 1
#endif


//13.11�����ϰ
//1.
#if 0
char* s_gets(char* string, int n);
int main(void)
{
	puts("������Ҫ�򿪵��ļ�����");
	char wenjianmin[80];
	s_gets(wenjianmin, 80);

	FILE* fp;
	if ((fp = fopen(wenjianmin, "r")) == NULL)
	{
		printf("��%s�ļ�ʧ��\n", wenjianmin);
		exit(EXIT_FAILURE);
	}

	int ch;
	unsigned long count = 0;
	while ((ch = getc(fp)) != EOF)
	{
		putc(ch, stdout);
		count++;
	}
	fclose(fp);
	printf("\nFile %s has %lu characters\n", wenjianmin, count);

	return 0;
}
char* s_gets(char* string, int n)
{
	char* fanhui;
	char* find;
	fanhui = fgets(string, n, stdin);
	if (fanhui)
	{
		find = strchr(string, '\n');
		if (find)
			*find = '\0';
		else
			while (getchar() != '\n')
				continue;
	}
	return fanhui;
}
#endif


//2.
#if 0
#define BUFSIZE 4096//��������С
#define LEN 81//�ļ�����󳤶�
void kaobei(FILE* source, FILE* destination);//��������

int main(int argc, char** argv)
{
	FILE* fpsource, * fptarget;//ָ��Դ�ļ�  ָ��Ŀ���ļ�

	if (argc != 3)
	{
		printf("������������\n");
		exit(EXIT_FAILURE);
	}

	if ((fptarget = fopen(argv[2], "wb")) == NULL)//��������Ŀ���ļ�
	{
		fprintf(stderr, "δ�ܴ�Ŀ���ļ���%s\n", argv[2]);
		exit(EXIT_FAILURE);
	}
	if (setvbuf(fptarget, NULL, _IOFBF, BUFSIZE) != 0)//����һ�����������
	{
		fprintf(stderr, "δ�ܴ���%s�����������\n", argv[2]);
		exit(EXIT_FAILURE);
	}

	if (strcmp(argv[1], argv[2]) == 0)
		fputs("���ܿ����ļ��������䱾��\n", stderr);


	if ((fpsource = fopen(argv[1], "rb")) == NULL)//��ȡԴ�ļ�
	{
		fprintf(stderr, "δ�ܴ�Դ�ļ���%s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	if (setvbuf(fpsource, NULL, _IOFBF, BUFSIZE) != 0)//����һ�����뻺����
	{
		fprintf(stderr, "δ�ܴ���%s�����뻺����\n", argv[1]);
		exit(EXIT_FAILURE);
	}

	kaobei(fptarget, fpsource);

	if (ferror(fptarget) != 0)
		fprintf(stderr, "д�ļ�%s����\n", fptarget);
	if (ferror(fpsource) != 0)
		fprintf(stderr, "��Դ�ļ�%s����\n", fpsource);

	printf("�ļ�%s�����ѿ�����%s\n", argv[1], argv[2]);

	fclose(fpsource);
	fclose(fptarget);

	return 0;
}
void kaobei(FILE* target, FILE* source)
{
	size_t bytes;
	static char temp[BUFSIZE];

	while ((bytes = fread(temp, sizeof(char), BUFSIZE, source)) > 0)
		//����ȡ�ļ����ݿ������ڴ��еĵ�ַ���������ݿ�Ĵ�С���������ݿ�����������ȡ���ļ�
		fwrite(temp, sizeof(char), bytes, target);
	//��д����ļ��������ڵ��ڴ��еĵ�ַ����д���ݿ�Ĵ�С����д���ݿ���������д����ļ�
}
//�����У�Project1.exe 13.11.2(1).txt 13.11.2(2).txt
#endif


//3.
#if 0
#include <ctype.h>
#define BUFSIZE 4096//��������С
#define LEN 81//�ļ�����󳤶�
void kaobei(FILE* source, FILE* destination);
char* s_gets(char* string, int n);//���뺯��

int main(void)
{
	FILE* fpsource, * fptarget;//ָ��Դ�ļ�  ָ��Ŀ���ļ�
	int files = 0;//�����ļ���������

	char file_target[LEN];
	char file_source[LEN];

	puts("������������Ŀ���ļ�����");
	s_gets(file_target, LEN);
	if ((fptarget = fopen(file_target, "w")) == NULL)//дĿ���ļ�
	{
		fprintf(stderr, "δ�ܴ�Ŀ���ļ���%s\n", file_target);
		exit(EXIT_FAILURE);
	}

	puts("������Ҫ���������ݵĵ�һ��Դ�ļ�����(��������Խ���)");
	while (s_gets(file_source, LEN) && file_source[0] != '\0')//������У�s_gets()���\nת����\0
	{
		if (strcmp(file_source, file_target) == 0)
			fputs("���ܿ����ļ��������䱾��\n", stderr);
		else if ((fpsource = fopen(file_source, "r")) == NULL)//��Դ�ļ�
			fprintf(stderr, "δ�ܴ�Դ�ļ���%s\n", file_source);
		else
		{
			kaobei(fptarget, fpsource);

			if (ferror(fptarget) != 0)
				fprintf(stderr, "д�ļ�%s����\n", fptarget);
			if (ferror(fpsource) != 0)
				fprintf(stderr, "��Դ�ļ�%s����\n", fpsource);
			fclose(fpsource);
			files++;
			printf("�ļ�%s�����ѿ�����%s\n", file_source, file_target);

			puts("������Ҫ���������ݵ���һ��Դ�ļ�����(��������Խ���)");
		}
	}
	printf("������ɣ�%d���ļ���������ת��Ϊ��д�󿽱���%s", files, file_target);

	fclose(fptarget);

	return 0;
}
void kaobei(FILE* target, FILE* source)
{
	char ch;
	while ((ch = getc(source)) != EOF)
	{
		ch = toupper(ch);
		putc(ch, target);
	}
}
char* s_gets(char* string, int n)
{
	char* fanhui;
	char* find;
	fanhui = fgets(string, n, stdin);
	if (fanhui)
	{
		find = strchr(string, '\n');
		if (find)
			*find = '\0';
		else
			while (getchar() != '\n')
				continue;
	}
	return fanhui;
}
//�����У�����Project1.exe��13.11.3(2).txt��13.11.3(1).txt								//ע����ʹ�����������޷���ɴ˳���Ĺ���
#endif
//3.��ĿҪ������ԭ�ļ�����ɶ����ݵ��޸ģ�����Ч��Ҫ������ԭ�ļ���
//��һ������ԭ�ļ�����ÿ���ַ����д���������һ����ʱ�ļ��У���������ݸ����ٸ��ǵ�ԭ�ļ���
#if 0
#include <ctype.h>
#define BUFSIZE 4096//��������С
#define LEN 81//�ļ�����󳤶�
void kaobei(FILE* source, FILE* destination);
char* s_gets(char* string, int n);//���뺯��

int main(void)
{
	FILE* fp1, * fp2;

	char file1[LEN];

	puts("������������Ŀ���ļ�����");
	s_gets(file1, LEN);

	//��һ���򿪣��ر��ļ�����
#if 0
	if ((fp1 = fopen(file1, "r+")) == NULL)//����дĿ���ļ�
	{
		fprintf(stderr, "δ�ܴ�Ŀ���ļ���%s\n", file1);
		exit(EXIT_FAILURE);
	}

	if ((fp2 = fopen("13.11.3(2).txt", "r+")) == NULL)//����д��ʱ�ļ�
	{
		fprintf(stderr, "δ�ܴ���ʱ�ļ���%s\n", "13.11.3(2).txt");
		exit(EXIT_FAILURE);
	}

	kaobei(fp1, fp2);
	if (fclose(fp1) != 0 || fclose(fp2) != 0)
		fprintf(stderr, "Error in closing files\n");


	if ((fp1 = fopen(file1, "r+")) == NULL)//����дĿ���ļ�
	{
		fprintf(stderr, "δ�ܴ�Ŀ���ļ���%s\n", file1);
		exit(EXIT_FAILURE);
	}

	if ((fp2 = fopen("13.11.3(2).txt", "r+")) == NULL)//����д��ʱ�ļ�
	{
		fprintf(stderr, "δ�ܴ���ʱ�ļ���%s\n", "13.11.3(2).txt");
		exit(EXIT_FAILURE);
	}
	kaobei(fp2, fp1);
#endif

	//������д���ļ�����rewind()
#if 1
	if ((fp1 = fopen(file1, "r+")) == NULL)//����дĿ���ļ�
	{
		fprintf(stderr, "δ�ܴ�Ŀ���ļ���%s\n", file1);
		exit(EXIT_FAILURE);
	}

	if ((fp2 = fopen("13.11.3(2).txt", "r+")) == NULL)//����д��ʱ�ļ�
	{
		fprintf(stderr, "δ�ܴ���ʱ�ļ���%s\n", "13.11.3(2).txt");
		exit(EXIT_FAILURE);
	}

	kaobei(fp1, fp2);
	rewind(fp1);
	rewind(fp2);
	kaobei(fp2, fp1);
#endif

	printf("������ɣ�\n");

	if (fclose(fp1) != 0 || fclose(fp2) != 0)
		fprintf(stderr, "Error in closing files\n");

	return 0;
}
void kaobei(FILE* fp1, FILE* fp2)
{
	char ch;
	while ((ch = getc(fp1)) != EOF)
	{
		ch = toupper(ch);
		putc(ch, fp2);
	}
}
char* s_gets(char* string, int n)
{
	char* fanhui;
	char* find;
	fanhui = fgets(string, n, stdin);
	if (fanhui)
	{
		find = strchr(string, '\n');
		if (find)
			*find = '\0';
		else
			while (getchar() != '\n')
				continue;
	}
	return fanhui;
}
//ʾ���ı���Take a leap. Take a chance.
//�����У�Project1.exe
//13.11.3(1).txt
#endif
//���������������д����fseek()��������дһ���ַ���Ȼ��ת���ַ������ļ�ָ�����һ���ַ����ٽ�ת������ַ�д���ļ���ÿ�θ���һ��ԭ�ַ�
#if 0
#include <ctype.h>
#define LEN 81//�ļ�����󳤶�
char* s_gets(char* string, int n);//���뺯��

int main(void)
{
	FILE* fp1;

	char file1[LEN];

	puts("������������Ŀ���ļ�����");
	s_gets(file1, LEN);

	if ((fp1 = fopen(file1, "r+")) == NULL)//����дĿ���ļ�
	{
		fprintf(stderr, "δ�ܴ�Ŀ���ļ���%s\n", file1);
		exit(EXIT_FAILURE);
	}


	char ch;
	while ((ch = getc(fp1)) != EOF)//��ȡ�ļ��е�ԭ�ַ�������ch��**�ļ��ڵĹ�����һλ�ַ�**
	{
		//ǿ������ת��
		fseek(fp1, -(long)sizeof(char), SEEK_CUR);//���ǰ��һλ�ַ�
		putc(toupper(ch), fp1);//����õ��ַ�������λ�ã�������ԭ�ַ���**�ļ��ڵĹ�����һλ�ַ�**

		//����ʹ�������д�ķ�ʽ����д�ļ�ʱ������˿���������д�ķ�ʽҪ�л������ķ�ʽ��
		//	�ͱ���ʹ�ö�λ�������¶�λ����Ҫ���ĵط�����Ȼ�͵ò������������������롣//https://blog.csdn.net/weixin_44603568/article/details/91349059
		fseek(fp1, 0L, SEEK_CUR);


		/*���������ѭ��������*/
		static int count = 0;
		count++;
		if (count == 99)
			break;
	}


	printf("������ɣ�\n");

	fclose(fp1);

	return 0;
}
char* s_gets(char* string, int n)
{
	char* fanhui;
	char* find;
	fanhui = fgets(string, n, stdin);
	if (fanhui)
	{
		find = strchr(string, '\n');
		if (find)
			*find = '\0';
		else
			while (getchar() != '\n')
				continue;
	}
	return fanhui;
}
//ʾ���ı���Take a leap. Take a chance.
//�����У�Project1.exe
//13.11.3(1).txt
#endif


//4.
#if 0
#define BUFSIZE 4096//��������С
#define LEN 81//�ļ�����󳤶�

int main(int argc, char** argv)
{
	FILE* fp[5];//����5��ָ��FILE��ָ��

	if (argc < 2)//ֻ����0��1��ʱ����
	{
		printf("������������\n");
		exit(EXIT_FAILURE);
	}

	for (int i = 0; i < argc - 1; i++)//������2�����һ���ļ���argc=2��ֻ��fp[0]����
		if ((fp[i] = fopen(argv[i + 1], "r")) == NULL)//fp[0]=argv[1]
		{
			fprintf(stderr, "δ�ܴ��ļ���%s\n", argv[i + 1]);
			exit(EXIT_FAILURE);
		}

	char ch;
	for (int i = 0; i < argc - 1; i++)
	{
		printf("��%d���ļ����ݣ�", i + 1);
		while ((ch = getc(fp[i])) != EOF)
			putchar(ch);

		putchar('\n');
	}

	printf("����������ļ�����ʾ\n");

	for (int i = 0; i < argc - 1; i++)
		fclose(fp[i]);

	return 0;
}
//�����У�Project1.exe 13.11.4(1).txt 13.11.4(2).txt 13.11.4(3).txt
#endif


//5.
#if 0
#define BUFSIZE 4096//��������С
#define LEN 81//�ļ�����󳤶�

void appendix(FILE* source, FILE* destination);//���ݸ��Ӻ���

int main(int argc, char** argv)
{
	FILE* fptarget;//ָ��Ŀ���ļ�
	FILE* fpsource[6];//6������ָ��Դ�ļ���ָ�� 
	int files = 0;//�����ļ���������
	int ch;//����ַ���ʾ

	if (argc < 3)//ֻ����0��1��2��ʱ����
	{
		printf("������������\n");
		exit(EXIT_FAILURE);
	}

	if ((fptarget = fopen(argv[1], "a+")) == NULL)//����дĿ���ļ�
	{
		fprintf(stderr, "δ�ܴ�Ŀ���ļ���%s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	if (setvbuf(fptarget, NULL, _IOFBF, BUFSIZE) != 0)//����һ�����������
	{
		fprintf(stderr, "δ�ܴ���%s�����������\n", argv[1]);
		exit(EXIT_FAILURE);
	}


	int i = 0;
	while (i < argc - 2)//����3����������ֻ��1��Դ�ļ�
	{
		if (strcmp(argv[1], argv[i + 2]) == 0)//����Ŀ���ļ��Ƿ��Դ�ļ���һ��
			fputs("���ܿ����ļ��������䱾��\n", stderr);
		else if ((fpsource[i] = fopen(argv[i + 2], "r")) == NULL)//��Դ�ļ�
			fprintf(stderr, "δ�ܴ�Դ�ļ���%s\n", argv[i + 2]);
		else
		{
			appendix(fptarget, fpsource[i]);

			if (ferror(fptarget) != 0)
				fprintf(stderr, "д�ļ�%s����\n", fptarget);
			if (ferror(fpsource[i]) != 0)
				fprintf(stderr, "��Դ�ļ�%s����\n", fpsource[i]);
			fclose(fpsource[i]);
			files++;
		}
		i++;																				//ע�����˴���дi++������ĳ�while (i++<argc-2)����i����1��ֵ����ѭ����
	}																						//����޷��������ݵĺ����
	printf("������ɣ�%d���ļ��������Ѹ��ӵ�%s\n", files, argv[1]);

	rewind(fptarget);
	printf("%s�������ǣ�\n", argv[1]);
	while ((ch = getc(fptarget)) != EOF)
		putchar(ch);

	fclose(fptarget);

	return 0;
}
void appendix(FILE* target, FILE* source)
{
	size_t bytes;
	static char temp[BUFSIZE];

	while ((bytes = fread(temp, sizeof(char), BUFSIZE, source)) > 0)
		//����ȡ�ļ����ݿ������ڴ��еĵ�ַ���������ݿ�Ĵ�С���������ݿ�����������ȡ���ļ�
		fwrite(temp, sizeof(char), bytes, target);
	//��д����ļ��������ڵ��ڴ��еĵ�ַ����д���ݿ�Ĵ�С����д���ݿ���������д����ļ�
}
//�����У�Project1.exe 13.11.5(1).txt 13.11.5(2).txt 13.11.5(3).txt
#endif


//6.
#if 0
#define LEN 40
char* s_gets(char* string, int n);

int main(void)
{
	FILE* in, * out;
	int ch;
	char name[LEN];
	int count = 0;
	puts("������Ҫ�򿪵��ļ�����");
	char wenjianmin[80];
	s_gets(wenjianmin, 80);

	if ((in = fopen(wenjianmin, "r")) == NULL)
	{
		printf("��%s�ļ�ʧ��\n", wenjianmin);
		exit(EXIT_FAILURE);
	}

	strncpy(name, wenjianmin, LEN - 5);
	name[LEN - 5] = '\0';//������������ַ���������LEN-5��������ַ����ļ����϶�ʱ��������LEN-5ǰ��Ҳ���п��ַ���
	strcat(name, "-reduced.txt");//ע��һ������µڶ����ַ�������ӵ�һ���ַ����ĵ�һ�����ַ�����ʼ���ǡ�    red��reduced

	if ((out = fopen(name, "w")) == NULL)//�򿪵ڶ����ļ�
	{
		fprintf(stderr, "Can't open %s\n", name);
		exit(EXIT_FAILURE);
	}
	while ((ch = getc(in)) != EOF)
	{
		if (count++ % 3 == 0)
			putc(ch, out);
	}
	if (fclose(in) != 0 || fclose(out) != 0)
		fprintf(stderr, "Error in closing files\n");

	puts("ѹ����ɣ�");

	return 0;
}
char* s_gets(char* string, int n)
{
	char* fanhui;
	char* find;
	fanhui = fgets(string, n, stdin);
	if (fanhui)
	{
		find = strchr(string, '\n');
		if (find)
			*find = '\0';
		else
			while (getchar() != '\n')
				continue;
	}
	return fanhui;
}
//�����У�Project1.exe 
//13.11.6.txt
#endif


//7.a
#if 0
#define MAX 81
int main(void)
{
	char file1[MAX];
	char file2[MAX];
	FILE* fp1, * fp2;

	char ch;
	long count, last;

	puts("������Ҫ�򿪵ĵ�һ���ļ�����");
	scanf("%80s", file1);
	if ((fp1 = fopen(file1, "r")) == NULL)
	{
		fprintf(stderr, "Can't open %s file.\n", file1);
		exit(EXIT_FAILURE);
	}

	puts("������Ҫ�򿪵ĵڶ����ļ�����");
	scanf("%80s", file2);
	if ((fp2 = fopen(file2, "r")) == NULL)
	{
		fprintf(stderr, "Can't open %s file.\n", file2);
		exit(EXIT_FAILURE);
	}

	//char temp[80];
	//while (fgets(temp, 80, fp1) != NULL)
	//{
	//	fputs(temp, stdout);
	//	if (fgets(temp, 80, fp2) != NULL);													//��覴ã�����һ���ļ��������ڵڶ�������ڶ����ļ����ݲ��ܴ�ӡ��
	//	fputs(temp, stdout);
	//}
	char temp1[80];
	char temp2[80];
	int a, b;
	a = b = 1;
	//while ((a=fgets(temp1, 80, fp1)) != NULL|| (b=fgets(temp2, 80, fp2) )!= NULL)//������ǰ��Ϊ�棬�򲻶Ժ��߽��м��㡣

	while (a || b)
	{
		a = fgets(temp1, 80, fp1);//һ��һ�ж���
		if (a)//aΪEOFʱ����ִ�д�ӡ
			fputs(temp1, stdout);


		b = fgets(temp2, 80, fp2);
		if (b)//bΪEOFʱ����ִ�д�ӡ
			fputs(temp2, stdout);
	}


	if (fclose(fp1) != 0 || fclose(fp2) != 0)
		fprintf(stderr, "Error in closing files\n");

	return 0;
}
//�����У�Project1.exe 
//13.11.7(1).txt
//13.11.7(2).txt
#endif
//������
#if 0
void function_a(FILE* f1, FILE* f2)
{
	char ch1, ch2;

	do
	{
		while ((ch1 = getc(f1)) != EOF && ch1 != '\n')
		{
			putc(ch1, stdout);
			putchar('\n');
		}

		while ((ch2 = getc(f2)) != EOF && ch2 != '\n')
		{
			putc(ch2, stdout);
			putchar('\n');
		}

	} while (ch1 != EOF && ch2 != EOF);
}
//https ://blog.csdn.net/weixin_44603568/article/details/91349059
#endif


//7.b
#if 0
#define MAX 81
int main(void)
{
	char file1[MAX];
	char file2[MAX];
	FILE* fp1, * fp2;

	puts("������Ҫ�򿪵ĵ�һ���ļ�����");
	scanf("%80s", file1);
	if ((fp1 = fopen(file1, "r")) == NULL)
	{
		fprintf(stderr, "Can't open %s file.\n", file1);
		exit(EXIT_FAILURE);
	}

	puts("������Ҫ�򿪵ĵڶ����ļ�����");
	scanf("%80s", file2);
	if ((fp2 = fopen(file2, "r")) == NULL)
	{
		fprintf(stderr, "Can't open %s file.\n", file2);
		exit(EXIT_FAILURE);
	}

	char temp1[80];
	char temp2[80];
	int a, b;
	a = b = 1;
	char* find;

	while (a || b)
	{
		a = fgets(temp1, 80, fp1);
		b = fgets(temp2, 80, fp2);

		if (a && b)//���ļ�1��2���ж��붼��ΪEOF
		{
			if (find = strchr(temp1, '\n'))//���ļ�1��ĳһ�к�Ļ��з�����ʹ���滻�ɿ��ַ�
				*find = '\0';

			strcat(temp1, temp2);
			fputs(temp1, stdout);
		}
		else if (a)//���ļ�1��ΪEOF
			fputs(temp1, stdout);
		else if (b)//���ļ�2��ΪEOF
			fputs(temp2, stdout);
	}

	if (fclose(fp1) != 0 || fclose(fp2) != 0)
		fprintf(stderr, "Error in closing files\n");

	return 0;
}
//�����У�Project1.exe 
//13.11.7(1).txt
//13.11.7(2).txt
#endif
//����
#if 0

void function_b(FILE* f1, FILE* f2)
{
	char ch1, ch2;

	do
	{
		while ((ch1 = getc(f1)) != EOF && ch1 != '\n')
		{
			putc(ch1, stdout);
		}

		while ((ch2 = getc(f2)) != EOF && ch2 != '\n')
		{
			putc(ch2, stdout);
		}
		putchar('\n');

	} while (ch1 != EOF && ch2 != EOF);
}
//https ://blog.csdn.net/weixin_44603568/article/details/91349059
#endif


//8.
#if 0
int main(int argc, char** argv)
{
	if (argc < 2)
	{
		fprintf(stderr, "����������");
		exit(EXIT_FAILURE);
	}
	if (strlen(argv[1]) != 1)
	{
		fprintf(stderr, "ֻ�ܲ���һ���ַ���");
		exit(EXIT_FAILURE);
	}

	char* find;
	int count = 0;

	if (argc == 2)
	{
		printf("�������ַ�����");
		char words[41];
		fscanf(stdin, "%40s", words);

		find = words;

		while (find < words + strlen(words))
		{
			if (*find == *argv[1])
				count++;
			find++;
		}
		fprintf(stdout, "�ַ�%s��������%d�Ρ�", argv[1], count);
	}

	if (argc > 2)
	{
		FILE* fp[5];//����5��ָ��FILE��ָ��

		for (int i = 0; i < argc - 2; i++)//������3�����һ���ļ���argc=3��ֻ��fp[0]����
			if ((fp[i] = fopen(argv[i + 2], "r")) == NULL)//fp[0]=argv[2]
			{
				fprintf(stderr, "δ�ܴ��ļ���%s\n", argv[i + 2]);
				exit(EXIT_FAILURE);
			}


		char ch;
		for (int i = 0; i < argc - 2; i++)
		{
			while ((ch = getc(fp[i])) != EOF)
			{
				if (ch == *argv[1])
					count++;
			}
			printf("�ַ�%s���ļ�%s�й�������%d�Ρ�", argv[1], argv[i + 2], count);
			count = 0;
			putchar('\n');
		}
		for (int i = 0; i < argc - 2; i++)
			fclose(fp[i]);
	}

	return 0;
}
//�����У�Project1.exe 
//13.11.8(1).txt
//13.11.8(2).txt
#endif
//��ȡ��׼���룬���ж��ַ�������ַ���ͬ�Ĵ���
//��������һ��Ҫ������ά�������洢������ַ���ֱ��������ʱ����ַ��ж�Ҳ���С�
#if 0
printf("�������ַ�����");
while ((ch = getchar()) != EOF)
{
	if (ch == argv[1][0])
		count++;
}
#endif


//9.���ʱ��
#if 0
#define MAX 41
int main(void)
{
	FILE* fp;
	char temp[MAX];
	char words[MAX];

	if ((fp = fopen("13.11.9.txt", "a+")) == NULL)//����д
	{
		fprintf(stderr, "Can't open \"13.11.9.txt\" file.\n");
		exit(EXIT_FAILURE);
	}

	int count = 0;

	rewind(fp);//���޴���䣬���������ʱЧ�����ѡ�		//*****************ע����fopenģʽΪr+������д����䡣*****************
	while ((fscanf(fp, "%40s", temp) == 1))//scanfִ���˼��Σ���֤���ļ������м������ʡ�
		count++;


	puts("������Ҫ�����ļ������ݣ�(�����а�#�Խ�������)");
	while ((fscanf(stdin, "%40s", words) == 1) && (words[0] != '#'))
	{
		count++;
		fprintf(fp, "%d.", count);
		fprintf(fp, "%s\n", words);
	}

	puts("�ļ��������ǣ�");
	rewind(fp);
	while (fscanf(fp, "%s", words) == 1)
		puts(words);
	puts("Done !");

	if (fclose(fp) != 0)
		fprintf(stderr, "�ر��ļ�ʧ�ܣ�\n");

	return 0;
}
//�����У�Project1.exe 
#endif
//������ʹ��fgets()��ȷ��ԭ�ļ��е�����
#if 0
int get_number(FILE * fp)
{
	int i = 0;
	char temp[80];
	rewind(fp);
	while (fgets(temp, 80, fp) != NULL)
		i++;
	return i;
}
#endif


//10.
#if 0
int main(void)
{
	FILE* fp;
	char name[20];

	printf("��������Ҫ�򿪵��ļ�����");
	scanf("%s", name);

	if ((fp = fopen(name, "rb")) == NULL)//���ļ�						//�˴����ı�ģʽ���Ƕ�����ģʽ���ļ����ݣ�
	{																									//�ı���һ�пɼ��ַ���������λ�ã���\r\n
		fprintf(stderr, "δ�ܴ�Ŀ���ļ���%s\n", name);
		exit(EXIT_FAILURE);
	}

	printf("������һ���ļ�λ�ã�");
	int index;
	char ch;
	while (scanf("%d", &index) == 1 && index >= 0)
	{
		long pos = (long)index * sizeof(char);
		fseek(fp, pos, SEEK_SET);

		while ((ch = getc(fp)) != '\n')
		{
			putc(ch, stdout);
		}
		//while ((fgets(temp, 80, fp) != NULL))//������ļ�λ�����ڵ��У��л��塣�����޷���������\nֹͣ���롣
		//���ǿ��԰��Ͼ��Ϊif������ɳ�����
		/*if (fgets(temp, 80, fp) != NULL)
			printf("%s",temp);*/

		printf("\n������һ���ļ�λ��(���븺����������ַ����˳�����)��");
	}

	rewind(fp);
	fclose(fp);

	return 0;
}
//�����У�Project1.exe
//13.11.10.txt
#endif


//11.
#if 0
char* string_in(char* string1, char* string2);

int main(int argc, char** argv)
{
	if (argc != 3)//���������ַ������ļ���
	{
		printf("������������\n");
		exit(EXIT_FAILURE);
	}
	FILE* fp;
	if ((fp = fopen(argv[2], "r")) == NULL)
	{
		printf("��%s�ļ�ʧ��\n", argv[2]);
		exit(EXIT_FAILURE);
	}

	char temp[80];
	puts("�������ַ����У�");
	while ((fgets(temp, 80, fp) != NULL))//fgets()һ��һ�ж��룬��Ϊ���л��塣
	{
		if (string_in(temp, argv[1]))
		{
			fputs(temp, stdout);
		}
	}

	return 0;
}
char* string_in(char* string1, char* string2)
{

	int count = 0;//ƥ��ȼ���
	int length = strlen(string2);

	while (count < length && *string1 != '\0')//��ƥ��δ��ɣ���û���ֵ�string1��ĩβ�ַ���ĵ�һ��λ�á�
	{
		if (*(string1 + count) == *(string2 + count))//��s1��s2�ĵ�һ���ַ�ƥ�䣬�����ֵ��һ��
			count++;
		else
		{
			count = 0;
			string1++;//����ƥ�䣬���ֵ�s1�ĵڶ����ַ���s2�ĵ�һ���ַ���⡣
		}
	}
	if (count == length)
		return string1;//�����������Ӵ����׵�ַ��

	else
		return NULL;
}
//�����У�Project1.exe a 13.11.11.txt
#endif
//������ʹ��strstr()
#if 0
int main(int argc, char** argv)
{
	if (argc != 3)//���������ַ������ļ���
	{
		printf("������������\n");
		exit(EXIT_FAILURE);
	}
	FILE* fp;
	if ((fp = fopen(argv[2], "r")) == NULL)
	{
		printf("��%s�ļ�ʧ��\n", argv[2]);
		exit(EXIT_FAILURE);
	}

	char temp[80];
	puts("�������ַ����У�");
	while ((fgets(temp, 80, fp) != NULL))//fgets()һ��һ�ж��룬��Ϊ���л��塣
	{
		if (strstr(temp, argv[1]))
		{
			fputs(temp, stdout);
		}
	}

	return 0;
}
#endif


//12.
#if 0
#define ROWS 20
#define COLUMNS 30
int main(void)
{
	int number[ROWS][COLUMNS] = { 0 };

	const FILE* fp;

	if ((fp = fopen("13.11.12(1).txt", "rb")) == NULL)//��ģʽ��������ģʽ���ļ���
	{
		fprintf(stderr, "δ�ܴ��ļ�(���ļ����ڶ�������)��%s\n", "13.11.12(1).txt");
		exit(EXIT_FAILURE);
	}

	//��fscanf()��ȡ�ַ�����Ϊ�������ݣ�����ȡ�ո�ͻ��з���
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLUMNS; j++)
			fscanf(fp, "%d", &number[i][j]);
	}

	puts("��ȡ���������ݣ�");
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLUMNS; j++)
			printf("%d", number[i][j]);
		putchar('\n');
	}

	fclose(fp);

	puts("������������ѡ���ض�������ַ�������������£�");

	//����һ����ʱ��ά�����ת���õ��ַ�����
	char shuchu[ROWS][COLUMNS + 1];

	for (int i = 0; i < ROWS; i++)
	{
		shuchu[i][30] = '\0';
	}

	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLUMNS; j++)
		{
			if (number[i][j] == 0)
				shuchu[i][j] = ' ';
			if (number[i][j] == 1)
				shuchu[i][j] = '.';
			if (number[i][j] == 2)
				shuchu[i][j] = '\'';
			if (number[i][j] == 3)
				shuchu[i][j] = ':';
			if (number[i][j] == 4)
				shuchu[i][j] = '~';
			if (number[i][j] == 5)
				shuchu[i][j] = '*';
			if (number[i][j] == 6)
				shuchu[i][j] = '=';
			if (number[i][j] == 7)
				shuchu[i][j] = '$';
			if (number[i][j] == 8)
				shuchu[i][j] = '%';
			if (number[i][j] == 9)
				shuchu[i][j] = '#';
		}
	}

	//for (int i = 0; i < ROWS; i++)
	//{
	//	for (int j = 0; j < COLUMNS+1; j++)
	//		printf("%c", shuchu[i][j]);
	//	putchar('\n');
	//}
																					//*************************************ע**********************************************
	//��																		//	char shuchu[ROWS][COLUMNS+1] ;����д��int shuchu[ROWS][COLUMNS+1] ;
	for (int i = 0; i < ROWS; i++)								//����ת��˵��%sֻ�ܴ�ӡ������׸�Ԫ�ء�					
		fprintf(stdout, "%s\n", shuchu[i]);


	FILE* out;
	if ((out = fopen("13.11.12(2).txt", "wb")) == NULL)//дģʽ��������ģʽ���ļ���
	{
		fprintf(stderr, "δ�ܴ��ļ���%s\n", "13.11.12(2).txt");
		exit(EXIT_FAILURE);
	}


	//for (int i = 0; i < ROWS; i++)
	//{
	//	for (int j = 0; j < COLUMNS + 1; j++)
	//		fprintf(out,"%c", shuchu[i][j]);
	//	putc('\n',out);
	//}
	//��
	for (int i = 0; i < ROWS; i++)
		fprintf(out, "%s\n", shuchu[i]);


	puts("������������Ѵ���13.11.12(2).txt");

	fclose(out);

	return 0;
}
//�����У�Project1.exe 
#endif
//������ͨ������һά�ַ�������±��Ԫ��ֵ��ʵ�����������ŵ�ת��
#if 0
char convert[] = { ' ',           '.',           '\'',             '\"',         '^',           '*',          '%',           '$',          '@',           '#' };
for (int i = 0; i < ROWS; i++)
{
	for (int j = 0; j < COLUMNS + 1; j++)
	{
		printf("%c", convert[number[i][j]]);
		fprintf(out, "%c", convert[number[i][j]]);
	}
	printf("\n");
	putc('\n', out);
}
#endif
//���������ú궨�������+ָ����ʵ��ת������
#if 0
# define STR " .':~*=&%#"
for (int i = 0, j = 0; i < 20; i++)
{
	for (j = 0; j < 30; j++)
		number[i][j] = *(STR + number[i][j]);

	number[i][j] = '\0';
	fprintf(out, "%s\n", number[i]);
}
//https ://blog.csdn.net/weixin_44603568/article/details/91349059
#endif
//���ģ���ʹ�ö�ά�����fscanf()������fgets()���ַ�ת���ɹ涨�����ݡ�
#if 0
char line[61];//����+�ո�+'\0'=61��char�δ洢�ռ�
while ((fgets(line, 61 * sizeof(char)), fp) != NULL)
{
	for (int i = 0; i < 61; i++)
	{
		if (line[i] >= 48 && line[i] <= 57)
		{
			printf("%c", convert[line[i] - 48]);
			fprintf(out, "%c", convert[line[i] - 48]);
		}
	}
	printf("\n");
	fprintf(out, "\n");
}
#endif


//13.�ñ䳤����(VLA)�����׼����,�����������Ĺ���
#if 0
# include <stdio.h>
# include <stdlib.h>

# define ROWS 20
# define COLS 30
# define FNAME "no12.txt"
# define FARGS "no12.dat"
# define STR " .':~*=&%#"

void initialize_ar(FILE * fp, int n, int m, int ar[n][m]);
void set_st(int n, int m, char st[n][m + 1], int ar[n][m]);

int main(void)
{
	FILE* fp, * ft;
	int ar[ROWS][COLS];
	char st[ROWS][COLS + 1];

	if (!(fp = fopen(FNAME, "r")))
	{
		fprintf(stderr, "Can't open file %s.\n", FNAME);
		exit(EXIT_FAILURE);
	}

	if (!(ft = fopen(FARGS, "w")))
	{
		fprintf(stderr, "Can't open file %s.\n", FARGS);
		exit(EXIT_FAILURE);
	}

	initialize_ar(fp, ROWS, COLS, ar);
	set_st(ROWS, COLS, st, ar);

	for (int i = 0; i < ROWS; i++)
		fprintf(ft, "%s\n", st[i]);

	if (fclose(fp) || fclose(ft))
	{
		fprintf(stderr, "Clossing error .\n");
		exit(EXIT_FAILURE);
	}

	return 0;
}

void initialize_ar(FILE * fp, int n, int m, int ar[n][m])
{
	// ��ȡ�ļ��е����ݵ���������
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			//��������Ϊ��ȷ��fscanf()��ȷ����1����,�����ܿո�������ַ�Ӱ��
			while (fscanf(fp, "%d", &ar[i][j]) != 1)
				fscanf(fp, "%*c");
}

void set_st(int n, int m, char st[n][m + 1], int ar[n][m])
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			st[i][j] = *(STR + ar[i][j]);
		}
		st[i][j] = '\0';
	}
}
//https ://blog.csdn.net/weixin_44603568/article/details/91349059
#endif


//14.ͼ�񶶶��Ż��㷨
#if 0
# include <stdio.h>
# include <stdlib.h>
# include <math.h>

# define ROWS 20
# define COLS 30
# define FNAME "no12.txt"
# define FARGS "no12.dat"
# define STR " .':~*=&%#"

void initialize_ar(FILE * fp, int n, int m, int ar[n][m]);//��ȡ�ļ��е�ԭʼ�ַ����ݲ�������ʱ��ά����ar�У����ͣ�int��
void reconstruction(int n, int m, int ar[n][m]);//�Ż��㷨�������ά����ar��ֵ
void set_st(int n, int m, char st[n][m + 1], int ar[n][m]);//��ʱ��ά����ar�е�ֵ����Ϊ�ַ��������ʱ��ά����st�У����ͣ�char��

int main(void)
{
	FILE* fp, * ft;
	int ar[ROWS][COLS];
	char st[ROWS][COLS + 1];

	if (!(fp = fopen(FNAME, "r")))
	{
		fprintf(stderr, "Can't open file %s.\n", FNAME);
		exit(EXIT_FAILURE);
	}

	if (!(ft = fopen(FARGS, "w")))
	{
		fprintf(stderr, "Can't open file %s.\n", FARGS);
		exit(EXIT_FAILURE);
	}

	initialize_ar(fp, ROWS, COLS, ar);
	reconstruction(ROWS, COLS, ar);
	set_st(ROWS, COLS, st, ar);

	for (int i = 0; i < ROWS; i++)
		fprintf(ft, "%s\n", st[i]);

	if (fclose(fp) || fclose(ft))
	{
		fprintf(stderr, "Clossing error .\n");
		exit(EXIT_FAILURE);
	}

	return 0;
}

void initialize_ar(FILE * fp, int n, int m, int ar[n][m])
{
	// ��ȡ�ļ��е����ݵ���������
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			//��������Ϊ��ȷ��fscanf()��ȷ����1����,�����ܿո�������ַ�Ӱ��
			while (fscanf(fp, "%d", &ar[i][j]) != 1)
				fscanf(fp, "%*c");
}

void reconstruction(int n, int m, int ar[n][m])
{
	//int left, right, up, down;
	int l, r, u, d;
	int sum;
	int count;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)//��ar��ά����ĵ�һ�е�һ�п�ʼ����
		{
			l = r = u = d = 1;

			//������
			//left = right = up = down = -1 ;
			sum = 0;
			count = 0;

			if (j > 0)
			{
				//left = ar[i][m - 1] ;
				l = abs(ar[i][j] - ar[i][j - 1]) > 1 ? 1 : 0;//abs:����ֵ����
				sum += ar[i][j - 1];
				count++;
			}

			if (j < m - 1)
			{
				r = abs(ar[i][j] - ar[i][j + 1]) > 1 ? 1 : 0;//�Ե�һ�е�һ��Ϊ�����������Ҳ��������ж��Ƿ����1
				sum += ar[i][j + 1];
				count++;
				//right = ar[i][m + 1] ;
			}
			if (i > 0)
			{
				u = abs(ar[i][j] - ar[i - 1][j]) > 1 ? 1 : 0;
				sum += ar[i - 1][j];
				count++;
				//up = ar[i - 1][m] ;
			}
			if (i < n - 1)
			{
				d = abs(ar[i][j] - ar[i + 1][j]) > 1 ? 1 : 0;//�Ե�һ�е�һ��Ϊ�����������²��������ж��Ƿ����1
				sum += ar[i + 1][j];
				count++;
				//down = ar[i + 1][m] ;
			}

			if (l && r && u && d)//��ĳ�������������ҵ����Ĳ����1����ĳ��Ҫ���Ż���4�����ϵ���ֵ���ᱻ�Ż���
			{
				ar[i][j] = sum / (double)count;
			}


			/*
			if ((abs(left - ar[i][j]) > 1) && (abs(right - ar[i][j]) > 1)
					&& (abs(up - ar[i][j]) > 1) && (abs(down - ar[i][j]) > 1))
				ar[i][j] = (left + right + up + down) / 4.0 ;
			*/
		}
	}
}

void set_st(int n, int m, char st[n][m + 1], int ar[n][m])
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			st[i][j] = *(STR + ar[i][j]);
		}
		st[i][j] = '\0';
	}
}
//https ://blog.csdn.net/weixin_44603568/article/details/91349059
#endif
#endif


//chapter 14
//code1.c
#if 0
#include <stdio.h>
#include <string.h>
#include <stdlib.h>//malloc(), free()
#include <ctype.h>
//
#if 1
#endif


//���ýṹ������һ�����ͼ��Ŀ¼
#if 0
#define MAX_SHUMING 41 //�����������
#define MAX_ZUOZHE 41 //���������������

char* s_gets(char* string, int n);

struct book											//�ṹ������Ҳ�д���һ���ṹģ�壩	//book�Ǹ��ṹ�ı�ǣ�����������ʹ��book���ô˽ṹ
{															//����һ�����Ϊbook�Ľṹ
	char shuming[MAX_SHUMING];
	char zuozhe[MAX_ZUOZHE];
	float value;
};

int main(void)
{
	struct book library;						//����һ��ʹ��book�ṹ���ֵĽṹ����library����library����Ϊһ��book���͵ı�����
	printf("������������\n");
	s_gets(library.shuming, MAX_SHUMING);//����shuming����

	puts("����������������");
	s_gets(library.zuozhe, MAX_ZUOZHE);//����zuozhe����

	puts("�������ۼۣ�");
	scanf("%f", &library.value);

	printf("%s:��%s������%.2f��", library.zuozhe, library.shuming, library.value);

	return 0;
}
char* s_gets(char* string, int n)
{
	char* fanhui;
	char* find;

	fanhui = fgets(string, n, stdin);
	if (fanhui)
	{
		find = strchr(string, '\n');
		if (find)
			*find = '\0';
		else
			while (getchar() != '\n')
				continue;
	}
	return fanhui;
}
#endif


//���ýṹ�������౾���ͼ��Ŀ¼
#if 0
#define MAX_SHUMING 41 //�����������
#define MAX_ZUOZHE 41 //���������������
#define MAX_SHULIANG 100//����鼮����

char* s_gets(char* string, int n);

struct book												//����һ�����Ϊbook�Ľṹ
{
	char shuming[MAX_SHUMING];
	char zuozhe[MAX_ZUOZHE];
	float value;
};

int main(void)
{
	struct book library[MAX_SHULIANG];//����һ��ʹ��book�ṹ���ֵĽṹ��������library[100]
	int count = 0;
	int index;

	printf("����������(����������^Z������������[Enter]�Խ���)��\n");
	while (count < MAX_SHULIANG && s_gets(library[count].shuming, MAX_SHUMING) != NULL && library[count].shuming[0] != '\0')
	{
		puts("����������������");
		s_gets(library[count].zuozhe, MAX_ZUOZHE);

		puts("�������ۼۣ�");
		scanf("%f", &library[count].value);
		while (getchar() != '\n')//����scanf()ִ�к󻺳������µ�\n
			continue;

		count++;

		printf("����������(����������^Z������������[Enter]�Խ���)��\n");
	}

	printf("������ͼ��Ŀ¼��\n");
	for (index = 0; index < count; index++)
	{
		printf("%s:��%s������%.2f��\n", library[index].zuozhe, library[index].shuming, library[index].value);
	}

	return 0;
}
char* s_gets(char* string, int n)
{
	char* fanhui;
	char* find;

	fanhui = fgets(string, n, stdin);
	if (fanhui)
	{
		find = strchr(string, '\n');
		if (find)
			*find = '\0';
		else
			while (getchar() != '\n')
				continue;
	}
	return fanhui;
}
#endif


//ʹ��Ƕ�׽ṹ����ʾ����
#if 0
#define LEN 20
const char* message[5] = {
"  Thank you for the wonderful evening, ",
"You certainly prove that a ",
"is a special kind of guy. We must get together",
"over a delicious ",
" and have a few laughs"
};
struct names
{
	char first[LEN];
	char last[LEN];
};
struct guy
{
	struct names handle;//Ƕ�׽ṹ������һ��ʹ��name�ṹ���ֵĽṹ����handle
	char job[LEN];
	char favoriate_food[LEN];
	float income;
};
int main(void)
{
	struct guy fellow =//����һ��ʹ��guy�ṹ���ֵĽṹ����fellow���������ʼ��
	{
		{"Ewen","Villard"},//**************��ʼ��Ƕ�׽ṹ�ĳ�Ա��ʹ�����λ����ţ�***************
		"personality coach",
		"grilled salmon",
		68112.00
	};

	printf("Dear %s,\n\n", fellow.handle.first);//******����Ƕ�׽ṹ�ĳ�Ա��ʹ�����ε��������***********
	printf("%s%s.\n", message[0], fellow.handle.first);//  Thank you for the wonderful evening, 
	printf("%s%s.\n", message[1], fellow.job);//You certainly prove that a 
	printf("%s\n", message[2]);//is a special kind of guy. We must get together
	printf("%s%s%s", message[3], fellow.favoriate_food, message[4]);// over a delicious        and have a few laughs

	if (fellow.income > 15000.0)
		puts("!!");
	else if (fellow.income > 75000.0)
		puts("!");
	else
		puts(".");

	printf("\n%40s%s\n", " ", "See you soon, ");
	printf("%40s%s\n", " ", "Luhao");

	return 0;
}
#endif


//ʹ��ָ��ṹ��ָ���Ƕ�׽ṹ����ʾ����
#if 0
#define LEN 20
struct names					//����һ�����Ϊnames�Ľṹ
{
	char first[LEN];
	char last[LEN];
};
struct guy
{
	struct names handle;//Ƕ�׽ṹ������һ��ʹ��names�ṹ���ֵĽṹ����handle
	char job[LEN];
	char favoriate_food[LEN];
	float income;
};
int main(void)
{
	struct guy fellow[2] =//����һ��ʹ��guy�ṹ���ֵĽṹ��������fellow[2]���������ʼ��
	{
		{//��fellow[0]��ʼ��
		{"Ewen","Villard"},//**************��ʼ��Ƕ�׽ṹ�ĳ�Ա��ʹ�����λ����ţ�***************
		"personality coach",
		"grilled salmon",
		68112.00
		},

		{//��fellow[1]��ʼ��
		{"Rodney", "Swillbelly"},//**************��ʼ��Ƕ�׽ṹ�ĳ�Ա��ʹ�����λ����ţ�***************
		"editor",
		"tripe",
		432400.00
		}
	};

	struct guy* him;//����һ��ָ��guy�ṹ���ֵĽṹ��ָ��him

	printf("�ṹ����fellow[0]�ĵ�ַ��%p\n�ṹ����fellow[1]�ĵ�ַ��%p\n\n", &fellow[0], &fellow[1]);

	him = &fellow[0];//�ṹָ��ָ��fellow[0]�ṹ
	printf("�ṹָ��him�ĵ�ַ��%p\n      him+1�ĵ�ַ��%p\n", him, him + 1);
	printf("him->income��%.2f\n(*him).income:%.2f\n\n", him->income, (*him).income);

	him++;
	printf("�ṹָ��him++�ĵ�ַ��%p\n", him);
	printf("him->favoriate_food��%s\nhim->handle.last:%s\n\n", him->favoriate_food, him->handle.last);

	return 0;
}
#endif


//�ѽṹ��Ա��Ϊʵ�δ��ݣ�Ҳ���԰ѽṹ��Ա�ĵ�ַ��Ϊʵ�δ��ݣ�
#if 0
#define FUNDLEN 50

struct funds//	//����һ�����Ϊfunds�Ľṹ
{
	char bank[FUNDLEN];
	double bankfund;
	char save[FUNDLEN];
	double savefund;
};
double sum(double x, double y);//����һ������

int main(void)
{
	struct funds zhangsan =//����һ��ʹ��funds�ṹ���ֵĽṹ����zhangsan���������ʼ��
	{
	"Bank of China",
	4023.27,
	"Luck's Savings",
	8543.94
	};

	printf("�����ܹ���%.2f��Ǯ\n", sum(zhangsan.bankfund, zhangsan.savefund));

	return 0;
}
double sum(double x, double y)
{
	return (x + y);
}
#endif


//�ѽṹ�ĵ�ַ��Ϊʵ�δ���
#if 0
#define FUNDLEN 50

struct funds//	//����һ�����Ϊfunds�Ľṹ
{
	char bank[FUNDLEN];
	double bankfund;
	char save[FUNDLEN];
	double savefund;
};
double sum(const struct funds* money);//����һ���������β���һ��ָ��funds�ṹ���ֵĽṹ��ָ��money

int main(void)
{
	struct funds zhangsan =//����һ��ʹ��funds�ṹ���ֵĽṹ����zhangsan���������ʼ��
	{
	"Bank of China",
	4023.27,
	"Luck's Savings",
	8543.94
	};

	printf("�����ܹ���%.2f��Ǯ\n", sum(&zhangsan));

	return 0;
}
double sum(const struct funds* money)
{
	return (money->bankfund + (*money).savefund);
}
#endif


//�ѽṹ��Ϊʵ�δ���
#if 0
#define FUNDLEN 50

struct funds//	//����һ�����Ϊfunds�Ľṹ
{
	char bank[FUNDLEN];
	double bankfund;
	char save[FUNDLEN];
	double savefund;
};
double sum(const struct funds money);//����һ���������β���һ��ʹ��funds�ṹ���ֵĽṹ����money

int main(void)
{
	struct funds zhangsan =//����һ��ʹ��funds�ṹ���ֵĽṹ����zhangsan���������ʼ��
	{
	"Bank of China",
	4023.27,
	"Luck's Savings",
	8543.94
	};

	printf("�����ܹ���%.2f��Ǯ\n", sum(zhangsan));//��money�ṹ�����ĳ�Ա����zhangsan�ṹ�����ĳ�Ա��ֵ

	return 0;
}
double sum(const struct funds money)
{
	return (money.bankfund + money.savefund);
}
#endif


//ʹ�ýṹָ����к�����˫��ͨ��
#if 0
#define LEN 30
struct names					//����һ�����Ϊnames�Ľṹ
{
	char first[LEN];
	char last[LEN];
	int letters;
};

void getinfo(struct names*);//����һ���������β���һ��ָ��names�ṹ���ֵĽṹָ��
void makeinfo(struct names*);
void showinfo(const struct names*);
char* s_gets(char* string, int n);

int main(void)
{
	struct names person;//����һ��ʹ��names�ṹ���ֵĽṹ����person

	getinfo(&person);//�Խṹ����person�ĳ�Ա��ֵ
	makeinfo(&person);
	showinfo(&person);

	return 0;
}
void getinfo(struct names* p)
{
	puts("�����������");
	s_gets(p->first, LEN);
	puts("�����������");
	s_gets(p->last, LEN);
}
void makeinfo(struct names* p)
{
	p->letters = strlen(p->first) + strlen(p->last);
}
void showinfo(const struct names* p)
{
	printf("%s %s,�������ռ%d���ֽ�\n", p->first, p->last, p->letters);
}
char* s_gets(char* string, int n)
{
	char* fanhui;
	char* find;

	fanhui = fgets(string, n, stdin);
	if (fanhui)
	{
		find = strchr(string, '\n');
		if (find)
			*find = '\0';
		else
			while (getchar() != '\n')
				continue;
	}
	return fanhui;
}
#endif


//ʹ�ýṹ�����ͷ���ֵ���к�����˫��ͨ��
#if 0
#define LEN 30
struct names					//����һ�����Ϊnames�Ľṹ
{
	char first[LEN];
	char last[LEN];
	int letters;
};

struct names getinfo(void);//����һ������������ֵ��ʹ��names�ṹ���ֵĽṹ�������β���
struct names makeinfo(struct names);
void showinfo(struct names);
char* s_gets(char* string, int n);

int main(void)
{
	struct names person;//����һ��ʹ��names�ṹ���ֵĽṹ����person

	person = getinfo();//��һ���ṹ��ֵ����һ���ṹ
	person = makeinfo(person);
	showinfo(person);

	return 0;
}
struct names getinfo(void)
{
	struct names temp;
	puts("�����������");
	s_gets(temp.first, LEN);
	puts("�����������");
	s_gets(temp.last, LEN);

	return temp;
}
struct names makeinfo(struct names p)
{
	p.letters = strlen(p.first) + strlen(p.last);

	return p;
}
void showinfo(const struct names p)
{
	printf("%s %s,�������ռ%d���ֽ�\n", p.first, p.last, p.letters);
}
char* s_gets(char* string, int n)
{
	char* fanhui;
	char* find;

	fanhui = fgets(string, n, stdin);
	if (fanhui)
	{
		find = strchr(string, '\n');
		if (find)
			*find = '\0';
		else
			while (getchar() != '\n')
				continue;
	}
	return fanhui;
}
#endif


//ʹ��ָ��char��ָ���������ַ�����
#if 0
#define LEN 30
struct names					//����һ�����Ϊnames�Ľṹ
{
	char* first;//ʹ��ָ���������ַ�����
	char* last;
	int letters;
};

void getinfo(struct names*);//����һ���������β���һ��ָ��names�ṹ���ֵĽṹָ��
void makeinfo(struct names*);
void showinfo(const struct names*);
void cleanup(struct names*);
char* s_gets(char* string, int n);

int main(void)
{
	struct names person;//����һ��ʹ��names�ṹ���ֵĽṹ����person

	getinfo(&person);//�Խṹ����person�ĳ�Ա��ֵ
	makeinfo(&person);
	showinfo(&person);
	cleanup(&person);

	return 0;
}
void getinfo(struct names* p)
{
	char temp[LEN];
	puts("�����������");
	s_gets(temp, LEN);//�����ݴ���temp����
	p->first = (char*)malloc(strlen(temp) + 1);//firstָ��ָ����䵽���ڴ棬�����Ͳ������s_gets(p->first, LEN);
	strcpy(p->first, temp);																			//�������ݱ������κο�����ɳ�������ĵط���

	puts("�����������");
	s_gets(temp, LEN);
	p->last = (char*)malloc(strlen(temp) + 1);
	strcpy(p->last, temp);
}
void makeinfo(struct names* p)
{
	p->letters = strlen(p->first) + strlen(p->last);
}
void showinfo(const struct names* p)
{
	printf("%s %s,�������ռ%d���ֽ�\n", p->first, p->last, p->letters);
}
void cleanup(struct names* p)
{
	free(p->first);
	free(p->last);
}
char* s_gets(char* string, int n)
{
	char* fanhui;
	char* find;

	fanhui = fgets(string, n, stdin);
	if (fanhui)
	{
		find = strchr(string, '\n');
		if (find)
			*find = '\0';
		else
			while (getchar() != '\n')
				continue;
	}
	return fanhui;
}
#endif


//ʹ�ô���ṹ���ݵĸ���������
#if 0
#define MAX_SHUMING 41 //�����������
#define MAX_ZUOZHE 41 //���������������

char* s_gets(char* string, int n);

struct book											//�ṹ������Ҳ�д���һ���ṹģ�壩	//book�Ǹ��ṹ�ı�ǣ�����������ʹ��book���ô˽ṹ
{															//����һ�����Ϊbook�Ľṹ
	char shuming[MAX_SHUMING];
	char zuozhe[MAX_ZUOZHE];
	float value;
};

int main(void)
{
	struct book library;						//����һ��ʹ��book�ṹ���ֵĽṹ����library����library����Ϊһ��book���͵ı�����

	puts("�����뿼�Է�����");
	int score;

	scanf("%d", &score);

	if (score >= 84)
		library = (struct book){
	"shuming1",
	"zuozhe1",
	11.25
	};
	else
		library = (struct book){
"shuming2",
"zuozhe2",
5.99
	};

	printf("��Ӧ�ö�������%s:��%s������%.2f��", library.zuozhe, library.shuming, library.value);

	return 0;
}
#endif


//ʹ�������������Ա
#if 0
struct flex
{
	size_t count;
	double average;
	double scores[];
};
void showflex(const struct flex* p);//�βΣ�һ��ָ��flex�ṹ���ֵĽṹ��ָ��p

int main(void)
{
	struct flex* p1;
	int n = 5;
	int i;
	int total = 0;

	p1 = malloc(sizeof(struct flex) + n * sizeof(double));//Ϊ�������ݺ������������Ա����������ڴ�ռ�

	p1->count = n;
	for (i = 0; i < n; i++)
	{
		p1->scores[i] = 20.0 - i;//Ϊ5������Ԫ�ظ�ֵ
		total += p1->scores[i];
	}
	p1->average = total / n;

	showflex(p1);

	free(p1);

	return 0;
}
void showflex(const struct flex* p)
{
	printf("scores:");
	for (int i = 0; i < p->count; i++)
		printf("%-8.2f", p->scores[i]);

	printf("\naverage:%.2f\n", p->average);
}
#endif


//ʹ�ýṹ������к�����˫��ͨ�ţ������ϻ��ǰѽṹ�ĵ�ַ��Ϊʵ�δ��ݣ�
#if 0
#define FUNDLEN 50

struct funds//	//����һ�����Ϊfunds�Ľṹ
{
	char bank[FUNDLEN];
	double bankfund;
	char save[FUNDLEN];
	double savefund;
};
double sum(const struct funds* money, int n);//����һ���������β���һ��ʹ��funds�ṹ���ֵĽṹָ��money

int main(void)
{
	struct funds zhangsan[2] =//����һ��ʹ��funds�ṹ���ֵĽṹ����zhangsan���������ʼ��
	{
		{
		"Bank of China",
		4032.27,
		"Luck's Savings",
		8543.94
		},
		{
		"China Construction Bank",
		3620.88,
		"Party Time Savings",
		3802.91
		}

	};
	printf("�����ܹ���%.2f��Ǯ\n", sum(zhangsan, 2));//*******************��������������zhangsan����ṹ   �w    *******************
																					  //��ȷ��⣺���ݵ���zhangsan����ĵ�ַ������������Ԫ�صĵ�ַ&zhangsan[0]
	return 0;																	  //�Աȵ�320�С��ṹ���������ǽṹ�ĵ�ַ�����˴���zhangsan�Ǹ��ṹ���飬
}																					  //*********���zhangsan�������ַҲ�ǽṹ��ַ�����ݵ��ǽṹ��ַ**********
double sum(const struct funds* money, int n)
{												//moneyָ��zhangsan[0]���洢&zhangsan[0]
	double total;
	int i;
	for (i = 0, total = 0; i < n; i++)
	{
		total += money[i].bankfund + (*(money + i)).savefund;//money[i]�൱��*(money+i)
	}																									    //money[0]����zhangsan[0]�ṹ����
	return total;																				    //money[1]����zhangsan[1]�ṹ����
}
#endif


//���ļ��б���ṹ�е�����
#if 0
#define MAX_SHUMING 41 //�����������
#define MAX_ZUOZHE 41 //���������������
#define MAX_SHULIANG 100//����鼮����

char* s_gets(char* string, int n);

struct book												//����һ�����Ϊbook�Ľṹ
{
	char shuming[MAX_SHUMING];
	char zuozhe[MAX_ZUOZHE];
	float value;
};

int main(void)
{
	struct book library[MAX_SHULIANG];//����һ��ʹ��book�ṹ���ֵĽṹ��������library[100]
	int count = 0;

	//���ļ����������ļ���ԭ�е�ͼ������
	FILE* fp;
	if ((fp = fopen("book_data.txt", "a+b")) == NULL)
	{
		fputs("���ļ�ʧ�ܣ�", stderr);
		exit(EXIT_FAILURE);
	}
	//������ģʽ�µ�
	rewind(fp);											//����ȡ�ļ����ݿ������ڴ��еĵ�ַ���������ݿ�Ĵ�С���������ݿ�����������ȡ���ļ�
	while (count < MAX_SHULIANG && fread(&library[count], sizeof(struct book), 1, fp) == 1)
	{
		if (count == 0)
			puts("��ǰ�ļ��к��е�ͼ����Ϣ���£�");

		printf("%s:��%s������%.2f��\n", library[count].zuozhe, library[count].shuming, library[count].value);
		count++;
	}

	//�����ļ���ͼ��������ֵ        (ע���˴�count��ֵ���ļ���ͼ��������ֵ����Ϊcount��0��ʼ����)
	int filecount = count;				//      (countֵ�ܸ���filecount�����߶����ں�������г�Ϊ����ֵ)

	//�ж��ļ���ͼ�������Ƿ������100��
	if (filecount == MAX_SHULIANG)
	{
		fprintf(stderr, "book_data.txt������");
		exit(EXIT_FAILURE);
	}

	//�ļ���ͼ������û��100��
	printf("����������(����������^Z������������[Enter]�Խ���)��\n");
	while (count < MAX_SHULIANG && s_gets(library[count].shuming, MAX_SHUMING) != NULL && library[count].shuming[0] != '\0')
	{
		puts("����������������");
		s_gets(library[count].zuozhe, MAX_ZUOZHE);

		puts("�������ۼۣ�");
		scanf("%f", &library[count].value);
		while (getchar() != '\n')//����scanf()ִ�к󻺳������µ�\n
			continue;

		count++;

		if (count < MAX_SHULIANG)
			printf("����������(����������^Z������������[Enter]�Խ���)��\n");
	}

	//��ʾ��ӵ�ͼ�飬�����¼ӵ�ͼ��Ҳ�������ļ���
	printf("������ͼ��Ŀ¼��\n");
	for (int index = 0; index < count; index++)
	{
		printf("%s:��%s������%.2f��\n", library[index].zuozhe, library[index].shuming, library[index].value);
	}
	//��д����ļ��������ڵ��ڴ��еĵ�ַ����д���ݿ�Ĵ�С����д���ݿ���������д����ļ�
	fwrite(&library[filecount], sizeof(struct book), count - filecount, fp);
	//count-filecount�ó�����ӵ�ͼ������
	puts("�����ļ�����ɣ�");
	fclose(fp);                                                      //************************ע��*************************************
																		   //��д��fclose("fp");����򲻻�����ݴ����ļ����������Ų���󣡣���
	return 0;
}
char* s_gets(char* string, int n)
{
	char* fanhui;
	char* find;

	fanhui = fgets(string, n, stdin);
	if (fanhui)
	{
		find = strchr(string, '\n');
		if (find)
			*find = '\0';
		else
			while (getchar() != '\n')
				continue;
	}
	return fanhui;
}
//���������г���D:\CODE\C_CODE\C Primer Plus Code practice\chapter 14\code1\Project1\x64\Debug
//Project1.exe

//*****ע*******�˳���Ĳ������ļ�����fopen()���ı�ģʽ���Ƕ�����ģʽ�����ļ��༭����������
#endif


//ʹ��ö����������߳���Ŀɶ���
#if 0
#define LEN 30
char* s_gets(char* string, int n);

enum spectrum { red, orange, yellow, green, blue, violet };//����һ�����Ϊspectrum��ö������

//const char ** colors = { "red","orange","yellow","green","blue","violet" };												//**********����д����**********
const char* colors[6] = { "red","orange","yellow","green","blue","violet" };//���ں��������ݱȽ�

int main(void)
{
	enum spectrum color;//����һ��ʹ��spectrumö�ٲ��ֵ�ö�ٱ���color

	char choice[LEN];
	int biaoji = 0;//������������Ƿ���������ַ���������ͬ
	puts("����Ӣ������һ����ɫ(�ڿ��а���[Enter]���˳�)��");
	while (s_gets(choice, LEN) != NULL && choice[0] != '\0')
	{
		for (color = red; color <= violet; color++)//for (color =0; color <= 5; color++)
		{
			if (strcmp(choice, colors[color]) == 0)
				biaoji = 1;
			break;
		}

		if (biaoji)//����������������ַ���������ͬ
		{
			switch (color)//ö�ٱ���color���˴��÷�������������ͬ
			{
			case red://ö�ٳ���(ö�ٷ�)��int���͵ĳ�����red����0
				puts("õ���Ǻ�ɫ��");
				break;
			case orange:
				puts("��ӧ���ǳ�ɫ��");
			case yellow:
				puts("�����ǻ�ɫ��");
			case green:
				puts("������ɫ��");
			case blue:
				puts("����������ɫ��");
			case violet:
				puts("����������ɫ��");
			}
		}
		else
			printf("�Ҳ�֪��ʲôֲ�����ɫ��%s\n", choice);

		biaoji = 0;
		puts("����Ӣ������һ����ɫ(�ڿ��а���[Enter]���˳�)��");
	}
	puts("�ټ���");

	return 0;
}
char* s_gets(char* string, int n)
{
	char* fanhui;
	char* find;

	fanhui = fgets(string, n, stdin);
	if (fanhui)
	{
		find = strchr(string, '\n');
		if (find)
			*find = '\0';
		else
			while (getchar() != '\n')
				continue;
	}
	return fanhui;
}
#endif


//ʹ��typedef��߳���Ŀɶ���
#if 0
typedef struct book
{
	char shuming[2];
	char zuozhe[3];
	float value;
} BOOK;

int main(void)
{
	BOOK library;

	library.value = 1.1;
	BOOK.shuming[0] = 'a';

	char shuming[2] = { "a" };
	return 0;
}
#endif


//ʹ�ú���ָ��
#if 0
#define LEN 81
char* s_gets(char* string, int n);
char showmenu(void);
void eatline(void);																		//�������뻺����
void show(void (*function_p)(char*), char* string);//ѡ��ĺ����ʹ����������
void Toupper(char*);
void Tolower(char*);
void Transpose(char*);
void Original(char*);

int main(void)
{
	char yuanshuju[LEN];
	char daichuli[LEN];

	void (*function_p)(char*);//����һ������ָ�룬ָ��ĺ����β���char*������ֵ��void
	char choice;

	puts("������һ���ַ������ڿ�������[Enter]���˳����򣩣�");
	while (s_gets(yuanshuju, LEN) != NULL && yuanshuju[0] != '\0')
	{
		while ((choice = showmenu()) != 'n')
		{
			switch (choice)
			{
			case 'u':
				function_p = Toupper;
				break;
			case 'l':
				function_p = Tolower;
				break;
			case 't':
				function_p = Transpose;
				break;
			case 'o':
				function_p = Original;
				break;
			default:
				function_p = NULL;
				puts("���ִ���");
				exit(1);
			}
			strcpy(daichuli, yuanshuju);
			show(function_p, daichuli);
		}

		puts("������һ���ַ������ڿ�������[Enter]���˳����򣩣�");
	}
	puts("�ټ���");

	return 0;
}
char* s_gets(char* string, int n)
{
	char* fanhui;
	char* find;

	fanhui = fgets(string, n, stdin);
	if (fanhui)
	{
		find = strchr(string, '\n');
		if (find)
			*find = '\0';
		else
			while (getchar() != '\n')
				continue;
	}
	return fanhui;
}
char showmenu(void)
{
	char answer;
	puts("��������ѡ��Ĳ˵��ϵĹ��ܣ�");
	puts("u) ת���ɴ�д	l)ת����Сд");
	puts("t) ��Сдת��	o)ԭʼ�ַ���");
	puts("n)������һ���ַ���");

	answer = getchar();
	answer = tolower(answer);//ʹ��C���tolower()

	eatline();
	while (strchr("ulton", answer) == NULL)
	{
		puts("������u��l��t��o��n");
		answer = tolower(getchar());
		eatline();
	}

	return answer;
}
void eatline(void)
{
	while (getchar() != '\n')
		continue;
}
void Toupper(char* string)
{
	while (*string != '\0')
	{
		*string = toupper(*string);
		string++;
	}
}
void Tolower(char* string)
{
	while (*string != '\0')
	{
		*string = tolower(*string);
		string++;
	}
}
void Transpose(char* string)
{
	while (*string != '\0')
	{
		/*if(islower(*string))
		*string = toupper(*string);
		if (isupper(*string))
		*string = tolower(*string);*/  //����
		if (islower(*string))
			*string = toupper(*string);
		else
			*string = tolower(*string);		//��ѡһ��if...else
		string++;
	}
}
void Original(char* string)
{
}
void show(void (*function_p)(char*), char* string)
{
	(*function_p)(string);//���û�ѡ���ĺ����������ַ���
	puts(string);
}
#endif
#endif


//chapter 14
//code2.c
#if 0
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
//
#if 1
#endif


//��ϰ��
//3-5.
#if 0
typedef struct //�·�					//����һ��ʡ���˱�ǵĽṹ������YUEFEN�������������ýṹ����
{
	char yuefen_min[10];
	char min_suoxie[4];//������ĸ��һ�����ַ�
	int yuefen_tianshu;
	int yuefen_hao;//�·ݺ�
} YUEFEN;

YUEFEN yinian[12] =			  //����һ��ʹ��YUEFEN�ṹ���ֵĽṹ����yinian[12]
{
	{
		"January",
		"Jan",//һ��дΪJanuary������дΪJan������дΪFebruary������дΪFeb������дΪMarch������дΪMar������дΪApril������дΪApr������дΪMay��û��������ʽ������дΪJune������дΪJun��
		31,	////����дΪJuly������дΪJul������дΪAugust������дΪAug������дΪSeptember������дΪSept��ʮ��дΪOctober������дΪOct��ʮһ��дΪNovember������дΪNov��12��дΪDecember������дΪDec��
		1
	},
	{"February",	"Feb", 29, 2	},
	{
		"March",
		"Mar",
		31,
		3
	},
	{
		"April",
		"Apr",
		30,
		4
	},
	{
		"May",
		"May",
		31,
		5
	},
	{
		"June",
		"Jun",
		30,
		6
	},
	{
		"July",
		"Jul",
		31,
		7
	},
	{
		"August",
		"Aug",
		31,
		8
	},
	{
		"September",
		"Sept",
		30,
		9
	},
	{
		"October",
		"Oct",
		31,
		10
	},
	{
		"November",
		"Nov",
		30,
		11
	},
	{
		"December",
		"Dec",
		31,
		12
	},
};
int jisuantianshu(YUEFEN* yuefen, int yuefenhao);//����һ���е����µ�����

int main(void)
{
	int yuefenhao;
	puts("��������ѡ����·ݺţ�");

	scanf("%d", &yuefenhao);
	int tianshu = jisuantianshu(yinian, yuefenhao);
	printf("һ���е����µ������ǣ�%d\n", tianshu);

	return 0;
}
int jisuantianshu(YUEFEN* yuefen, int yuefenhao)
{
	int sum = 0;

	for (int i = 0; i < yuefenhao - 1; i++)//����ֵiΪ0 ʱ����������1�·�
	{
		sum += (yuefen + i)->yuefen_tianshu;
	}

	return sum;
}
#endif


//6.
#if 0
typedef struct lens
{
	float foclen;
	float fstop;
	char brand[30];
}LENS;

int main(void)
{
	//6.a.
#if 0
	LENS lens_shuzu[10] =
	{
		{},
		{},
		{
			500,
			2.0,
			"Remarkata"
		},
	};
#endif
	//******************************ע**************************************
//lens_shuzu[2] =					//�������У�P243������ʼ���⣬������ʹ�û����ŵ���ʽ�����鸳ֵ
//{
//500,
//2.0,
//"Remarkata"
//};

	//6.b.
#if 1
	LENS lens_shuzu[10] =
	{
		[2] .foclen = 500,
			2.0,
			"Remarkata"
	};
#endif

	return 0;
}
#endif
//6.a.��������ĿҪ���ǵ�������Ա��ֵ�����ǳ�ʼ����
#if 0
typedef struct lens
{
	float foclen;
	float fstop;
	char brand[30];
}LENS;

int main(void)
{
	LENS lens_shuzu[10];
	lens_shuzu[2].foclen = 500;
	lens_shuzu[2].fstop = 2.0;
	//lens_shuzu[2].brand = {"Remarkata"};//��Ч
	strcpy(lens_shuzu[2].brand, "Remarkata");

	return 0;
}
#endif


//7.
#if 0
#include "starfolk.h"
void show(struct bem* p);
int main(void)
{
	struct bem* p;
	p = &deb;

	show(p);

	printf("\n��ɣ�\n");

	return 0;
}
void show(struct bem* p)
{
	printf("%s %s is a %d-limbed %s", p->title.first, p->title.last, p->limbs, p->type);
}
#endif


//8.
#if 0
struct fullname
{
	char fname[20];
	char lname[20];
};
struct bard
{
	struct fullname name;
	int born;
	int died;
};
struct bard willie;
struct bard* pt = &willie;

int main(void)
{
	int born;
	scanf("%d", &willie.born);
	scanf("%d", &pt->born);
	scanf("%s", &willie.name.lname);
	scanf("%s", &pt->name.lname);
	scanf("%s", &pt->name.fname);


	char ch;
	ch = willie.name.fname[2];

	int count = 0;
	char* p1 = pt->name.fname;//��ֵΪ������Ԫ�صĵ�ַ
	char* p2 = pt->name.lname;

	while (*p1 != '\0')
	{
		if (isalpha(*p1))
			count++;

		p1++;
	}
	while (*p2 != '\0')
	{
		if (isalpha(*p2))
			count++;

		p2++;
	}
	printf("�����չ�����ĸ%d��\n", count);

	return 0;
}
#endif
//��strlen(willie.name.fname)+strlen(willie.name.lname);


//9.
#if 0
struct car
{
	char qichemin[30];
	float mali;
	float mpg;
	float zhouju;
	int chuchang;
};
#endif


//10.
#if 0
struct gas
{
	float distance;
	float gals;
	float mpg;
};

float jisuan_mpg2(struct gas* distance, struct gas* gals);
void jisuan_mpg1(struct gas* distance, struct gas* gals, struct gas* mpg);

float jisuan_mpg2(struct gas* distance, struct gas* gals)
{
	float mpg;
	mpg = (*distance) / (*gals);
	return mpg;
}
void jisuan_mpg1(struct gas* distance, struct gas* gals, struct gas* mpg)
{
	*mpg = *distance / (*gals);
}
#endif
//������a.����������ṹ   b.����������ṹָ��


//11.
#if 0
enum choices { no, yes, maybe };   //�м䲻��'='��
#endif


//12.
#if 0
char* (*function_p)(char* p, char ch);
#endif


//13.
#if 0
//double(       (*function_p)   [4]     )(double a,double b);																		//����������ʹ�ú�������
double(*function_p1)(double a, double b);
double(*function_p2)(double a, double b);
double(*function_p3)(double a, double b);
double(*function_p4)(double a, double b);

double(*function_p[4])(double a, double b);//����4������ָ��

int main(void)
{
	function_p[0] = function_p1;
	function_p[1] = function_p2;
	function_p[2] = function_p3;
	function_p[3] = function_p4;

	function_p[1](10.0, 2.5);							//��һ
	(*function_p[1])(10.0, 2.5);						//����

	//*(function_p + 1)(10.0,2.5);//����
	(*(function_p + 1))(10.0, 2.5);				//��������һ��д��
}
double(*function_p1)(double a, double b);
double(*function_p2)(double a, double b)
{
	printf("%.2lf", a + b);
}
double(*function_p3)(double a, double b);
double(*function_p4)(double a, double b);
#endif
//***********************************************ע************************************************************************************
//������û�к�����ʱ���ú���ָ�����ʽ��������

#if 1
//double(       (*function_p)   [4]     )(double a,double b);																		//����������ʹ�ú�������
double function1(double a, double b);
double function2(double a, double b);
double function3(double a, double b);
double function4(double a, double b);

double(*function_p[4])(double a, double b);//����1������ָ�����飬���е�ÿ��Ԫ�ض���ָ������ָ��

//������ֱ�ӳ�ʼ������ָ������
//double(*function_p[4])(double a, double b) = { function_p1,function_p2 ,function_p3,function_p4 };
//��������typedef+��ʼ������ָ������
//typedef double(*ptype)(double a, double b);
//ptype function_p[4]= { function_p1,function_p2 ,function_p3,function_p4 };

int main(void)
{
	//��һ�����������ж�Ԫ�ظ�ֵ
	function_p[0] = function1;
	function_p[1] = function2;
	function_p[2] = function3;
	function_p[3] = function4;

	function_p[1](10.0, 2.5);							//���ú�����һ
	(*function_p[1])(10.0, 2.5);						//���ú�������

	//*(function_p + 1)(10.0,2.5);//����
	(*(function_p + 1))(10.0, 2.5);				//���ú�����������һ��д��
}
double function1(double a, double b)
{}
double function2(double a, double b)
{
	printf("%.2lf\n", a + b);
}
double function3(double a, double b)
{}
double function4(double a, double b)
{}
#endif
#endif


//chapter 14
//code3.c
#if 0
#include <stdio.h>
#include <string.h>
#include <stdlib.h>//malloc(), free()
#include <ctype.h>
#include <stdlib.h>//atoi()
#include <math.h>
//
#if 1
#endif


//�����ϰ
//1.
#if 0
typedef struct //�·�					//����һ��ʡ���˱�ǵĽṹ������YUEFEN�������������ýṹ����
{
	char yuefen_min[10];
	char min_suoxie[4];
	int yuefen_tianshu;
	int yuefen_hao;//�·ݺ�
} YUEFEN;

YUEFEN yinian[12] =			  //����һ��ʹ��YUEFEN�ṹ���ֵĽṹ����yinian[12]
{
	{
		"January",
		"Jan",//һ��дΪJanuary������дΪJan������дΪFebruary������дΪFeb������дΪMarch������дΪMar������дΪApril������дΪApr������дΪMay��û��������ʽ������дΪJune������дΪJun��
		31,	////����дΪJuly������дΪJul������дΪAugust������дΪAug������дΪSeptember������дΪSept��ʮ��дΪOctober������дΪOct��ʮһ��дΪNovember������дΪNov��12��дΪDecember������дΪDec��
		1
	},
	{
		"February",
		"Feb",
		29,
		2
	},
	{
		"March",
		"Mar",
		31,
		3
	},
	{
		"April",
		"Apr",
		30,
		4
	},
	{
		"May",
		"May",
		31,
		5
	},
	{
		"June",
		"Jun",
		30,
		6
	},
	{
		"July",
		"Jul",
		31,
		7
	},
	{
		"August",
		"Aug",
		31,
		8
	},
	{
		"September",
		"Sept",
		30,
		9
	},
	{
		"October",
		"Oct",
		31,
		10
	},
	{
		"November",
		"Nov",
		30,
		11
	},
	{
		"December",
		"Dec",
		31,
		12
	},
};
char* s_gets(char* string, int n);
int jisuantianshu(YUEFEN* yinian, const char* yuefenmin);//����һ���е����µ�����

int main(void)
{
	char yuefenmin[10];
	puts("��������ѡ����·���(��January��)��");

	s_gets(yuefenmin, 10);

	int tianshu = jisuantianshu(yinian, yuefenmin);
	printf("һ���е����µ������ǣ�%d\n", tianshu);

	return 0;
}
int jisuantianshu(YUEFEN* yinian, const char* yuefenmin)//����һ��ָ��YUEFEN�ṹ���ֵĽṹָ��yinian��ָ��ָ��yinian�ṹ
{
	int j = -1;

	//for (int i = 0; i < 12; i++)
	//{

	//	if (		strcmp(	(yinian + i)->yuefen_min, yuefenmin	) == 0		)
	//	{
	//		j = i;//j�洢���Ǳ���Ѱ���ĵ�x���ṹ
	//		break;
	//	}
	//}

	//������д��
	char* p;

	for (int i = 0; i < 12; i++)
	{
		p = (yinian + i)->yuefen_min;
		if (strcmp(p, yuefenmin) == 0)
		{
			j = i;//		j�洢���Ǳ���Ѱ���ĵ�x���ṹ
			break;
		}
	}


	if (j == -1)
	{
		puts("δ�ҵ��·ݣ�");
		exit(1);
	}

	int sum = 0;
	for (int i = 0; i < j; i++)
	{
		sum += (yinian + i)->yuefen_tianshu;
	}

	return sum;
}
char* s_gets(char* string, int n)
{
	char* fanhui;
	char* find;

	fanhui = fgets(string, n, stdin);
	if (fanhui)
	{
		find = strchr(string, '\n');
		if (find)
			*find = '\0';
		else
			while (getchar() != '\n')
				continue;
	}
	return fanhui;
}
#endif
#if 0
//������
int jisuantianshu(YUEFEN* yinian, const char* yuefenmin)
{
	int total = 0;
	for (int i = 0; i < 12; i++)
	{
		if (strcmp((yinian + i)->yuefen_min, yuefenmin) != 0)
			total += (yinian + i)->yuefen_tianshu;
		else
			return total;
	}
	return -1;
}
#endif 


//2.
#if 0
typedef struct //�·�					//����һ��ʡ���˱�ǵĽṹ������YUEFEN�������������ýṹ����
{
	char yuefen_min[10];
	char min_suoxie[4];
	int yuefen_tianshu;
	int yuefen_hao;//�·ݺ�
} YUEFEN;

YUEFEN yinian[12] =			  //����һ��ʹ��YUEFEN�ṹ���ֵĽṹ����yinian[12]
{
	{
		"January",
		"Jan",//һ��дΪJanuary������дΪJan������дΪFebruary������дΪFeb������дΪMarch������дΪMar������дΪApril������дΪApr������дΪMay��û��������ʽ������дΪJune������дΪJun��
		31,	////����дΪJuly������дΪJul������дΪAugust������дΪAug������дΪSeptember������дΪSept��ʮ��дΪOctober������дΪOct��ʮһ��дΪNovember������дΪNov��12��дΪDecember������дΪDec��
		1
	},
	{
		"February",
		"Feb",
		29,
		2
	},
	{
		"March",
		"Mar",
		31,
		3
	},
	{
		"April",
		"Apr",
		30,
		4
	},
	{
		"May",
		"May",
		31,
		5
	},
	{
		"June",
		"Jun",
		30,
		6
	},
	{
		"July",
		"Jul",
		31,
		7
	},
	{
		"August",
		"Aug",
		31,
		8
	},
	{
		"September",
		"Sept",
		30,
		9
	},
	{
		"October",
		"Oct",
		31,
		10
	},
	{
		"November",
		"Nov",
		30,
		11
	},
	{
		"December",
		"Dec",
		31,
		12
	},
};
int jisuantianshu(YUEFEN* yinian, const char* yuefen, int ri);//����һ���е����µ�����
char* s_gets(char* string, int n);
void eatline(void);

int main(void)
{
	int nian;
	printf("��������֣�");
	scanf("%d", &nian);
	eatline();

	char yuefen[20];
	printf("�������·ݣ��·ݺš��·������·�����д����");
	s_gets(yuefen, 20);
	//eatline();�˴�����Ҫ

	int ri;
	printf("�������գ�");
	scanf("%d", &ri);

	int tianshu = jisuantianshu(yinian, yuefen, ri);
	printf("һ���е����µ������ǣ�%d\n", tianshu);

	return 0;
}
int jisuantianshu(YUEFEN* yinian, const char* yuefen, int ri)//����һ��ָ��YUEFEN�ṹ���ֵĽṹָ��yinian��ָ��ָ��yinian�ṹ
{
	int j = -1;

	char* p;

	for (int i = 0; i < 12; i++)
	{
		p = (yinian + i)->yuefen_min;
		if ((yinian + i)->yuefen_hao == atoi(yuefen) || strcmp(p, yuefen) == 0 || strcmp((yinian + i)->min_suoxie, yuefen) == 0)
		{
			j = i;//		j�洢���Ǳ���Ѱ���ĵ�x���ṹ
			break;
		}
	}

	if (j == -1)
	{
		puts("δ�ҵ��·ݣ�");
		exit(1);
	}

	int sum = 0;
	for (int i = 0; i < j; i++)
	{
		sum += (yinian + i)->yuefen_tianshu;
	}

	return (sum + ri);
}
char* s_gets(char* string, int n)
{
	char* fanhui;
	char* find;

	fanhui = fgets(string, n, stdin);
	if (fanhui)
	{
		find = strchr(string, '\n');
		if (find)
			*find = '\0';
		else
			while (getchar() != '\n')
				continue;
	}
	return fanhui;
}
void eatline(void)
{
	while (getchar() != '\n')
		continue;
}
#endif


//3.
#if 0
#define MAX_SHUMING 41 //�����������
#define MAX_ZUOZHE 41 //���������������
#define MAX_SHULIANG 100//����鼮����

struct book												//����һ�����Ϊbook�Ľṹ
{
	char shuming[MAX_SHUMING];
	char zuozhe[MAX_ZUOZHE];
	float value;
};

char* s_gets(char* string, int n);
void shumin_paixu(struct book*, int num);//��������
void shumin_paixu2(struct book* library, int num);//�������򷽷���
void jiage_paixu(struct book*, int num);//�۸�����

int main(void)
{
	struct book library[MAX_SHULIANG];//����һ��ʹ��book�ṹ���ֵĽṹ��������library[100]�����е�ÿ��Ԫ�ض���һ���ṹ
	int count = 0;
	int index;

	printf("����������(����������^Z������������[Enter]�Խ���)��\n");
	while (count < MAX_SHULIANG && s_gets(library[count].shuming, MAX_SHUMING) != NULL && library[count].shuming[0] != '\0')
	{
		puts("����������������");
		s_gets(library[count].zuozhe, MAX_ZUOZHE);

		puts("�������ۼۣ�");
		scanf("%f", &library[count].value);
		while (getchar() != '\n')//����scanf()ִ�к󻺳������µ�\n
			continue;

		count++;

		printf("����������(����������^Z������������[Enter]�Խ���)��\n");
	}

	printf("������ͼ��Ŀ¼��\n");
	for (index = 0; index < count; index++)//count ����ֵ�ϵ����鼮������
	{
		printf("%s:��%s������%.2f��\n", library[index].zuozhe, library[index].shuming, library[index].value);
	}

	shumin_paixu2(library, count);//�������򷽷���

	struct book library_kaobei[MAX_SHULIANG];
	for (index = 0; index < count; index++)
	{
		library_kaobei[index] = library[index];//�����ṹ�����ÿ��Ԫ�أ���ÿ���ṹ
	}
	shumin_paixu(library_kaobei, count);


	for (index = 0; index < count; index++)
	{
		library_kaobei[index] = library[index];
	}
	jiage_paixu(library_kaobei, count);

	return 0;
}																				//*****************************************ע****************************************************
void shumin_paixu(struct book* library_kaobei, int num)//�ṹ������Ϊʵ�δ��ݣ���������ֻ����ָ�봫�ݡ����Խṹ����Ҳֻ����ָ�봫�ݡ�
{
	struct book  temp;
	int seek1, seek2;

	for (seek1 = 0; seek1 < num - 1; seek1++)//���ѭ��ָ�����ڴ����Ԫ��
	{
		for (seek2 = seek1 + 1; seek2 < num; seek2++)//�ڲ�ѭ���ҳ�Ӧ�洢�ڸ�Ԫ�ص�ֵ
		{
			if (strcmp((library_kaobei + seek1)->shuming, (library_kaobei + seek2)->shuming) > 0)//��ǰһ���ַ���������ĸ��������λ�ں�һ���ַ���������ĸ����
			{
				/*	temp = (library_kaobei + seek1);	//����														//ǰ���Ϊ	struct book * temp;
					(library_kaobei + seek1) = (library_kaobei + seek2);	//������					//***ע***�˴�������ַʧ�ܣ�library_kaobei��ָ�����������ǵ�ֵַ��������Ϊ��ֵ��
					(library_kaobei + seek1) = temp;*/																//											 ��library_kaobei + seek1�Ǹ�������ʽ���������ʱ��ֵַ�����ܳ�Ϊ��ֵ(���ڷ���ֵ��
																																			//													��C++ Primer Plus��P215
				temp = *(library_kaobei + seek1);					  //�Խṹ��������									               
				library_kaobei[seek1] = library_kaobei[seek2];//*******************************����д��**********************************
				library_kaobei[seek2] = temp;							  //***��ַ�ϵ����ݿ��Ա��滻�����ǡ�����***

			}
		}
	}

	printf("�����ǰ���������ĸ�����ͼ��Ŀ¼��\n");
	for (int index = 0; index < num; index++)//num ����ֵ�ϵ����鼮������
	{
		printf("%s:��%s������%.2f��\n", (*(library_kaobei + index)).zuozhe, (library_kaobei + index)->shuming, library_kaobei[index].value);
	}															//*****************************************���ֱ�ʾ����****************************************************
}
void jiage_paixu(struct book* library_kaobei, int num)
{
	struct book  temp;
	int seek1, seek2;

	for (seek1 = 0; seek1 < num - 1; seek1++)//���ѭ��ָ�����ڴ����Ԫ��
	{
		for (seek2 = seek1 + 1; seek2 < num; seek2++)//�ڲ�ѭ���ҳ�Ӧ�洢�ڸ�Ԫ�ص�ֵ
		{
			if ((library_kaobei + seek1)->value - (library_kaobei + seek2)->value > 0)
			{
				temp = *(library_kaobei + seek1);
				library_kaobei[seek1] = library_kaobei[seek2];
				library_kaobei[seek2] = temp;
			}
		}
	}

	printf("�����ǰ��۸������ͼ��Ŀ¼��\n");
	for (int index = 0; index < num; index++)//num ����ֵ�ϵ����鼮������
	{
		printf("%s:��%s������%.2f��\n", (*(library_kaobei + index)).zuozhe, (library_kaobei + index)->shuming, library_kaobei[index].value);
	}
}
char* s_gets(char* string, int n)
{
	char* fanhui;
	char* find;

	fanhui = fgets(string, n, stdin);
	if (fanhui)
	{
		find = strchr(string, '\n');
		if (find)
			*find = '\0';
		else
			while (getchar() != '\n')
				continue;
	}
	return fanhui;
}
#endif
#if 0
//�������򷨶�
void shumin_paixu2(struct book* library, int num)
{									//��ԭ�ṹ�ĵ�ַ�����ú���

	//char* temp_shumin[num];//��֧�ֱ䳤���飬����ʹ��malloc()��ʵ��
	char** shumin;
	shumin = (char**)malloc(num * sizeof(char*));//*************���Իع�12.9.9.****************

	char* temp;
	int seek1, seek2;

	for (int i = 0; i < num; i++)
	{
		*(shumin + i) = (library + i)->shuming;
	}

	for (seek1 = 0; seek1 < num - 1; seek1++)//���ѭ��ָ�����ڴ����Ԫ��
	{
		for (seek2 = seek1 + 1; seek2 < num; seek2++)//�ڲ�ѭ���ҳ�Ӧ�洢�ڸ�Ԫ�ص�ֵ
		{
			if (strcmp(*(shumin + seek1), *(shumin + seek2)) > 0)
			{
				temp = *(shumin + seek1);						//��ָ������������Բ�Ӱ��ṹ��Ա������
				*(shumin + seek1) = *(shumin + seek2);			//temp�����ָ��*(shumin + seek1)�ĵ�ַ
				*(shumin + seek2) = temp;								//********************************************
			}
		}
	}

	printf("�����ǰ���������ĸ�����ͼ��Ŀ¼��\n");
	for (int index = 0; index < num; index++)//num ����ֵ�ϵ����鼮������
	{
		for (int i = 0; i < num; i++)//�Խṹ����
		{
			if (*(shumin + index) == (library + i)->shuming)//�ж�ָ���ϴ�ĵ�ַ��shuming������Ԫ�صĵ�ַ��������ַ�Ƿ�ƥ��
				printf("%s:��%s������%.2f��\n", (*(library + i)).zuozhe, (library + i)->shuming, library[i].value);
		}
	}															//*****************************************���ֱ�ʾ����****************************************************

	free(shumin);
}
#endif


//4.a
#if 0
typedef struct
{
	char min[20];
	char zhongjianmin[20];
	char xin[20];
}NAME;//����										//**********ע���˽ṹ������XINXI�ṹ֮�£�����溯�����ʲ���name*************************
typedef struct
{
	long shebaohao;
	NAME name;
}XINXI;//��Ϣ

void dayin(XINXI* dayinxinxi);

int main(void)
{
	XINXI xinxi[5] =
	{
		{
		111111111,
		{"aaa", "aaa", "aaa"}
		},
		{
		222222222,
		{"bbb", "", "bbb"}//û���м���
		},
		{
		333333333,
		{"ccc", "ccc", "ccc"}
		},
		{
		444444444,
		{"ddd", "", "ddd"}
		},
		{
		555555555,
		{"eee", "eee", "eee"}
		},
	};

	dayin(xinxi);//���ݽṹ�ĵ�ַ����&xinxi[0]

	return 0;
}
void dayin(XINXI* dayinxinxi)
{
	for (int i = 0; i < 5; i++)
	{
		if (strlen((dayinxinxi + i)->name.zhongjianmin) != 0)
		{
			printf("%s, %s %c.", (dayinxinxi + i)->name.min, (dayinxinxi + i)->name.xin, (dayinxinxi + i)->name.zhongjianmin[0]);
			printf("--%ld\n", dayinxinxi->shebaohao);
		}
		else
		{
			printf("%s, %s   ", (dayinxinxi + i)->name.min, (dayinxinxi + i)->name.xin);
			printf("--%ld\n", dayinxinxi->shebaohao);
		}
	}
}
#endif
//4.b
#if 0
typedef struct
{
	char min[20];
	char zhongjianmin[20];
	char xin[20];
}NAME;//����										//**********ע���˽ṹ������XINXI�ṹ֮�£�����溯�����ʲ���name*************************
typedef struct
{
	long shebaohao;
	NAME name;
}XINXI;//��Ϣ

void dayin(XINXI dayinxinxi);

int main(void)
{
	XINXI xinxi[5] =
	{
		{
		111111111,
		{"aaa", "aaa", "aaa"}
		},
		{
		222222222,
		{"bbb", "", "bbb"}//û���м���
		},
		{
		333333333,
		{"ccc", "ccc", "ccc"}
		},
		{
		444444444,
		{"ddd", "", "ddd"}
		},
		{
		555555555,
		{"eee", "eee", "eee"}
		},
	};

	for (int i = 0; i < 5; i++)
		dayin(xinxi[i]);//*****���ݽṹ��ֵ*******

	return 0;
}
void dayin(XINXI dayinxinxi)
{
	if (strlen(dayinxinxi.name.zhongjianmin) != 0)
	{
		printf("%s, %s %c.", dayinxinxi.name.min, dayinxinxi.name.xin, dayinxinxi.name.zhongjianmin[0]);
		printf("--%ld\n", dayinxinxi.shebaohao);
	}
	else
	{
		printf("%s, %s   ", dayinxinxi.name.min, dayinxinxi.name.xin);
		printf("--%ld\n", dayinxinxi.shebaohao);
	}
}
#endif


//5.
#if 0
struct name
{
	char min[20];
	char xin[20];
};
struct student
{
	struct name xinmin;
	float grade[20];
	float average;
};
#define CSIZE 4
void addmessage(struct student* xueshen, int num);
void average(struct student* xueshen, int num);
void dayinjiegou(struct student* xueshen, int num);
void banji_average(struct student* xueshen, int num);

int main(void)
{
	struct student students[CSIZE] =
	{
		{
		.xinmin = {"Aaa","aaa"},
		},
		{
		.xinmin.min = "Bbb",//***********************************************���ֳ�ʼ������*******************************************
		"bbb"
		},
		{
			{"Ccc","ccc"},
		},
		{
			{"Ddd","ddd"},
		},
	};
	//printf("%s %s ",students[2].xinmin.min, students[2].xinmin.xin);

	addmessage(students, CSIZE);
	average(students, CSIZE);
	dayinjiegou(students, CSIZE);
	banji_average(students, CSIZE);

	return 0;
}
void addmessage(struct student* xueshen, int num)
{
	char xin[20];
	char min[20];
	int count = 0;

	printf("������ѧ��������(������֮���ÿո�ֿ�)(����0 0���˳�)��");
	//scanf("%s",xin);
	//scanf("%s", min);
	//��д�ɣ�
	//scanf("%s%s", min,xin);

	while (count < num && scanf("%s%s", min, xin) == 2 && xin[0] != '0' && min[0] != '0')
	{
		int j = -1;
		for (int i = 0; i < num; i++)
		{
			if (strcmp((xueshen + i)->xinmin.min, min) == 0 && strcmp((xueshen + i)->xinmin.xin, xin) == 0)
			{
				j = i;
				break;
			}
		}
		if (j == -1)
		{
			fprintf(stderr, "�����������������룡");
			continue;
		}

		printf("�������ѧ����3��������");
		scanf("%f%f%f", &(xueshen + j)->grade[0], &(xueshen + j)->grade[1], &(xueshen + j)->grade[2]);

		count++;
		if (count == num)
			break;
		printf("���������ѧ��������(������֮���ÿո�ֿ�)(����0 0���˳�)��");
	}

	/*printf("%s%s",xin,min);
	printf("%f   %f    %f", xueshen->grade[0], xueshen->grade[1], xueshen->grade[2]);*/     //���ڼ��˺����Ĺ���
}
void average(struct student* xueshen, int num)
{
	float sum = 0.0;
	for (int i = 0; i < num; i++)
	{
		sum += (xueshen + i)->grade[0] + (xueshen + i)->grade[1] + (xueshen + i)->grade[2];
		(xueshen + i)->average = sum / 3.0;
		sum = 0;
	}
}
void dayinjiegou(struct student* xueshen, int num)
{
	for (int i = 0; i < num; i++)
	{
		printf("ѧ��������%s %s\n", (xueshen + i)->xinmin.min, (xueshen + i)->xinmin.xin);
		printf("���������%.2f %.2f %.2f\n", (xueshen + i)->grade[0], (xueshen + i)->grade[1], (xueshen + i)->grade[2]);
		printf("ƽ���֣�%.2f\n", (xueshen + i)->average);
	}
}
void banji_average(struct student* xueshen, int num)
{
	putchar('\n');
	putchar('\n');
	float sum = 0;
	for (int i = 0; i < num; i++)
	{
		sum += (xueshen + i)->average;
	}

	printf("�༶ƽ���֣�%.2f\n\n", sum / CSIZE);
}
#endif
//��ĿҪ�����ѧ���������������ж�����������Ƿ���ṹ�е�����ƥ��
//5.
#if 0
struct name
{
	char min[20];
	char xin[20];
};
struct student
{
	struct name xinmin;
	float grade[20];
	float average;
};
#define CSIZE 4
void addmessage(struct student* xueshen, int num);
void average(struct student* xueshen, int num);
void dayinjieguo(struct student* xueshen, int num);
void banji_average(struct student* xueshen, int num);

int main(void)
{
	struct student students[CSIZE] = { '0' };

	addmessage(students, CSIZE);
	average(students, CSIZE);
	dayinjieguo(students, CSIZE);
	banji_average(students, CSIZE);

	return 0;
}
void addmessage(struct student* xueshen, int num)
{
	char xin[20];
	char min[20];
	int count = 0;

	printf("������ѧ��������(������֮���ÿո�ֿ�)(����0 0���˳�)��");
	//scanf("%s",xin);
	//scanf("%s", min);
	//��д�ɣ�
	//scanf("%s%s", min,xin);

	while (count < num && scanf("%s%s", min, xin) == 2 && xin[0] != '0' && min[0] != '0')
	{
		if (strlen(min) < 1 && strlen(xin) < 1)
		{
			printf("�����������������룡\n");
			continue;
		}

		strcpy((xueshen + count)->xinmin.min, min);
		strcpy((xueshen + count)->xinmin.xin, xin);

		printf("�������ѧ����3��������");
		scanf("%f%f%f", &((xueshen + count)->grade[0]), &((xueshen + count)->grade[1]), &((xueshen + count)->grade[2]));

		count++;
		if (count == num)
			break;
		printf("���������ѧ��������(������֮���ÿո�ֿ�)(����0 0���˳�)��");
	}

	/*printf("%s%s",xin,min);
	printf("%f   %f    %f", xueshen->grade[0], xueshen->grade[1], xueshen->grade[2]);*/     //���ڼ��˺����Ĺ���
}
void average(struct student* xueshen, int num)
{
	float sum = 0.0;
	for (int i = 0; i < num; i++)
	{
		sum = (xueshen + i)->grade[0] + (xueshen + i)->grade[1] + (xueshen + i)->grade[2];
		(xueshen + i)->average = sum / 3.0;
		sum = 0;
	}
	//�����������м����sum
	/*for (int i = 0; i < num; i++)
	{
		(xueshen + i)->average =( (xueshen + i)->grade[0] + (xueshen + i)->grade[1] + (xueshen + i)->grade[2] )/3;
	}*/
}
void dayinjieguo(struct student* xueshen, int num)
{
	for (int i = 0; i < num; i++)
	{
		printf("ѧ��������%s %s\n", (xueshen + i)->xinmin.min, (xueshen + i)->xinmin.xin);
		printf("���������%.2f %.2f %.2f\n", (xueshen + i)->grade[0], (xueshen + i)->grade[1], (xueshen + i)->grade[2]);
		printf("ƽ���֣�%.2f\n", (xueshen + i)->average);
	}
}
void banji_average(struct student* xueshen, int num)
{
	putchar('\n');
	putchar('\n');
	float sum = 0.0;
	for (int i = 0; i < num; i++)
	{
		sum += (xueshen + i)->average;
	}

	printf("�༶ƽ���֣�%.2f\n\n", sum / CSIZE);
}
#endif


//6.
#if 0
#define SIZE 19
typedef struct
{
	char min[20];
	char xin[20];
	int shangchang;
	int jizhong;
	int zoulei;
	int dadian;
	float anda;
}QIUYUAN;//��Ա
void jisuan_andalv(QIUYUAN* qiuyuan, int num);

int main(void)
{
	QIUYUAN qiuyuan[SIZE];
	QIUYUAN temp[SIZE];

	FILE* fp;
	if ((fp = fopen("qiuyuanxinxi_data.txt", "a+")) == NULL)
	{
		fputs("���ļ�ʧ�ܣ�", stderr);
		exit(EXIT_FAILURE);
	}

	rewind(fp);

	int count = 0;							//��count���ṹ�ĵ�ַ
	while (count < SIZE && fread(&temp[count], sizeof(QIUYUAN), 1, fp) == 1)
	{
		if (count == 0)
			puts("��ǰ�ļ��к��е���Ա��Ϣ���£�");

		printf("%d %s %s %d %d %d %d\n", count, temp[count].min, temp[count].xin, temp[count].shangchang\
			, temp[count].jizhong, temp[count].zoulei, temp[count].dadian);
		count++;
	}


	return 0;
}
void jisuan_andalv(QIUYUAN* qiuyuan, int num)
{

}
//�����У�D:\CODE\C_CODE\C Primer Plus Code practice\chapter 14\code3\Project3\x64\Debug
//Project3.exe
#endif
//���ϳ���˼·����
// ���ļ��ж�ȡ������fread()�Ļ��������ļ��еĽṹ�����ṹ���ݴ����ı������ļ��༭���������룬�ֶ�����û�����������ó���ȥ��ȡ��
// �����ļ��е������ǲ�����fread()�ö��ṹ�ķ�ʽȥ���ġ�
// ��ȷ˼·�����ı�ģʽ��fscanf()�������ļ����ݡ�
//6.
#if 0
#define SIZE 19
typedef struct
{
	int haoma;
	char min[20];
	char xin[20];
	int shangchang;//�ϳ�����
	int jizhong;		   //������
	int zoulei;		   //������
	int dadian;		   //���
	float anda;		   //������
}QIUYUAN;//��Ա

void addmessage(FILE* fp, QIUYUAN* qiuyuan, int num);
void jisuan_andalv(QIUYUAN* qiuyuan, int num);
void show(QIUYUAN* qiuyuan, int num);

int main(void)
{
	QIUYUAN qiuyuan[SIZE] = { {0} };						//��ʼ����ԱΪ0����ֹ��Ա������19ʱ�ṹ�еĳ�Ա��Ϣ��ȫ����������ˢ��

	FILE* fp;
	if ((fp = fopen("qiuyuanxinxi_data.txt", "a+")) == NULL)
	{
		fputs("���ļ�ʧ�ܣ�", stderr);
		exit(EXIT_FAILURE);
	}

	rewind(fp);

	addmessage(fp, qiuyuan, SIZE);
	fclose(fp);

	jisuan_andalv(qiuyuan, SIZE);
	show(qiuyuan, SIZE);

	return 0;
}
void addmessage(FILE* fp, QIUYUAN* qiuyuan, int num)
{
	int haoma;
	char min[20];
	char xin[20];
	int shangchang;
	int jizhong;
	int zoulei;
	int dadian;

	int i = 0;
	while (fscanf(fp, "%d%s%s%d%d%d%d", &haoma, min, xin, &shangchang, &jizhong, &zoulei, &dadian) == 7)
	{
		(qiuyuan + haoma)->haoma = haoma;//****************ע*****************
																		 //��Ա�ſ�����Ϊ�ṹ������ֵ
		strcpy((qiuyuan + haoma)->min, min);
		strcpy((qiuyuan + haoma)->xin, xin);
		(qiuyuan + haoma)->shangchang += shangchang;
		(qiuyuan + haoma)->jizhong += jizhong;
		qiuyuan[haoma].zoulei += zoulei;
		qiuyuan[haoma].dadian += dadian;
	}
}
void jisuan_andalv(QIUYUAN* qiuyuan, int num)
{
	float anda = 0.0;

	for (int i = 0; i < num; i++)
	{
		anda = (float)(qiuyuan + i)->jizhong / (float)(qiuyuan + i)->shangchang;
		(qiuyuan + i)->anda = anda;
		anda = 0.0;
	}
}
void show(QIUYUAN* qiuyuan, int num)
{
	printf("��Ա��  ��     ��  �ϳ�����  ������  ������  ���  ������\n");
	for (int i = 0; i < num; i++)
		printf("%5d    %s  %s   %d          %d     %d      %d      %.2f\n", (qiuyuan + i)->haoma, (qiuyuan + i)->min, (qiuyuan + i)->xin, \
			(qiuyuan + i)->shangchang, (qiuyuan + i)->jizhong, (qiuyuan + i)->zoulei, (qiuyuan + i)->dadian, (qiuyuan + i)->anda);
}
//�����У�D:\CODE\C_CODE\C Primer Plus Code practice\chapter 14\code3\Project3\x64\Debug
//Project3.exe
#endif


//7.
#if 0
#define MAX_SHUMING 41 //�����������
#define MAX_ZUOZHE 41 //���������������
#define MAX_SHULIANG 100//����鼮����

char* s_gets(char* string, int n);
void eatline(void);

struct book												//����һ�����Ϊbook�Ľṹ
{
	char shuming[MAX_SHUMING];
	char zuozhe[MAX_ZUOZHE];
	float value;
	int delete_biaoji;
};

int main(void)
{
	struct book library[MAX_SHULIANG];//����һ��ʹ��book�ṹ���ֵĽṹ��������library[100]
	int count = 0;

	//���ļ����������ļ���ԭ�е�ͼ������
	FILE* fp;
	if ((fp = fopen("book_data.txt", "r+b")) == NULL)//������ģʽ��
	{
		fputs("���ļ�ʧ�ܣ�", stderr);
		exit(EXIT_FAILURE);
	}

	rewind(fp);											//����ȡ�ļ����ݿ������ڴ��еĵ�ַ���������ݿ�Ĵ�С���������ݿ�����������ȡ���ļ�
	while (count < MAX_SHULIANG && fread(&library[count], sizeof(struct book), 1, fp) == 1)
	{
		if (count == 0)
			puts("��ǰ�ļ��к��е�ͼ����Ϣ���£�");

		printf("%s:��%s������%.2f��\n", library[count].zuozhe, library[count].shuming, library[count].value);
		count++;
	}

	//�����ļ���ͼ��������ֵ        (ע���˴�count��ֵ���ļ���ͼ��������ֵ����Ϊcount��0��ʼ����)
	int filecount = count;				//      (countֵ�ܸ���filecount�����߶����ں�������г�Ϊ����ֵ)

	//�ж��ļ���ͼ�������Ƿ������100��
	if (filecount == MAX_SHULIANG)
	{
		fprintf(stderr, "book_data.txt������");
		exit(EXIT_FAILURE);
	}

	//�ļ���ͼ������û��100��
	printf("����������(����������^Z������������[Enter]�Խ���)��\n");
	while (count < MAX_SHULIANG && s_gets(library[count].shuming, MAX_SHUMING) != NULL && library[count].shuming[0] != '\0')
	{
		puts("����������������");
		s_gets(library[count].zuozhe, MAX_ZUOZHE);

		puts("�������ۼۣ�");
		scanf("%f", &library[count].value);
		while (getchar() != '\n')//����scanf()ִ�к󻺳������µ�\n
			continue;

		count++;

		if (count < MAX_SHULIANG)
			printf("����������(����������^Z������������[Enter]�Խ���)��\n");
	}

	//��ʾ��ӵ�ͼ�飬�����¼ӵ�ͼ��Ҳ�������ļ���
	printf("������ͼ��Ŀ¼��\n");
	for (int index = 0; index < count; index++)
	{
		printf("%s:��%s������%.2f��\n", library[index].zuozhe, library[index].shuming, library[index].value);
	}
	//��д����ļ��������ڵ��ڴ��еĵ�ַ����д���ݿ�Ĵ�С����д���ݿ���������д����ļ�
	fwrite(&library[filecount], sizeof(struct book), count - filecount, fp);
	//count-filecount�ó�����ӵ�ͼ������
	puts("�����ļ�����ɣ�");
	//************************ע��*******************
  //��д��fclose("fp");����򲻻�����ݴ����ļ����������Ų���󣡣���

	char ch;
	printf("����Ҫ�޸ļ�¼��������(����y��n)");
	scanf("%c", &ch);
	eatline();

	if (ch == 'y')
	{
		printf("��������Ҫ�޸ĵļ�¼���к�(����q���˳�)��");
		int line;
		while (scanf("%d", &line) == 1)
		{
			eatline();
			printf("��������(����y��n)��%s:��%s������%.2f��", library[line].zuozhe, library[line].shuming, library[line].value);
			scanf("%c", &ch);
			eatline();
			if (ch == 'y')
			{
				library[line].delete_biaoji = 1;
				puts("����������ɾ����");
				printf("��������Ҫ�޸ĵļ�¼���к�(����q���˳�)��");
			}
			else
			{
				printf("��������Ҫ�޸ĵļ�¼���к�(����q���˳�)��");
				continue;
			}
		}

		eatline();																										//*************************ע**********************************
		printf("Ҫ�����м�¼�����д��������(����y��n)");								//覴ã�����ɾ������������ݣ����ļ����Ի����в���ԭ��¼
		scanf("%c", &ch);																						//Ӧ�ÿ�����fopen()��wģʽ���
		eatline();																										//*************************ע**********************************

		if (ch == 'y')
		{
			printf("����������(����������^Z������������[Enter]�Խ���)��\n");
			while (count < MAX_SHULIANG && s_gets(library[count].shuming, MAX_SHUMING) != NULL && library[count].shuming[0] != '\0')
			{
				puts("����������������");
				s_gets(library[count].zuozhe, MAX_ZUOZHE);

				puts("�������ۼۣ�");
				scanf("%f", &library[count].value);
				eatline();

				library[count].delete_biaoji = 0;

				count++;

				if (count < MAX_SHULIANG)
					printf("����������(����������^Z������������[Enter]�Խ���)��\n");
			}
		}

	}
	rewind(fp);
	printf("������ͼ��Ŀ¼��\n");
	for (int index = 0; index < count; index++)
	{
		if (library[index].delete_biaoji != 1)
		{
			printf("%s:��%s������%.2f��\n", library[index].zuozhe, library[index].shuming, library[index].value);
			fwrite(&library[index], sizeof(struct book), 1, fp);
		}
	}

	puts("�����ļ�����ɣ�");

	fclose(fp);

	return 0;
}
char* s_gets(char* string, int n)
{
	char* fanhui;
	char* find;

	fanhui = fgets(string, n, stdin);
	if (fanhui)
	{
		find = strchr(string, '\n');
		if (find)
			*find = '\0';
		else
			while (getchar() != '\n')
				continue;
	}
	return fanhui;
}
void eatline(void)
{
	while (getchar() != '\n')
		continue;
}
//���������г���D:\CODE\C_CODE\C Primer Plus Code practice\chapter 14\code3\Project3\x64\Debug
//Project3.exe
//*****ע*******�˳���Ĳ������ļ�����fopen()���ı�ģʽ���Ƕ�����ģʽ�����ļ��༭���������롣
#endif
//7.�޸�
//**************************************************************************
//ʵ����ֻɾ����¼������������ݲ���δɾ���ļ�¼�����ļ��Ĺ���
//ʵ������Ҫ�޸ĵ���������ݵĹ���
//ʵ���������ָ����ĸ����ʾ�û�����֧���ٴ�����Ĺ���
//**************************************************************************
#if 0
#define MAX_SHUMING 41 //�����������
#define MAX_ZUOZHE 41 //���������������
#define MAX_SHULIANG 100//����鼮����

char* s_gets(char* string, int n);
char get_choice(void);
void eatline(void);

struct book												//����һ�����Ϊbook�Ľṹ
{
	char shuming[MAX_SHUMING];
	char zuozhe[MAX_ZUOZHE];
	float value;
	int delete_biaoji;
};

int main(void)
{
	struct book library[MAX_SHULIANG];//����һ��ʹ��book�ṹ���ֵĽṹ��������library[100]
	int count = 0;

	//���ļ����������ļ���ԭ�е�ͼ������
	FILE* fp;
	if ((fp = fopen("book_data.txt", "r+b")) == NULL)//������ģʽ��
	{
		fputs("���ļ�ʧ�ܣ�", stderr);
		exit(EXIT_FAILURE);
	}

	rewind(fp);											//����ȡ�ļ����ݿ������ڴ��еĵ�ַ���������ݿ�Ĵ�С���������ݿ�����������ȡ���ļ�
	while (count < MAX_SHULIANG && fread(&library[count], sizeof(struct book), 1, fp) == 1)
	{
		if (count == 0)
			puts("��ǰ�ļ��к��е�ͼ����Ϣ���£�");

		printf("%s:��%s������%.2f��\n", library[count].zuozhe, library[count].shuming, library[count].value);
		count++;
	}

	//�����ļ���ͼ��������ֵ        (ע���˴�count��ֵ���ļ���ͼ��������ֵ����Ϊcount��0��ʼ����)
	int filecount = count;				//      (countֵ�ܸ���filecount�����߶����ں�������г�Ϊ����ֵ)

	//�ж��ļ���ͼ�������Ƿ������100��
	if (filecount == MAX_SHULIANG)
	{
		fprintf(stderr, "book_data.txt������");
		exit(EXIT_FAILURE);
	}

	//�ļ���ͼ������û��100��
	printf("����������(����������^Z������������[Enter]�Խ���)��\n");
	while (count < MAX_SHULIANG && s_gets(library[count].shuming, MAX_SHUMING) != NULL && library[count].shuming[0] != '\0')
	{
		puts("����������������");
		s_gets(library[count].zuozhe, MAX_ZUOZHE);

		puts("�������ۼۣ�");
		scanf("%f", &library[count].value);
		while (getchar() != '\n')//����scanf()ִ�к󻺳������µ�\n
			continue;

		count++;

		if (count < MAX_SHULIANG)
			printf("����������(����������^Z������������[Enter]�Խ���)��\n");
	}

	//��ʾ��ӵ�ͼ�飬�����¼ӵ�ͼ��Ҳ�������ļ���
	printf("������ͼ��Ŀ¼��\n");
	for (int index = 0; index < count; index++)
	{
		printf("%s:��%s������%.2f��\n", library[index].zuozhe, library[index].shuming, library[index].value);
	}
	//��д����ļ��������ڵ��ڴ��еĵ�ַ����д���ݿ�Ĵ�С����д���ݿ���������д����ļ�
	fwrite(&library[filecount], sizeof(struct book), count - filecount, fp);
	//count-filecount�ó�����ӵ�ͼ������
	puts("�����ļ�����ɣ�");				//count:ͼ��������filecount�ļ���ԭͼ������
																				//************************ע��*******************
	fclose(fp);															//��д��fclose("fp");����򲻻�����ݴ����ļ����������Ų���󣡣���


	char ch;
	printf("����Ҫ�޸ļ�¼��������(����y��n)");
	ch = get_choice();

	if (ch == 'y')
	{
		if ((fp = fopen("book_data.txt", "wb")) == NULL)//������ģʽ��
		{
			fputs("���ļ�ʧ�ܣ�", stderr);
			exit(EXIT_FAILURE);
		}
	}
	else
	{
		if ((fp = fopen("book_data.txt", "r+b")) == NULL)//������ģʽ��
		{
			fputs("���ļ�ʧ�ܣ�", stderr);
			exit(EXIT_FAILURE);
		}
	}

	int line;
	if (ch == 'y')
	{
		printf("��������Ҫ�޸ĵļ�¼���к�(���һ�У�������0)(����q���˳�)��");

		while (scanf("%d", &line) == 1)
		{
			if (line<0 || line>count - 1)
			{
				printf("�����������������룡");
				continue;
			}

			eatline();
			printf("��������(����y��n)��%s:��%s������%.2f��", library[line].zuozhe, library[line].shuming, library[line].value);
			ch = get_choice();

			if (ch == 'y')
			{
				library[line].delete_biaoji = 1;									//****************************ע********************************
				//count--;										//��ȥһ���顣    ���ܼ�������count��������forѭ��������Ҫ��Ϊ����������
				puts("����������ɾ����");
				printf("��������Ҫ�޸ĵļ�¼���к�(���һ�У�������0)(����q���˳�)��");
			}
			else
			{
				printf("��������Ҫ�޸ĵļ�¼���к�(���һ�У�������0)(����q���˳�)��");
				continue;
			}
		}

		eatline();
		printf("Ҫ�ڴ���д����������(����y��n)");
		ch = get_choice();

		if (ch == 'y')
		{
			printf("������������\n");
			s_gets(library[line].shuming, MAX_SHUMING);
			puts("����������������");
			s_gets(library[line].zuozhe, MAX_ZUOZHE);
			puts("�������ۼۣ�");
			scanf("%f", &library[line].value);
			eatline();
			library[line].delete_biaoji = 0;
		}

		printf("Ҫ�����м�¼�����д��������(����y��n)");
		ch = get_choice();

		if (ch == 'y')
		{
			printf("����������(����������^Z������������[Enter]�Խ���)��\n");
			while (count < MAX_SHULIANG && s_gets(library[count].shuming, MAX_SHUMING) != NULL && library[count].shuming[0] != '\0')
			{
				puts("����������������");
				s_gets(library[count].zuozhe, MAX_ZUOZHE);

				puts("�������ۼۣ�");
				scanf("%f", &library[count].value);
				eatline();

				library[count].delete_biaoji = 0;

				count++;

				if (count < MAX_SHULIANG)
					printf("����������(����������^Z������������[Enter]�Խ���)��\n");
			}
		}

	}

	rewind(fp);

	printf("������ͼ��Ŀ¼��\n");
	for (int index = 0; index < count; index++)//*****count��delete_biaojiΪ1��0��ͼ������*****
	{
		if (library[index].delete_biaoji != 1)
		{
			printf("%s:��%s������%.2f��\n", library[index].zuozhe, library[index].shuming, library[index].value);
			fwrite(&library[index], sizeof(struct book), 1, fp);
		}
	}

	puts("�����ļ�����ɣ�");

	fclose(fp);

	return 0;
}
char* s_gets(char* string, int n)
{
	char* fanhui;
	char* find;

	fanhui = fgets(string, n, stdin);
	if (fanhui)
	{
		find = strchr(string, '\n');
		if (find)
			*find = '\0';
		else
			while (getchar() != '\n')
				continue;
	}
	return fanhui;
}
char get_choice(void)
{
	char answer;

	answer = getchar();
	answer = tolower(answer);//ʹ��C���tolower()

	eatline();
	while (strchr("yn", answer) == NULL)
	{
		puts("������y��n");
		answer = tolower(getchar());
		eatline();
	}

	return answer;
}
void eatline(void)
{
	while (getchar() != '\n')
		continue;
}
//���������г���D:\CODE\C_CODE\C Primer Plus Code practice\chapter 14\code3\Project3\x64\Debug
//Project3.exe
//*****ע*******�˳���Ĳ������ļ�����fopen()���ı�ģʽ���Ƕ�����ģʽ�����ļ��༭���������롣
#endif


//8.
#if 0
typedef struct
{
	int zuoweibianhao;//��λ���
	int yuding_biaoji;//��λ��Ԥ���ı��
	char name_min[20];
	char name_xin[20];
}XINXI;
#define SIZE 12
void showmenu(void);
char get_choice(void);
void eatline(void);

void show_empty_seats(XINXI* xinxi, int num);
void show_list_of_empty_seats(XINXI* xinxi, int num);
void show_chengke_paixu(XINXI* xinxi, int num);
int fenpeizuowei(XINXI* xinxi, int num);
int quxiaozuowei(XINXI* xinxi, int num);

int main(void)
{
	XINXI xinxi[SIZE] = { {0} };//��ʼ���ṹ�ĳ�ԱֵΪ0

	int j = -1;//��ʾԤ������λ������ڵĵ�x���ṹ
	while (1)
	{
		showmenu();
		char choice = get_choice();

		switch (choice)
		{
		case 'a':
			show_empty_seats(xinxi, SIZE);
			break;
		case 'b':
			show_list_of_empty_seats(xinxi, SIZE);
			break;
		case 'c':
			show_chengke_paixu(xinxi, SIZE);
			break;
		case 'd':
			j = fenpeizuowei(xinxi, SIZE);
			break;
		case 'e':
			j = quxiaozuowei(xinxi, j);//		j��������û�Ԥ������λ������ѡ��ȡ��Ԥ��������ܡ�
			break;
		case 'f':
		default:
			printf("�������˳���");
			exit(1);
		}
	}

	//������
	//showmenu();
	//char choice = get_choice();
	//while (choice != 'f')
	//{
	//    .........
	//showmenu();
	//choice = get_choice();
	//}

	return 0;
}
void showmenu(void)
{
	puts("�������ѡ����ѡ��һ��ܣ�");
	puts("a)��ʾ�������λ����");
	puts("b)��ʾ�������λ�б�");
	puts("c)����ĸ��˳����ʾ��λ�ϵĳ˿��б�");
	puts("d)Ϊ��������λ");
	puts("e)���������λ��¼");
	puts("f)�˳�");
}
char get_choice(void)
{
	char choice;

	choice = getchar();
	choice = tolower(choice);//ʹ��C���tolower()

	eatline();
	while (strchr("abcdef", choice) == NULL)
	{
		puts("������a��b��c��d��e��f");
		choice = tolower(getchar());
		eatline();
	}

	return choice;
}
void eatline(void)
{
	while (getchar() != '\n')
		continue;
}
void show_empty_seats(XINXI* xinxi, int num)
{
	int count = 0;
	for (int i = 0; i < num; i++)
	{
		if ((xinxi + i)->yuding_biaoji == 0)
			count++;
	}

	printf("����%d������λ\n", count);
}
void show_list_of_empty_seats(XINXI* xinxi, int num)
{
	int i;
	for (i = 0; i < num; i++)
	{
		if ((xinxi + i)->yuding_biaoji == 0)
			printf("��λ���:%3d    ", (xinxi + i)->zuoweibianhao);

		if (i % 6 == 5)
			putchar('\n');
	}
	if (i % 6 != 0)
		putchar('\n');
}
void show_chengke_paixu(XINXI* xinxi, int num)
{
	XINXI xinxi_kaobei[SIZE];
	for (int index = 0; index < num; index++)
	{
		xinxi_kaobei[index] = *(xinxi + index);//�����ṹ�����ÿ��Ԫ�أ���ÿ���ṹ
	}

	XINXI  temp;
	int seek1, seek2;

	for (seek1 = 0; seek1 < num - 1; seek1++)//���ѭ��ָ�����ڴ����Ԫ��
	{
		for (seek2 = seek1 + 1; seek2 < num; seek2++)//�ڲ�ѭ���ҳ�Ӧ�洢�ڸ�Ԫ�ص�ֵ
		{
			if (strcmp((xinxi_kaobei + seek1)->name_min, (xinxi_kaobei + seek2)->name_min) > 0)//��ǰһ���ַ���������ĸ��������λ�ں�һ���ַ���������ĸ����
			{
				temp = *(xinxi_kaobei + seek1);					//�Խṹ����	
				xinxi_kaobei[seek1] = xinxi_kaobei[seek2];//*******************************����д��**********************************
				xinxi_kaobei[seek2] = temp;
			}
		}
	}
	//��������ָ�����򣬿ɲο���3.��

	printf("�����ǰ��˿���ĸ����ĳ˿��б�\n");
	for (int index = 0; index < num; index++)
	{
		if ((xinxi_kaobei + index)->yuding_biaoji != 0)
			printf("�˿�����%s ��λ�ţ�%d \n", (xinxi_kaobei + index)->name_min, (xinxi_kaobei)->zuoweibianhao);
	}
}
int fenpeizuowei(XINXI* xinxi, int num)
{
	int zuoweibianhao;
	printf("��������ҪԤ������λ���(����q���˳�)��");

	int j = -1;
	while (scanf("%d", &zuoweibianhao))
	{
		eatline();
		for (int index = 0; index < num; index++)
		{
			if ((xinxi + index)->zuoweibianhao == zuoweibianhao)
			{
				j = index;
				break;
			}
			j = -1;
		}

		if (j == -1)
		{
			printf("δ�ҵ�����λ��ţ����������룡");
			continue;
		}

		if ((xinxi + j)->yuding_biaoji == 1)
		{
			printf("����λ����ѱ�Ԥ�������������룡");
			continue;
		}

		break;
	}

	if (j == -1)//����qʱ
		eatline();

	if (j != -1)
	{
		char name_min[20];
		char name_xin[20];

		printf("���������������գ�");
		scanf("%s%s", name_min, name_xin);
		eatline();

		(xinxi + j)->yuding_biaoji = 1;
		strcpy((xinxi + j)->name_min, name_min);
		strcpy((xinxi + j)->name_xin, name_xin);

		printf("��λ��ţ�%d   %s %s\n", (xinxi + j)->zuoweibianhao, (xinxi + j)->name_min, (xinxi + j)->name_xin);
		puts("д����ɣ�");
	}

	return j;
}
int quxiaozuowei(XINXI* xinxi, int num)
{
	if (num == -1)
	{
		printf("����δ����λ��");
	}
	else
	{
		printf("ȷ��ȡ����λ���%d��Ԥ���𣿣�����y��n��");
		char choice;

		choice = getchar();
		choice = tolower(choice);//ʹ��C���tolower()

		eatline();
		while (strchr("yn", choice) == NULL)
		{
			puts("������y��n");
			choice = tolower(getchar());
			eatline();
		}
		if (choice == 'y')
		{
			char name_min = { '0' };
			char name_xin = { '0' };

			strcpy((xinxi + num)->name_min, name_min);
			strcpy((xinxi + num)->name_xin, name_xin);
			(*(xinxi + num)).yuding_biaoji = 0;

			puts("��ɾ��Ԥ����Ϣ��");
			num = -1;
		}
	}
	return num;
}
#endif


//9.
#if 0
typedef struct
{
	int zuoweibianhao;//��λ���
	int yuding_biaoji;//��λ��Ԥ���ı��
	char name_min[20];
	char name_xin[20];
}XINXI;

#define SIZE 12
void showmenu(void);
char get_choice(void);
void eatline(void);

void show_empty_seats(XINXI* xinxi, int num);
void show_list_of_empty_seats(XINXI* xinxi, int num);
void show_chengke_paixu(XINXI* xinxi, int num);
int fenpeizuowei(XINXI* xinxi, int num);
int quxiaozuowei(XINXI* xinxi, int num);

int main(void)
{
	XINXI xinxi[4][SIZE] = { {0} };//�ĸ����࣬ÿ�����඼�Ǹ�XINXI���ֵĽṹ

	printf("��ѡ�񺽰�ţ�102	311	444	519	������0���˳���:");
	while (1)
	{
		int hangbanhao;
		int x;
		while (scanf("%d", &hangbanhao))
		{
			eatline();

			switch (hangbanhao)
			{
			case 102:
				x = 0;
				puts("���ڴ�����102");
				break;
			case 311:
				x = 1;
				puts("���ڴ�����311");
				break;
			case 444:
				x = 2;
				puts("���ڴ�����444");
				break;
			case 519:
				x = 3;
				puts("���ڴ�����519");
				break;
			default:
				if (hangbanhao == 0)
					exit(1);//Ҳ����ʹ��go to ���
				else
				{
					puts("�����������������룡");
					continue;
				}
			}
			break;
		}

		showmenu();
		char choice = '0';
		int j = -1;//��ʾԤ������λ������ڵĵ�x���ṹ
		while ((choice = get_choice()) && choice != 'f')					//*******************************ע*********************************************************
		{																							//����д����while (		choice= get_choice()&&choice!='f'     )	������a����choice=1
			switch (choice)																//���ȼ�����������ϵ���߼�����ֵ
			{
			case 'a':													  //*************************ע************************************************
				show_empty_seats(*(xinxi + x), SIZE);//*(xinxi + x)=*(&xinxi[0]+x)=*(&xinxi[x])=xinxi[x] �������&xinxi[x][0]
				break;
			case 'b':
				show_list_of_empty_seats(xinxi[x], SIZE);
				break;
			case 'c':
				show_chengke_paixu(xinxi[x], SIZE);
				break;
			case 'd':
				j = fenpeizuowei(xinxi[x], SIZE);
				break;
			case 'e':
				j = quxiaozuowei(xinxi[x], j);
				break;
			case 'f':
			default:
				printf("���˳���\n");
			}
			showmenu();
		}

		printf("��ѡ�񺽰�ţ�102	311	444	519	������0���˳���:");
	}
	return 0;
}
void showmenu(void)
{
	puts("�������ѡ����ѡ��һ��ܣ�");
	puts("a)��ʾ�������λ����");
	puts("b)��ʾ�������λ�б�");
	puts("c)����ĸ��˳����ʾ��λ�ϵĳ˿��б�");
	puts("d)Ϊ��������λ");
	puts("e)���������λ��¼");
	puts("f)�˳�");
}
char get_choice(void)
{
	char choice;

	choice = getchar();
	choice = tolower(choice);//ʹ��C���tolower()

	eatline();
	while (strchr("abcdef", choice) == NULL)
	{
		puts("������a��b��c��d��e��f");
		choice = tolower(getchar());
		eatline();
	}

	return choice;
}
void eatline(void)
{
	while (getchar() != '\n')
		continue;
}
void show_empty_seats(XINXI* xinxi, int num)
{
	int count = 0;
	for (int i = 0; i < num; i++)
	{
		if ((xinxi + i)->yuding_biaoji == 0)
			count++;
	}

	printf("����%d������λ\n", count);
}
void show_list_of_empty_seats(XINXI* xinxi, int num)
{
	int i;
	for (i = 0; i < num; i++)
	{
		if ((xinxi + i)->yuding_biaoji == 0)
			printf("��λ���:%3d    ", (xinxi + i)->zuoweibianhao);

		if (i % 6 == 5)
			putchar('\n');
	}
	if (i % 6 != 0)
		putchar('\n');
}
void show_chengke_paixu(XINXI* xinxi, int num)
{
	XINXI xinxi_kaobei[SIZE];
	for (int index = 0; index < num; index++)
	{
		xinxi_kaobei[index] = xinxi_kaobei[index];//�����ṹ�����ÿ��Ԫ��
	}

	XINXI  temp;
	int seek1, seek2;

	for (seek1 = 0; seek1 < num - 1; seek1++)//���ѭ��ָ�����ڴ����Ԫ��
	{
		for (seek2 = seek1 + 1; seek2 < num; seek2++)//�ڲ�ѭ���ҳ�Ӧ�洢�ڸ�Ԫ�ص�ֵ
		{
			if (strcmp((xinxi_kaobei + seek1)->name_min, (xinxi_kaobei + seek2)->name_min) > 0)//��ǰһ���ַ���������ĸ��������λ�ں�һ���ַ���������ĸ����
			{
				temp = *(xinxi_kaobei + seek1);
				xinxi_kaobei[seek1] = xinxi_kaobei[seek2];//*******************************����д��**********************************
				xinxi_kaobei[seek2] = temp;
			}
		}
	}

	printf("�����ǰ��˿���ĸ����ĳ˿��б�\n");
	for (int index = 0; index < num; index++)
	{
		if ((xinxi + index)->yuding_biaoji != 0)
			printf("�˿�����%s ��λ�ţ�%d \n", (xinxi_kaobei + index)->name_min, (xinxi_kaobei)->zuoweibianhao);
	}
}
int fenpeizuowei(XINXI* xinxi, int num)
{
	int zuoweibianhao;
	printf("��������ҪԤ������λ���(����q���˳�)��");

	int j = -1;
	while (scanf("%d", &zuoweibianhao))
	{
		eatline();
		for (int index = 0; index < num; index++)
		{
			if ((xinxi + index)->zuoweibianhao == zuoweibianhao)
			{
				j = index;
				break;
			}

			j = -1;
		}
		if (j == -1)
		{
			printf("δ�ҵ�����λ��ţ����������룡");
			continue;
		}

		if ((xinxi + j)->yuding_biaoji == 1)
		{
			printf("����λ����ѱ�Ԥ�������������룡");
			continue;
		}

		break;
	}

	if (j == -1)//����qʱ
		eatline();

	if (j != -1)
	{
		char name_min[20];
		char name_xin[20];

		printf("���������������գ�");
		scanf("%s%s", name_min, name_xin);
		eatline();

		(xinxi + j)->yuding_biaoji = 1;
		strcpy((xinxi + j)->name_min, name_min);
		strcpy((xinxi + j)->name_xin, name_xin);

		printf("��λ��ţ�%d   %s %s\n", (xinxi + j)->zuoweibianhao, (xinxi + j)->name_min, (xinxi + j)->name_xin);
		puts("д����ɣ�");
	}

	return j;
}
int quxiaozuowei(XINXI* xinxi, int num)
{
	if (num == -1)
	{
		printf("����δ����λ��");
	}
	else
	{
		printf("ȷ��ȡ����λ���%d��Ԥ���𣿣�����y��n��");
		char choice;

		choice = getchar();
		choice = tolower(choice);//ʹ��C���tolower()

		eatline();
		while (strchr("yn", choice) == NULL)
		{
			puts("������y��n");
			choice = tolower(getchar());
			eatline();
		}
		if (choice == 'y')
		{
			char name_min = { '0' };
			char name_xin = { '0' };

			strcpy((xinxi + num)->name_min, name_min);
			strcpy((xinxi + num)->name_xin, name_xin);
			(*(xinxi + num)).yuding_biaoji = 0;

			puts("��ɾ��Ԥ����Ϣ��");
			num = -1;
		}
	}
	return num;
}
#endif


//10.
#if 0
void showmenu1(void);
void showmenu2(void);
void showmenu3(void);
void eatline(void);

int main(void)
{
	char choice;

	void (*function_p[3])(void) = { showmenu1,showmenu2,showmenu3 };//����һ������ָ�����顣

	puts("��ѡ��˵�ǰ����ĸ(����a��b��c)��");

	choice = getchar();
	choice = tolower(choice);//ʹ��C���tolower()

	eatline();
	while (strchr("abc", choice) == NULL)
	{
		puts("������a��b��c");
		choice = tolower(getchar());
		eatline();
	}

	switch (choice)
	{
	case 'a':
		function_p[0] = showmenu1;//����֮ǰ����ʼ����������Ժ���ָ�븳ֵ
		(*function_p[0])();
		break;
	case 'b':
		(*function_p[1])();
		break;
	case 'c':
		(*function_p[2])();
		break;
	default:
		exit(1);
	}
	return 0;
}
void showmenu1(void)
{
	puts("����һ���˵�a��");
}
void showmenu2(void)
{
	puts("����һ���˵�b��");
}
void showmenu3(void)
{
	puts("����һ���˵�c��");
}
void eatline(void)
{
	while (getchar() != '\n')
		continue;
}
#endif


//11.
#if 0
double transform(double* source, double* target, int num, double(*p)(double));
int main(void)
{
	double source[100] = { 1.0,2.0,3.0,4.0 };
	double target[100] = { 0.0 };
	int num = 100;

	double(*p)(double);
	p = sin;

	for (int i = 0; i < 4; i++)
		*(target + i) = transform(source, target, num, p);

	for (int i = 0; i < 4; i++)
		printf("%-5.2lf", *(target + i));

	//printf("%lf",sin(1.0));

	return 0;
}
double transform(double* source, double* target, int num, double(*p)(double))
{
	static int i = 0;//ֻ�ڱ���transform()ʱ����ʼ��һ��

	double jieguo[100] = { 0 };

	*(jieguo + i) = p(*(source + i));

	i++;

	return (*(jieguo + i - 1));//********ע��-1����Ҫд***************************
}
#endif
//transform()�޷���ֵ�İ汾���£�
#if 1
void transform(double* source, double* target, int num, double(*p)(double));
double zidinyi1(double x);
double zidinyi2(double y);

int main(void)
{
	double source[100];
	double target[100];
	int num = 100;
	int i;

	for (i = 0; i < num; i++)
	{
		source[i] = i;
	}

	puts("ԭ�����������£�");
	for (i = 0; i < num; i++)
	{
		printf("%8.2lf", source[i]);
		if (i % 6 == 5)
			putchar('\n');
	}
	if (i % 6 != 0)
		putchar('\n');

	transform(source, target, num, sin);//   double sin (double a)

	puts("Ŀ��������������(sin)��");
	for (i = 0; i < num; i++)
	{
		printf("%8.2lf", target[i]);
		if (i % 6 == 5)
			putchar('\n');
	}
	if (i % 6 != 0)
		putchar('\n');

	transform(source, target, num, cos);//   double cos (double a)

	puts("Ŀ��������������(cos)��");
	for (i = 0; i < num; i++)
	{
		printf("%8.2lf", target[i]);
		if (i % 6 == 5)
			putchar('\n');
	}
	if (i % 6 != 0)
		putchar('\n');

	transform(source, target, num, zidinyi1);//   �Զ��庯��1

	puts("Ŀ��������������(�Զ��庯��1)��");
	for (i = 0; i < num; i++)
	{
		printf("%8.2lf", target[i]);
		if (i % 6 == 5)
			putchar('\n');
	}
	if (i % 6 != 0)
		putchar('\n');

	transform(source, target, num, zidinyi2);//   �Զ��庯��2

	puts("Ŀ��������������(�Զ��庯��2)��");
	for (i = 0; i < num; i++)
	{
		printf("%8.2lf", target[i]);
		if (i % 6 == 5)
			putchar('\n');
	}
	if (i % 6 != 0)
		putchar('\n');

	return 0;
}
void transform(double* source, double* target, int num, double(*p)(double))
{
	for (int i = 0; i < num; i++)
	{
		*(target + i) = p(*(source + i));
	}

	return;
}
double zidinyi1(double m)
{
	double y;
	y = m * 1.1 + 1;
	return y;
}
double zidinyi2(double n)
{
	double y;
	y = n / 1.1 + 1;
	return y;
}
#endif
#endif


//chapter 15
//code1.c
#if 0
#include <stdio.h>
#include <limits.h>//�ṩ��ʾ����(Ҳ�з��ų���)CHAR_BIT ��char���͵�λ��
#include <stdlib.h>//exit()
//
#if 1
#endif


//��λ��������λ�߼������+��λ���������ʾ������ϴ洢��ʮ��������Ӧ�Ķ���������
#if 0
char* i_to_bs(int zhengshu, char* string);//����һ������ת���ɶ��������ĺ���(����������������ַ�������)���β���������ָ��char�͵�ָ�룬����ֵ�봫��ָ��ĵ�ֵַ��ͬ���Ա���Ϊprintf()�Ĳ�����
void show(int number, char* string);

int main(void)
{
	printf("��ϵͳ1�ֽڵ�λ��Ϊ%d\n", CHAR_BIT);
	printf("��ϵͳint������ռ%zd���ֽ�\n", sizeof(int));
	char erjinzhi[CHAR_BIT * sizeof(int) + 1];//CHAR_BIT*sizeof(int),�ó���ǰϵͳ�µ�int�������Ķ�����λ����8*4(��ϵͳ������1�ֽڵ�λ������int���ֽ���)������д�ĺô��ǿ���ֲ�ԡ�
																	//+1������'\0'�Ŀռ䣬���Ա�ϵͳ��erjinzhi����洢��Ԫ������33��
	int number;
	printf("������Ҫ��ʾΪ����������������");
	while (scanf("%d", &number) == 1)
	{
		i_to_bs(number, erjinzhi);
		show(number, erjinzhi);
	}

	return 0;
}
char* i_to_bs(int zhengshu, char* string)//��ʵzhengshu�����д�ľ��������������Ӧ�Ķ������������ں���Ҫ���������������ʾ����
{
	const static int size = CHAR_BIT * sizeof(int);

	for (int i = size - 1; i >= 0; i--, zhengshu >>= 1)
	{
		*(string + i) = (0x1 & zhengshu) + '0';//����������һ��Ԫ�ؿ�ʼ��ֵ		1 & zhengshu�����������һλ����������ֵ		+ '0'������ת�����ַ����ݺô����ַ�������
	}
	*(string + size) = '\0';//��ϵͳ��erjinzhi[32]='\0'

	return string;
}
void show(int number, char* string)
{
	printf("%d��Ӧ�Ķ����������ǣ�", number);

	int i = 0;

	while (string[i])
	{
		putchar(string[i]);

		i++;
		if (i % 4 == 0)
			putchar(' ');
	}

	putchar('\n');
}
#endif


//��λ��������λ�߼������+��λ��������л����������ĺ�nλ״̬
#if 0
char* i_to_bs(int zhengshu, char* string);//����һ������ת���ɶ��������ĺ���(����������������ַ�������)���β���������ָ��char�͵�ָ�룬����ֵ�봫��ָ��ĵ�ֵַ��ͬ���Ա���Ϊprintf()�Ĳ�����
void show(char* string);
int invert(int zhengshu, int bits);

int main(void)
{
	printf("��ϵͳ1�ֽڵ�λ��Ϊ%d\n", CHAR_BIT);
	printf("��ϵͳint������ռ%zd���ֽ�\n", sizeof(int));
	char erjinzhi[CHAR_BIT * sizeof(int) + 1];//CHAR_BIT*sizeof(int),�ó���ǰϵͳ�µ�int�������Ķ�����λ����8*4(��ϵͳ������1�ֽڵ�λ������int���ֽ���)������д�ĺô��ǿ���ֲ�ԡ�
																	//+1������'\0'�Ŀռ䣬���Ա�ϵͳ��erjinzhi����洢��Ԫ������33��
	int number;
	printf("������Ҫ��ʾΪ����������������");
	while (scanf("%d", &number) == 1)
	{
		i_to_bs(number, erjinzhi);
		printf("%d��Ӧ�Ķ����������ǣ�", number);
		show(erjinzhi);

		number = invert(number, 4);
		i_to_bs(number, erjinzhi);
		printf("���4λ�л���Ķ����������ǣ�", number);
		show(erjinzhi);
		//��дΪ��
		//show(i_to_bs(number, erjinzhi));
	}

	return 0;
}
char* i_to_bs(int zhengshu, char* string)//��ʵzhengshu�����д�ľ��������������Ӧ�Ķ������������ں���Ҫ���������������ʾ����
{
	const static int size = CHAR_BIT * sizeof(int);

	for (int i = size - 1; i >= 0; i--, zhengshu >>= 1)
	{
		*(string + i) = (0x1 & zhengshu) + '0';//����������һ��Ԫ�ؿ�ʼ��ֵ		1 & zhengshu�����������һλ����������ֵ		+ '0'������ת�����ַ����ݺô����ַ�������
	}
	*(string + size) = '\0';//��ϵͳ��erjinzhi[32]='\0'

	return string;
}
void show(char* string)
{
	int i = 0;

	while (string[i])
	{
		putchar(string[i]);

		i++;
		if (i % 4 == 0)
			putchar(' ');
	}

	putchar('\n');
}
int invert(int zhengshu, int bits)
{
	int mask = 0;
	int wei = 1;

	while (bits > 0)						//ʹmask�ĺ�bits��λ��Ϊ1��
	{
		mask |= wei;
		wei <<= 1;

		bits--;
	}

	return (zhengshu ^ mask);//�л�zhengshu���������ݵ����4λ��ֵ
}
#endif


//ʹ��λ�ֶ�
#if 0
struct									//����һ���ṹ�����Ա��4��1λ���ֶ�
{
	unsigned int autfd : 1;
	unsigned int bldfc : 1;
	unsigned int undln : 1;
	unsigned int itals : 1;
}prnt;									//�ṹ����prnt��������4��1λ���ֶ�
int main(void)
{
	prnt.autfd = 0;
	prnt.bldfc = 1;
	prnt.undln = 0;
	prnt.itals = 1;

	printf("%d %d %d %d\n", prnt.autfd, prnt.bldfc, prnt.undln, prnt.itals);
	printf("sizeof(prnt) = %d\n", sizeof(prnt));
	printf("ʮ����: %d\n", prnt);

	//�����0 1 0 1
	//           sizeof(prnt) = 4
	//	          ʮ����: 10
	//���Կ���prnt�Ķ�����ֵ��0000 0000 0000 0000 0000 0000 000 1010��
	//**********���Ա�ϵͳ���ֶδ洢��int�е�˳���Ǵ�������****************
	//********************��ϵͳ�ѵ�һλ�ֶ��������λ**************

	return 0;
}
#endif


//�����������λ������һ��unsigned int���͵Ĵ�С��4 bytes�������
#if 0
struct
{
	unsigned a : 4;
	unsigned b : 4;
	unsigned c : 4;
	unsigned d : 25;
}prnt;								//λ�ֶδ�С��37bits
int main(void)
{
	prnt.a = 15;//��0xF
	prnt.b = 0;
	prnt.c = 15;
	prnt.d = 0x1FFFFFF;

	printf("0x%x %d %d 0x%x\n", prnt.a, prnt.b, prnt.c, prnt.d);
	printf("sizeof(prnt) = %d\n", sizeof(prnt));

	//�����
	//������ 32 - 63λ��0000 0001 1111 1111 1111 1111 1111 1111
	//������ 0 - 31λ��  0000 0000 0000 0000 0000 1111 0000 1111

	//������Ľ�����Կ��������ȣ�prnt�Ĵ�СΪ8���ֽڣ���Σ�������ǿ��prnt.d�ֶη����߽���룬��prnt.dλ�ڵڶ���unsigned int�ϣ�
	// prnt.c��prnt.d֮������δ�����ġ�������
	//ʵ���ϣ�����Ҳ������Ϊ���ڽṹ�嵱������δ�������ֶο����������䡣

	return 0;
}
#endif


//��Ϊ���ڽṹ�嵱������δ�������ֶο����������䡣
#if 0
struct {
	unsigned field1 : 1;
	unsigned : 2;							//ʹ��һ�����Ϊ2��δ�������ֶ������field1��field2�ֶ�֮���"����(��϶)��
	unsigned field2 : 1;
	unsigned : 0;							//ʹ��һ�����Ϊ0��δ�������ֶ���ʹ��һ���ֶ�����һ���������롣
	unsigned field3 : 4;
} stuff;

int main(void)
{
	stuff.field1 = 1;
	stuff.field2 = 1;
	stuff.field3 = 0xf;

	printf("0x%x %d %d \n", stuff.field1, stuff.field2, stuff.field3);
	printf("sizeof(prnt) = %d\n", sizeof(stuff));

	//�����
	//������ 32 - 63λ�� 0000 0000 0000 0000 0000 0000 0000 1111
	//������ 0 - 31λ��   0000 0000 0000 0000 0000 0000 0000 1001

	//Ҳ����˵�������stuff.field1��stuff.field2֮�䣬��һ��2λ�Ŀ�϶��stuff.field3��ǿ������һ���������룬�洢����һ��unsigned	int�С�
	//stuff�Ĵ�СΪ8���ֽڡ�

	return 0;
}
#endif


//��ֵ�����ֶο�������ֵ��Χ�����
#if 0
struct {
	unsigned field1 : 1;
	unsigned field2 : 2;
	unsigned field3 : 4;
} stuff;

int main(void)
{
	stuff.field1 = 1;
	stuff.field2 = 7;//��0111
	stuff.field3 = 0xf;

	printf("0x%x %d %d \n", stuff.field1, stuff.field2, stuff.field3);
	printf("sizeof(prnt) = %d\n", sizeof(stuff));

	//�����
	//stuff.field2ֵΪ0011�����ض��˳����Ĳ���

	return 0;
}
#endif


//���岢ʹ��λ�ֶ�
#if 0
//�ߵ���ʽ
#define SHIXIAN		 0//ʵ��
#define DIANXIAN		 1//����
#define XUXIAN			 2//����

//��ԭɫ
#define BLUE				 4 //����100
#define GREEN			 2//�̣�010					//���Ա�ϵͳ���ֶδ洢��int�е�˳���Ǵ����������Ե�ʱ�򿴶�����ʱ����Ӧ���Ǻ�����
#define RED				 1//�죺001

//���ɫ
#define BLACK			 0
#define YELLOW		 (RED|GREEN)//��3
#define PURPLE			 (RED|BLUE)
#define CYAN			 (GREEN|BLUE)
#define WHITE			 (RED|GREEN|BLUE)

struct fangkuang//�������� 
{
	unsigned int opaque : 1;//͸����͸��
	unsigned int fill_color : 3;//���ɫ
	unsigned int : 4;

	unsigned int biankuang : 1;//�߿�ɼ�������
	unsigned int biankuang_color : 3;//���ɫ
	unsigned int biankuang_style : 2;//�ߵ���ʽ
	unsigned int : 2;
};
void show_settings(const struct fangkuang* p);

int main(void)
{
	struct fangkuang box = { 1,YELLOW,1,GREEN,XUXIAN };

	printf("����ԭ���ԣ�\n");
	show_settings(&box);

	return 0;
}
void show_settings(const struct fangkuang* p)
{
	printf("����%s", p->opaque == 1 ? "͸��" : "��͸��");

	const char* colors[8] = { "BLACK","RED","GREEN","YELLOW","BLUE","PURPLE","CYAN","WHITE" };
	printf(" ��ɫ��%s", *(colors + (p->fill_color)));//color��ָ���ָ��

	printf(" �߿�%s", p->biankuang == 1 ? "�ɼ�" : "���ɼ�");

	printf(" ��ɫ��%s", colors[p->biankuang_color]);		  //***���ֱ�ʾ����***

	printf(" �ߵ���ʽ��");

	switch (p->biankuang_style)
	{
	case SHIXIAN:
		printf("ʵ��");
		break;
	case DIANXIAN:
		printf("����");
		break;
	case XUXIAN:
		printf("����");
		break;
	default:
		exit(1);
	}

	//�ܽ᣺
	//��ʾ����һ��ֻ��0��1��ʾ����Ϣ�������������������
	//��ʾ����������0��1��2���������ʾ����Ϣ��������switch��䡣
	//��ʾ����������0��1��2������������ʾ��Ϣ��������ָ�����飬ÿ��ָ��ָ��һ���ַ�����
}
#endif


//�����ϣ��Ƚ�λ�ֶκͰ�λ����������ַ���
#if 0
/*λ�ֶ�ʹ�õķ��ų���*/
//�ߵ���ʽ
#define SHIXIAN		 0//ʵ��
#define DIANXIAN		 1//����
#define XUXIAN			 2//����

//��ԭɫ
#define RED				 1//�죺001
#define GREEN			 2//�̣�010					//���Ա�ϵͳ���ֶδ洢��int�е�˳���Ǵ����������Ե�ʱ�򿴶�����ʱ����Ӧ���Ǻ�����
#define BLUE				 4 //����100

//���ɫ
#define BLACK			 0
#define YELLOW		 (RED|GREEN)//��3
#define PURPLE			 (RED|BLUE)
#define CYAN			 (GREEN|BLUE)
#define WHITE			 (RED|GREEN|BLUE)

/*��λ�����ʹ�õķ��ų���*/
#define OPAQUE				0x1
#define RED_ANWEI			0x2//���һλ��͸����͸����������ɫҪ�ӵ����ڶ�λ��ʼ��ռ�õ���2~4λ
#define GREEN_ANWEI		0x4
#define BLUE_ANWEI		0x8


struct fangkuang//�������� 
{
	unsigned int opaque : 1;//͸����͸��
	unsigned int fill_color : 3;//���ɫ
	unsigned int : 4;

	unsigned int biankuang : 1;//�߿�ɼ�������
	unsigned int biankuang_color : 3;//���ɫ
	unsigned int biankuang_style : 2;//�ߵ���ʽ
	unsigned int : 2;
};																										    //��32λ

union fangfa
{
	struct fangkuang box_weiziduan;//λ�ֶη�
	unsigned int box_anwei;				//��λ�������(unsigned int Ҳ��32λ)
};

void show_settings1(const struct fangkuang* p);
void show_settings2(const unsigned);
char* i_to_bs(int zhengshu, char* string);
void show(char* string);

int main(void)
{

	//struct fangkuang box_weiziduan = { 1,YELLOW,1,GREEN,XUXIAN };//��ʼ���ṹ��Ա
																														//�൱��û����union��װ���ǾͲ�����ͬһ���ڴ�ռ�����λ�ֶκͰ�λ��������ַ����鿴��Ա�������ˡ�

	/*�������ϳ�ʼ������*/
	union fangfa box = { { 1,YELLOW,1,GREEN,XUXIAN } };//��ʼ������
	//union fangfa box = { .box_weiziduan={ 1,YELLOW,1,GREEN,XUXIAN } };//��ʼ������

	char erjinzhi[33];//��д[CHAR_BIT*sizeof(int)+1]

	printf("����ԭ���ԣ�\n");
	show_settings1(&box.box_weiziduan);
	printf("����ԭ������unsigned int �鿴��\n");
	show_settings2(box.box_anwei);

	//printf("�ö�������ʾ���ݣ�%s", i_to_bs(box.box_weiziduan,erjinzhi));//**��Ч**
	//printf("�ö�������ʾ���ݣ�%s", i_to_bs(box.box_anwei,erjinzhi));		  //��Ч

	i_to_bs(box.box_anwei, erjinzhi);
	printf("�ö�������ʾ���ݣ�");
	show(erjinzhi);

	return 0;
}
void show_settings1(const struct fangkuang* p)
{
	printf("����%s", p->opaque == 1 ? "͸��" : "��͸��");

	const char* colors[8] = { "BLACK","RED","GREEN","YELLOW","BLUE","PURPLE","CYAN","WHITE" };
	printf(" ��ɫ��%s", *(colors + (p->fill_color)));			  //color��ָ���ָ��

	printf(" �߿�%s", p->biankuang == 1 ? "�ɼ�" : "���ɼ�");

	printf(" ��ɫ��%s", colors[p->biankuang_color]);		  //***���ֱ�ʾ����***

	printf(" �ߵ���ʽ��");

	switch (p->biankuang_style)
	{
	case SHIXIAN:
		printf("ʵ��");
		break;
	case DIANXIAN:
		printf("����");
		break;
	case XUXIAN:
		printf("����");
		break;
	default:
		exit(1);
	}
	putchar('\n');

	//�ܽ᣺
	//��ʾ����һ��ֻ��0��1��ʾ����Ϣ�������������������
	//��ʾ����������0��1��2���������ʾ����Ϣ��������switch��䡣
	//��ʾ����������0��1��2���������ʾ����Ϣ��������ָ�����飬ÿ��ָ��ָ��һ���ַ�����
}
void show_settings2(const unsigned  shuju)
{
	printf("����%s", shuju & OPAQUE == 1 ? "͸��" : "��͸��");//��1λ��͸����͸��

	const char* colors[8] = { "BLACK","RED","GREEN","YELLOW","BLUE","PURPLE","CYAN","WHITE" };
	printf(" ��ɫ��%s", *(colors + (shuju >> 1 & 0x7)));//��2~4λ����ɫ		//color��ָ���ָ��

	printf(" �߿�%s", (shuju >> 8 & 0x1) == 1 ? "�ɼ�" : "���ɼ�");//��δ�����ֶο��4����4����϶������9λ��ɼ��򲻿ɼ�
	//������#define BIANKUANG 0x100   Ȼ����λ  (shuju&BIANKUANG)==BIANKUANG? "�ɼ�" : "���ɼ�"

	printf(" ��ɫ��%s", colors[(shuju >> 9 & 0x7)]);//��10~12λ����ɫ

	printf(" �ߵ���ʽ��");

	switch (shuju >> 12 & 0x3)//��13~14λ���ߵ���ʽ
	{
	case SHIXIAN:
		printf("ʵ��");
		break;
	case DIANXIAN:
		printf("����");
		break;
	case XUXIAN:
		printf("����");
		break;
	default:
		exit(1);
	}
	//��������P439

	putchar('\n');
}
char* i_to_bs(int zhengshu, char* string)//��ʵzhengshu�����д�ľ��������������Ӧ�Ķ������������ں���Ҫ���������������ʾ����
{
	const static int size = CHAR_BIT * sizeof(int);

	for (int i = size - 1; i >= 0; i--, zhengshu >>= 1)
	{
		*(string + i) = (0x1 & zhengshu) + '0';//����������һ��Ԫ�ؿ�ʼ��ֵ		1 & zhengshu�����������һλ����������ֵ		+ '0'������ת�����ַ����ݺô����ַ�������
	}
	*(string + size) = '\0';//��ϵͳ��erjinzhi[32]='\0'

	return string;
}
void show(char* string)
{
	int i = 0;

	while (string[i])
	{
		putchar(string[i]);

		i++;
		if (i % 4 == 0)
			putchar(' ');
	}

	putchar('\n');
}
#endif


//ʹ��_Alignof��_Alignas(�˱�������֧��)
#endif


//chapter 15
//code2.c
#if 0
#include <stdio.h>


#if 0
//��ϰ��
//7.a
struct muban1							//�����������ṹλ�ֶΣ����ѵ�һλ�ֶ��������λ��
{
	unsigned int ruanpan : 2;
	unsigned int : 1;
	unsigned int CD_ROM : 2;
	unsigned int : 1;
	unsigned int yinban : 2;
};
//7.b
struct muban2							//�����������ṹλ�ֶΣ����ѵ�һλ�ֶ��������λ��
{
	unsigned int yinban : 2;
	unsigned int : 1;
	unsigned int CD_ROM : 2;
	unsigned int : 1;
	unsigned int ruanpan : 2;
};
#endif
#endif


//chapter 15
//code3.c
#if 0
#include <stdio.h>
#include <limits.h>//�ṩ��ʾ����(Ҳ�з��ų���)CHAR_BIT ��char���͵�λ��
#include <stdlib.h>//exit()
#include <string.h>//strchr()
#include <ctype.h>//tolower()
//
#if 1
#endif


//�����ϰ
//1.
#if 0
int b_to_i(const char* string);
int main(void)
{
	char* pbin = "01001001";

	int num = b_to_i(pbin);

	printf("%d", num);

	return 0;
}
//��һ���ӵ�λ����λ�ۼ�
int b_to_i(const char* string)
{
	int num = 0;
	int length = strlen(string);
	int weiquan = 1;									 //���������ݵ�0��λ��λȨ

	for (int index = length - 1; index >= 0; index--)
	{
		int temp = *(string + index) - '0';  //�õ�ÿλ��0����1

		num += temp * weiquan;

		weiquan *= 2;
	}

	return num;
}
//�������Ӹ�λ����λ�ۼ�
# if 0
int b_to_i(const char* string)
{
	int num = 0;

	while (*string != '\0')				//������110�������λ1����ѭ����num=1����1��λ����ѭ����num=3����0��λ����ѭ����num=6
	{												//ͨ��ѭ��ʹÿһλ�ϵ�ֵ����������2
		num *= 2;
		num += *string - '0';
		string++;
	}

	return num;
}
#endif
#endif


//2.
#if 0
int b_to_i(const char* string);
char* i_to_bs(int zhengshu, char* string);//��ʵzhengshu�����д�ľ��Ƕ������������ں���Ҫ���������������ʾ����
void show(char* string);

int main(int argc, char** argv)
{
	if (argc != 3)
	{
		puts("Erroe !");
		exit(EXIT_FAILURE);
	}

	int shuju1, shuju2;

	shuju1 = b_to_i(argv[1]);//�ַ�����ʾ�Ķ���������ת��Ϊ�����ϴ�Ķ���������
	shuju2 = b_to_i(argv[2]);

	int temp1, temp2;
	temp1 = ~shuju1;
	temp2 = ~shuju2;

	char erjinzhi1[33];
	char erjinzhi2[33];

	i_to_bs(temp1, erjinzhi1);//�����ϴ�Ķ�����ת�����ַ�����ʾ���������ݣ��Դ�����ӡ����ʾ����
	i_to_bs(temp2, erjinzhi2);

	printf("��һ����������ȡ����");
	show(erjinzhi1);
	printf("�ڶ�����������ȡ����");
	show(erjinzhi2);

	temp1 = shuju1 & shuju2;
	i_to_bs(temp1, erjinzhi1);
	printf("��һ������������ڶ��������ƽ���&�����");
	show(erjinzhi1);

	temp1 = shuju1 | shuju2;
	i_to_bs(temp1, erjinzhi1);
	printf("��һ������������ڶ��������ƽ���|�����");
	show(erjinzhi1);

	temp1 = shuju1 ^ shuju2;
	i_to_bs(temp1, erjinzhi1);
	printf("��һ������������ڶ��������ƽ���^�����");
	show(erjinzhi1);

	return 0;
}
int b_to_i(const char* string)
{
	int num = 0;
	int length = strlen(string);
	int weiquan = 1;									 //λȨ

	for (int index = length - 1; index >= 0; index--)
	{
		int temp = *(string + index) - '0';  //�õ�ÿλ��0����1

		num += temp * weiquan;

		weiquan *= 2;
	}

	return num;
}
char* i_to_bs(int zhengshu, char* string)//��ʵzhengshu�����д�ľ��Ƕ������������ں���Ҫ���������������ʾ����
{
	const static int size = CHAR_BIT * sizeof(int);

	for (int i = size - 1; i >= 0; i--, zhengshu >>= 1)
	{
		*(string + i) = (0x1 & zhengshu) + '0';//����������һ��Ԫ�ؿ�ʼ��ֵ		1 & zhengshu�����������һλ����������ֵ		+ '0'������ת�����ַ����ݺô����ַ�������
	}
	*(string + size) = '\0';//��ϵͳ��erjinzhi[32]='\0'

	return string;
}
void show(char* string)
{
	int i = 0;

	while (string[i])
	{
		putchar(string[i]);

		i++;
		if (i % 4 == 0)
			putchar(' ');
	}

	putchar('\n');
}
//���������У�D:\CODE\C_CODE\C Primer Plus Code practice\chapter 15\code3\Project3\x64\Debug
//Project3.exe 01001001 00000001
#endif


//3.
#if 0
int dakaiwei_shuliang(int);
int main(void)
{
	int num;
	int fanhuizhi;

	printf("������һ��������");
	scanf("%d", &num);

	fanhuizhi = dakaiwei_shuliang(num);
	printf("��%dλ", fanhuizhi);

	return 0;
}
int dakaiwei_shuliang(int num)
{
	int count = 0;

	for (int i = 0; i < 32; i++, num >>= 1)							//i��ʾ���ڴ�����ǵ�x��λ
	{
		if (num & 0x1 == 1)
			count++;
	}

	return count;
}
#endif


//4.
#if 0
int panduanwei(int, int);
int main(void)
{
	int num;
	int position;
	int fanhuizhi;

	printf("������һ��������");
	scanf("%d", &num);
	printf("������һ��ָ����λ��λ�ţ�");
	scanf("%d", &position);

	fanhuizhi = panduanwei(num, position);
	printf("%s", fanhuizhi == 1 ? "��λΪ1" : "��λΪ0");

	return 0;
}
int panduanwei(int num, int position)
{
	int fanhui = 0;

	num >>= position;

	if ((num & 0x1) == 1)
		fanhui = 1;

	return fanhui;
}
//�������ȸ���λ��λ�ã����ú����룬������λ�߼�������ļ��λֵ�Ĺ��ܣ��Ը�λ�õ�ֵ���м��
#endif


//5.
#if 0
unsigned int rotate_l(unsigned int x, int zuoyi);
char* i_to_bs(int zhengshu, char* string);
void show(char* string);

int main(void)
{
	unsigned int num;
	char erjinzhi[33];

	printf("������һ���Ǹ�������");
	scanf("%d", &num);
	i_to_bs(num, erjinzhi);
	printf("��������Ӧ�Ķ����������ǣ�\n");
	show(erjinzhi);

	printf("������Ҫѭ�����Ƶ�λ��������");
	int zuoyi;
	scanf("%d", &zuoyi);

	unsigned int fanhui = rotate_l(num, zuoyi);
	i_to_bs(fanhui, erjinzhi);
	printf("������ѭ������%dλ���Ӧ�Ķ����������ǣ�\n", zuoyi);
	show(erjinzhi);

	return 0;
}
//��һ��Ҫ�ƶ���λ���Ͱ������ļ�λ��ֵ��������int���͵ı������У����ԭ�����ƶ��ú�����������а�λ�����㡣
unsigned int rotate_l(unsigned int x, int zuoyi)
{
	//int temp[zuoyi+1];//��Ч
	//int* temp =(int *) malloc(zuoyi*sizeof());//�޷�����һ��ָ��ָ��λ���ͣ����Բ���malloc()

	unsigned int y, temp1, temp2;
	y = x;														//x��ֵ�ȿ���һ�ݸ�y
	temp2 = 0;

	for (int i = 0; i < zuoyi; i++, y <<= 1)
	{
		temp1 = y;
		temp1 &= 0x80000000;					//1000 0000 0000 0000 0000 0000 0000 0000
		//temp2 |= temp1 >> (31 - i);			//���������������1000��Ҫ�ƶ�4λ����temp2�Ҳ���0001

		temp1 >>= 31;									//�Ȱ����λ��ֵ�Ƶ����λ
		temp2 |= temp1 << (zuoyi - i - 1);			//*********************ע*************************************************************************
	}																//���ƶ�2λ����������1λ��������0λ�������������1000��Ҫ�ƶ�4λ����temp2�Ҳ���1000

	x <<= zuoyi;
	x |= temp2;

	return x;
}
//�����������Ƴ������λ��ֵ��1����0����ת����ͬ�ķ�֧��䡣
#if 0
unsigned int rotate_l(unsigned int x, int zuoyi)
{
	for (int i = 0; i < zuoyi; i++)
	{
		if (x & 0x80000000)//���ж����λ��ֵ		��дΪ��if(x&(1<<31))
		{
			x <<= 1;
			x |= 1;
		}
		else
			x <<= 1;
	}

	return x;
}
#endif
char* i_to_bs(int zhengshu, char* string)
{
	const static int size = CHAR_BIT * sizeof(int);

	for (int i = size - 1; i >= 0; i--, zhengshu >>= 1)
	{
		*(string + i) = (0x1 & zhengshu) + '0';//����������һ��Ԫ�ؿ�ʼ��ֵ		1 & zhengshu�����������һλ����������ֵ		+ '0'������ת�����ַ����ݺô����ַ�������
	}
	*(string + size) = '\0';//��ϵͳ��erjinzhi[32]='\0'

	return string;
}
void show(char* string)
{
	int i = 0;

	while (string[i])
	{
		putchar(string[i]);

		i++;
		if (i % 4 == 0)
			putchar(' ');
	}

	putchar('\n');
}
//unsigned int ��ϵͳ��32λ�洢����Χ��0~4294967295�����Գ�������ֿ�����2294967295
#endif


//6.
#if 0
struct ziticanshu								//�������
{
	unsigned int ziti_id : 8;				//0~7��λ����Χ0~255
	unsigned int ziti_daxiao : 7;		//8~14��λ����Χ0~127
	unsigned int : 1;							//15��λ(����16λ)��δ�����ֶ����϶
	unsigned int duiqi : 2;				//16~17��λ����Χ0~3
	unsigned int jiacu : 1;				//18��λ����Χ0~1
	unsigned int xieti : 1;					//19��λ����Χ0~1
	unsigned int xiahuaxian : 1;		//20��λ����Χ0~1
};

const char* duiqi[3] = { "left","center","right" };
void show_attribute(struct ziticanshu* xinxi);
char get_choice(void);
void change_size(struct ziticanshu* xinxi);
void change_alignment(struct ziticanshu* xinxi);
void change_font(struct ziticanshu* xinxi);

int main(void)
{
	struct ziticanshu attribute = { 1,12,0,0,0,0 };
	show_attribute(&attribute);
	char choice = get_choice();

	int count = 0;//�����������д�������ֵ����ż�Կ��������л�����״̬
	while (choice != 'q')
	{
		switch (choice)
		{
		case 's':
			change_size(&attribute);
			break;
		case 'a':
			change_alignment(&attribute);
			break;
		case 'b':
			count % 2 == 0 ? (attribute.jiacu = 1) : (attribute.jiacu = 0);//*****ע*****���ű���Ҫ��

			//������**********һλ���ݿ���ֱ��ʹ�÷��߼������************
			/*attribute.jiacu = !attribute.jiacu;*/
			break;
		case 'i':
			count % 2 == 0 ? (attribute.xieti = 1) : (attribute.xieti = 0);//*****ע*****���ű���Ҫ��
			break;
		case 'u':
			count % 2 == 0 ? (attribute.xiahuaxian = 1) : (attribute.xiahuaxian = 0);//*****ע*****���ű���Ҫ��
			break;
		case 'f':
			change_font(&attribute);
			break;
		}
		count++;

		show_attribute(&attribute);
		choice = get_choice();
	}
	return 0;
}
void show_attribute(struct ziticanshu* xinxi)
{
	puts("ID   SIZE   ALIGNMENT     B     I     U");
	printf("%d      %d   %s         %s   %s   %s\n\n", xinxi->ziti_id, xinxi->ziti_daxiao, duiqi[xinxi->duiqi],
		xinxi->jiacu == 0 ? "off" : "on", xinxi->xieti == 0 ? "off" : "on", xinxi->xiahuaxian == 0 ? "off" : "on");

	puts("f)change font  s)change size    a)change alignment ");
	puts("b)toggle bold  i)toggle italic  u)toggle underline ");
	puts("q)quit ");
}
char get_choice(void)
{
	char choice;
	scanf("%c", &choice);
	while (getchar() != '\n')
		continue;

	while (strchr("abfiqsuABFIQSU", choice) == NULL)
	{
		printf("�����������������룡");
		scanf("%c", &choice);
		while (getchar() != '\n')
			continue;
	}

	return tolower(choice);
}
void change_size(struct ziticanshu* xinxi)
{
	int num;

	printf("Enter font size (0-127) :");
	scanf("%d", &num);
	while (getchar() != '\n')
		continue;

	num = num & 0x7f;							//����ֵ���޸�Ϊ1��7λ����
	xinxi->ziti_daxiao = num;
}
void change_alignment(struct ziticanshu* xinxi)
{
	char choice;
	printf("Select alignment :");
	printf("l)left  c)center  r)right\n");

	scanf("%c", &choice);
	while (getchar() != '\n')
		continue;

	while (strchr("lcr", choice) == NULL)
	{
		printf("�����������������룡");
		scanf("%c", &choice);
		while (getchar() != '\n')
			continue;
	}
	choice = tolower(choice);

	switch (choice)
	{
	case 'l':
		xinxi->duiqi = 0;
		break;
	case 'c':
		xinxi->duiqi = 1;
		break;
	case 'r':
		xinxi->duiqi = 2;
		break;
	default:
		printf("Error !");
		exit(1);
	}
}
void change_font(struct ziticanshu* xinxi)
{
	int num;

	printf("Enter font ID (0-255) :");
	scanf("%d", &num);
	while (getchar() != '\n')
		continue;

	num = num & 0xff;							//����ֵ���޸�Ϊ1��8λ����
	xinxi->ziti_id = num;
}
#endif


//7.
#if 0
const char* duiqi[3] = { "left","center","right" };
void show_attribute(unsigned long* xinxi);
char get_choice(void);
void change_size(unsigned long* xinxi);
void change_alignment(unsigned long* xinxi);
void change_font(unsigned long* xinxi);

int main(void)
{
	unsigned long attribute = 0;
	attribute |= 0x1;													 //[0000 0000]			ID
	attribute |= 0xc00;						     // 0[000 1100] 0000 0000			SIZE
	attribute |= 0x00000;				//[00] 0000 0000 0000 0000			����
	attribute |= 0x000000;			  //[0]00 0000 0000 0000 0000			�Ӵ�
													//[0]000 0000 0000 0000 0000			б��
												 //[0] 0000 0000 0000 0000 0000			�»���
	show_attribute(&attribute);
	char choice = get_choice();

	while (choice != 'q')
	{
		switch (choice)
		{
		case 's':
			change_size(&attribute);
			break;
		case 'a':
			change_alignment(&attribute);
			break;
		case 'b':
			attribute ^= 0x40000;//�л�λ
			break;
		case 'i':
			attribute ^= 0x80000;
			break;
		case 'u':
			attribute ^= 0x100000;
			break;
		case 'f':
			change_font(&attribute);
			break;
		}

		show_attribute(&attribute);
		choice = get_choice();
	}
	return 0;
}
void show_attribute(unsigned long* xinxi)
{
	puts("ID   SIZE   ALIGNMENT     B     I     U");
	printf("%d      %d   %s         %s   %s   %s\n\n", *xinxi & 0xff, (*xinxi & 0x7f00) >> 8, duiqi[(*xinxi & 0x3ffff) >> 16],
		(*xinxi & 0x4ffff) >> 18 == 0 ? "off" : "on", (*xinxi & 0x8ffff) >> 19 == 0 ? "off" : "on", (*xinxi & 0x1fffff) >> 20 == 0 ? "off" : "on");

	puts("f)change font  s)change size    a)change alignment ");
	puts("b)toggle bold  i)toggle italic  u)toggle underline ");
	puts("q)quit ");
}
char get_choice(void)
{
	char choice;
	scanf("%c", &choice);
	while (getchar() != '\n')
		continue;

	while (strchr("abfiqsuABFIQSU", choice) == NULL)
	{
		printf("�����������������룡");
		scanf("%c", &choice);
		while (getchar() != '\n')
			continue;
	}

	return tolower(choice);
}
void change_size(unsigned long* xinxi)
{
	int num;

	printf("Enter font size (0-127) :");
	scanf("%d", &num);
	while (getchar() != '\n')
		continue;

	num = num & 0x7f;							//����ֵ���޸�Ϊ1��7λ����

	num <<= 8;

	*xinxi &= ~(0x7f00);							//������
	*xinxi |= num;										//����λ
}
void change_alignment(unsigned long* xinxi)
{
	char choice;
	printf("Select alignment :");
	printf("l)left  c)center  r)right\n");

	scanf("%c", &choice);
	while (getchar() != '\n')
		continue;

	while (strchr("lcr", choice) == NULL)
	{
		printf("�����������������룡");
		scanf("%c", &choice);
		while (getchar() != '\n')
			continue;
	}
	choice = tolower(choice);

	switch (choice)
	{
	case 'l':
		*xinxi &= ~(0x30000);
		break;
	case 'c':
		*xinxi &= ~(0x30000);					//������
		*xinxi |= 0x10000;							//����λ
		break;
	case 'r':
		*xinxi &= ~(0x30000);
		*xinxi |= 0x20000;
		break;
	default:
		printf("Error !");
		exit(1);
	}
}
void change_font(unsigned long* xinxi)
{
	int num;

	printf("Enter font ID (0-255) :");
	scanf("%d", &num);
	while (getchar() != '\n')
		continue;

	num = num & 0xff;							//����ֵ���޸�Ϊ1��8λ����

	*xinxi &= ~(0xff);
	*xinxi |= num;
}
#endif
#endif


//chapter 16
//code1.c
#if 0
#include <stdio.h>
//
#if 1
#endif


//�����������á�����Ԥ����֮ǰ�Գ�����з��룬��1.�ַ�ӳ�䵽Դ�ַ���2.ɾ����б��+[Enter]��ʵ��3.���ı����ֳ���������
#if 0
int/*�⿴��������һ���ո�*/ceshi;
int main(void)
{
	printf("����һ��\
���ı�");

	return 0;
}
#endif


//#defineԤ����ָ����÷�
#if 0
#define TWO 2
#define FOUR TWO*TWO
#define DAYIN1 printf("X��ֵΪ%d\n",X)
#define DAYIN2 "X��ֵ��%d\n"
const char* p = "X��ֵ��%d\n";
#define MINYAN "consistency is the last refuge of the unimag\
native"																													//��б��+[Enter]�Ѹö������쵽��һ��

int main(void)
{
	int X = TWO;
	DAYIN1;

	X = FOUR;
	printf(DAYIN2, X);			//��һ
	printf(p, X);						//����


	printf("%s\n", MINYAN);
	printf("TWO:MINYAN\n");

	return 0;
}
#endif


//ʹ�ô������ĺ�
#if 0
#define SQUARE(X)				X*X
#define DAYIN(X)					printf("����ǣ�%d\n",X)

int main(void)
{
	int x = 5;
	int z;

	printf("x=%d\n", x);
	z = SQUARE(x);
	printf("SQUARE(x) :");
	DAYIN(z);

	z = SQUARE(2);
	printf("SQUARE(2) :");
	DAYIN(z);


	printf("SQUARE(x+2) :");
	DAYIN(SQUARE(x + 2));				//��չ����x+2*x+2=17

	printf("100/SQUARE(2) :");
	DAYIN(100 / SQUARE(2));			//��չ����100/2*2=100

	printf("x=%d\n", x);
	printf("SQUARE(++x) :");
	DAYIN(SQUARE(++x));				//��չ����++x  *  ++x   ��ֵ��δ������Ϊ

	printf("������x=%d\n", x);

	return 0;
}
#endif


//��#������Ѻ��β��滻Ϊʵ���ַ���������ַ������
#if 0
#define DAYIN(x)			printf("����"#x"��ƽ���ǣ�%d\n",((x)*(x)))
#define DAYIN1(x)			printf("����#x��ƽ���ǣ�%d\n",((x)*(x)))				//******ע******   #x����Ϊ��ͨ�ı��������Ǹ����滻�ļǺ�

int main(void)
{
	int y = 5;

	DAYIN(y);
	DAYIN(2 + 4);

	DAYIN1(y);

	return 0;
}
#endif


//��##������Ѻ��β��滻Ϊʵ�κ���мǺ����
#if 0
#define X(n)							x##n
#define DAYIN_X(n)				printf("x"#n"=%d\n",x##n)

int main(void)
{
	int X(1) = 1;							//��int x1=1;
	int X(2) = 2;

	DAYIN_X(1);						//��printf("x1=%d\n",x1);
	DAYIN_X(2);

	return 0;
}
#endif


//ʹ�ñ�κ�
#if 0
#include <math.h>
#define 	DAYIN(X,...)				printf("Message "#X": "__VA_ARGS__)

int main(void)
{
	double x = 8;
	double y;

	y = sqrt(x);
	DAYIN(66, "x=%g\n", x);
	DAYIN(67, "y=%.2lf\n", y);

	return 0;
}
#endif


//ʹ���������������C����
#if 0
#define JUST_CHECKING
#define LIMIT   4

int main(void)
{
	int total = 0;

	for (int i = 0; i < LIMIT; i++)
	{
		total += 2 * i;
#ifdef JUST_CHECKING
		printf("i=%d, total=%d\n", i, total);
#endif
	}

	printf("total=%d\n", total);

	return 0;
}
#endif


//Ԥ������Ԥ�����ʶ��__func__
#if 0
#line 1																//��������Ϣ������һ���к�Ϊ1
void function(void);

int main(void)
{
	//printf("C��׼��%ld\n", __STDC_VERSION__);

	printf("�ļ���Ϊ%s\n", __FILE__);

	printf("������%s\n", __DATE__);
	printf("ʱ����%s\n", __TIME__);

	printf("���е��к���%d\n", __LINE__);
	printf("����ִ�еĺ�����%s\n", __func__);
	function();

	return 0;
}
void function(void)
{
	printf("���е��к���%d\n", __LINE__);
	printf("����ִ�еĺ�����%s\n", __func__);
}
#endif


//����ѡ����ʽ(��IDE��֧��)
#if 0
#define GENERIC(X)			_Generic((X),\
			int:"int",\
			float:"float",\
			double:"double",\
			default:"other"\
)

int main(void)
{
	int num = 5;

	printf("%s\n", GENERIC(num));
	printf("%s\n", GENERIC(2.0 * num));
	printf("%s\n", GENERIC((long)num));
	printf("%s\n", GENERIC(&num));				//&num������int*

	return 0;
}
#endif


//ʹ����������
#if 0
inline static double square(double x);

int main(void)
{
	double num = 5.0;
	printf("%.2lf", square(num));

	return 0;
}
double square(double x)
{
	return (x * x);
}
#endif


//��ֱ������ת���ɼ����꣨���ݲ����ؽṹ����
#if 0
#include <math.h>
#define RAD_TO_DEG				(180/(4*atan(1)))				//����ת���ɽǶȵĹ�ʽ
typedef struct
{
	double jijin;					//����
	double jijiao;					//����(�Ƕ���)
}JIZUOBIAO;
typedef struct
{
	double x;
	double y;
}ZHIJIAOZUOBIAO;

JIZUOBIAO zhuanhuan(ZHIJIAOZUOBIAO zhijiaozuobiao);

int main(void)
{
	ZHIJIAOZUOBIAO input;																	//�ṹ1
	JIZUOBIAO result;																				//�ṹ2

	puts("������ֱ��������x��y��ֵ(����q���˳�)��");
	while (scanf("%lf%lf", &input.x, &input.y) == 2)
	{
		result = zhuanhuan(input);
		printf("������%.2lf		���ǣ�%.2lf\n", result.jijin, result.jijiao);
		puts("������ֱ��������x��y��ֵ(����q���˳�)��");
	}

	return 0;
}
JIZUOBIAO zhuanhuan(ZHIJIAOZUOBIAO zhijiaozuobiao)				//�ṹ3
{
	JIZUOBIAO temp;																				//�ṹ4
	temp.jijin = sqrt(zhijiaozuobiao.x * zhijiaozuobiao.x + zhijiaozuobiao.y * zhijiaozuobiao.y);
	//temp.jijiao = RAD_TO_DEG * atan2(zhijiaozuobiao.x,zhijiaozuobiao.y);  //����Ӧ��Ϊy���ֵ����x���ֵ
	temp.jijiao = RAD_TO_DEG * atan2(zhijiaozuobiao.y, zhijiaozuobiao.x);

	return temp;
}
#endif


//��ֱ������ת���ɼ����꣨���ݽṹ��ַ����
#if 0
#include <math.h>
#define RAD_TO_DEG				(180/(4*atan(1)))				//����ת���ɽǶȵĹ�ʽ
typedef struct
{
	double jijin;					//����
	double jijiao;					//����(�Ƕ���)
}JIZUOBIAO;
typedef struct
{
	double x;
	double y;
}ZHIJIAOZUOBIAO;

void zhuanhuan(ZHIJIAOZUOBIAO* zhijiaozuobiao, JIZUOBIAO* jizuobiao);

int main(void)
{
	ZHIJIAOZUOBIAO input;
	JIZUOBIAO result;

	puts("������ֱ��������x��y��ֵ(����q���˳�)��");
	while (scanf("%lf%lf", &input.x, &input.y) == 2)
	{
		zhuanhuan(&input, &result);
		printf("������%.2lf		���ǣ�%.2lf\n", result.jijin, result.jijiao);
		puts("������ֱ��������x��y��ֵ(����q���˳�)��");
	}

	return 0;
}
void zhuanhuan(ZHIJIAOZUOBIAO* zhijiaozuobiao, JIZUOBIAO* jizuobiao)
{
	jizuobiao->jijin = sqrt(zhijiaozuobiao->x * zhijiaozuobiao->x + zhijiaozuobiao->y * zhijiaozuobiao->y);
	jizuobiao->jijiao = RAD_TO_DEG * atan2(zhijiaozuobiao->y, zhijiaozuobiao->x);

	return;
}
#endif


//���÷���ѡ����ʽ�����巺���ຯ����
#if 0
#define RAD_TO_DEG				(180/(4*atan(1)))
#define SQRT(X)				_Generic((X),\
					long double :sqrtl,\
					default:sqrt,\
					float:sqrtf)(X)

#define SIN(X)				_Generic((X),\
					long double :sinl((X)/RAD_TO_DEG),\
					default:sin((X)/RAD_TO_DEG),\
					float:sinf((X)/RAD_TO_DEG))
#endif


//ʹ��atexit()
#if 0
#include <stdlib.h>

void sign_off(void);
void too_bad(void);

int main(void)
{
	int n;

	atexit(sign_off);//ע��sign_off()������sign_off�Ǻ���ָ��
	puts("������һ��������");
	if (scanf("%d", &n) != 1)
	{
		puts("�ⲻ��������");
		atexit(too_bad);//ע��too_bad()����
		exit(EXIT_FAILURE);//ִ�е��˴�ʱ����Ϊ�Ѿ�ע����sign_off��too_bad������exit()����µ���(�����ȳ�)��ִ����Щ����
	}
	printf("%d��%s\n", n, (n % 2) == 0 ? ("ż��") : ("����"));

	return 0;						//	������ִ��������ʽ����exit()
}
void sign_off(void)
{
	puts("�����˳�");
}
void too_bad(void)
{
	puts("������;�˳�");
}
#endif


//ʹ��qsort()��������һ������
#if 0
#include <stdlib.h>
#include <time.h>

#define SIZE 40
void fill_array(double* p, int n);
void show_array(const double* p, int n);
int mycompare(const void* p1, const void* p2);
int main(void)
{
	double shuzu[SIZE];
	srand((unsigned int)time(0));			/* ������� */
	fill_array(shuzu, SIZE);

	puts("�����е����������");
	show_array(shuzu, SIZE);

	qsort(shuzu, SIZE, sizeof(double), mycompare);

	puts("�����е������������ɺ�����");
	show_array(shuzu, SIZE);

	return 0;
}
void fill_array(double* p, int n)
{
	for (int index = 0; index < n; index++)
	{
		*(p + index) = (double)rand() / ((double)rand() + 0.1);
	}
}
void show_array(const double* p, int n)
{
	int index;
	for (index = 0; index < n; index++)
	{
		printf("%6.2lf", *(p + index));

		if (index % 6 == 5)
			putchar('\n');
	}
	if (index % 6 != 0)
		putchar('\n');
}
int mycompare(const void* p1, const void* p2)
{
	//��һ��
		//if (*((const double*)p1) < *((const double*)p2))
		//	return -1;
		//else if (*((const double*)p1) == *((const double*)p2))
		//	return 0;
		//else
		//	return 1;

	//������
	const double* a1 = (const double*)p1;
	const double* a2 = (const double*)p2;
	if (*a1 < *a2)
		return -1;
	else if (*a1 == *a2)
		return 0;
	else
		return 1;
}
#endif


//ʹ��assert()
#if 0
#include <math.h>
#include <assert.h>
//#define NDEBUG

int main(void)
{
	double x, y, z;

	puts("������һ������(����0 0���˳�����)��");
	while (scanf("%lf%lf", &x, &y) == 2 && (x != 0 || y != 0))
	{
		z = x * x - y * y;
		assert(z >= 0);//�Ա��ʽ��ֵ����Ϊ�٣�����ֹ���򣬲���ʾ��������к�
		printf("���ǣ�%.2lf\n", sqrt(z));
	}

	return 0;
}
#endif


//ʹ��_Static_assert()   (��IDE��֧��)
#if 0
#include <math.h>
#include <limits.h>
_Static_assert(CHAR_BIT == 16, "�����һ�ֽڵ�λ��");

int main(void)
{
	double x, y, z;

	puts("������һ������(����0 0���˳�����)��");
	while (scanf("%lf%lf", &x, &y) == 2 && (x != 0 || y != 0))
	{
		z = x * x - y * y;
		printf("���ǣ�%.2lf\n", sqrt(z));
	}

	return 0;
}
#endif


//ʹ��memcpy()��memmove()
#if 0
#include <string.h>
#define SIZE 10

void show_array(const int* p, int n);

int main(void)
{
	int source[SIZE] = { 1,2,3,4,5,6,7,8,9,10 };
	int target[SIZE];

	double ceshi[SIZE / 2] = { 1.0,2.0,3.0,4.0,5.0 };

	puts("ʹ��memcpy()��");
	puts("Դ�ַ��������ݣ�");
	show_array(source, SIZE);

	memcpy(target, source, SIZE * sizeof(int));
	puts("Ŀ���ַ��������ݣ�");
	show_array(target, SIZE);

	puts("\nʹ��memmove()�������ڴ��������ص����������");
	memmove(target + 2, target, 5 * sizeof(int));
	puts("Ŀ���ַ�����ĵ�1��5��Ԫ�ؿ�����Ŀ������ĵ�3��7��Ԫ�أ�");
	show_array(target, SIZE);

	return 0;
}
void show_array(const int* p, int n)
{
	for (int index = 0; index < n; index++)
	{
		printf("%5d", *(p + index));
	}
	putchar('\n');
}
#endif


//��κ���
#if 0
#include <stdarg.h>
double sum(int lim, ...);							//1.����ԭ������һ���βκ�һ��ʡ�Ժ�

int main(void)
{
	double result1, result2;

	result1 = sum(3, 1.1, 2.5, 13.3333333);
	result2 = sum(6, 1.1, 2.1, 13.1, 4.1, 5.1, 6.1);

	printf("sum(3,1.1,2.5,13.3)=				%g\n", result1);
	printf("sum(6, 1.1, 2.1, 13.1,4.1,5.1,6.1)=		%g\n", result2);

	return 0;
}
double sum(int lim, ...)							//lim��parmN�βΣ���ֵΪ�����ʵ�ε�����
{
	va_list ap;											//2.����һ���洢ʡ�ԺŲ��ֵ����ݶ���ap
	va_start(ap, lim);									//3.ʵ�ε����ݿ�����ap(��ap��ʼ��Ϊ�����б�)

	double total = 0;
	for (int i = 0; i < lim; i++)
		total += va_arg(ap, double);			//4.���ʲ����б������

	va_end(ap);											//5.�ú����������(�ͷŶ�̬��������ڴ洢�������ڴ�)

	return total;
}
#endif
#endif


//chapter 16
//code2.c
#if 0
#include <stdio.h>
//
#if 1
#endif


//��ϰ��
//2.(�޸�ǰ)
#if 0
#define NEW(X)			X+5
int main(void)
{
	int y = 1, berg = 2, lob = 3, est, nilp;
	printf(" y = %d, berg = %d, lob = %d\n", y, berg, lob);
	y = NEW(y);
	printf(" y = %d\n", y);

	berg = NEW(berg) * lob;						//berg=2+5*3
	printf(" berg = %d\n", berg);

	est = NEW(berg) / NEW(y);					//17+5/6+5
	printf(" est = %d\n", est);

	nilp = lob * NEW(-berg);						//3*-17+5=-46
	printf(" nilp = %d\n", nilp);

	return 0;
}
#endif
//2.(�޸ĺ�)
#if 0
#define NEW(X)			((X)+5)
int main(void)
{
	int y = 1, berg = 2, lob = 3, est, nilp;
	printf(" y = %d, berg = %d, lob = %d\n", y, berg, lob);
	y = NEW(y);
	printf(" y = %d\n", y);

	berg = NEW(berg) * lob;						//berg=(2+5)*3
	printf(" berg = %d\n", berg);

	est = NEW(berg) / NEW(y);					//(21+5)/(6+5)
	printf(" est = %d\n", est);

	nilp = lob * NEW(-berg);						//3*(-21+5)=-48
	printf(" nilp = %d\n", nilp);

	return 0;
}
#endif


//3.
#if 0
#define	MIN(X,Y)			((X)>(Y))?(Y):(X)
#endif
//3.����
#if 0
#define	MIN(X,Y)			(	(X)>(Y)?(Y):(X)	  )
#endif


//4.
#if 0
#define EVEN_GT(X,Y)		(	(	(X)%2==0	)&&(	 (X)>(Y) 	)	)?1:0
#endif
//4.����
#if 0
#define EVEN_GT(X,Y)		(      (	(X)%2==0	)&& (  (X)>(Y) ?1:0	 )   	)
#endif


//5.
#if 0
#define PRINT(X,Y)				printf(#X" is %d and "#Y" is %d",X,Y)
int main(void)
{
	PRINT(3 + 4, 4 * 12);

	return 0;
}
#endif


//6.
#if 0
#define SIZE					25
#define SPACE				' '
#define PS()					putchar(' ')
#define BIG(X)				((X)+3)
#define SUMSQ(X,Y)		((X)*(X)+(Y)*(Y))
#endif


//7.
#if 0
#define PRINT(X)				printf("name: "#X"; value: %d; address: %p",X,&X)
int main(void)
{
	int fop = 23;
	PRINT(fop);

	return 0;
}
#endif


//9.
#if 0
#define PR_DATE		printf("�����ǣ�%s",__DATE__)

int main(void)
{
#ifdef PR_DATE
	PR_DATE;
#endif
	return 0;
}
#endif
//������
#if 0
#define PR_DATE	

int main(void)
{
#ifdef PR_DATE
	printf("�����ǣ�%s", __DATE__);
#endif
	return 0;
}
#endif


//11.
#if 0
#define MYTYPE(X)			_Generic((X),\
_Bool:"boolean",\
default:"not boolean")
#endif


//13.
#if 0
#include <stdlib.h>//srand(),qsort() 
#include <time.h>

#define SIZE 1000
void fill_array(int* p, int num);
void show_array(int* p, int num);
int mycompare(void* p1, void* p2);

int main(void)
{
	int shuzu[SIZE];
	srand((unsigned int)time(0));			/* ������� */

	fill_array(shuzu, SIZE);

	puts("�����е����������");
	show_array(shuzu, SIZE);

	qsort(shuzu, SIZE, sizeof(int), mycompare);

	puts("�����е������������ɺ�����");
	show_array(shuzu, SIZE);

	return 0;
}
void fill_array(int* p, int num)
{
	for (int index = 0; index < num; index++)
	{
		*(p + index) = (int)rand() % 1000 + 1;//ֵ������1��1000
	}
}
void show_array(int* p, int num)
{
	int index;
	for (index = 0; index < num; index++)
	{
		printf("%6d", *(p + index));

		if (index % 6 == 5)
			putchar('\n');
	}
	if (index % 6 != 0)
		putchar('\n');
}
int mycompare(void* p1, void* p2)
{
	const int* a1 = (const int*)p1;
	const int* a2 = (const int*)p2;

	if (*a1 < *a2)										//Ҫ��������
		return 1;
	else if (*a1 == *a2)
		return 0;
	else
		return -1;
}
#endif


//14.
#if 0
#include <string.h>
#include <stdlib.h>
#define SIZE 300
void fill_array(double* p, int num);
void show_array(const double* p, int n);

int main(void)
{
	double data1[SIZE / 3];
	double data2[SIZE];

	srand((double)time(0));			/* ������� */
	fill_array(data2, SIZE);

	puts("data2�������ݣ�");
	show_array(data2, SIZE);

	puts("��data2��ǰ100��Ԫ�ؿ�����data1�У�");
	memcpy(data1, data2, SIZE / 3 * sizeof(double));
	puts("data1�������ݣ�");
	show_array(data1, SIZE / 3);
	puts("��data2�ĺ�100��Ԫ�ؿ�����data1�У�");					//*****ע*****��100��Ԫ�ؼ���201����300��Ԫ��
	memcpy(data1, data2 + 200, SIZE / 3 * sizeof(double));     //data2+200Ҳ��д��&data2[200]
	puts("data1�������ݣ�");
	show_array(data1, SIZE / 3);

	return 0;
}
void fill_array(double* p, int num)
{
	for (int index = 0; index < num; index++)
	{
		*(p + index) = (double)rand() / 1000.0 + 1;
	}
}
void show_array(const double* p, int n)
{
	int index;
	for (index = 0; index < n; index++)
	{
		printf("%8.2lf", *(p + index));

		if (index % 6 == 5)
			putchar('\n');
	}
	if (index % 6 != 0)
		putchar('\n');
}
#endif
#endif


//chapter 16
//code3.c
#if 0
#include "touwenjian.h"
//
#if 1
#endif


//�����ϰ
//1.
#if 0
int main(void)
{
	printf("touwenjian.h�а�����stdio.hͷ�ļ�\n");

	return 0;
}
#endif


//2.
#if 0
#define TIAOHE_PINJUNSHU(X,Y)			(	2*(x)*(y)	)/(		 (x)+(y)	)			
//������
//#define TIAOHE_PINJUNSHU(X,Y)			(	1/(	(1/(x)+1/(y)	)	/2		)	)

int main(void)
{
	double x, y, result;

	printf("������x��y��ֵ(����0 0���˳�����)��");
	while (scanf("%lf%lf", &x, &y) == 2 && (x != 0 || y != 0))
	{
		result = TIAOHE_PINJUNSHU(x, y);
		printf("%.2lf��%.2lf�ĵ���ƽ������%.2lf\n", x, y, result);
		printf("������x��y��ֵ(����0 0���˳�����)��");
	}

	return 0;
}
#endif


//3.
#if 0
#include <math.h>
#define DEG_TO_RAD				((4*atan(1))/180)				//�Ƕ�ת���ɻ��ȵĹ�ʽ
typedef struct
{
	double jijin;					//����
	double jijiao;					//����(�Ƕ���)
}JIZUOBIAO;
typedef struct
{
	double x;
	double y;
}ZHIJIAOZUOBIAO;

ZHIJIAOZUOBIAO zhuanhuan(JIZUOBIAO jizuobiao);

int main(void)
{
	JIZUOBIAO input;																							//�ṹ1
	ZHIJIAOZUOBIAO result;																				//�ṹ2

	puts("�����뼫������������ģ�ͽǶ�(��λ����)��ֵ(����q���˳�)��");
	while (scanf("%lf%lf", &input.jijin, &input.jijiao) == 2)
	{
		result = zhuanhuan(input);
		printf("x���꣺%.2lf		y���꣺%.2lf\n", result.x, result.y);
		puts("�����뼫������������ģ�ͽǶ�(��λ����)��ֵ(����q���˳�)��");
	}

	return 0;
}
ZHIJIAOZUOBIAO zhuanhuan(JIZUOBIAO jizuobiao)									//�ṹ3
{
	ZHIJIAOZUOBIAO temp;																				//�ṹ4
	temp.x = jizuobiao.jijin * cos(jizuobiao.jijiao * DEG_TO_RAD);
	temp.y = jizuobiao.jijin * sin(jizuobiao.jijiao * DEG_TO_RAD);

	return temp;
}
#endif


//4.
#if 0
#include <time.h>

void delay(double time);
int main(void)
{
	double time;

	printf("������Ҫ��ʱ��ʱ��(��λ����)��");
	scanf("%lf", &time);
	delay(time);
	printf("\n��ʱ����ɣ�\n");

	return 0;
}
void delay(double time)
{
	double clock_start = (double)clock();
	int i;

	while (((double)clock() - clock_start) / CLOCKS_PER_SEC < time)//CLOCKS_PER_SEC��ÿ���Ӵ�����ʱ�ӵδ����(ÿ���Ӵ�������ʱ�䵥λ������)
	{
		for (i = 0; i < 0xfff; i++)
			continue;
	}
}
//������
#if 0
void delay(double a)
{
	double s = (double)clock();
	double f = 0;
	while ((a - f) > 0.00000001)
	{
		f = ((double)clock() - s) / CLOCKS_PER_SEC;
	}
	printf("%.10lf s have passed\n", f);
}
//https ://blog.csdn.net/asdgyy/article/details/82973533
#endif
#endif
//	*****ע*****
//Ҳ����ʹ��Sleep(1000);							//��ʱ1000����		//ǰ�᣺#include <windows.h>


//5.
#if 0
#include <stdlib.h>//srand(),qsort() 
#include <time.h>	  //time()
#include <stdlib.h>//malloc()
#define SIZE 6
void dayin(int* p, int num, int cishu);
int main(void)
{
	int shuzu[SIZE] = { 5,10,15,20,25,30 };

	int cishu;
	printf("������ѡȡ����(1~6)��");
	while (scanf("%d", &cishu) == 1)
	{
		if (cishu < 1 || cishu>6)
		{
			printf("����������ѡȡ����(1~6)��");
			continue;
		}
		srand((int)time(0));
		dayin(shuzu, SIZE, cishu);
	}

	return 0;
}
//��һ����Ԫ�ظ���Ϊcishu��ֵ��temp���������ֵ(������ֵ)��Ȼ���ж��Ƿ����ظ���ֵ�����������¸�ֵ
//����ֵ֮��һ���Դ�ӡ��Ϣ
#if 0
void dayin(int* p, int num, int cishu)
{
	int* temp = (int*)malloc(cishu * sizeof(int));//�ö�̬�ڴ���䣬����temp[cishu]

step1:	for (int index = 0; index < cishu; index++)
{
	*(temp + index) = ((int)rand() % num);//����ֵ������0��num(��SIZE��ֵ)
	//printf("%3d", *(temp + index));	//���ֵ
}

//putchar('\n');

int index1, index2, biaoji = 0;
for (index1 = 0; index1 < cishu - 1; index1++)//���������е�Ԫ�أ������ظ�ֵ�������1
{
	for (index2 = index1 + 1; index2 < cishu; index2++)
		if (*(temp + index1) == *(temp + index2))
			biaoji = 1;
}

if (biaoji)
goto step1;

printf("����ֵ�����ս����\n");
for (int index = 0; index < cishu; index++)
{
	printf("%3d", *(temp + index));
}
putchar('\n');

printf("��������ѡ�����ֵΪ��\n");
for (int index = 0; index < cishu; index++)
{
	printf("%3d", *(p + *(temp + index)));
}
putchar('\n');

free(temp);
}
#endif
//��������Ԫ�ظ���Ϊnum��ֵ��biaoji���������ֵ(������ֵ)��biaoji��������ֵ��Ӧ��Ԫ��ֵ��1��Ȼ���´θ�ֵʱ
//�жϸ�������ֵ��Ӧ��Ԫ��ֵ�Ƿ�Ϊ1����Ϊ1�����¸�ֵ(������ֵ)
//ÿ��һ��ֵ��ӡһ����Ϣ(Ҳ���Ը���ֵ֮��һ���Դ�ӡ��Ϣ)
#if 1
void dayin(int* p, int num, int cishu)
{
	int* biaoji = (int*)malloc(num * sizeof(int));//�ö�̬�ڴ���䣬����biaoji[num]

	for (int i = 0; i < num; i++)
		*(biaoji + i) = 0;											//biaoji����Ԫ����ȫ����Ϊ0��������ô�����������ж�Ϊ����ֵ

	int index;

	while (cishu > 0)
	{
		index = rand() % num;

		if (biaoji[index] != 0)									//������biaoji�����ж�����ֵ�Ƿ��ѱ�ʹ��
			continue;
		else
			biaoji[index] = 1;

		//ÿ��һ��ֵ��ӡһ����Ϣ
		//printf("ѡ�������ֵ��%d	��ֵΪ%d��\n",index,*(p+index));

		cishu--;
	}

	//����ֵ֮��һ���Դ�ӡ��Ϣ
	for (int i = 0; i < num; i++)
	{
		if (biaoji[i] == 1)
			printf("ѡ�������ֵ��%d	��ֵΪ%d��\n", i, *(p + i));
	}

	free(biaoji);
}
#endif
#endif


//6.
#if 0
#include <stdlib.h>
#include <string.h>// strcmp()
#define SIZE 40
struct names
{
	char first[SIZE];
	char last[SIZE];
};
void show(const struct names* p, int n);
int mycompare(const void* p1, const void* p2);
int main(void)
{
	struct names staff[6] = {
		{"Aaa","Bbb"},
		{"Baa","Bbb"},
		{"Daa","Bbb"},
		{"Zaa","Abb"},
		{"Baa","Abb"},
		{"Aaa","Cbb"},
	};

	puts("�ṹ�����е���������");
	show(staff, 6);

	qsort(staff, 6, sizeof(struct names), mycompare);

	puts("�ṹ�����е�����������ɺ�����");
	show(staff, 6);

	return 0;
}
void show(const struct names* p, int n)
{
	int index;
	for (index = 0; index < n; index++)
	{
		printf("%-6s%-6s\n", (p + index)->first, (p + index)->last);
	}

}
int mycompare(const void* p1, const void* p2)
{
	const struct names* a1 = (const struct names*)p1;
	const struct names* a2 = (const struct names*)p2;

	int a;
	if (a = strcmp(a1->last, a2->last))//�ȱȽ���
	{
		if (a == 1)
			return 1;
		else
			return -1;
		//������
		//return a;
	}
	return strcmp(a1->first, a2->first);//��Ƚ���
}
#endif


//7.
#if 0
#include <stdlib.h>
#include <stdarg.h>
void show_array(const double* ar, int n);
double* new_d_array(int n, ...);

int main(void)
{
	double* p1;
	double* p2;

	p1 = new_d_array(5, 1.2, 2.3, 3.4, 4.5, 5.6);
	p2 = new_d_array(4, 100.0, 20.00, 8.08, -1890.0);

	show_array(p1, 5);
	show_array(p2, 4);

	free(p1);
	free(p2);

	return 0;
}
void show_array(const double* ar, int n)
{
	for (int i = 0; i < n; i++)
	{
		printf(" %-9.2lf", *(ar + i));
	}
	putchar('\n');
}
double* new_d_array(int n, ...)				//1.����ԭ�͡�������������һ���βκ�һ��ʡ�Ժ�
{
	double* p = (double*)malloc(n * sizeof(double));

	va_list temp;										//2.����һ���洢ʡ�ԺŲ��ֵ����ݶ���temp
	va_start(temp, n);								//3.ʵ�ε����ݿ�����temp(��temp��ʼ��Ϊ�����б�)

	for (int i = 0; i < n; i++)
		*(p + i) = va_arg(temp, double);		//4.���ʲ����б������

	va_end(temp);										//5.�ú����������(�ͷŶ�̬��������ڴ洢�������ڴ�)

	return p;
}
#endif
#endif


//chapter 17
//code1.c
#if 0
#include <stdio.h>
#include <string.h>//strchr()
//
#if 1
#endif


//��17��
//�����嵥17.1		ʹ�ýṹ�������洢����
#if 0
#define LENGTH	45   //�洢ӰƬƬ������󳤶�
#define MAX			500//�洢ӰƬ���������

struct film
{
	char title[LENGTH];
	int rating;
};
char* s_gets(char* string, int num);

int main(void)
{
	struct film movies[MAX];
	int jishu = 0;

	puts("�������Ӱ�ı��⣺");
	while (jishu < MAX && s_gets(movies[jishu].title, LENGTH) != NULL && movies[jishu].title[0] != '\0')
	{
		puts("��������������(0-10)��");
		scanf("%d", &movies[jishu].rating);

		while (getchar() != '\n')
			continue;

		jishu++;
		puts("��������һ����Ӱ�ı���(����^Z��������˳�)��");
	}

	puts("�����ǵ�ӰĿ¼��");
	for (int index = 0; index < jishu; index++)
		printf("��Ӱ��:%-20s��Ӱ����:%d\n", movies[index].title, movies[index].rating);

	return 0;
}
char* s_gets(char* string, int num)
{
	char* fanhui;
	char* find;

	fanhui = fgets(string, num, stdin);

	if (fanhui)
	{
		if (find = strchr(string, '\n'))
			*find = '\0';
		else
		{
			while (getchar() != '\n')
				continue;
		}
	}

	return fanhui;
}
#endif


//ʹ�ýṹ�Ͷ�̬�ڴ���䣬��ʡ����ʱʹ�õ��ڴ�ռ�
#if 0
#include <stdlib.h>//malloc()

#define LENGTH	45//�洢ӰƬƬ������󳤶�

struct film
{
	char title[LENGTH];
	int rating;
};
char* s_gets(char* string, int num);

int main(void)
{
	int max;
	printf("��������Ҫд��ĵ�Ӱ����\n");
	scanf("%d", &max);

	while (getchar() != '\n')
		continue;

	struct film* movies = (struct film*)malloc(max * sizeof(struct film));
	//����movies[max]ָ�����飬�ں�max��ָ�룬����ָ��film�ṹ���ֵ�ָ��
	int jishu = 0;

	puts("�������Ӱ�ı��⣺");
	while (jishu < max && s_gets((*(movies + jishu)).title, LENGTH) != NULL && movies[jishu].title[0] != '\0')
	{
		puts("��������������(0-10)��");
		scanf("%d", &movies[jishu].rating);

		while (getchar() != '\n')
			continue;

		jishu++;
		puts("��������һ����Ӱ�ı���(����^Z��������˳�)��");
	}

	puts("�����ǵ�ӰĿ¼��");
	for (int index = 0; index < jishu; index++)
		printf("��Ӱ��:%-20s��Ӱ����:%d\n", movies[index].title, movies[index].rating);

	return 0;
}
char* s_gets(char* string, int num)
{
	char* fanhui;
	char* find;

	fanhui = fgets(string, num, stdin);

	if (fanhui)
	{
		if (find = strchr(string, '\n'))
			*find = '\0';
		else
		{
			while (getchar() != '\n')
				continue;
		}
	}

	return fanhui;
}
#endif


//�����嵥17.2		ʹ�ýṹ��������ʾ����
#if 0
#include <stdlib.h>//malloc()

#define LENGTH 45

struct film
{
	char title[LENGTH];
	int rating;
	struct film* next;															//1.�������½ṹʱ�����԰Ѹýṹ�ĵ�ַ�洢����һ���ṹ��
};

char* s_gets(char* string, int num);

int main(void)
{
	struct film* head = NULL;												//2.��Ҫһ��������ָ��洢��һ���ṹ�ĵ�ַ(��ͷָ��)
	struct film* previous = 0x00, * current;							//3.����һ����film�ṹ���ֵĽṹ����previous��current������previous��ʼ��

	char input[LENGTH];
	puts("�������Ӱ�ı��⣺");
	while (s_gets(input, LENGTH) != NULL && input[0] != '\0')
	{
		current = (struct film*)malloc(sizeof(struct film));	//4.���û��������ݵ���ʱ�洢��(input����)�������һ���ṹ�Ŀռ䣬
																							//	�����ýṹ�ĵ�ַ�����ṹָ��current
		if (head == NULL)														//5.�ж���������ǵ�һ���ṹ����ѵ�һ���ṹ�ĵ�ַ����ͷָ��
			head = current;
		else
			previous->next = current;							  	    //6.������Ĳ��ǵ�һ���ṹ����ṹָ��previousָ���next��Ա(nextҲ�Ǹ��ṹָ��)�浱ǰ����Ľṹ�ĵ�ַ

		current->next = NULL;												//7.��ʾ��ǰ�ṹ����������һ���ṹ
		strcpy(current->title, input);

		puts("��������������(0-10)��");
		scanf("%d", &current->rating);

		while (getchar() != '\n')
			continue;

		puts("��������һ����Ӱ�ı���(����^Z��������˳�)��");
		previous = current;												    //8.previousָ��ǰ�ṹ�ĵ�ַ����currentҪΪ��һ����������׼��(���ڴ����·���Ľṹ�ĵ�ַ)
	}																						//*****ע*****��6.�͵�8.��Ӧ��������6.�е�previous->next���е�previous
																							//��������һ�η����½ṹʱ����ǰ�ṹ����Ϊ�½ṹ����һ���ṹ

	/****************
	//��һ���ṹ��������head���һ���ṹ�ĵ�ַ��												   ��һ���ṹ��next��Ա����ΪNULL���������ݺ󣬵�һ���ṹ�ĵ�ַ����previous��
	//�ڶ����ṹ��������previous(����һ���ṹ)��next��Ա��ڶ����ṹ�ĵ�ַ���ڶ����ṹ��next��Ա����ΪNULL���������ݺ󣬵ڶ����ṹ�ĵ�ַ����previous��
	//�������ṹ��������previous(���ڶ����ṹ)��next��Ա��������ṹ�ĵ�ַ���������ṹ��next��Ա����ΪNULL���������ݺ󣬵������ṹ�ĵ�ַ����previous
																																																									   ****************/

	if (head == NULL)
		printf("���������룡\n");
	else
		puts("�����ǵ�ӰĿ¼��");

	current = head;																//9.�ýṹָ��current��ͷ��ʼ��������
	while (current != NULL)
	{
		printf("��Ӱ��:%-20s��Ӱ����:%d\n", current->title, current->rating);
		current = current->next;
	}

	current = head;
	while (current != NULL)
	{
		head = current->next;												//10.current���head���ͷ��ڴ�
		free(current);
		current = head;
	}

	return 0;
}
char* s_gets(char* string, int num)
{
	char* fanhui;
	char* find;

	fanhui = fgets(string, num, stdin);

	if (fanhui)
	{
		if (find = strchr(string, '\n'))
			*find = '\0';
		else
		{
			while (getchar() != '\n')
				continue;
		}
	}

	return fanhui;
}
#endif


//���������͵ķ�������3����ɴӳ��󵽾���Ĺ���
//1.�ṩ�������Ժ���ز����ĳ�������(���������ADT)
//2.��дһ��ʵ��ADT�ı�̽ӿ�(����list.h��ָ����δ洢���ݺ�ִ����������ĺ���)
//3.��д������ʵ�ֽӿ�(����list.c��)����д������ʹ�ýӿ�(��main.c��)��
#if 0
//�����嵥17.4		*****�ѽӿ�Ӧ�����ض���������Դ�����ļ�*****
#include <stdlib.h.>//exit()
#include <stdbool.h>
#include "list.h"

void showmovies(Item item);

char* s_gets(char* string, int num);

int main(void)
{
	P_Node movies;//����һ��ָ��Node�ṹ���ֵ�ָ��movies

	Item temp;//����һ��film�ṹ���ֵĽṹtemp

//��ʼ�������ͷָ��
	InitializeList(&movies);
	if (ListIsFull(&movies))
	{
		fprintf(stderr, "�������������Ѵﵽ���ֵ��");
		exit(1);
	}

	//��ȡ�û����벢�洢
	puts("�������Ӱ�ı��⣺");
	while (s_gets(temp.title, LENGTH) != NULL && temp.title[0] != '\0')
	{
		puts("��������������(0-10)��");
		scanf("%d", &temp.rating);

		while (getchar() != '\n')
			continue;

		if (AddItem(temp, &movies) == false)
		{
			fprintf(stderr, "���󣬷����ڴ�ʧ�ܣ�");
			break;
		}
		if (ListIsFull(&movies))
		{
			puts("���������Ѵﵽ���ֵ��");
			break;
		}

		puts("��������һ����Ӱ�ı���(����^Z��������˳�)��");
	}

	//��ʾ
	if (ListIsEmpty(&movies))
		printf("û���������룡\n");
	else
	{
		printf("�����ǵ�ӰĿ¼\n");
		Traverse(&movies, showmovies);
	}
	printf("��������%d����Ӱ\n", ListItemCount(&movies));

	//����
	EmptyTheList(&movies);
	printf("�ټ���\n");

	return 0;
}
void showmovies(Item item)
{
	printf("��Ӱ��:%-20s��Ӱ����:%d\n", item.title, item.rating);
}
char* s_gets(char* string, int num)
{
	char* fanhui;
	char* find;

	fanhui = fgets(string, num, stdin);

	if (fanhui)
	{
		if (find = strchr(string, '\n'))
			*find = '\0';
		else
		{
			while (getchar() != '\n')
				continue;
		}
	}

	return fanhui;
}
#endif


//�����嵥17.8		����ADT
#if 0
#include <stdio.h>
#include "queue.h"

int main(void)
{
	Queue line;
	Item shuju;//queue.h�и�Ϊtypedef int Item;
	char choice;

	InitializeQueue(&line);
	puts("**********���Խӿ�**********");
	puts("����a��������ݣ�����d��ɾ�����ݣ�����q�˳�����");

	while ((choice = getchar()) != 'q')
	{
		if (choice != 'a' && choice != 'd')
			continue;

		if (choice == 'a')
		{
			printf("������Ҫ��ӵ��������ݣ�\n");
			scanf("%d", &shuju);
			if (!QueueIsFull(&line))
			{
				printf("��������д���%d\n", shuju);
				AddQueue(shuju, &line);
			}
			else
				printf("����������\n");
		}

		else if (choice == 'd')
		{
			if (QueueIsEmpty(&line))
				puts("����Ϊ�գ��޷�ɾ�����ݣ�");
			else
			{
				DeQueue(&shuju, &line);
				printf("�ڶ��еĵ�һ���ڵ�ɾ�������ݣ�%d\n", shuju);
			}
		}

		printf("�����д���%d������\n", QueueItemCount(&line));
		puts("����a��������ݣ�����d��ɾ�����ݣ�����q�˳�����");
	}

	EmptyTheQueue(&line);
	puts("�ټ���");

	return 0;
}
#endif


//�����嵥17.9		�ö��а���ģ�� 	��ѯSigmund�Ĺ˿�	����
#if 0
#include <stdio.h>
#include "queue.h"
#include <time.h>//time()
#include <stdlib.h>//srand()��rand()

#define MIN_PER_HOUR	60.0

bool newcustomer(double x);//�Ƿ����¹˿͵���
Item customertime(long when);//���ù˿Ͳ���

int main(void)
{
	Queue line;//����һ���˿Ͷ���
	int hours;//ģ���Сʱ��
	int customers_per_hour;//ƽ��ÿСʱ�Ĺ˿�����

	long cyclelimit;//ѭ��������������
	double min_per_customers;//ƽ��ÿ���˿͵�������ʱ��

	int cycle;//ѭ��������
	int turnaways = 0;//����нڵ����������ܵĹ˿�����
	int customers = 0;//������еĹ˿�����
	Item temp;//��ʱ������Ŀ(�˿Ͳ���)

	int wait_process_finished_time = 0;//��ǰ����ȴ��˿���ѯ��ϵ�ʱ��
	int in_queue_wait_time = 0;//������Ĺ˿��ڶ������ۼƵȴ���ʱ��
	int served = 0;//����Ĺ˿�����
	int sum_nodes = 0;//�ۼƶ��нڵ���

	InitializeQueue(&line);

	srand((unsigned int)time(0));/*��ʼ������ */

	puts("**********��ѯ̯λ�Ĺ˿������о�**********");
	puts("������ģ���ʱ��(��λ��Сʱ)��");
	scanf("%d", &hours);
	puts("������ƽ��ÿСʱ�Ĺ˿�������");
	scanf("%d", &customers_per_hour);
	cyclelimit = MIN_PER_HOUR * hours;
	min_per_customers = MIN_PER_HOUR / customers_per_hour;

	for (cycle = 0; cycle < cyclelimit; cycle++)
	{
		if (newcustomer(min_per_customers))//�ж�ÿ�����Ƿ��й˿���
		{
			if (QueueIsFull(&line))
				turnaways++;
			else
			{
				customers++;
				temp = customertime(cycle);//�ڵ�ǰ���������¹˿͵Ĳ���
				AddQueue(temp, &line);
			}
		}

		if (wait_process_finished_time <= 0 && !QueueIsEmpty(&line))//���������й˿���̯λ����ʱ
		{											 //*****ע*****
			DeQueue(&temp, &line);//�ŵ�һ���Ĺ˿��ڶ����б��ų����俪ʼ��ѯ(�����ݸ�����temp)

			wait_process_finished_time = temp.processtime;//���µ���ѯ���ѵ�ʱ��
			in_queue_wait_time += cycle - temp.arrive;//��ǰʱ��-������е�ʱ��=��ǰ�ŵ�һ���Ĺ˿��ڶ����еȴ���ʱ��

			served++;
		}

		if (wait_process_finished_time > 0)
			wait_process_finished_time--;

		sum_nodes += QueueItemCount(&line);
	}

	if (customers > 0)
	{
		printf("%-10s%d\n", "��̯λ�Ĺ˿�������", customers);
		printf("%-10s%d\n", "����Ĺ˿�������", served);
		printf("%-10s%d\n", "���ܵĹ˿�������", turnaways);

		printf("%-10s%.2lf\n", "����ƽ���ڵ�����", (double)sum_nodes / cyclelimit);//ƽ��ÿ�����Ŷӵ�����
		printf("%-10s%.2lf\n", "����ƽ���ȴ�ʱ��(��λ������)��", (double)in_queue_wait_time / served);//ƽ��ÿ�����������Ҫ�ȴ���ʱ��
	}
	else
		puts("û�й˿ͣ�");

	EmptyTheQueue(&line);
	puts("����ģ�������");

	return 0;
}
bool newcustomer(double x)//�Ƿ����¹˿͵���	//x��ƽ��ÿ���˿͵�������ʱ��
{
	if (rand() * x / RAND_MAX < 1)//RAND_MAX��rand()�ܲ��������ֵ
		return true;								//0<=rand()<=RAND_MAX
	else												//0<=rand()*x<=x*RAND_MAX
		return false;							//����rand() * x / RAND_MAX��Χ��0~x
}														//���ݿ�����һ�������x�����1��
														//����С��1����С��1����(cycle������ÿ�ε���1����)
Item customertime(long when)//���ù˿Ͳ���
{
	Item jiegouticanshu;//�ṹ��Ĳ���

	jiegouticanshu.arrive = when;
	jiegouticanshu.processtime = rand() % 3 + 1;//rand() % 3 + 1��Χ1~3
	//����д������
	//jiegouticanshu.processtime = rand()*2/RAND_MAX + 1;//��Χ1~3(processtime����Ϊint����)
																						//***ע***ֻ�е�ran()=RAND_MAXʱ�������Ϊ3
	return jiegouticanshu;												//���Խ��1��2��3�ĸ��ʲ�����ͬ(����3���ʼ�С)
}																						//��˸�ֵ�Ķ�����int����ʱ�����������
#endif


//�����嵥17.12		������ADT
#if 0
#include "tree.h"
#include <stdio.h>
#include <string.h>//strchr()
#include <ctype.h>//tolower()

void menu(void);
char get_choice(void);
void addpet(Tree* ptree);

char* s_gets(char* string, int n);
void lowercase(char* string);

void showpets(const Tree* ptree);
void dayin(Item item);

void findpet(const Tree* ptree);
void droppet(Tree* ptree);

int main(void)
{
	Tree pets;
	char choice;

	menu();
	InitializeTree(&pets);

	while ((choice = get_choice()) != 'q')
	{
		switch (choice)
		{
		case 'a':
			addpet(&pets);
			break;
		case 's':
			showpets(&pets);
			break;
		case 'f':
			findpet(&pets);
			break;
		case 'n':
			printf("���ֲ�����%dֻ����\n", TreeItemCount(&pets));
			break;
		case 'd':
			droppet(&pets);
			break;
		default:
			puts("Error !");
		}
		putchar('\n');
		putchar('\n');

		menu();
	}
	DeleteAll(&pets);
	puts("�ټ���");

	return 0;
}
void menu(void)
{
	puts("Nerfville Pet Club Membership Program");
	puts("Enter the letter corresponding to your choice:");
	puts("a) ��ӳ��� s) ��ʾ��������");
	puts("n) ����������� f) Ѱ�ҳ���");
	puts("d) ɾ��һֻ���� q)�˳�");
}
char get_choice(void)
{
	char choice;

	choice = getchar();
	choice = tolower(choice);

	while (getchar() != '\n')
		continue;

	while (strchr("asnfdq", choice) == NULL)
	{
		puts("������a��s��n��f��d��q");
		choice = tolower(getchar());
		while (getchar() != '\n')
			continue;
	}

	//��
	/*while ((choice = getchar()) != EOF)
	{
		while (getchar() != '\n')
			continue;
		choice = tolower(choice);

		if (strchr("asnfdq", choice) == NULL)
			puts("������a��s��n��f��d��q");
		else
			break;
	}
	if(choice==EOF)
	choice='q'*/
	return choice;
}
void addpet(Tree* ptree)
{
	Item temp;

	if (TreeIsFull(ptree))
		puts("���������Ѵﵽ���ֵ��");
	else
	{
		puts("�������������֣�");
		s_gets(temp.petname, LENGTH);
		puts("�������������ͣ�");
		s_gets(temp.petkind, LENGTH);

		lowercase(temp.petname);
		lowercase(temp.petkind);

		AddItem(&temp, ptree);
	}
}
char* s_gets(char* string, int n)
{
	char* fanhui;
	char* find;
	fanhui = fgets(string, n, stdin);

	if (fanhui)
	{
		find = strchr(string, '\n');
		if (find)
			*find = '\0';
		else
			while (getchar() != '\n')
				continue;
	}

	return fanhui;
}
void lowercase(char* string)
{
	while (*string)
	{
		*string = tolower(*string);
		string++;
	}
}
void showpets(const Tree* ptree)
{
	if (TreeIsEmpty(ptree))
		puts("û���������ݣ�");
	else
		Traverse(ptree, dayin);
}
void dayin(Item item)
{
	printf("��������%-19s���������ͣ�%-19s\n", item.petname, item.petkind);
}
void findpet(const Tree* ptree)
{
	Item temp;

	if (TreeIsEmpty(ptree))
	{
		puts("û���������ݣ�");
		return;
	}

	puts("���������������ĳ�������֣�");
	s_gets(temp.petname, LENGTH);
	puts("���������������ĳ�������ͣ�");
	s_gets(temp.petkind, LENGTH);

	lowercase(temp.petname);
	lowercase(temp.petkind);

	printf("��������%-19s���������ͣ�%-19s", temp.petname, temp.petkind);

	if (InTree(&temp, ptree))
		printf("�����У�\n");
	else
		printf("�������У�\n");
}
void droppet(Tree* ptree)
{
	Item temp;

	if (TreeIsEmpty(ptree))
	{
		puts("û���������ݣ�");
		return;
	}

	puts("����������ɾ���ĳ�������֣�");
	s_gets(temp.petname, LENGTH);
	puts("����������ɾ���ĳ�������ͣ�");
	s_gets(temp.petkind, LENGTH);

	lowercase(temp.petname);
	lowercase(temp.petkind);

	printf("��������%-19s���������ͣ�%-19s", temp.petname, temp.petkind);

	if (DeleteItem(&temp, ptree))
		printf("��ɾ����\n");
	else
		printf("�������У��޷�ɾ����\n");
}
#endif
#endif


//chapter 17
//code2.c
#if 0
#include <stdio.h>

//17.11��ϰ��
//5.
#if 0

#endif


//7.
#if 0
//a.
nice
food						   roam
dodge					gate     office            wave
//b.
wave
roam
office
nice
gate
food
dodge
//c.
food
dodge			                   roam
office			 wave
gate
nice
//d.
nice
food							   roam
dodge			gate		         office			wave
#endif


//8.
#if 0
//a.
nice
dodge					    roam
gate     office      wave
//b.
wave
roam
office
nice
gate
dodge
//c.
dodge
roam
office			   wave
gate
nice
//d.
nice
dodge					    roam
gate     office      wave
#endif
#endif


//chapter 17
//code3.c
#if 0
#include <stdio.h>
//
#if 1
#endif


//17.12�����ϰ
//1.����һ���޸�����Ķ���
#if 0
#include <stdlib.h>//malloc()
#include <string.h>//strcpy()

#define LENGTH 45

struct film
{
	char title[LENGTH];
	int rating;
	struct film* previous;
	struct film* next;															//1.�������½ṹʱ�����԰Ѹýṹ�ĵ�ַ�洢����һ���ṹ��
};

char* s_gets(char* string, int num);

int main(void)
{
	struct film* head = NULL;												//2.��Ҫһ��������ָ��洢��һ���ṹ�ĵ�ַ(��ͷָ��)
	struct film* prev = 0x00, * current = 0x01;					//3.����һ����film�ṹ���ֵĽṹ����prev��current������prev��ʼ��

	char input[LENGTH];
	puts("�������Ӱ�ı��⣺");
	while (s_gets(input, LENGTH) != NULL && input[0] != '\0')
	{
		current = (struct film*)malloc(sizeof(struct film));	//4.���û��������ݵ���ʱ�洢��(input����)�������һ���ṹ�Ŀռ䣬
																							//	�����ýṹ�ĵ�ַ�����ṹָ��current
		if (head == NULL)														//5.�ж���������ǵ�һ���ṹ����ѵ�һ���ṹ�ĵ�ַ����ͷָ��
		{
			head = current;
			current->previous = NULL;//��һ���ڵ�֮ǰ�Ľڵ�ΪNULL
														  //����䲻д��Ӱ�����
		}
		else
		{
			prev->next = current;							  				//6.������Ĳ��ǵ�һ���ṹ����ṹָ��prevָ���next��Ա(nextҲ�Ǹ��ṹָ��)�浱ǰ����Ľṹ�ĵ�ַ
			current->previous = prev;//�ڶ����ڵ��previousָ����һ���ڵ�ĵ�ַ
		}
		current->next = NULL;												//7.��ʾ��ǰ�ṹ����������һ���ṹ

		strcpy(current->title, input);

		puts("��������������(0-10)��");
		scanf("%d", &current->rating);

		while (getchar() != '\n')
			continue;

		puts("��������һ����Ӱ�ı���(����^Z��������˳�)��");
		prev = current;														    //8.prevָ��ǰ�ṹ�ĵ�ַ����currentҪΪ��һ����������׼��(���ڴ����·���Ľṹ�ĵ�ַ)
	}																						//*****ע*****��6.�͵�8.��Ӧ��������6.�е�prev->next���е�prev
																							//��������һ�η����½ṹʱ����ǰ�ṹ����Ϊ�½ṹ����һ���ṹ

//struct film* temp = prev;//�ݴ�current�����ݴ����һ���ڵ�ĵ�ַ
	/*Ҳ����д��*/struct film* temp = current;//ǰ��������current��Ҫ��ʼ��

	if (head == NULL)
		printf("���������룡\n");
	else
		puts("�����ǵ�ӰĿ¼��");

	current = head;																//9.�ýṹָ��current��ͷ��ʼ��������
	while (current != NULL)
	{
		printf("��Ӱ��:%-20s��Ӱ����:%d\n", current->title, current->rating);
		current = current->next;
	}

	puts("�����ǵ�ӰĿ¼��������ʾ����");

	while (temp != NULL)
	{
		printf("��Ӱ��:%-20s��Ӱ����:%d\n", temp->title, temp->rating);
		temp = temp->previous;
	}


	//�ͷ��ѷ�����ڴ�
	current = head;
	while (current != NULL)
	{
		head = current->next;												//10.current���head���ͷ��ڴ�
		free(current);
		current = head;
	}
	//�ͷ��ѷ�����ڴ�(����)
		//while (head != NULL)
		//{
		//	current = head;//�Ȱѵ�һ���ڵ�ĵ�ַ����current							
		//	head = head->next;
		//	free(current);
		//}

	return 0;
}
char* s_gets(char* string, int num)
{
	char* fanhui;
	char* find;

	fanhui = fgets(string, num, stdin);

	if (fanhui)
	{
		if (find = strchr(string, '\n'))
			*find = '\0';
		else
		{
			while (getchar() != '\n')
				continue;
		}
	}

	return fanhui;
}
#endif
//1.���������õݹ�
#if 0
#include <stdlib.h>//malloc()
#include <string.h>//strcpy()

#define LENGTH 45

struct film
{
	char title[LENGTH];
	int rating;
	struct film* next;															//1.�������½ṹʱ�����԰Ѹýṹ�ĵ�ַ�洢����һ���ṹ��
};

char* s_gets(char* string, int num);
void show_reversed_order(struct film*);

int main(void)
{
	struct film* head = NULL;												//2.��Ҫһ��������ָ��洢��һ���ṹ�ĵ�ַ(��ͷָ��)
	struct film* prev = 0x00, * current;								//3.����һ����film�ṹ���ֵĽṹ����prev��current������prev��ʼ��

	char input[LENGTH];
	puts("�������Ӱ�ı��⣺");
	while (s_gets(input, LENGTH) != NULL && input[0] != '\0')
	{
		current = (struct film*)malloc(sizeof(struct film));	//4.���û��������ݵ���ʱ�洢��(input����)�������һ���ṹ�Ŀռ䣬
																							//	�����ýṹ�ĵ�ַ�����ṹָ��current
		if (head == NULL)														//5.�ж���������ǵ�һ���ṹ����ѵ�һ���ṹ�ĵ�ַ����ͷָ��
		{
			head = current;
		}
		else
		{
			prev->next = current;							  				//6.������Ĳ��ǵ�һ���ṹ����ṹָ��prevָ���next��Ա(nextҲ�Ǹ��ṹָ��)�浱ǰ����Ľṹ�ĵ�ַ
		}
		current->next = NULL;												//7.��ʾ��ǰ�ṹ����������һ���ṹ

		strcpy(current->title, input);

		puts("��������������(0-10)��");
		scanf("%d", &current->rating);

		while (getchar() != '\n')
			continue;

		puts("��������һ����Ӱ�ı���(����^Z��������˳�)��");
		prev = current;														    //8.prevָ��ǰ�ṹ�ĵ�ַ����currentҪΪ��һ����������׼��(���ڴ����·���Ľṹ�ĵ�ַ)
	}																						//*****ע*****��6.�͵�8.��Ӧ��������6.�е�prev->next���е�prev
																							//��������һ�η����½ṹʱ����ǰ�ṹ����Ϊ�½ṹ����һ���ṹ

	if (head == NULL)
		printf("���������룡\n");
	else
		puts("�����ǵ�ӰĿ¼��");

	current = head;																//9.�ýṹָ��current��ͷ��ʼ��������

	struct film* temp = current;//�ݴ�current�����ݴ��һ���ڵ�ĵ�ַ

	while (current != NULL)
	{
		printf("��Ӱ��:%-20s��Ӱ����:%d\n", current->title, current->rating);
		current = current->next;
	}

	puts("�����ǵ�ӰĿ¼��������ʾ����");
	show_reversed_order(temp);


	//�ͷ��ѷ�����ڴ�
	current = head;
	while (current != NULL)
	{
		head = current->next;												//10.current���head���ͷ��ڴ�
		free(current);
		current = head;
	}

	return 0;
}
char* s_gets(char* string, int num)
{
	char* fanhui;
	char* find;

	fanhui = fgets(string, num, stdin);

	if (fanhui)
	{
		if (find = strchr(string, '\n'))
			*find = '\0';
		else
		{
			while (getchar() != '\n')
				continue;
		}
	}

	return fanhui;
}
/*
void show_reversed_order(struct film* p)
{
	if (p->next != NULL)
	{
		p = p->next;									//***����***��pֵ���ı���ٵݹ飬���µ�һ���ڵ�������޷���ӡ����
		show_reversed_order(p);				//���������һ���ڵ�����ݻᱻ��ӡ����
	}

	printf("��Ӱ��:%-20s��Ӱ����:%d\n", p->title, p->rating);
}
*/
void show_reversed_order(struct film* p)
{
	if (p->next != NULL)
	{
		show_reversed_order(p->next);
	}

	printf("��Ӱ��:%-20s��Ӱ����:%d\n", p->title, p->rating);
}
#endif


//2.
#if 0
#include <stdlib.h.>//exit()
#include <stdbool.h>
#include <string.h>
#include "list.h"

void showmovies(Item item);

char* s_gets(char* string, int num);

int main(void)
{
	P_Node movies;//����һ��P_Node�ṹ���ֵĽṹ����movies

	Item temp;//����һ��film�ṹ���ֵĽṹtemp

//��ʼ�������ͷָ��
	InitializeList(&movies);
	if (ListIsFull(&movies))
	{
		fprintf(stderr, "�������������Ѵﵽ���ֵ��");
		exit(1);
	}

	//��ȡ�û����벢�洢
	puts("�������Ӱ�ı��⣺");
	while (s_gets(temp.title, LENGTH) != NULL && temp.title[0] != '\0')
	{
		puts("��������������(0-10)��");
		scanf("%d", &temp.rating);

		while (getchar() != '\n')
			continue;

		if (AddItem(temp, &movies) == false)
		{
			fprintf(stderr, "���󣬷����ڴ�ʧ�ܣ�");
			break;
		}
		if (ListIsFull(&movies))
		{
			puts("���������Ѵﵽ���ֵ��");
			break;
		}

		puts("��������һ����Ӱ�ı���(����^Z��������˳�)��");
	}

	//��ʾ
	if (ListIsEmpty(&movies))
		printf("û���������룡\n");
	else
	{
		printf("�����ǵ�ӰĿ¼\n");
		Traverse(&movies, showmovies);
	}
	printf("��������%d����Ӱ\n", ListItemCount(&movies));

	//����
	EmptyTheList(&movies);
	printf("�ټ���\n");

	return 0;
}
void showmovies(Item item)
{
	printf("��Ӱ��:%-20s��Ӱ����:%d\n", item.title, item.rating);
}
char* s_gets(char* string, int num)
{
	char* fanhui;
	char* find;

	fanhui = fgets(string, num, stdin);

	if (fanhui)
	{
		if (find = strchr(string, '\n'))
			*find = '\0';
		else
		{
			while (getchar() != '\n')
				continue;
		}
	}

	return fanhui;
}
#endif


//3.
#if 0
#include <stdlib.h.>//exit()
#include <stdbool.h>
#include <string.h>
#include "list_1.h"

void showmovies(Item item);

char* s_gets(char* string, int num);

int main(void)
{
	List movies;//����һ��List�ṹ���ֵĽṹ����movies

	Item temp;//����һ��film�ṹ���ֵĽṹtemp

//��ʼ�������ͷָ��
	InitializeList(&movies);
	if (ListIsFull(&movies))
	{
		fprintf(stderr, "����Ԫ�������Ѵﵽ���ֵ��");
		exit(1);
	}

	//��ȡ�û����벢�洢
	puts("�������Ӱ�ı��⣺");
	while (s_gets(temp.title, LENGTH) != NULL && temp.title[0] != '\0')
	{
		puts("��������������(0-10)��");
		scanf("%d", &temp.rating);

		while (getchar() != '\n')
			continue;

		if (AddItem(temp, &movies) == false)
		{
			fprintf(stderr, "���󣬷����ڴ�ʧ�ܣ�");
			break;
		}
		if (ListIsFull(&movies))
		{
			puts("Ԫ�������Ѵﵽ���ֵ��");
			break;
		}

		puts("��������һ����Ӱ�ı���(����^Z��������˳�)��");
	}

	//��ʾ
	if (ListIsEmpty(&movies))
		printf("û���������룡\n");
	else
	{
		printf("�����ǵ�ӰĿ¼\n");
		Traverse(&movies, showmovies);
	}
	printf("��������%d����Ӱ\n", ListItemCount(&movies));

	//����
	EmptyTheList(&movies);
	printf("�ټ���\n");

	return 0;
}
void showmovies(Item item)
{
	printf("��Ӱ��:%-20s��Ӱ����:%d\n", item.title, item.rating);
}
char* s_gets(char* string, int num)
{
	char* fanhui;
	char* find;

	fanhui = fgets(string, num, stdin);

	if (fanhui)
	{
		if (find = strchr(string, '\n'))
			*find = '\0';
		else
		{
			while (getchar() != '\n')
				continue;
		}
	}

	return fanhui;
}
#endif


//4.
//����һ�������������飬�˿����������һ�����У���else if������һ��̯λ��ʱ�����
#if 0
#include <stdio.h>
#include "queue.h"
#include <time.h>//time()
#include <stdlib.h>//srand()��rand()

#define MIN_PER_HOUR	60.0

bool newcustomer(double x);//�Ƿ����¹˿͵���
Item customertime(long when);//���ù˿Ͳ���

int main(void)
{
	Queue line[2];//����һ���˿Ͷ�������
	int hours;//ģ���Сʱ��
	int customers_per_hour;//ƽ��ÿСʱ�Ĺ˿�����

	long cyclelimit;//ѭ��������������
	double min_per_customers;//ƽ��ÿ���˿͵�������ʱ��

	int cycle;//ѭ��������
	int turnaways = 0;//����нڵ����������ܵĹ˿�����
	int customers = 0;//������еĹ˿�����
	Item temp;//��ʱ������Ŀ(�˿Ͳ���)

	int wait_process_finished_time_1 = 0;//��һ��̯λ��ǰ����ȴ��˿���ѯ��ϵ�ʱ��
	int wait_process_finished_time_2 = 0;//�ڶ���̯λ��ǰ����ȴ��˿���ѯ��ϵ�ʱ��

	int in_queue_wait_time_1 = 0;//������Ĺ˿��ڶ������ۼƵȴ���ʱ��
	int in_queue_wait_time_2 = 0;//������Ĺ˿��ڶ������ۼƵȴ���ʱ��

	int served_1 = 0;//����Ĺ˿�����
	int served_2 = 0;//����Ĺ˿�����

	int sum_nodes_1 = 0;//�ۼƶ��нڵ���
	int sum_nodes_2 = 0;//�ۼƶ��нڵ���

	int choice = 0;//�˿�ѡ��ȥ�ĸ�̯λ

	InitializeQueue(&line[0]);
	InitializeQueue(&line[1]);

	srand((unsigned int)time(0));/*��ʼ������ */

	puts("**********��ѯ̯λ�Ĺ˿������о�**********");
	puts("������ģ���ʱ��(��λ��Сʱ)��");
	scanf("%d", &hours);
	puts("������ƽ��ÿСʱ�Ĺ˿�������");
	scanf("%d", &customers_per_hour);
	cyclelimit = MIN_PER_HOUR * hours;
	min_per_customers = MIN_PER_HOUR / customers_per_hour;

	for (cycle = 0; cycle < cyclelimit; cycle++)
	{
		if (newcustomer(min_per_customers))//�ж�ÿ�����Ƿ��й˿���
		{
			if (QueueIsFull(&line[0]) && QueueIsFull(&line[1]))
				turnaways++;
			else
			{
				customers++;
				temp = customertime(cycle);//�ڵ�ǰ���������¹˿͵Ĳ���

				if (!QueueIsFull(&line[0]) && !QueueIsFull(&line[1]))//������̯λ���ж�û��ʱ���˿����ѡ��ȥ�ĸ�̯λ
				{
					choice = rand() % 2;//choiceΪ0��1
					AddQueue(temp, &line[choice]);
				}
				else if (QueueIsFull(&line[0]))//����һ��̯λ������ʱ
				{
					AddQueue(temp, &line[1]);
				}
				else//���ڶ���̯λ������ʱ
				{
					AddQueue(temp, &line[0]);
				}

			}
		}

		if (wait_process_finished_time_1 <= 0 && !QueueIsEmpty(&line[0]))//����һ��̯λ�������й˿���̯λ����ʱ
		{											 //*****ע*****
			DeQueue(&temp, &line[0]);//�ŵ�һ���Ĺ˿��ڶ����б��ų����俪ʼ��ѯ(�����ݸ�����temp)

			wait_process_finished_time_1 = temp.processtime;//���µ���ѯ���ѵ�ʱ��
			in_queue_wait_time_1 += cycle - temp.arrive;//��ǰʱ��-������е�ʱ��=��ǰ�ŵ�һ���Ĺ˿��ڶ����еȴ���ʱ��

			served_1++;
		}

		if (wait_process_finished_time_2 <= 0 && !QueueIsEmpty(&line[1]))//���ڶ���̯λ�������й˿���̯λ����ʱ
		{											 //*****ע*****
			DeQueue(&temp, &line[1]);//�ŵ�һ���Ĺ˿��ڶ����б��ų����俪ʼ��ѯ(�����ݸ�����temp)

			wait_process_finished_time_2 = temp.processtime;//���µ���ѯ���ѵ�ʱ��
			in_queue_wait_time_2 += cycle - temp.arrive;//��ǰʱ��-������е�ʱ��=��ǰ�ŵ�һ���Ĺ˿��ڶ����еȴ���ʱ��

			served_2++;
		}

		if (wait_process_finished_time_1 > 0)
			wait_process_finished_time_1--;


		if (wait_process_finished_time_2 > 0)
			wait_process_finished_time_2--;

		sum_nodes_1 += QueueItemCount(&line[0]);
		sum_nodes_2 += QueueItemCount(&line[1]);
	}

	if (customers > 0)
	{
		printf("%-10s%d\n\n\n", "��̯λ�Ĺ˿�������", customers);

		printf("%-10s%d\n", "̯λ1�ѷ���Ĺ˿�������", served_1);
		printf("%-10s%.2lf\n", "̯λ1����ƽ���ڵ�����", (double)sum_nodes_1 / cyclelimit);//ƽ��ÿ�����Ŷӵ�����
		printf("%-10s%.2lf\n\n", "̯λ1����ƽ���ȴ�ʱ��(��λ������)��", (double)in_queue_wait_time_1 / served_1);//ƽ��ÿ�����������Ҫ�ȴ���ʱ��

		printf("%-10s%d\n", "̯λ2�ѷ���Ĺ˿�������", served_2);
		printf("%-10s%.2lf\n", "̯λ2����ƽ���ڵ�����", (double)sum_nodes_2 / cyclelimit);//ƽ��ÿ�����Ŷӵ�����
		printf("%-10s%.2lf\n\n\n", "̯λ2����ƽ���ȴ�ʱ��(��λ������)��", (double)in_queue_wait_time_2 / served_2);//ƽ��ÿ�����������Ҫ�ȴ���ʱ��


		printf("%-10s%d\n\n", "���ܵĹ˿�������", turnaways);

	}
	else
		puts("û�й˿ͣ�");

	EmptyTheQueue(&line);
	puts("����ģ�������");

	return 0;
}
bool newcustomer(double x)//�Ƿ����¹˿͵���	//x��ƽ��ÿ���˿͵�������ʱ��
{
	if (rand() * x / RAND_MAX < 1)//RAND_MAX��rand()�ܲ��������ֵ
		return true;								//0<=rand()<=RAND_MAX
	else												//0<=rand()*x<=x*RAND_MAX
		return false;							//����rand() * x / RAND_MAX��Χ��0~x
}														//���ݿ�����һ�������x�����1��
														//����С��1����С��1����(cycle������ÿ�ε���1����)
Item customertime(long when)//���ù˿Ͳ���
{
	Item jiegouticanshu;//�ṹ��Ĳ���

	jiegouticanshu.arrive = when;
	jiegouticanshu.processtime = rand() % 3 + 1;//rand() % 3 + 1��Χ1~3
	//����д������
	//jiegouticanshu.processtime = rand()*2/RAND_MAX + 1;//��Χ1~3(processtime����Ϊint����)
																						//***ע***ֻ�е�ran()=RAND_MAXʱ�������Ϊ3
	return jiegouticanshu;												//���Խ��1��2��3�ĸ��ʲ�����ͬ(����3���ʼ�С)
}																						//��˸�ֵ�Ķ�����int����ʱ�����������
#endif
//4.
//�����������������и�������Ľṹ���ֵĽṹ���飬
//�˿Ͱ��ո�������������������
#if 0
#include <stdio.h>
#include "queue.h"
#include <time.h>//time()
#include <stdlib.h>//srand()��rand()

#define MIN_PER_HOUR	60.0

struct 	booth_line
{
	Queue line;//����һ���˿Ͷ���
	int hours;//ģ���Сʱ��
	int customers_per_hour;//ƽ��ÿСʱ�Ĺ˿�����

	long cyclelimit;//ѭ��������������
	double min_per_customers;//ƽ��ÿ���˿͵�������ʱ��

	int cycle;//ѭ��������
	int turnaways;//����нڵ����������ܵĹ˿�����
	int customers;//������еĹ˿�����

	int wait_process_finished_time;//��ǰ����ȴ��˿���ѯ��ϵ�ʱ��

	int in_queue_wait_time;//������Ĺ˿��ڶ������ۼƵȴ���ʱ��

	int served;//����Ĺ˿�����
	int sum_nodes;//�ۼƶ��нڵ���
};

bool newcustomer(double x);//�Ƿ����¹˿͵���
Item customertime(long when);//���ù˿Ͳ���

int main(void)
{
	struct booth_line  Booth_line[2] = { {.hours = 0},{.hours = 0} };

	Item temp;//��ʱ������Ŀ(�˿Ͳ���)

	InitializeQueue(&Booth_line[0].line);
	InitializeQueue(&((Booth_line + 1)->line));

	srand((unsigned int)time(0));/*��ʼ������ */

	puts("**********��ѯ̯λ�Ĺ˿������о�**********");
	puts("������̯λ1ģ���ʱ��(��λ��Сʱ)��");
	scanf("%d", &Booth_line[0].hours);
	puts("������ƽ��ÿСʱ�Ĺ˿�������");
	scanf("%d", &Booth_line[0].customers_per_hour);
	Booth_line[0].cyclelimit = MIN_PER_HOUR * Booth_line[0].hours;
	Booth_line[0].min_per_customers = MIN_PER_HOUR / Booth_line[0].customers_per_hour;

	puts("������̯λ2ģ���ʱ��(��λ��Сʱ)��");
	scanf("%d", &Booth_line[1].hours);
	puts("������ƽ��ÿСʱ�Ĺ˿�������");
	scanf("%d", &Booth_line[1].customers_per_hour);
	Booth_line[1].cyclelimit = MIN_PER_HOUR * Booth_line[1].hours;
	Booth_line[1].min_per_customers = MIN_PER_HOUR / Booth_line[1].customers_per_hour;

	for (int i = 0; i < 2; i++)
	{
		for (Booth_line[i].cycle = 0; Booth_line[i].cycle < Booth_line[i].cyclelimit; Booth_line[i].cycle++)
		{
			if (newcustomer(Booth_line[i].min_per_customers))//�ж�ÿ�����Ƿ��й˿���
			{
				if (QueueIsFull(&Booth_line[i].line))
					Booth_line[i].turnaways++;
				else
				{
					Booth_line[i].customers++;
					temp = customertime(Booth_line[i].cycle);//�ڵ�ǰ���������¹˿͵Ĳ���
					AddQueue(temp, &Booth_line[i].line);
				}
			}

			if (Booth_line[i].wait_process_finished_time <= 0 && !QueueIsEmpty(&Booth_line[i].line))//��̯λ�������й˿���̯λ����ʱ
			{											 //*****ע*****
				DeQueue(&temp, &Booth_line[i].line);//�ŵ�һ���Ĺ˿��ڶ����б��ų����俪ʼ��ѯ(�����ݸ�����temp)

				Booth_line[i].wait_process_finished_time = temp.processtime;//���µ���ѯ���ѵ�ʱ��
				Booth_line[i].in_queue_wait_time += Booth_line[i].cycle - temp.arrive;//��ǰʱ��-������е�ʱ��=��ǰ�ŵ�һ���Ĺ˿��ڶ����еȴ���ʱ��

				Booth_line[i].served++;
			}

			if (Booth_line[i].wait_process_finished_time > 0)
				Booth_line[i].wait_process_finished_time--;

			Booth_line[i].sum_nodes += QueueItemCount(&Booth_line[i].line);
		}

		if (Booth_line[i].customers > 0)
		{
			printf("̯λ%d\n", i + 1);
			printf("%-10s%d\n", "��̯λ�Ĺ˿�������", Booth_line[i].customers);

			printf("%-10s%d\n", "̯λ�ѷ���Ĺ˿�������", Booth_line[i].served);
			printf("%-10s%.2lf\n", "̯λ����ƽ���ڵ�����", (double)Booth_line[i].sum_nodes / Booth_line[i].cyclelimit);//ƽ��ÿ�����Ŷӵ�����
			printf("%-10s%.2lf\n", "̯λ����ƽ���ȴ�ʱ��(��λ������)��", (double)Booth_line[i].in_queue_wait_time / Booth_line[i].served);//ƽ��ÿ�����������Ҫ�ȴ���ʱ��

			printf("%-10s%d\n\n", "���ܵĹ˿�������", Booth_line[i].turnaways);

		}
		else
			puts("û�й˿ͣ�");

		EmptyTheQueue(&Booth_line[i].line);
	}

	puts("����ģ�������");

	return 0;
}
bool newcustomer(double x)//�Ƿ����¹˿͵���	//x��ƽ��ÿ���˿͵�������ʱ��
{
	if (rand() * x / RAND_MAX < 1)//RAND_MAX��rand()�ܲ��������ֵ
		return true;								//0<=rand()<=RAND_MAX
	else												//0<=rand()*x<=x*RAND_MAX
		return false;							//����rand() * x / RAND_MAX��Χ��0~x
}														//���ݿ�����һ�������x�����1��
														//����С��1����С��1����(cycle������ÿ�ε���1����)
Item customertime(long when)//���ù˿Ͳ���
{
	Item jiegouticanshu;//�ṹ��Ĳ���

	jiegouticanshu.arrive = when;
	jiegouticanshu.processtime = rand() % 3 + 1;//rand() % 3 + 1��Χ1~3
	//����д������
	//jiegouticanshu.processtime = rand()*2/RAND_MAX + 1;//��Χ1~3(processtime����Ϊint����)
																						//***ע***ֻ�е�ran()=RAND_MAXʱ�������Ϊ3
	return jiegouticanshu;												//���Խ��1��2��3�ĸ��ʲ�����ͬ(����3���ʼ�С)
}																						//��˸�ֵ�Ķ�����int����ʱ�����������
#endif


//5.��һ����ջ�����ӱ�ʾ�����õ�����
#if 0
#include "stack.h"
#include <stdbool.h>
#include <stdlib.h>//exit(1)
#include <string.h>

void show(Item item);

int main(void)
{
	LinkStack shuju;
	Item temp1[MAX_STACK];

	InitializeStack(&shuju);
	if (StackIsFull(&shuju))
	{
		fprintf(stderr, "����Ԫ�������Ѵﵽ���ֵ��");
		exit(1);
	}

	char temp2[MAX_STACK + 1];//����temp2�����ݴ�������ַ���

	int jishu;

	puts("�������ַ�����");//����10���ַ�
	scanf("%s", temp2);

	jishu = strlen(temp2);

	for (int index = 0; index < jishu; index++)
		temp1[index].data = temp2[index];//ͨ��ѭ������temp1�ṹ����ĳ�Ա(��ÿ���ṹ)��data��Ա���ַ�

	for (int index = 0; index < jishu; index++)
	{
		if (PushItem(temp1[index], &shuju) == false)
		{
			fprintf(stderr, "���󣬷����ڴ�ʧ�ܣ�");
			break;								//***ע***
		}											//ÿ�ε���PushItem()ʱ�����ݶ����Զ�������һ���ڵ�
		if (StackIsFull(&shuju))
		{
			puts("Ԫ�������Ѵﵽ���ֵ��");
			break;
		}
	}

	if (StackIsEmpty(&shuju))
		printf("û���������룡\n");
	else
	{
		printf("������ջ�е��ַ����ݣ�\n");
		Traverse(&shuju, show);
	}
	printf("��������%d���ַ�\n", StackItemCount(&shuju));

	printf("�����Ǵ�ջ�е������ַ����ݣ�\n");
	while (!StackIsEmpty(&shuju))
	{
		PopItem(&temp1, &shuju);
		printf("%c\n", temp1[0]);
	}

	EmptyTheStack(&shuju);
	printf("�ټ���\n");

	return 0;
}
void show(Item item)
{
	printf("%c\n", item.data);
}
#endif
//��������ջ��˳���ʾ���������飩


//6.
#if 0
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 40

void fill_array(int* p, int n);
void show_array(const int* p, int n);
int mycompare(const void* p1, const void* p2);
bool find(int* zhengshu, int num, int search);//�βΣ�ָ�������ָ�룬����Ԫ�ظ����������ҵ�����

int main(void)
{
	int shuzu[SIZE];
	srand((unsigned int)time(0));			/* ������� */
	fill_array(shuzu, SIZE);

	puts("�����е����������");
	show_array(shuzu, SIZE);

	qsort(shuzu, SIZE, sizeof(int), mycompare);

	puts("�����е������������ɺ�����");
	show_array(shuzu, SIZE);

	printf("��������ҪѰ�ҵ�������");
	int search;
	scanf("%d", &search);
	if (find(shuzu, SIZE, search))
		printf("���ҵ���\n");
	else
		printf("δ�ҵ���\n");

	return 0;
}
void fill_array(int* p, int n)
{
	for (int index = 0; index < n; index++)
	{
		*(p + index) = rand() % 90;
	}
}
void show_array(const int* p, int n)
{
	int index;
	for (index = 0; index < n; index++)
	{
		printf("%6d", *(p + index));

		if (index % 6 == 5)
			putchar('\n');
	}
	if (index % 6 != 0)
		putchar('\n');
}
int mycompare(const void* p1, const void* p2)
{
	const int* a1 = (const int*)p1;
	const int* a2 = (const int*)p2;
	if (*a1 < *a2)
		return -1;
	else if (*a1 == *a2)
		return 0;
	else
		return 1;
}

bool find(int* zhengshu, int num, int search)
{
	int head = 0, tail = num - 1, try = (head + tail) / 2;//try������ֵ

	while (try >= head && try <= tail && num)
	{
		if (*(zhengshu + try) < search)//���С��
		{
			head = try + 1;
			try = (head + tail) / 2;
		}
		else if (*(zhengshu + try) > search)//�������
		{
			tail = try - 1;
			try = (head + tail) / 2;
		}
		else
			return true;

		num--;//����(head + tail) / 2���ս����ضϳ����������Һ��ڻᵼ������ֵ�ޱ仯��������ѭ��
	}			   //��������numֵ��0������ѭ��
	return false;
}
#endif


//7.
#if 0
#include "tree.h"
#include <stdio.h>
#include <string.h>//strchr()
#include <ctype.h>//tolower()
#include <stdlib.h>//EXIT_FAILURE
#include <ctype.h>//isalpha()

#define MAX 42

void addwords(Tree* ptree);
void menu(void);
char get_choice(void);


void showwords(const Tree* ptree);
void dayin(Item item);

void findwords(const Tree* ptree);
char* s_gets(char* string, int n);

int main(void)
{
	Tree words;
	char choice;

	InitializeTree(&words);
	addwords(&words);

	menu();
	while ((choice = get_choice()) != 'c')
	{
		switch (choice)
		{
		case 'a':
			showwords(&words);
			break;
		case 'b':
			findwords(&words);
			break;
		default:
			puts("Error !");
		}
		putchar('\n');
		putchar('\n');

		menu();
	}

	DeleteAll(&words);
	puts("�ټ���");
}
void addwords(Tree* ptree)
{
	Item temp;

	FILE* fp;
	char words[MAX];//��������ʾ������ʾ����
	//int zifujishu, index;//�ַ�����ֵ������ֵ
	char ch;
	int index = 0;

	if ((fp = fopen("17.12.7.txt", "a+")) == NULL)//����д
	{
		fprintf(stderr, "Can't open \"13.11.9.txt\" file.\n");
		exit(EXIT_FAILURE);
	}
	rewind(fp);

	while (fscanf(fp, "%s", words) == 1)
	{
		fprintf(stdout, "%s", words);
		putc(' ', stdout);
	}

	rewind(fp);

	if (TreeIsFull(ptree))
		puts("���������Ѵﵽ���ֵ���޷������������");
	else
	{
		/*while (fscanf(fp, "%s", words) == 1)//�ӵ�һ���ǿհ��ַ���ʼ������һ���հ��ַ�֮ǰ�������ַ���������
		{
			zifujishu = strlen(words);
			for(index = 0; index < zifujishu; index++)
			{
				temp.danci[index] = words[index];
			}*/				//���󣺴洢�Ĳ����ַ�����Ӧ�����ַ���

			/*while (fscanf(fp, "%s", temp.danci) == 1)//�ӵ�һ���ǿհ��ַ���ʼ������һ���հ��ַ�֮ǰ�������ַ���������
			{
				temp.cishu = 1;//ÿ�����뵽danci���ַ�����cishu������Ϊ0

				if (SeekItem(&temp, ptree).child != NULL)//�������ظ����ַ���ʱ
				{													//***ע***SeekItem()��Ϊ�ⲿ�����������Ǿ�̬����
					SeekItem(&temp, ptree).child->item.cishu++;//�ҵ����и��ַ������ڵĽڵ�ĵ�ַ�����Ը����cishu��Աֵ��1
				}
				else//�����벻��ͬ���ַ���ʱ
					AddItem(&temp, ptree);
			}*/					//覴ã�polling��polling,   ���������ʣ���Ϊfscanf()�ж�����Ҳ���ַ�				


		while ((ch = getc(fp)) != EOF)//����ַ�����
		{
			if (isalpha(ch))
			{
				temp.danci[index] = ch;
				index++;
			}
			else
			{
				temp.danci[index] = '\0';//����Ϊ�ַ���
				index = 0;

				//*****ע*****
				if (temp.danci[0] == '\0')//��������Ƕ��źͿո��򶺺�ǰ�ĵ��ʴ����������ǿո����ת����ѭ���Ĳ��Ա��ʽ��ֵ
					continue;

				temp.cishu = 1;//ÿ�����뵽danci���ַ�����cishu������Ϊ0

				if (SeekItem(&temp, ptree).child != NULL)//�������ظ����ַ���ʱ
				{													//***ע***SeekItem()��Ϊ�ⲿ�����������Ǿ�̬����
					SeekItem(&temp, ptree).child->item.cishu++;//�ҵ����и��ַ������ڵĽڵ�ĵ�ַ�����Ը����cishu��Աֵ��1
				}
				else//�����벻��ͬ���ַ���ʱ
					AddItem(&temp, ptree);
			}
		}
	}

	//��������fscanf()����SeekItem()�Ա���Ϊ��̬������ֻ�䶯AddItem()����
	//while (fscanf(fp, "%s", temp.danci) == 1)//����ǿհ��ַ�������
	//{
	//	if (!isalpha(temp.danci[0]))//��������ǿո�����ſո�
	//		continue;
	//	if (!isalpha(temp.danci[strlen(temp.danci) - 1]))//��������ĸ�ͱ�����
	//		temp.danci[strlen(temp.danci) - 1] = '\0';
	//	temp.cishu = 1;
	//	AddItem(&temp, ptree);
	//}

	/*(tree.c�ļ���)
	bool AddItem(const Item* pitem, Tree* ptree)
	{
	Treenode* current;

	if (TreeIsFull(ptree))//�ж��Ƿ�ﵽ���õ����Ľڵ�����
	{
		fprintf(stderr, "������������\n");
		return false;
	}

	if (SeekItem(pitem, ptree).child != NULL)
	{
		SeekItem(pitem, ptree).child->item.cishu++;
		return true;
	}
	..........
	..........
	*/

	puts("���ϵ����Ѵ��뵥���� !");

	if (fclose(fp) != 0)
		fprintf(stderr, "�ر��ļ�ʧ�ܣ�\n");
}

void menu(void)
{
	puts("���ʹ������");
	puts("����������Ҫ�Ĺ���ǰ��Ӧ�ĵ��ʣ�");
	printf("%-20s%20s\n", "a) �г����е��ʼ�����ִ���", " b) ��ѯ�������ļ��г��ֵĴ���");
	printf("%-20s\n", "c���˳�");
}

char get_choice(void)
{
	char choice;

	choice = getchar();
	choice = tolower(choice);

	while (getchar() != '\n')
		continue;

	while (strchr("abc", choice) == NULL)
	{
		puts("������a��b��c");
		choice = tolower(getchar());
		while (getchar() != '\n')
			continue;
	}

	//��
	/*while ((choice = getchar()) != EOF)
	{
		while (getchar() != '\n')
			continue;
		choice = tolower(choice);

		if (strchr("asnfdq", choice) == NULL)
			puts("������a��s��n��f��d��q");
		else
			break;
	}
	if(choice==EOF)
	choice='q'*/
	return choice;
}

void showwords(const Tree* ptree)
{
	if (TreeIsEmpty(ptree))
		puts("û���������ݣ�");
	else
		Traverse(ptree, dayin);
}

void dayin(Item item)
{
	printf("%-s%-30s %20s%-6d\n", "���ʣ�", item.danci, "���ִ�����", item.cishu);
}

void findwords(const Tree* ptree)
{
	Item temp;

	if (TreeIsEmpty(ptree))
	{
		puts("û�����ݣ�");
		return;
	}

	puts("���������������ĵ��ʣ�");
	s_gets(temp.danci, LENGTH);

	printf("%-s%-30s\n", "���ʣ�", temp.danci);

	if (InTree(&temp, ptree))
	{
		printf("�����У����ִ�����%d\n", SeekItem(&temp, ptree).child->item.cishu);
	}
	else
		printf("�������У�\n");
}

char* s_gets(char* string, int n)
{
	char* fanhui;
	char* find;
	fanhui = fgets(string, n, stdin);

	if (fanhui)
	{
		find = strchr(string, '\n');
		if (find)
			*find = '\0';
		else
			while (getchar() != '\n')
				continue;
	}

	return fanhui;
}
//�����У�D:\CODE\C_CODE\C Primer Plus Code practice\chapter 17\code3\Project3\x64\Debug
//Project3.exe
#endif


//8.��һ��ʹ��һά����petkind����strcat()ƴ��petkind
//ʵ��petkind�洢ͬ������ͬ����ĳ������������
#if 0
#include "tree_1.h"
#include <stdio.h>
#include <string.h>//strchr()
#include <ctype.h>//tolower()

void menu(void);
char get_choice(void);

void addpet(Tree* ptree);
char* s_gets(char* string, int n);
void lowercase(char* string);

void showpets(const Tree* ptree);
void dayin(Item item);

void findpet(const Tree* ptree);
void droppet(Tree* ptree);

int main(void)
{
	Tree pets;
	char choice;

	menu();
	InitializeTree(&pets);

	while ((choice = get_choice()) != 'q')
	{
		switch (choice)
		{
		case 'a':
			addpet(&pets);
			break;
		case 's':
			showpets(&pets);
			break;
		case 'f':
			findpet(&pets);
			break;
		case 'n':
			printf("���ֲ�����%dֻ����\n", TreeItemCount(&pets));
			break;
		case 'd':
			droppet(&pets);
			break;
		default:
			puts("Error !");
		}
		putchar('\n');
		putchar('\n');

		menu();
	}
	DeleteAll(&pets);
	puts("�ټ���");

	return 0;
}
void menu(void)
{
	puts("Nerfville Pet Club Membership Program");
	puts("Enter the letter corresponding to your choice:");
	puts("a) ��ӳ��� s) ��ʾ��������");
	puts("n) ����������� f) Ѱ�ҳ���");
	puts("d) ɾ��һֻ���� q)�˳�");
}
char get_choice(void)
{
	char choice;

	choice = getchar();
	choice = tolower(choice);

	while (getchar() != '\n')
		continue;

	while (strchr("asnfdq", choice) == NULL)
	{
		puts("������a��s��n��f��d��q");
		choice = tolower(getchar());
		while (getchar() != '\n')
			continue;
	}

	//��
	/*while ((choice = getchar()) != EOF)
	{
		while (getchar() != '\n')
			continue;
		choice = tolower(choice);

		if (strchr("asnfdq", choice) == NULL)
			puts("������a��s��n��f��d��q");
		else
			break;
	}
	if(choice==EOF)
	choice='q'*/
	return choice;
}
//int n = 1;
void addpet(Tree* ptree)
{
	Item temp;
	char* find;

	if (TreeIsFull(ptree))
		puts("���������Ѵﵽ���ֵ��");
	else
	{
		puts("�������������֣�");
		s_gets(temp.petname, LENGTH);
		puts("�������������ͣ�");
		s_gets(temp.petkind, LENGTH);

		lowercase(temp.petname);
		lowercase(temp.petkind);

		if (SeekItem(&temp, ptree).child)//��ͬ���ĳ���
		{
			find = strchr(SeekItem(&temp, ptree).child->item.petkind, '\0');
			*find = ',';
			*(find + 1) = '\0';

			strcat((SeekItem(&temp, ptree).child->item.petkind), temp.petkind);
			//strcpy((SeekItem(&temp, ptree).child->item.petkind)+5*n, temp.petkind);
			//n *= 2;
			/***Ϊʲô������strcpyʵ���������ݵĿ�����***/
			//��Ϊ��'\0'��λ��֮��������ֵ(����ֵ��ֵΪ0(�����ַ�)�ܳ���)�����Լ�ʹָ���ڵ�6��Ԫ�ص�λ���Ͽ��������ݣ�����֮�������Ҳ���ܴ�ӡ����
		}
		else
			AddItem(&temp, ptree);
	}
}
char* s_gets(char* string, int n)
{
	char* fanhui;
	char* find;
	fanhui = fgets(string, n, stdin);

	if (fanhui)
	{
		find = strchr(string, '\n');
		if (find)
			*find = '\0';
		else
			while (getchar() != '\n')
				continue;
	}

	return fanhui;
}
void lowercase(char* string)
{
	while (*string)
	{
		*string = tolower(*string);
		string++;
	}
}
void showpets(const Tree* ptree)
{
	if (TreeIsEmpty(ptree))
		puts("û���������ݣ�");
	else
		Traverse(ptree, dayin);
}
void dayin(Item item)
{
	printf("��������%-19s�������ͣ�%-19s\n", item.petname, item.petkind);
}
void findpet(const Tree* ptree)
{
	Item temp;

	if (TreeIsEmpty(ptree))
	{
		puts("û���������ݣ�");
		return;
	}

	puts("���������������ĳ�������֣�");
	s_gets(temp.petname, LENGTH);

	lowercase(temp.petname);

	printf("��������%s�ĳ���", temp.petname);

	if (InTree(&temp, ptree))
	{
		printf("�����У�\n");
		printf("�и����ֵĳ��������У�%s\n", SeekItem(&temp, ptree).child->item.petkind);
	}
	else
		printf("�������У�\n");
}
void droppet(Tree* ptree)
{
	Item temp;

	if (TreeIsEmpty(ptree))
	{
		puts("û���������ݣ�");
		return;
	}

	puts("����������ɾ���ĳ�������֣�");
	s_gets(temp.petname, LENGTH);
	puts("����������ɾ���ĳ�������ͣ�");
	s_gets(temp.petkind, LENGTH);

	lowercase(temp.petname);
	lowercase(temp.petkind);

	printf("��������%-19s���������ͣ�%-19s", temp.petname, temp.petkind);

	if (DeleteItem(&temp, ptree))
		printf("��ɾ����\n");
	else
		printf("�������У��޷�ɾ����\n");
}
#endif
//��һ�ͷ�����覴ã�ɾ���������ֻɾ��ͬ����ĳһ�ֳ���

//8.��������Item�ṹ���ֵ�perkind��Ա��Ϊ��ά�����Դ洢ͬ������ͬ����ĳ������������
//SeekItem()�Ա���Ϊ��̬������ֻ�䶯AddItem()����
//ҲҪ�䶯dayin()�Ⱥ����Ķ���
#if 1
/*(tree_1.h�ļ���)
typedef struct
{
	char petname[LENGTH];
	char petkind[LENGTH][LENGTH];
}Item;
*/

/*(tree_1.c�ļ���)
bool AddItem(const Item* pitem, Tree* ptree)
{
..........
..........
	if (SeekItem(pitem, ptree).child != NULL)
	{
		for (int i = 0; i < LENGTH; i++)
		{
			if (strlen(SeekItem(pitem, ptree).child->item.petkind[i]) < 1)
			{
				strcpy(SeekItem(pitem, ptree).child->item.petkind[i],pitem->petkind[0]);
				break;
			}
		}
		return true;
	}
		..........
		..........
*/

/*(code3.c�ļ���)
void dayin(Item item)
{
	int i = 0;
	while (strlen(item.petkind[i]) > 0)
	{
		printf("��������%-19s�������ͣ�%-19s\n", item.petname, item.petkind);
		i++;
	}
}
*/
#include "tree_1.h"
#include <stdio.h>
#include <string.h>//strchr()
#include <ctype.h>//tolower()

void menu(void);
char get_choice(void);

void addpet(Tree* ptree);
char* s_gets(char* string, int n);
void lowercase(char* string);

void showpets(const Tree* ptree);
void dayin(Item item);

void findpet(const Tree* ptree);
void droppet(Tree* ptree);

int main(void)
{
	Tree pets;
	char choice;

	menu();
	InitializeTree(&pets);

	while ((choice = get_choice()) != 'q')
	{
		switch (choice)
		{
		case 'a':
			addpet(&pets);
			break;
		case 's':
			showpets(&pets);
			break;
		case 'f':
			findpet(&pets);
			break;
		case 'n':
			printf("���ֲ�����%dֻ����\n", TreeItemCount(&pets));
			break;
		case 'd':
			droppet(&pets);
			break;
		default:
			puts("Error !");
		}
		putchar('\n');
		putchar('\n');

		menu();
	}
	DeleteAll(&pets);
	puts("�ټ���");

	return 0;
}
void menu(void)
{
	puts("Nerfville Pet Club Membership Program");
	puts("Enter the letter corresponding to your choice:");
	puts("a) ��ӳ��� s) ��ʾ��������");
	puts("n) ����������� f) Ѱ�ҳ���");
	puts("d) ɾ��һֻ���� q)�˳�");
}
char get_choice(void)
{
	char choice;

	choice = getchar();
	choice = tolower(choice);

	while (getchar() != '\n')
		continue;

	while (strchr("asnfdq", choice) == NULL)
	{
		puts("������a��s��n��f��d��q");
		choice = tolower(getchar());
		while (getchar() != '\n')
			continue;
	}

	//��
	/*while ((choice = getchar()) != EOF)
	{
		while (getchar() != '\n')
			continue;
		choice = tolower(choice);

		if (strchr("asnfdq", choice) == NULL)
			puts("������a��s��n��f��d��q");
		else
			break;
	}
	if(choice==EOF)
	choice='q'*/
	return choice;
}
void addpet(Tree* ptree)
{
	Item temp = { .petkind[0][0] = '\0' };//***ע***����Ҫ��ʼ��������
	char* find;

	if (TreeIsFull(ptree))
		puts("���������Ѵﵽ���ֵ��");
	else
	{
		puts("�������������֣�");
		s_gets(temp.petname, LENGTH);
		puts("�������������ͣ�");
		//s_gets(temp.petkind, LENGTH);
		s_gets(temp.petkind[0], LENGTH);

		lowercase(temp.petname);
		//lowercase(temp.petkind);
		lowercase(temp.petkind[0]);

		AddItem(&temp, ptree);
	}
}
char* s_gets(char* string, int n)
{
	char* fanhui;
	char* find;
	fanhui = fgets(string, n, stdin);

	if (fanhui)
	{
		find = strchr(string, '\n');
		if (find)
			*find = '\0';
		else
			while (getchar() != '\n')
				continue;
	}

	return fanhui;
}
void lowercase(char* string)
{
	while (*string)
	{
		*string = tolower(*string);
		string++;
	}
}
void showpets(const Tree* ptree)
{
	if (TreeIsEmpty(ptree))
		puts("û���������ݣ�");
	else
		Traverse(ptree, dayin);
}
//void dayin(Item item)
//{
//	printf("��������%-19s�������ͣ�%-19s\n", item.petname, item.petkind);
//}
void dayin(Item item)
{
	int i = 0;
	while (strlen(item.petkind[i]) > 0)
	{
		printf("��������%-19s�������ͣ�%-19s\n", item.petname, item.petkind[i]);
		i++;
	}
}
void findpet(const Tree* ptree)
{
	Item temp;

	if (TreeIsEmpty(ptree))
	{
		puts("û���������ݣ�");
		return;
	}

	puts("���������������ĳ�������֣�");
	s_gets(temp.petname, LENGTH);

	lowercase(temp.petname);

	printf("��������%s�ĳ���", temp.petname);

	if (InTree(&temp, ptree))
	{
		printf("�����У�\n");
	}
	else
		printf("�������У�\n");
}
void droppet(Tree* ptree)
{
	Item temp;

	if (TreeIsEmpty(ptree))
	{
		puts("û���������ݣ�");
		return;
	}

	puts("����������ɾ���ĳ�������֣�");
	s_gets(temp.petname, LENGTH);
	puts("����������ɾ���ĳ�������ͣ�");
	s_gets(temp.petkind[0], LENGTH);

	lowercase(temp.petname);
	lowercase(temp.petkind[0]);

	printf("��������%-19s���������ͣ�%-19s", temp.petname, temp.petkind[0]);

	if (DeleteItem(&temp, ptree))
		printf("��ɾ����\n");
	else
		printf("�������У��޷�ɾ����\n");
}
#endif
#endif