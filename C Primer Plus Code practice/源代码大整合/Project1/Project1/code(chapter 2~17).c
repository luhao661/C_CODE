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
	int a =/*这也是一条注释*/ 1;
	printf("I am a smart computer\n");//这是一条注释
	printf("my favorite number is %d becasuse it is the first.\n", a);/*这也是一条注释*/
	return 0;
}
//这是一条注释
/*这也是一条注释*/
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
//	printf("我将调用一个函数\n");
//	diaoyong();
//	printf("调用成功\n");
//
//}
//void diaoyong(void)
//{
//	printf("哈哈\n");
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

//2.12编程练习
//第1题打印姓名
/*int main(void)
{
	printf("严路昊");
	printf("严\n");
	printf("路昊");
	printf("严");
	printf("路昊");
}*/
#define 姓 "严"
#define 名  "路昊"
int main(void)
{

	printf("%s%s", 姓, 名);
	return 0;
}

//第3题打印年龄转化为天数
//int main(void)
//{
//	int a, b;//年龄和天数
//	a = 23;
//	printf("我的年龄是%d岁, 此数相当于%d天。",a , b=a*365);
//}

//第4题
//void jolly(void);
//void deny(void);
//int main(void)
//{
//	//用while              
//	int i = 1;
//	while(i < 4)
//	{
//		i++;
//		jolly();
//	}
//	deny();
//
//	/*用if */
//	/*int i = 1;
//	if (i < 4)
//	{
//		i++;
//		jolly();
//		goto start ;
//
//	}
//	else  
//		deny();*/                        //if是判断，while才是循环
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


//第5题
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

//第6题
//int main(void)
//{
//	int toes = 10;
//	int erbei, pinfang;
//	printf("toes=%d, 二倍为%d, 平方为%d。", toes, erbei=2*toes, pinfang=toes*toes);
//
//}

//第7题
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

//第8题
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
//	printf("%d减%d是%d\n",ten, two, ten-two);
//	printf("%d减%d是%d\n",ten);/*错误写法*/
//	printf("%d减%d是%d\n", ten , two, 8);//这也行
//	return 0;
//
//}
//
//


//用十进制，八进制，十六进制打印十进制数100
//int main(void)
//{
//	short x=100;
//	printf("dec=%d octal=%o hex=%x\n",x,x,x);
//	printf("dec=%#d octal=%#o hex=%#x\n", x, x, x);
//	return 0;
//}

//超出int的系统最大允许值
//int main(void)
//{
//	int i = 2147483647;
//	long int   j = 4294967295;
//	printf("%d,%d,%d\n",i,i+1,i+2);
//	printf("%d,%d,%d",j,j+1,j+2);
//	return 0;
//}


//更多printf()的特性
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
//	printf("退格\b\b\b");
//	printf(" 双引号\"");
//	printf("问号\?\n");
//	printf("问号？");
//	printf("123");
//	printf("测试回车符。    \r");
//	//错误写法      printf("他说,”a \ is a backslash."\n") ;     
//	printf("他说,\" a \\ is a backslash.\"\n");
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
//显示字母的代码编号
#include <stdio.h>
//int main(void)
//{
//	char ch;
//	printf("Please enter a character.\n");
//	scanf("%c",&ch);
//	printf("The code for %c is %d.\n",ch,ch);
//	return 0;
//}

//以两种方式显示float类型的值
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

//浮点数舍入错误
//int main(void)
//{
//	float a, b;
//	b = 2.0e20 + 1;
//	a = 2.0e20;
//	printf("b-a=%lf\n",b-a);
//	return 0;
//}


//打印类型大小
//int main(void)
//{
//	printf("int的大小是%zd bytes.\n",sizeof(int));
//	printf("char的大小是%zd bytes.\n",sizeof(char));
//	printf("short的大小是%zd bytes.\n",sizeof(short));
//	printf("long的大小是%zd bytes.\n", sizeof(long));
//	printf("long long的大小是%zd bytes.\n", sizeof(long long));
//	printf("float的大小是%zd bytes.\n", sizeof(float));
//	printf("double的大小是%zd bytes.\n", sizeof(double));
//	printf("long double的大小是%zd bytes.\n", sizeof(long double));
//	printf("int的大小是%zd bytes.\n", 
//		sizeof(int));
//	float a = 31415.92653589;
//	printf("%f",a);
//	return 0;
//}


//参数错误的情况
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

//使用转义序列
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


//第1题
//int main(void)
//{
//	int a=2147483647;
//	float b = 3e38f;
//	float c = 0.123e-10f;
//	printf("a=%d,a+1=%d\n",a,a+1);//整数上溢（超过了long型表示的范围）
//	printf("b=%f\n",b);							//浮点数上溢
//	printf("c/2=%f\n\n",c/2);				//浮点数下溢
//	return 0;
//}


//第2题
//int main(void)
//{
//	int a;
//	printf("请输入一个ASCII码值:____\b\b\b\b");
//	scanf("%d",&a);
//	printf("\n\t对应的字符是%c",a);
//	printf("\r哈哈!\n\n\n");
//	return 0;
//}

//第3题
//int main(void)
//{
//	printf("\aStartled by the sudden sound, Sally shouted,");      //或：char ch='\a';   printf("%c",ch);
//	printf("\n\"By the Great Pumpkin, What was that!\"");
//	return 0;
//}


//第4题
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


//第5题
/*int main(void)
{
	float a;
	float b=3.156e7f;

	printf("请输入你的年龄：____\b\b\b");
	scanf("%f",&a);
	printf("该年龄对应的秒数是：%.0f秒\n\n",a*b);

	return 0;
}*/


//第6题
int main(void)                                                              //法二：在开头用#define 
{
	float a;

	printf("请输入水的夸脱数：_____\b\b\b\b\b");
	scanf("%f", &a);
	float b = a * 950;
	float c = 3.0e-23;
	printf("\n其中水分子的数量是%e\n\n", b / c);

	return 0;
}


//第7题
//int main(void)
//{
//	float a;
//	printf("请输入身高（英寸）：______\b\b\b\b\b");
//	scanf("%f",&a);
//	printf("你的身高是%.2f厘米\n\n",a*2.54);
//
//	return 0;
//}


//第8题
//int main(void)
//{
//	//float a;
//	//printf("请输入杯数：______\b\b\b\b\b");
//	//scanf("%f",&a);
//	//printf("%.1f品脱\n",a/2);
//	//printf("%.1f盎司\n",a*8);
//	//printf("%.1f汤勺\n", a*16);
//	//printf("%.1f茶勺\n", a*16*3);
//	//getchar();
//	//return 0;
//	
//}
#endif


//chapter 4
//code1.c
#if 0
#include<stdio.h>
//#define praise "你真棒"
//int main(void)
//{
//	char name[60];
//
//	printf("你的名字是什么？");
//	scanf("%s",name);
//	printf("Hello,%s.       %s\n\n",name,praise);
//
//	return 0;
//}


//sizeof 和 strlen 的区别
//#include <string.h>
//#define praise "你真棒"
//int main(void)
//{
//	char name[40];
//
//	printf("你的名字是？");
//	scanf("%s",name);
//	printf("哈哈，%s，%s",name,praise);
//	printf("你的名字有%zd个字符长度，数组占%zd个字节大小",strlen(name),sizeof (name));
//
//	return 0;
//}	


//使用已定义的常量（符号常量，明示常量）
#define PI 3.14159
int main(void)
{
	float area, circum, radius;
	printf("你的披萨饼的半径是？\n");
	scanf("%f", &radius);
	area = PI * radius * radius;
	circum = 2 * PI * radius;
	printf("你的披萨的周长是%8.2f,面积是%8.2f", circum, area);
	return 0;
}
#endif


//chapter 4
//code2.c
#if 0
#include<stdio.h>
//使用limit.h和float.h头文件中定义的符号常量（明示常量）
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


//使用%g
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


//使用转换说明
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


//字符宽度
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


//浮点型修饰符的组合
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


//字符串格式
#define 字符串 "Authentic imitation"
int main(void)
{
	printf("[%2s]\n", 字符串);
	printf("[%24s]\n", 字符串);
	printf("[%24.5s]\n", 字符串);
	printf("[%-24.5s]\n", 字符串);

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


//一些不匹配的整型转换
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


//不匹配的浮点型转换
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


//printf()的返回值
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


//打印较长的字符串
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


//何时使用&
/*int main(void)
{
	int age;
	char name[30];

	scanf("%d%s",&age,name);
	printf("%d,%s\n",age, name);

	return 0;
}*/


//格式字符串
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


//使用变宽输出字段
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


//跳过输入的前两个整数
//int main(void)
//{
//	int n;
//
//	scanf("%*d%*d%d",&n);
//	printf("The last integer was %d\n",n);
//	return 0;
//}


//打印固定字段宽度，使列表整齐
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


//5.打印语句
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

//4.8编程练习
//1.
//int main(void)
//{
//	char name1[10];
//	char name2[10];
//
//	printf("请输入你的名：\n");
//	scanf("%s",name2);
//	printf("请输入你的姓：\n");
//	scanf("%s",name1);
//	printf("所以你叫(名+姓)：%s,%s",name2,name1);
//
//	return 0;
//}



//2.
//int main(void)
//{
//	char name[30];
//	printf("请输入你的名字：");
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
//	printf("请输入一个浮点值：");
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
//	printf("请输入身高(cm)和你的姓名：");
//	scanf("%f  %s",&a,name);
//	printf("%s, you are %.3f (m) tall",name,a/100.0);
//
//	return 0;
//}


//5.
//int main(void)
//{
//	float speed, size;
//	printf("请输入下载速度(Mb/S),和文件大小(MB)：_____\b\b\b\b\b");
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
//	printf("请输入用户的名：");
//	scanf("%s",name2);
//	printf("请输入用户的姓：");
//	scanf("%s",name1);
//	printf("%s %s\n",name2,name1);
//	printf("%*zd %*zd\n\n",strlen(name2),strlen(name2),strlen(name1),strlen(name1));  // 若没有写头文件，则%zd输出会有错误。
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
//	printf("显示小数点后6位：%.6f\n",a);
//	printf("显示小数点后12位：%.12f\n", a);
//	printf("显示小数点后16位：%.16f\n\n\n", a);
//	printf("显示小数点后6位：%.6f\n", b);
//	printf("显示小数点后12位：%.12f\n", b);
//	printf("显示小数点后16位：%.16f\n", b);
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

	printf("请输入旅行的里程(英里)和消耗的汽油量(加仑)：");
	scanf("%f %f", &mileage, &jialun);
	printf("消耗每加仑汽油行驶的英里数为：");
	printf("%.1f英里/加仑,", mileage / jialun);
	qianmi = mileage * YINLI_TO_QIANMI;
	sheng = jialun * JIALUN_TO_SHENG;
	consume = sheng / qianmi * 100;
	printf("相当于每百公里消耗汽油量为：");
	printf("%.1f升/100公里\n\n\n", consume);
	return 0;
}
#endif


//chapter 5
//code1.c
#if 0
#include<stdio.h>
//shoes 程序
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


//三重赋值
//int main(void)
//{
//	int a, b, c;
//	a = b = c = 10;
//	printf("%5d%5d%5d",a,b,c);
//	return 0;
//}


//计算1~20的平方
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


//指数增长
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


//除法
//int main(void)
//{
//	printf("整数除法：5/4  6/3  7/4\n");
//	printf("结果是  ：  %d   %d    %d\n",5/4,6/3,7/4);
//	printf("浮点数除法：5/4    6/3   7/4\n");
//	printf("结果是  ：  %.2f  %.2f  %.2f", 5./4., 6. / 3., 7./ 4.);
//
//	return 0;
//}


//优先级测试
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


//用求模运算符%把秒数转换成分和秒
//int main(void)
//{
//	int sec, min, left;
//
//	printf("把秒数转换成分钟和秒！\n");
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
//++的前缀和后缀的区别
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


//递减运算符
//int main(void)
//{
//	int count = 101;
//	while (--count > 0)
//	{
//		printf("现在有%d个\n",count);
//		printf("拿走1个,\n");
//		printf("还剩%d个\n\n",count-1);
//			
//	}
//
//		return 0;
//}


//自作聪明
//int main(void)
//{
//	int n,y;
//	n = 3;
//	y = n+++n++;
//	printf("y=%d, n=%d",y,n);
//
//	return 0;
//}


//计算前20个整数的和
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


//简单语句和复合语句
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


//自动类型转换
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


//强制类型转换
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


//定义一个带一个参数的函数
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
//给跑步者的程序
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

	printf("这个程序能换算英里和公里，计算每英里用时和速度（英里/小时）\n");
	printf("请输入你跑过的公里数：");
	scanf("%lf", &distk);
	printf("请输入你的用时\n");
	printf("先输入分钟数\n");
	scanf("%d", &min);
	printf("再输入秒数\n");
	scanf("%d", &sec);

	time = min * S_PER_M + sec;
	distm = M_PER_K * distk;
	rate = distm / ((double)time / S_PER_H);//不用（double）的话，速度是infinite
	mtime = time / distm;
	mmin = mtime / S_PER_M;
	msec = (int)mtime % S_PER_M;

	printf("你跑%1.2f km (%1.2f 英里) 要 %d 分, %d 秒。\n", distk, distm, min, sec);
	printf("这相当于跑一英里用时%d分%d秒。\n", mmin, msec);
	printf("你的平均速度是%1.2f(英里/小时)。\n", rate);

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
//	法一
//	int n = 96;
//	while (n++ < 103)
//		printf("%5c",n);
//	
//	//int c = 141;
//	//while (c++ < 147)
//	//	printf("%c",'\c');//不行，c不会递增
//
//	法二
//	char n = 'a' - 1;
//	while (n++ < 'g')
//		printf("%5c",n);
//	return 0;
//}


//编程练习
//1.
//#define HOUR 60
//int main(void)
//{
//	int min1, min2, xiaoshi;
//	printf("这个程序能把分钟转化成小时与分钟的形式\n");
//	printf("请输入分钟值：");
//	scanf("%d",&min1);
//	while (min1 > 0)
//	{
//		xiaoshi = min1 / HOUR;
//		min2 = min1 % HOUR;
//		printf("%d分钟相当于%d小时%d分钟\n",min1,xiaoshi,min2);
//		printf("请输入下一个分钟值：");
//		scanf("%d",&min1);
//	}
//	printf("你的输入无效！\n");
//	return 0;
//}


//2.
//int main(void)
//{
//	int n = 0;
//	int a;
//	printf("请输入一个整数：");
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
//	printf("请输入天数：____\b\b\b\b");
//	scanf("%d",&day);
//	while (day > 0)
//	{
//		week = day / 7;
//		day1 = day % 7;
//		printf("%d days are %d weeks, %d days.\n",day,week,day1);
//		printf("输入下一个天数：");
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
//	printf("请输入身高（单位：厘米）：___\b\b\b");
//	scanf("%f",&cm);
//	while (cm > 0)
//	{
//		feet = cm / FEET_TO_CM;
//		yushu = (int)cm % (int)FEET_TO_CM;//182%30等于6余2，而实际应为182/30.48，无法得余数。
//		inch = yushu / INCH_TO_CM;
//
//		printf("%.1f cm = %d feet, %.1f inches.\n",cm,(int)feet,inch);
//		printf("下一个数字是？（输入一个小于或等于0的数即可退出程序）");
//		scanf("%f",&cm);
//	}
//	printf("Done!");
//
//	return 0;
//}

//4.改正
//#define FEET_TO_CM 30.48
//#define INCH_TO_CM 2.54
//int main(void)
//{
//	float cm, inch;
//	int feet, yushu;
//	printf("请输入身高（单位：厘米）：___\b\b\b");
//	scanf("%f", &cm);
//	while (cm > 0)
//	{
//		feet = cm / FEET_TO_CM;//浮点数转换成整型
//		//yushu = (int)cm % (int)FEET_TO_CM;//182%30等于6余2，而实际应为182/30.48，无法得余数。
//		//不需要yushu 
//		inch = (cm - FEET_TO_CM * feet) / INCH_TO_CM;//此换算不需要取余的算法
//
//		printf("%.1f cm = %d feet, %.1f inches.\n", cm, feet, inch);
//		printf("下一个数字是？（输入一个小于或等于0的数即可退出程序）");
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
//	printf("输入天数：____\b\b\b\b");
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
//	printf("输入天数：____\b\b\b\b");
//	scanf("%d",&day);
//	
//	while (count++ < day)                                   //用count和day来控制循环次数
//	{
//		sum = sum + count1*count1;
//		printf("count = %-10d   sum = %-10d    \n",count1*count1, sum);
//		count1++;
//	}
//	return 0;
//}
////法二：用count--，从大到小来累加，可以减少定义的变量数。


//7.
//int main(double n)
//{
//	double dou;
//	printf("请输入一个double类型的数：_____\b\b\b\b\b");
//	scanf("%lf",&dou);
//	n = dou;
//	printf("立方值是：%lf",dou*dou*dou);
//
//	return 0;
//}

//7.改正
//void lifang(double x);
//int main (void)
//{
//	double y;
//	printf("请输入一个double类型的数：_____\b\b\b\b\b");
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
//	printf("请输入一个华氏温度：");
//	a = scanf("%lf",&huashi);
//	
//	       while (a == 1)                                                   //法二：while(scanf("%lf",%a)==1)
//			{
//			printf("华氏温度：%.2lf\n", huashi);
//			Temperatures(huashi);
//		/*	printf("摄氏温度：%.2lf\n", sheshi);
//			printf("开氏温度：%.2lf\n", kaishi);    */                                        //此处不能写这些语句，因为调用函数中定义的变量是局部定义	                                                                                
//			printf("输入下一个华氏温度值：（按q键退出）");                          // ，其值发生的变化也只在调用函数中生效。
//			a=scanf("%lf",&huashi);
//			}
//	printf("Done!\n");
//	return 0;
//}
////void Temperatures(double t)
////{
////	const double sheshi = 5.0 / 9.0 * (t - 32.0);
////	const double kaishi = sheshi + 237.16;
////	printf("摄氏温度：%.2lf\n", sheshi);
////	printf("开氏温度：%.2lf\n", kaishi);
////}
//
////改
//void Temperatures(double t)
//{
//	const double H_TO_S = 32.0;
//	const double C_TO_K = 273.16;
//	double sheshi, kaishi;
//	sheshi = 5.0 / 9.0 * (t - H_TO_S);
//	kaishi = sheshi + C_TO_K;
//	printf("摄氏温度：%.2lf\n", sheshi);
//	printf("开氏温度：%.2lf\n", kaishi);
//}
//



//
double Temperatures(double t);
int main(void)
{
	double huashi;
	int a;

	printf("请输入一个华氏温度：");
	a = scanf("%lf", &huashi);

	while (a == 1)                                                   //法二：while(scanf("%lf",%a)==1)
	{
		printf("华氏温度：%.2lf\n", huashi);
		Temperatures(huashi);
		printf("摄氏温度：%.2lf\n", Temperatures(huashi));//注意此处的待打印项不能写成sheshi

		printf("输入下一个华氏温度值：（按q键退出）");
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
//一般return只能返回一个值。
#endif


//chapter 6
//code1.c
#if 0
#include <stdio.h>
//数字求和
//int main(void)
//{
//	long num;
//	long sum=0L;
//	int status;
//
//	printf("请输入一个整数：");
//	status = scanf("%ld",&num);
//	while (status == 1)
//	{
//		sum = sum + num;
//		printf("继续输入下一个整数（输入q来退出程序）：");
//		status = scanf("%ld", &num);
//	}
//	printf("这些整数的和为%ld",sum);
//	return 0;
//}


//注意while()分号的位置
//int main(void)
//{
//	int n = 0;
//	while (n++ < 3);
//	printf("n is %d",n);
//
//	return 0;
//}


//浮点数比较
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


//哪些值为真
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


//误用=，会导致无限循环
//int main(void)
//{
//	long num;
//	long sum=0L;
//	int status;
//
//	printf("请输入一个整数：");
//	status = scanf("%ld",&num);
//	while (status = 1)
//	{
//		sum = sum + num;
//		printf("继续输入下一个整数（输入q来退出程序）：");
//		status = scanf("%ld", &num);
//	}
//	printf("这些整数的和为%ld",sum);
//	return 0;
//}


//使用_Bool
int main(void)
{
	long num;
	long sum = 0L;
	_Bool input;

	printf("请输入一个整数：");
	input = scanf("%ld", &num);
	while (input)
	{
		sum = sum + num;
		printf("继续输入下一个整数（输入q来退出程序）：");
		input = scanf("%ld", &num);
	}
	printf("这些整数的和为%ld", sum);
	return 0;
}
#endif


//chapter 6
//code2.c
#if 0
#include <stdio.h>
//for循环
//int main (void)
//{
//	const int NUMBER = 10;
//	int count;
//	for (count = 1; count <= NUMBER; count++)
//		printf("123\n");
//
//	return 0;
//}


//使用for循环创建一个立方表
//int main(void)
//{
//	int num;
//
//	printf("   n    n的三次方\n");
//	for (num = 1; num <= 6; num++)
//		printf("%5d %6d\n",num,num*num*num);
//
//	return 0;
//}


//用字符代替数字计数
//int main(void)
//{
//	char ch;
//	for (ch = 'a'; ch <= 'z'; ch++)
//		printf("The ASCII value for %c is %d.\n",ch,ch);
//
//	return 0;
//}


//第一个表达式也可以使用printf()
//int main(void)
//{
//	int num = 0;
//
//	for (printf("Keep entering numbers ! \n"); num != 6; )
//		scanf("%d", &num);
//	printf("That's the one I want!\n");
//	return 0;
//}


//计算邮费
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


//逗号表达式
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


//求序列的和
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


//出口条件循环do while
//int main(void)
//{
//	const int secret_code = 13;
//	int a;
//	do
//	{
//		printf("请输入猜测的数字：");
//		scanf("%d",&a);
//	} while (a!= secret_code); 
//	printf("恭喜你，猜对了！\n");
//
//	return 0;
//}


//使用嵌套循环
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


//依赖外部循环的嵌套循环
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


//使用循环处理数组
#define SIZE 10
#define PAR 72
int main(void)
{
	int index, score[SIZE];
	int sum = 0;

	printf("请输入%d个高尔夫分数：\n", SIZE);
	for (index = 0; index < SIZE; index++)
		scanf("%d", &score[index]);
	printf("你输入的数字是：\n");
	for (index = 0; index < SIZE; index++)
		printf("%3d", score[index]);
	printf("\n");
	for (index = 0; index < SIZE; index++)
		sum += score[index];
	float average = (float)sum / SIZE;
	printf("总分是%d，平均分是%.2f\n", sum, average);
	printf("差点（平均分和标准分之差）是%.0f\n", average - PAR);

	return 0;
}
#endif


//chapter 6
//code3.c
#if 0
#include <stdio.h>
//计算数的整数次幂，并返回计算结果（使用函数返回值的循环）
//double power(double n, int p);
//int main(void)
//{
//	double x;
//	int exp;
//	
//	printf("请输入一个数字和该数字的整数次幂数：\n");
//	printf("（输入q以退出程序）                 ");
//	while (scanf("%lf%d", &x,& exp) == 2)
//	{
//		printf("%f的%d次方是%f",x,exp, power(x, exp));
//		printf("输入下一对数字：");
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


//复习题6.
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
//编程练习
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
//法二
//for (i = 1; i <= 6; i++)
//{
//	for (j = 1, c = 'F';            j <= i;			 j++, c--)//多设一个新变量c。
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
//难点：嵌套循环，如何在循环中嵌入一个每隔1个2个3个。。。字母，输出\n的循环。
//4.订正
//int main(void)
//{
//	int i, j;
//	char ch = 'A';
//
//	for (i = 1; i <= 6; i++)//生成6行
//	{
//		for (j = 1;			 j <= i;			j++, ch++)//重点：内层循环使用当前的i来控制循环条件
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
//	printf("请输入E以开始程序");
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
//					for (l = 'A' + i - 1; l >= 'A'; l--)//嵌套过多，乱了。
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
//5.改正
//int main(void)
//{
//	char ch1,ch2;
//	printf("请输入想打印的字母金字塔底层的中心（大写）字母：");
//	scanf("%c",&ch2);
//
//	int i, j, num;
//	ch1 = 'A';
//	num = ch2 - ch1 + 1;//计算打印的行数
//
//	for (i = 1; i <= num; i++)//打印行
//	{
//		for (j = 1; j <= num - i; j++)//打印空格，（注：打印空格不用两个for循环，仅在金字塔左侧打印空格即可，右侧不用）
//			printf(" ");						  //					          (第一行A左侧的空格数量根据行数变化）		
//			
//		for (ch1 = 'A';		 j <= num;		j++,ch1++)//打印正序，j不必再初始化
//			printf("%c",ch1);
//		
//		for(ch1-=2,j=1;			j<i;		j++,ch1--)//打印倒序，j回1，根据行数限制j。ch1经过++后比打印的值大1，因此要减2.
//			printf("%c", ch1);								 //若为j<=i,则会打印A之前的值@
//																		 //j的测试条件的编写是难点。
//	printf("\n");
//	}																	
//
//	return 0;
//}



//6.
//int main(void)
//{
//	int a, b;
//	printf("请输入表格的下限：");
//	scanf("%d", &a);
//	printf("请输入表格的上限：");
//	scanf("%d",&b);
//	printf("\n\n");
//
//	int c;
//	printf("整数  平方  立方\n");
//	for(c=a;c<=b;c++)
//	printf("%5d%5d%5d\n",c,c*c,c*c*c);
//
//	return 0;
//}


//7.
//int main(void)
//{
//	char ch[20];
//	printf("请输入一个单词：_____\b\b\b\b\b");
//	scanf("%s",ch);                                                        //此处不用for循环给数组赋值，因为不确定要输入字符的个数
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
//	printf("请输入两个浮点数：");
//	c=scanf("%f%f",&a,&b);
//
//	while (c == 2)
//	{
//		printf("%lf\n",(a-b)/(a*b));
//		printf("请继续输入两个浮点数（输入q以退出）：");
//		c = scanf("%f%f", &a, &b);
//	}
//
//	printf("Done ！\n");
//	
//	return 0;
//}


//9.
double jisuan(float a, float b);
int main(void)
{
	float a, b;
	int c;

	printf("请输入两个浮点数：");
	c = scanf("%f%f", &a, &b);

	while (c == 2)
	{

		printf(" (a - b) / (a * b)结果是：%lf", jisuan(a, b));
		printf("请继续输入两个浮点数（输入q以退出）：");
		c = scanf("%f%f", &a, &b);
	}

	printf("Done ！\n");

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
//	printf("请输入八个整数：");
//	scanf("%s",shuzu);                            //不能处理成字符串，否则123算一个数，1 2 3 （中间用空格隔开）才算3个数
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
//	printf("请输入八个整数：");
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
//	printf("请输入次数：");
//
//	while (scanf("%d", &number) == 1)
//	{
//		for (i = 1.0, j = 1.0, sum = 0, k = 1; k <= number; j += 1.0, k++)
//		{
//			sum += i / j;
//		}
//		printf("1.0+1.0/2.0+1.0/3.0+....(加到第%d项)", number);
//		printf("和为%f", sum);
//		printf("\n\n请输入次数(按下q以退出)：");
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
//	printf("请输入次数：");
//
//	while (scanf("%d", &number) == 1)
//	{
//		for (i = 1.0, j = 1.0, sum = 0, k = 1; k <= number; j += 1.0, k++)
//		{
//			sum = sum+ (     zhengfuhao(k)    )* i / j;
//		}
//		printf("1.0-1.0/2.0+1.0/3.0-....(到第%d项)", number);
//		printf("和为%f", sum);
//		printf("\n\n请输入次数(按下q以退出)：");
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
//12.3两个数列的总和
//int main(void)
//{
//	int number;
//	float i, j;
//	int k;
//	float sum=2.0;
//
//	printf("请输入项数（>=3）：");
//
//	while (scanf("%d", &number) == 1)
//	{
//		for (i = 2.0, j = 1.0, k = 3;			k <= number;			j += 1.0, k++)
//		{
//			sum += i / (2*j+1.0);
//		}
//		printf("1.0+1.0+2.0/3.0+2.0/5.0+2.0/7.0+....(加到第%d项)", number);
//		printf("和为%f", sum);
//		printf("\n\n请输入次数(按下q以退出)：");
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
//		printf("\n按下q以结束程序：\n");
//
//	} while (scanf("%d",&a)  ==1);*/
//	//法二
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
//	printf("请输入8个值：");
//	for(index=0;index<=7;index++)
//		scanf("%lf",&shuzu1[index]);//若写的是%f，则输出会有错误。要注意数据类型匹配
//	
//	shuzu2[0] = shuzu1[0];
//	for (index = 1; index <= 7; index++)
//		shuzu2[index] = shuzu1[index] + shuzu2[index - 1];               //法二：P80 嵌套循环
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
//	printf("请输入内容：");
//	do
//	{
//		for (index = 0; index <= 255; index++)
//		scanf("%c", &ch[index]);								//这样会一直在for循环中，直到不满足测试条件
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
//	printf("请输入内容：");
//
//	for (index = 0; index <= 255; index++)
//	{
//		
//		
//			scanf("%c", &ch[index]);//如何用do while 检测'\n'
//		
//	}
//
//	for (index = strlen(ch); index >= 0; index--)
//		printf("%c", ch[index]);
//
//	return 0;
//}
//
//15.改正
//#include <string.h>
//int main(void)
//{
//	char ch[256];
//	int index=-1;
//
//	printf("请输入内容：");
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
//	} while (ch[index] != '\n' );*/  //这样检测不到'\n'，因为index又向后移动了一位
//
//	printf("内容倒叙后是：");
//	for (index--; index >= 0; index--)					//若写成index=strlen(ch)-1,则输出的第一项是数组中偏移地址为255
//		printf("%c", ch[index]);								//的单元存储的内容。
//
//	return 0;
//}


//16.
//int main(void)
//{
//	float Da=100.0, De=100.0;
//	int n,i;
//	/*printf("输入年数：");
//	scanf("%d",&n);
//
//	printf("Da:\n");
//	for (i = 1; i <= n; i++)
//	{
//		Da += 10;
//		printf("第%d年是%8.2f\n", i,Da);
//	}
//
//	printf("De:\n");
//	for (i = 1; i <= n; i++)
//	{
//		De += De*0.05;
//		printf("第%d年是%8.2f\n", i, De);
//	}*/
//	n = 0;
//	do
//	{
//		Da += 10;
//		De += De * 0.05;
//		n++;
//	}while(Da > De);
//	printf("过%d年De比Da投资额更多，Da：%8.2f De：%8.2f",n,Da,De);
//
//	return 0;
//}


//17.
//int main(void)
//{
//	float money=1000000.0;
//	int i,n;
//	printf("输入年数：");
//	scanf("%d",&n);
//
//	for (i = 1; i <= n; i++)
//	{
//		money += money * 0.08;
//		money -= 100000;
//		printf("%d年后还剩下%.2f\n",i,money);
//	}
//
//	return 0;
//}
//法二：do while循环


//18.
//int main(void)
//{
//	int friends;
//	int n,i;
//
//	printf("请输入周数：");
//	scanf("%d",&n);
//
//	for (i = 1, friends = 5; friends <= 150&&i<=n; i++)
//	{
//		friends -= i;
//		friends *= 2;
//		printf("第%d周有%d个朋友\n",i,friends);
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
//		printf("第%d周有%d个朋友\n",i,friends);
//	}
//
//	return 0;
//}
#endif


//chapter 7
//code1.c
#if 0
#include <stdio.h>
//分支结构if
//int main(void)
//{
//	const int FREEZING = 0;
//	float wendu;
//	int cold_days=0;
//	int all_days=0;
//
//	printf("请输入这几天的温度：（按q以结束键入）");
//	while (scanf("%f", &wendu) == 1)
//	{
//		all_days++;
//		if (wendu < FREEZING)
//			cold_days++;
//	}
//	if (all_days != 0)
//		printf("共%d天，有%d天温度低于0摄氏度，占总天数的%.1f%%。\n",all_days,cold_days,100*(float)cold_days/all_days);
//	if (all_days == 0)
//		printf("没有数据！\n");
//	return 0;
//}


//用getchar putchar
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


//使用ctype.h区分字母与非字母
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


//计算电费
//#define BREAK1 360
//#define BREAK2 468
//#define BREAK3 720
//#define RATE1 0.13230
//#define RATE2 0.15040
//#define RATE3 0.30025
//#define RATE4 0.34025
//#define BASE1 (RATE1*BREAK1)//第一档费用吃满
//#define BASE2 (BASE1+RATE2*(BREAK2-BREAK1))//第二档费用吃满
//#define BASE3 (BASE2+RATE3*(BREAK3-BREAK2))//第三档费用吃满
//
//int main(void)
//{
//	double yongliang;
//	double money;
//
//	printf("请输入用的电量（单位：千瓦时）：");
//	scanf("%lf",&yongliang);
//	if (yongliang <= BREAK1)
//		money = RATE1 * yongliang;
//	else if (yongliang <= BREAK2)
//		money = BASE1 + RATE2 * (yongliang - BREAK1);
//	else if (yongliang <= BREAK3)
//		money = BASE2 + RATE3 * (yongliang - BREAK2);
//	else 
//		money = BASE3 + RATE4 * (yongliang - BREAK3);//第四档的用费
//	printf("%.1lf度电要交费%.1lf元",yongliang,money);
//
//	return 0;
//}


//给定输入的整数的所有约数
//int main(void)
//{
//	long num;
//	long  div;
//	int biaoji;
//
//	printf("请输入一个整数：(按q以退出)");
//	while (scanf("%ld", &num)==1)
//	{
//		 for (div=2,biaoji=1;(div*div)<=num;div++)
//			if (num % div == 0)
//		{
//			if ((div * div) != num)
//				printf("%ld的两个约数是：%ld和%ld\n", num, div, num / div);
//			else
//				printf("%ld的两个约数是：%ld\n",num,div);
//			biaoji = 0;
//		}
//		if (biaoji)                                               //标记，这能判断某数是否进入了for循环。
//		{
//		 printf("%ld是素数\n",num);
//		}
//		printf("请再输入一个整数：(按q以退出)");
//	}
//	printf("再见！\n\n");
//
//	return 0;
//}


//使用逻辑与运算符
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
//	printf("有%d个非单/双引号的字符(含空格)\n",charcount);
//
//	return 0;
//}


//统计单词
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

	printf("请输入待测试的文本：（键入|以结束文本写入）\n");
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
	printf("字符数：%ld，单词数：%ld，行数：%ld，不完整行数：%ld。\n\n", zifushu, dancishu, hangshu, buwanzhenghangshu);

	return 0;
}
#endif


//chapter 7
//code2.c
#if 0
#include <stdio.h>
//条件运算符
//#define yitong 350//一桶油漆能刷的面积
//int main(void)
//{
//	int fenshuamianji;
//	int cans;
//
//	printf("请输入要粉刷的面积：");
//	while (scanf("%d", &fenshuamianji) == 1)
//	{
//		cans = fenshuamianji / yitong;
//		cans += fenshuamianji % yitong == 0 ? 0 : 1;
//		printf("You need %d %s of paint.\n",cans,cans==1?"can":"cans");
//		printf("请输入要粉刷的面积：(按q以退出程序)");
//	}
//
//	return 0;
//}


//使用continue 跳过部分循环
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
//	printf("请输入第一个分数：（按q以退出）");
//	while (scanf("%f", &fenshu) == 1)
//	{
//		if (fenshu<MIN || fenshu>MAX)
//		{
//			printf("%.1f是个无效数值,请重新输入！", fenshu);
//			continue;
//		}
//		printf("已接受数值%.1f",fenshu);
//		min = fenshu < min ? fenshu : min;
//		max = fenshu > max ? fenshu : max;
//		zongfen += fenshu;
//		n++;
//		printf("请输入下一个分数：（按q以结束输入）");
//	}
//	if (n > 0)
//	{
//		printf("%d个分数的平均分是%.1f\n", n, zongfen / n);
//		printf("其中最低分是：%.1f最高分是：%.1f", min, max);
//	}
//	else
//		printf("没有有效值输入！");
//
//	return 0;
//}


//continue 从何处继续循环？
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

//使用break退出循环
//int main(void)
//{
//	float length, width;
//	printf("请输入长方形的长：");
//	while (scanf("%f", &length) == 1)
//	{
//		printf("请输入宽：");
//		if (scanf("%f", &width) != 1)
//			break;
//		printf("面积是%.1f\n",length*width);
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
	printf("请输入一个字母，我会给出以该字母开头的动物名称：\n");
	printf("(键入#以退出)                                                         ");
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
			printf("我只能接受小写字母~\n");
		while ((getchar()) != '\n')
			continue;
		printf("请继续输入：\n");
	}
	printf("再见！\n");

	return 0;
}
#endif


//chapter 7
//code3.c
#if 0
#include <stdio.h>
//复习题10.
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

//复习题10.改正
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


//编程练习
//1.
//#define STOP '#'
//int main(void)
//{
//	printf("请输入字符：（按#停止）");
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
//		else if (ch != ' ')//不为换行且不为空格
//			others++;
//		//法二：if...    else if...    else...
//	}
//	printf("您输入的字符中有%d个空格%d个换行符和%d个其他字符。",space,huanhang,others);
//	
//	return 0;
//}


//2.
//#define STOP '#'
//int main(void)
//{
//	char ch;
//	int jishu=0;
//	printf("请输入字符：（输入#字符时停止）\n");
//
//	while ((ch = getchar()) != STOP)
//	{
//		if (ch == '\n')
//			continue;
//		//jishu++;                如果放在此处，第一行会到第七个就换行，此后的行才是每8个换行
//		if (jishu % 8 == 0)
//			printf("\n");
//		jishu++;
//		printf("%c-%-5d",ch,ch);
//
//	}
//	printf("\nDone ！\n");
//	return 0;
//}

//2.改
//#define STOP '#'
//int main(void)
//{
//	char ch;
//	int jishu = 0;
//	printf("请输入字符：（输入#字符时停止）\n");
//
//	while ((ch = getchar()) != STOP)
//	{
//		
//		//jishu++;      若写在这边，则第一行只有7个
//		if (jishu++ % 8 == 0)
//			printf("\n");
//		
//		if (ch == '\n')
//			printf("'\\n'-%-5d",ch);
//		else
//		   printf("'%c'-%-5d", ch, ch);
//
//	}
//	printf("\nDone ！\n");
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
//	printf("请输入数字（输入0以结束）：\n");
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
//	printf("输入偶数%d个，奇数%d个，\n",oushu,jishu);
//	printf("偶数的平均值：%.2f\n奇数的平均值：%.2f\n",(float)sum1/oushu,(float)sum2/jishu);
//	return 0;
//}


//4.
//int main(void)
//{
//	char ch;
//	int num=0;
//	printf("请输入字符：（输入#以停止）");
//	while ((ch = getchar()) != '#')
//	{
//		if (ch == '。')
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
//	printf("进行了%d次替换",num);
//	
//	return 0;
//}

//int main(void)
//{
//	int index = -1;
//	char ch[256];
//	int cishu = 0;
//
//	printf("请输入字符：（输入#以停止）");
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
//	printf("进行了%d次替换\n\n",cishu);
//
//	return 0;
//}

//法二
//int main(void)
//{
//	int cishu = 0;
//	char ch;
//
//	printf("请输入字符：（键入#以停止输入）");
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
//			printf("%c",ch);//此处不能用putchar();
//	}
//	printf("进行了%d次替换\n\n", cishu);
//	return 0;
//}


//5.
//int main(void)
//{
//	int index = -1;
//	char ch[256];
//	int cishu = 0;
//
//	printf("请输入字符：（输入#以停止）");
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
//	printf("进行了%d次替换\n\n", cishu);
//
//	return 0;
//}
//法二： case '!'  case'.'  default: printf("%c",ch);

//6.
//int main(void)
//{
//	printf("请输入字符：（键入#以停止）");
//	char ch;
//	int biaoji = 0;
//	int cishu = 0;
//
//	while ((ch = getchar()) != '#')
//	{
//		if (ch == 'e' && !biaoji)
//		biaoji = 1;//输入e，标记打开，输入i，标记关闭。         输入e后输入非i，标记关闭。
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
//	printf("ei出现%d次",cishu);
//
//	return 0;
//}
//法二
//int main(void)
//{
//	int cishu = 0;
//	int halfpair = 0;
//	char ch;
//	printf("请输入：（按#退出）");
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
//		default://非e和非i可以清空标记。
//			halfpair = 0;
//		}
//	}
//	printf("%d次",cishu);
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
//	printf("请输入您一周工作的小时数：\n");
//	scanf("%f",&hours);
//	if (hours >= 40)//是否有加班时间
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
//	printf("工资总额：%.2f		税金：%.2f		净收入：%.2f\n",zonge,shui,jinshouru);
//
//	return 0;
//}
//法二：按小时分   小于等于30小时   小于等于40小时    40小时以上（细分为基础工资450美元以下和以上）

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
//			printf("输入非法！请重新输入！");
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
//		printf("\n请输入您一周工作的小时数：\n");
//		scanf("%f", &hours);
//
//		if (hours >= 40)//是否有加班时间
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
//		printf("工资总额：%.2f		税金：%.2f		净收入：%.2f\n", zonge, shui, jinshouru);
//	
//	tuichu:break;
//	}
//
//	return 0;
//}

//8.改
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
			printf("输入非法！请重新输入！");
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

		printf("\n请输入您一周工作的小时数：\n");
		scanf("%f", &hours);

		if (hours >= 40)//是否有加班时间
			hours = (hours - 40) * 1.5 + 40;

		zonge = hours * meixiaoshi;

		if (zonge <= BREAK1)
			shui = zonge * RATE1;
		else if (zonge <= BREAK2)
			shui = BASE1 + (zonge - BREAK1) * RATE2;
		else
			shui = BASE2 + (zonge - BREAK2) * RATE3;

		jinshouru = zonge - shui;

		printf("工资总额：%.2f		税金：%.2f		净收入：%.2f\n", zonge, shui, jinshouru);

		printf("继续——\n");
		showmenu();

	}

tuichu:printf("再见！\n");
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
//	printf("请输入一个正整数：");
//	scanf("%d",&num);
//
//	printf("小于或等于%d的数，且是素数的是：", num);
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
//9.改
//int main(void)
//{
//	unsigned int num;
//	unsigned long div;
//	int biaoji;
//	int num1;
//
//	printf("请输入一个正整数：(按0以退出程序)");
//	while (scanf("%d", &num) == 1)
//	{
//		if (num < 2)
//		{
//			if (num == 0)
//				break;//break在嵌套的if里，也能退出while循环
//			printf("%d非法,请重新输入！",num);
//			continue;
//		}
//
//		printf("小于或等于%d的数，且是素数的是：", num);
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
//			printf("\n请输入一个正整数：(按0以退出程序)");
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
//	printf("请输入与您的状态对应的数字：\n");
//	printf("1)单身		2)户主\n3)已婚，共有	4)已婚，离异\n");
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
//			printf("输入有误！请再次输入：\n");
//			continue;
//		}
//
//		printf("请输入您的工资：");
//		while (scanf("%f", &gongzi) != 1)
//		{
//			printf("输入有误！请再次输入：\n");
//			break;//若为continue,则输入q时会无限循环，因为scanf一直读的是被丢弃的q
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
//	printf("您应缴税：%.2f元\n\n\n", shui);
//	goto START;
//	}
//
//	printf("再见！\n");
//	return 0;
//}
//法二：不用goto 用调用函数来显示税收计划表


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
//	printf("请输入要购买的蔬菜前对应的字母：（按q退出）\n");
//	printf("(a 洋蓟			（b甜菜\n");
//	printf("(c 胡萝卜		\n");
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
//			printf("请输入磅数：\n");
//			scanf("%f", &yangji);
//			break;
//		case 'b':
//			printf("请输入磅数：\n");
//			scanf("%f", &tiancai);
//			break;
//		case 'c':
//			printf("请输入磅数：\n");
//			scanf("%f", &huluobo);
//			break;
//		}
//			
//		if (choice == 'q')
//			break;
//		
//    	printf("请输入要购买的蔬菜前对应的字母：（按q退出）\n");//为什么这段话会执行两遍？？？？？
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
//		printf("洋蓟单价：		2.05\n甜菜单价：		1.15\n胡萝卜单价：		1.09\n");
//		printf("*****************************\n");
//		printf("订购的重量（单位：磅）：%.2f\n",bangshu);
//		printf("订购的蔬菜费用：	%.2f\n",shoujia);
//		printf("订单的总费用：		%.2f\n",shoujia-zhekou);
//		printf("折扣：			%.2f\n",zhekou);
//		printf("运费和包装费：		%.2f\n",yunfeibaozhuangfei);
//		printf("总计：			%.2f\n",shoujia-zhekou+yunfeibaozhuangfei);
//		printf("*****************************\n");
//
//	printf("再见！\n");
//
//	return 0;
//}


#if 0
//11.改
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
	HELP:	scanf("%c", &choice);//若输入a,则switch块执行完毕后执行showmenu,紧接着输入的是\n,这也执行showmenu.

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
				printf("输入错误，请重新输入！\n");
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


	printf("洋蓟单价：		2.05\n甜菜单价：		1.15\n胡萝卜单价：		1.09\n");
	printf("*****************************\n");
	printf("订购的重量（单位：磅）：%.2f\n", bangshu);
	printf("订购的蔬菜费用：	%.2f\n", shoujia);
	printf("订单的总费用：		%.2f\n", shoujia - zhekou);
	printf("折扣：			%.2f\n", zhekou);
	printf("运费和包装费：		%.2f\n", yunfeibaozhuangfei);
	printf("总计：			%.2f\n", shoujia - zhekou + yunfeibaozhuangfei);
	printf("*****************************\n");

	printf("再见！\n");

	return 0;
}

void showmenu(void)
{
	printf("****************************************************\n");
	printf("请输入要购买的蔬菜前对应的字母：（按q退出）\n");
	printf("(a 洋蓟			（b甜菜\n");
	printf("(c 胡萝卜		\n");
	printf("****************************************************\n");
}

float getweight(void)
{
	float weight;
	printf("请输入磅数：\n");
	scanf("%f", &weight);

	return weight;
}
#endif


//改
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
			printf("输入错误，请重新输入！\n");
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


	printf("洋蓟单价：		2.05\n甜菜单价：		1.15\n胡萝卜单价：		1.09\n");
	printf("*****************************\n");
	printf("订购的重量（单位：磅）：%.2f\n", bangshu);
	printf("订购的蔬菜费用：	%.2f\n", shoujia);
	printf("订单的总费用：		%.2f\n", shoujia - zhekou);
	printf("折扣：			%.2f\n", zhekou);
	printf("运费和包装费：		%.2f\n", yunfeibaozhuangfei);
	printf("总计：			%.2f\n", shoujia - zhekou + yunfeibaozhuangfei);
	printf("*****************************\n");

	printf("再见！\n");

	return 0;
}

void showmenu(void)
{
	printf("****************************************************\n");
	printf("请输入要购买的蔬菜前对应的字母：（按q退出）\n");
	printf("(a 洋蓟			（b甜菜\n");
	printf("(c 胡萝卜		\n");
	printf("****************************************************\n");
}

float getweight(void)
{
	float weight;
	printf("请输入磅数：\n");
	scanf("%f", &weight);

	while (getchar() != '\n')//清理换行符
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
//		putchar(ch);//若写成putchar();    则会报错：putchar()参数过少。
//
//	return 0;
//}


//使用EOF
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
//猜数字程序1
int main(void)
{
	printf("选择一个1~100的数字。然后我会尝试猜测。");
	printf("\n（输入y表示正确，输入n表示错误）\n");

	int num = 1;
	printf("数字是%d吗？", num);
	while (getchar() != 'y')
		printf("数字是%d吗？\n", ++num);//由于有\n输入，所以这段话会执行两遍！

	printf("好，我猜到了！\n");

	return 0;
}
#endif


#if (0)
//猜数字程序2
int main(void)
{
	printf("选择一个1~100的数字。然后我会尝试猜测。");
	printf("\n(输入y表示正确，输入n表示错误)\n");

	int num = 1;
	printf("数字是%d吗？\n", num);
	while (getchar() != 'y')
	{
		printf("数字是%d吗？\n", ++num);
		//if (getchar == '\n')       //错误
		//if (getchar() != '\n')     //这也可以。但仅限输入是一个字符（y或n）
		while (getchar() != '\n')
			continue;
	}
	printf("好，我猜到了！\n");

	return 0;
}
#endif


#if 0
//猜数字程序3
int main(void)
{
	printf("选择一个1~100的数字。然后我会尝试猜测。");
	printf("\n(输入y表示正确，输入n表示错误)\n");

	int num = 1;
	printf("数字是%d吗？\n", num);
	//while (getchar() != 'y')
	//{
	//	if (getchar() == 'n')                                          //需要一个变量做中转
	//		printf("数字是%d吗？\n", ++num);
	//	else
	//		printf("抱歉，我只能回应y或n\n");

	//	while (getchar() != '\n')
	//		continue;
	//}
	char ch;
	while ((ch = getchar()) != 'y')
	{
		if (ch == 'n')
			printf("数字是%d吗？\n", ++num);
		else
			printf("抱歉，我只能回应y或n\n");

		//	while (ch != '\n')                                              //会有异常，不再读取输入。
		while (getchar() != '\n')
			continue;
	}
	printf("好，我猜到了！\n");

	return 0;
}
#endif


#if 0
//根据输入的数字指定的参数打印字符
void display(char ch, int hang, int lie);
int main(void)
{
	int row, column;
	int ch;
	printf("请输入一个字母和两个整数数字：\n");

	while ((ch = getchar()) != '\n')
	{
		scanf("%d%d", &row, &column);
		display(ch, row, column);
		printf("请输入一个字母和两个整数数字：\n");
		printf("按下Enter以结束\n");
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
//根据输入的数字指定的参数打印字符——改
void display(char ch, int hang, int lie);
int main(void)
{
	int row, column;
	int ch;
	printf("请输入一个字母和两个整数数字：\n");

	while ((ch = getchar()) != '\n')
	{
		if (scanf("%d%d", &row, &column) != 2)//scanf输入数字时，忽略掉空格，回车等
			break;
		display(ch, row, column);

		while (getchar() != '\n')//消耗掉column后的\n
			continue;

		printf("请输入一个字母和两个整数数字：\n");
		printf("按下Enter以结束\n");
	}
	printf("再见！\n");

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
//用getchar()读取错误的输入，并提示用户纠正
int main(void)
{
	int input;
	char ch;

	while (scanf("%d", &input) != 1)
	{
		while ((ch = getchar()) != '\n')
			putchar(ch);
		printf("不是一个整数！请重新输入：\n");
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
//输入验证
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

	printf("此程序计算特定范围内的所有整数的平方和。\n");
	printf("（在上下限均输入0以结束程序）");
	printf("请输入下限：\n");

	start = yanzheng_zhengshu();//第一次输入验证
	printf("请输入上限：\n");
	end = yanzheng_zhengshu();

	while (start != 0 || end != 0)
	{
		if (yanzheng_limits(start, end, MIN, MAX))//第二次输入验证
			printf("请重新输入！\n");
		else
		{
			answer = qiupinfanghe(start, end);
			printf("%ld到%ld的整数的平方和为%ld\n", start, end, answer);
		}

		printf("\n\n请输入下限：\n");
		start = yanzheng_zhengshu();//第一次输入验证
		printf("请输入上限：\n");
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
		printf("不是一个整数，请重新输入！\n");
	}

	return input;
}

int yanzheng_limits(long num1, long num2, long num3, long num4)
{
	int biaoji = 0;

	if (num1 > num2)
	{
		printf("下限大于上限，有误！\n");
		biaoji = 1;
	}
	if (num1 < num3 || num2 < num3)
	{
		printf("值小于MIN，有误！\n");
		biaoji = 1;
	}
	if (num1 > num4 || num2 > num4)
	{
		printf("值大于MAX，有误！\n");
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
//实现只把正确的响应传入switch函数
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
	printf("请输入你的选择：\n");
	printf("a	b	\n");
	printf("c	q\n");
	printf("******************\n");
	/*ch = getchar();                                 //法一
	while (getchar() != '\n')
				continue;*/
	ch = get_first();

	while ((ch < 'a' || ch>'c') && ch != 'q')
	{
		printf("错误，请重新输入！\n");
		/*ch = getchar();
		while (getchar() != '\n')
			continue;*/
		ch = get_first();
	}

	return ch;
}

char get_first(void)//法二：调用读第一个字母功能的函数。
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
//复习题
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
			count++;//不统计空格ascii码以前的非打印字符。
	}

	printf("有%d个字符(不含换行符)", count);

	return 0;
}
#endif


//编程练习
//1.
#if 0
int main(void)
{
	printf("请输入字符：\n");

	char ch;
	int count = 0;

	while ((ch = getchar()) != EOF)
	{
		if (ch != '\n')
			count++;
		else
			;
	}

	printf("读取到%d个字符\n", count);

	return 0;
}
#endif


//2.
#if 0
int main(void)
{
	printf("请输入字符：\n");
	int ch;
	int num = 0;

	while ((ch = getchar()) != EOF)
	{
		if (num % 10 == 0)
		{
			putchar('\n');
		}
		num++;  //瑕疵：输入换行符后之后的第一行可能不能逢10换行。


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
//2.改正
#if 0
int main(void)
{
	printf("请输入字符：\n");
	int ch;
	int num = 0;

	while ((ch = getchar()) != EOF)
	{


		if (num++ == 10)  //逢10换行法二。
		{
			printf("\n");
			num = 1;
		}

		//法二：if ...else if...
		if (ch > ' ')
			printf("\'%c\'--%3d", ch, ch);
		else if (ch == '\n')
		{
			printf("\\n--\\n\n");
			num = 0;                         //使输入\n后从新的一行开始，且逢10换行。
		}
		else if (ch == '\t')
			printf("\\t--\\t");
		else
			printf("\'%c\'--^%c", ch, (ch + 64));//ctrl+A等非显示字符的处理。

	}

	return 0;
}
#endif


//3.
#if 0
int main(void)
{
	printf("请输入字符：\n");
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
	printf("输入中的大写字母个数：%d\n", upjishu);
	printf("输入中的小写字母个数：%d\n", lowjishu);

	return 0;
}
#endif 
//法二：使用ctype.h头文件内的islower(),isupper()


//4.
#if 0
int main(void)
{
	printf("请输入字符：\n");
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
		//瑕疵：当仅输入回车时次数还会增加1

	}
	printf("单词个数：%d\n", dancishu);


	return 0;
}
//4.改
#elif  0
int main(void)
{
	printf("请输入字符：\n");
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
		//统计单词法二：
		/*if (ch == ' ' || ch == ',' || ch == '.' || ch = '\n')
			dancishu++;*/

	}
	printf("单词个数：%d\n", dancishu);
	printf("平均每个单词的字母数：%.2f\n\n", zimushu / dancishu);

	return 0;
}
#endif


//5.
#if 0
int erfenfa1(int a);
int erfenfa2(int b);

int main(void)
{
	printf("选择一个1~100的数字。然后我会尝试猜测。");
	printf("\n(输入y表示正确，输入n表示错误)\n");

	int num = 50;
	printf("数字是%d吗？\n", num);
	//while (getchar() != 'y')
	//{
	//	if (getchar() == 'n')                                          //需要一个变量做中转
	//		printf("数字是%d吗？\n", ++num);
	//	else
	//		printf("抱歉，我只能回应y或n\n");

	//	while (getchar() != '\n')
	//		continue;
	//}
	int ch;
	int a, b;
	while ((ch = getchar()) != 'y')
	{
		while (getchar() != '\n')//1处
			continue;

		while (ch != 'n' && ch != 'y')
		{
			putchar(ch);
			printf("不是我能识别的指令，请输入y或n\n");
			ch = getchar();
			while (getchar() != '\n')//2处
				continue;
		}

		if (ch == 'y')
			break;

	kaishi1:printf("请问是猜大了还是猜小了？（键入d表示猜小了，键入u表示猜大了）\n");
		ch = getchar();

		if (ch == 'd')
		{
			a = num;
			printf("数字是%d吗？\n", erfenfa1(a));
			num = erfenfa1(a);
		}
		else if (ch == 'u')
		{
			b = num;
			printf("数字是%d吗？\n", erfenfa2(b));
			num = erfenfa2(b);
		}
		else
		{
			printf("抱歉，我只能回应d或u\n");
			while (getchar() != '\n')//3.处
				continue;
			goto kaishi1;
		}
		while (getchar() != '\n')//4.处
			continue;
	}
	printf("好，我猜到了！\n");


	return 0;
}                                                       //二分法无法实现
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
//5.改正
#if 0
//int erfenfa1(int a,int b,int c);  //对于二分法，不用调用函数。因为head tail guess 三个变量均会变化。
//int erfenfa2(int a,int b,int c);  //而调用的函数的变量的变化只会在调用函数中生效,在主函数中不生效。

int main(void)
{
	printf("选择一个1~100的数字。然后我会尝试猜测。");
	printf("\n(输入y表示正确，输入n表示错误)\n");

	//***************************************************
	//二分法：
	int head = 1;
	int tail = 100;
	int guess = (head + tail) / 2;
	printf("数字是%d吗？\n", guess);
	//***************************************************

	int ch;

	while ((ch = getchar()) != 'y')
	{
		while (getchar() != '\n')//1处
			continue;

		while (ch != 'n' && ch != 'y')
		{
			putchar(ch);
			printf("不是我能识别的指令，请输入y或n\n");
			ch = getchar();
			while (getchar() != '\n')//2处
				continue;
		}

		if (ch == 'y')
			break;

	kaishi1:printf("请问是猜大了还是猜小了？（键入d表示猜小了，键入u表示猜大了）\n");
		ch = getchar();

		if (ch == 'd')//猜小了
		{
			head = guess + 1;
			guess = (head + tail) / 2;
			printf("数字是%d吗？\n", guess);
		}
		else if (ch == 'u')//猜大了
		{
			tail = guess - 1;
			guess = (head + tail) / 2;
			printf("数字是%d吗？\n", guess);
		}
		else
		{
			printf("抱歉，我只能回应d或u\n");
			while (getchar() != '\n')//3.处
				continue;
			goto kaishi1;
		}
		while (getchar() != '\n')//4.处
			continue;
	}
	printf("好，我猜到了！\n");


	return 0;
}
//int erfenfa1(int a,int b,int c)//a为head，b为tail，c为guess
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



//6.书P205
#if 0
int get_first(void);
int main(void)
{
	printf("请输入字符：\n");
	int ch;

	ch = get_first();

	printf("您输入的第一个非空白字符是：\n");
	putchar(ch);

	return 0;
}
int get_first(void)//该函数用于返回读取到的第一个非空白字符。
{
	int ch;

	/*while (    (ch = getchar())== ' '         ||        ch == '\n'       ||         ch == '\t')
		continue;

	while (getchar() != '\n')
		continue;*/

		//法二：
	do
	{
		ch = getchar();
	} while (ch == ' ' || ch == '\n' || ch == '\t');  //注意：缓冲区有\n。

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
			printf("输入非法！请重新输入！\n");
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

		printf("请输入您一周工作的小时数：\n");
		scanf("%f", &hours);                                      //注意：scanf()读取数字时，忽略'\n'，但有'\n'留在缓冲区

		if (hours >= 40)//是否有加班时间
			hours = (hours - 40) * 1.5 + 40;

		zonge = hours * meixiaoshi;

		if (zonge <= BREAK1)
			shui = zonge * RATE1;
		else if (zonge <= BREAK2)
			shui = BASE1 + (zonge - BREAK1) * RATE2;
		else
			shui = BASE2 + (zonge - BREAK2) * RATE3;

		jinshouru = zonge - shui;

		printf("工资总额：%.2f		税金：%.2f		净收入：%.2f\n", zonge, shui, jinshouru);

		printf("继续——\n");
		showmenu();

	}

tuichu:printf("再见！\n");
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
			//putchar("输入有误，请重新输入!\n"); 不能这样写
			printf("输入有误，请重新输入!\n");
			continue;
		}

		//putchar("Enter first number:");
		printf("Enter first number:");

		float first_number;
		int a;
		while (1)
		{
			a = scanf("%f", &first_number);
			//if (first_number_input_yanzheng(  scanf("%f", &first_number)  )      这样写不可以
			if (first_number_input_yanzheng(a))
			{
				while (getchar() != '\n')//处理scanf的错误输入，scanf会有\n留在输入缓冲区
				//putchar(first_number);   putchar不能输出浮点型数据
					continue;

				printf("输入有误，请重新输入!\n");
				printf("可以输入比如说2.5, -1.7E8 等:");
				continue;
			}
			else
				break;
		}
		//法二：
		//while (scanf("%f", &first_number) != 1)
		//{
		//	while ((a = getchar()) != '\n')
		//		continue;
		//	printf("输入有误，请重新输入!\n");
		//	printf("可以输入比如说2.5, -1.7E8 等:");
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

				printf("输入有误，请重新输入!\n");
				continue;
			}
			else if (ch == 'd' && second_number == 0)
			{
				printf("除数不能是零，请输入一个非零值！\n");
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

	if (b == 0)//当sanf()，没有检测到项
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
//创建并使用简单函数
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


//使打印的文字居中。
#if 0
#define WIDTH 40
#define NAME "GIGATHINK, INC."
#define ADDRESS "Hangzhou, Xiaoshan"
#define PLACE "Beiganjiedao"
#define SPACE ' '                             //注意不能写成" "
#include<string.h>

void showzifu(char ch, int num);//可打印*号，也可打印空格的函数。
int main(void)
{
	showzifu('*', WIDTH);
	//	putchar("\n");    错误
	putchar('\n');


	showzifu(SPACE, 12);
	printf("%s", NAME);
	putchar('\n');

	int konggeshuliang = (WIDTH - strlen(ADDRESS)) / 2;
	showzifu(SPACE, konggeshuliang);//实际参数可以是常量、变量、表达式
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


//找出两个整数中较小的一个
#if 0
int bijiaodaxiao(int num5, int num6);//num5, num6 是假名，不必与函数定义的形参名一致！
int main(void)
{
	int num1, num2;

begin:	printf("请输入两个整数：\n");
	while (scanf("%d%d", &num1, &num2) != 2)  //错误写法：scanf(" % d % d", &num1, &num2) 
	{
		while (getchar() != '\n')
			continue;
		printf("请输入有误，请重新输入！");
	}

	printf("%d,%d", num1, num2);
	printf("较小值是%d\n", bijiaodaxiao(num1, num2));
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


//递归演示
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


//使用循环和递归计算阶乘
#if 0
int xunhuan(int);
int digui(int);

int main(void)
{
	int num;
	printf("请输入一个整数，范围在0~12:\n(按q以退出)");

	while (scanf("%d", &num) == 1)
	{
		if (num < 0)
			printf("输入错误！\n");
		else if (num > 12)
			printf("输入超过最大范围！\n");
		else
		{
			printf("%d的阶乘是%d\n", num, xunhuan(num));
			printf("%d的阶乘是%d\n", num, digui(num));
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


//用递归，显示十进制对应的二进制数
#if 1
void huaweierjinzhi(int);

int main(void)
{
	unsigned long num;

	printf("请输入一个整数（按q以退出）：\n");

	while (scanf("%d", &num) == 1)
	{
		printf("转化为二进制是：");
		huaweierjinzhi(num);
		printf("\n请输入下一个整数：\n");
	}

	return 0;
}
void huaweierjinzhi(int num)
{
	int yushupanduan;//余数判断

	yushupanduan = num % 2;
	if (num >= 2)
		huaweierjinzhi(num / 2);

	//putchar(yushupanduan ? '0' : '1');
	printf("%d", yushupanduan);//法二

	return;

}
#endif


//用递归显示斐波那契数列的项
#if 0
unsigned long fibonacci(unsigned);
int main(void)
{
	int num;

	printf("此程序将展示斐波那契数列的第n项的值\n");
	printf("请输入一个整数：\n");

	while (scanf("%d", &num) == 1)
	{
		printf("斐波那契数列的第%d项值为%d", num, fibonacci(num));

		printf("\n请继续输入：\n");
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
			printf("出现未知错误！");
			break;
		}
		nights = getnights();
		showprice(fangjia, nights);
	}
	printf("再见！\n\n\n");

	return 0;
}
#endif


//chapter 9
//code3.c
#if 0
#include <stdio.h>
//查看变量被存储在何处
#if 0
void beidiaohanshu(void);
int main(void)
{
	int a, b;
	a = 1, b = 2;

	printf("在main函数中，a地址为%p，b地址为%p\n", &a, &b);
	beidiaohanshu();

	return 0;
}
void beidiaohanshu(void)
{
	int a, b;
	a = 1, b = 2;

	printf("在被调函数中，a地址为%p，b地址为%p\n", &a, &b);
}

#endif


//使用return只能传递一个变量的值，无法做到两个变量的值交换。
//使用指针解决交换两个变量的值的问题
#if 1
void jiaohuan(int*, int*);  //若写成void jiaohuan(int, int);    则被调函数功能无效！
int main(void)
{
	int x = 5, y = 10;
	printf("原来：x=%d，y=%d\n", x, y);
	jiaohuan(&x, &y);
	printf("现在：x=%d，y=%d\n", x, y);

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


//复习题
//4.
#if 0
int sum(int a, int b);
int main(void)
{
	int a, b;

	printf("该程序输出两个整数之和\n");
	printf("请输入两个整数：\n");

	while ((scanf("%d%d", &a, &b)) != 2)
	{
		scanf("%*s");
		printf("请重新输入！\n");
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

	printf("该程序输出两个小数之和\n");
	printf("请输入两个小数：\n");

	while ((scanf("%lf%lf", &a, &b)) != 2)
	{
		scanf("%*s");
		printf("请重新输入！\n");
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
	printf("请输入两个整数：\n");
	scanf("%d%d", &x, &y);
	printf("您输入的是：x=%d和y=%d\n", x, y);
	alter(&x, &y);
	printf("现在x=%d，y=%d\n", x, y);

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
	printf("比较3个整数中的最大值：\n");
	scanf("%d%d%d", &a, &b, &c);

	printf("最大值是：%d\n\n", bijiao(a, b, c));

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
//		return -6666;//表示出错
//}
//法二
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
		printf("正在执行程序\n");
		printf("执行完毕！\n");
		showmenu();
	}
	printf("再见！\n");

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
	while ((biaoji = scanf("%d", &choice)) && (choice<a || choice>b))//输入的数字不在范围内时执行，若输入字母则执行return 4
	{
		while (getchar(choice) != '\n')
			continue;
		//scanf("%*s");    //若输入5，则还要输入一个数字才执行后面语句。此语句不能满足要求。
		showmenu();
		printf("\n请重新输入！_______\b\b\b\b");
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


//编程练习
//1.
#if 0
double min(double x, double y);
int main(void)
{
	double a, b;
	printf("此程序比较两个浮点值的较小值\n");
	printf("请输入两个浮点值：_________\b\b\b\b\b\b\b\b");
	scanf("%lf%lf", &a, &b);
	printf("较小值是：%.3lf", min(a, b));

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
	printf("此程序打印指定字符的列数与行数\n");
	printf("请输入要打印的字符：_________\b\b\b\b\b\b\b\b");
	scanf("%c", &ch);
	printf("请输入要打印的列数与行数：_________\b\b\b\b\b\b\b\b");
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
	printf("此程序打印指定字符的列数与行数\n");
	printf("请输入要打印的字符：_________\b\b\b\b\b\b\b\b");
	scanf("%c", &ch);
	printf("请输入要打印的列数与行数：_________\b\b\b\b\b\b\b\b");
	scanf("%d%d", &i, &j);//i列   j行
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
	printf("此程序打印两个数的调和平均数\n");
	printf("请输入两个浮点数：_________\b\b\b\b\b\b\b\b");
	scanf("%lf%lf", &a, &b);
	printf("调和平均数是%.3lf\n", tiaohepinjunshu(a, b));

	return 0;
}
double tiaohepinjunshu(double x, double y)
{
	double jieguo1, jieguo2;
	double daoshu_x = 1 / x, daoshu_y = 1 / y;

	jieguo1 = (daoshu_x + daoshu_y) / 2;
	jieguo2 = 1 / jieguo1;                                                 //法二：化简后为  return 2/(1/x+1/y);

	return jieguo2;
}
#endif


//5.
#if 0
void larger_of(double* x, double* y);
int main(void)
{
	double a, b;
	printf("此程序把两个数的较大者赋值给两个数\n");
	printf("请输入两个浮点数：_________\b\b\b\b\b\b\b\b");
	scanf("%lf%lf", &a, &b);
	larger_of(&a, &b);
	printf("现在，两个数为%.3lf和%.3f%\n", a, b);

	return 0;
}
void larger_of(double* x, double* y)
{
	if (*x >= *y)                                                         //法二：符号表达式
		*y = *x;                                                            //           return *x>*y? (*y=*x) : (*x=*y);
	else
		*x = *y;

	return;
}
#endif


//6.
#if 0
void paidaxiao(double* x, double* y, double* z);//排大小
int main(void)
{
	double a, b, c;
	printf("此程序把三个数按照由小到大排序\n");
	printf("请输入三个浮点数：_________\b\b\b\b\b\b\b\b");
	scanf("%lf%lf%lf", &a, &b, &c);
	paidaxiao(&a, &b, &c);
	printf("现在，三个数字是%.3lf，%.3f，%.3f\n", a, b, c);

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

	if (min < *x && *x < max)// (min <= *x && *x <= max)不行，如果输入是 1 2 3，则输出是 1 1 3
		middle = *x;
	else if (min < *y && *y < max)
		middle = *y;
	else if (min < *z && *z < max)
		middle = *z;


	*x = min;
	*y = middle;//瑕疵：当输入有两个值是相等的时，程序会崩溃
	*z = max;
}*/
//改正
void paidaxiao(double* x, double* y, double* z)//两两比较即可
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
int panduanzimu(int ch);//判断字母
int main(void)
{
	int ch;
	printf("此程序能报告输入的每个字符是否是字母\n");
	printf("请输入字符：\n");
	while ((ch = getchar()) != EOF)//ch=getchar()外的小括号要加
	{
		if (panduanzimu(ch) == -1)//输入非字母时
			printf("否");

		else if (panduanzimu(ch) == -2)//输入回车时
		{
			printf("否(键入了\\n)");
			printf("\n请继续输入字符：\n");
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
//7.改
#if 0
int panduanzimu(int ch);//判断字母
int main(void)
{
	int ch;
	printf("此程序能报告输入的每个字符是否是字母\n");
	printf("请输入字符：\n");
	while ((ch = getchar()) != EOF)//ch=getchar()外的小括号要加
	{
		if (ch == '\n')
			continue;//清除换行符的输入

		if (panduanzimu(ch) == -1)//输入非字母时
			printf("否");
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

	printf("请输入一个数字和该数字的整数次幂数：\n");
	printf("（输入q以退出程序）                 ");
	while (scanf("%lf%d", &x, &exp) == 2)
	{
		printf("%.2f的%d次方是%.2f\n", x, exp, power(x, exp));

		if (x == 0 && exp == 0)
			printf("0的0次幂未定义，因此处理为1\n");

		printf("输入下一对数字：");
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
//法二
/*double power(double n, int p)
{
	double pow = 1;
	int i;
	if (n == 0 && p == 0)
	{
		printf("0的0次幂未定义，故返回值是1\n");
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

	printf("请输入一个数字和该数字的整数次幂数：\n");
	printf("（输入q以退出程序）                 ");
	while (scanf("%lf%d", &x, &exp) == 2)
	{
		printf("%.2f的%d次方是%.2f\n", x, exp, power(x, exp));

		if (x == 0 && exp == 0)
			printf("0的0次幂未定义，因此处理为1\n");

		printf("输入下一对数字：");
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
		pow = n * power(n, p - 1);//power(2,3)输入后，则pow=2*power(2,2)    power(2,2)输入后，pow=2*power(2,1)
													// power(2,1)输入后，pow=2*power(2,0)    power(2,0)输入后，pow=1,所以power(2,0)的返回值是1。
												   //由此可知2的3次幂为8。
	}


	else if (p == 0)    //下面的if (p < 0)块也可以用这个
	{
		if (n != 0)
		{
			pow = 1;
			return pow;//为什么放在这里也可以？
		}
		else
			return 1;
	}


	if (p < 0)
	{
		p1 = -p;
		pow = n * power(n, p1 - 1);   //递归时，p1-1的值传入形参p，又执行if(p>0)的函数块。
		pow = 1 / pow;
		return pow;
	}
}*/
//法二
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
void to_base_n(int daichuli, int jinzhi);//待处理    进制

int main(void)
{
	unsigned long num1, num2;

	printf("请输入一个整数和把此数转化成的(2~10)进制数（按q以退出）：\n");

	while (scanf("%d%d", &num1, &num2) == 2)
	{
		printf("转化为%d进制是：", num2);
		to_base_n(num1, num2);

		printf("\n请输入下一个整数和把此数转化成的(2~10)进制数（按q以退出）：\n");
	}

	return 0;
}
void to_base_n(int daichuli, int jinzhi)
{
	int yushupanduan;//余数判断

	yushupanduan = daichuli % jinzhi;

	if (daichuli >= jinzhi)
		to_base_n(daichuli / jinzhi, jinzhi);

	//putchar(yushupanduan==0 ? '0' : '1');
	printf("%d", yushupanduan);//法二

	return;
}
#endif


//11.
#if 0
unsigned long Fibonacci(unsigned n);
int main(void)
{
	unsigned int num;

	printf("此程序用循环代替递归计算斐波那契数\n");
	printf("请输入要计算的斐波那契数的第几项：______\b\b\b\b\b");
	while (scanf("%d", &num) == 1)
	{
		printf("第%d项斐波那契数是%ld\n", num, Fibonacci(num));
		printf("请输入要计算的斐波那契数的第几项：______\b\b\b\b\b");
	}
	printf("再见！\n");

	return 0;
}
unsigned long Fibonacci(unsigned n)
{
	int shuzu[256];
	shuzu[0] = 1;
	shuzu[1] = 1;

	int i;

	for (i = 2; i <= n - 1; i++)//i=2，shuzu[2]相当于斐波那契的第3项的值
	{
		shuzu[i] = shuzu[i - 1] + shuzu[i - 2];
	}

	unsigned long jieguo = shuzu[i - 1];//注意若写成shuzu[i]则显示不正确，因为for循环更新i值后，i会+1
																//有处理好的数据存入数组的某项的索引值应该是i-1。
	return jieguo;
}
#endif
//9.改正
#if 1
void Fibonacci(unsigned n);
int main(void)
{
	unsigned int num;

	printf("此程序用循环代替递归计算斐波那契数\n");
	printf("请输入要计算的斐波那契数的第几项：______\b\b\b\b\b");
	while (scanf("%d", &num) == 1)
	{
		printf("第%d项斐波那契数是\n", num);
		Fibonacci(num);
		printf("请输入要计算的斐波那契数的第几项：______\b\b\b\b\b");
	}
	printf("再见！\n");

	return 0;
}
void Fibonacci(unsigned n)
{
	unsigned long f1, f2, temp;

	f1 = f2 = 1;

	for (int i = 1; i <= n; i++)
	{                                                               // f1   f2
		printf("%lu，", f1);                              //  1    1      2
		temp = f1 + f2;                                 //         f1    f2
		f1 = f2;//对前两项的值更新
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


//初始化数组
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


//未初始化数组的后果
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


//部分初始化数组的后果
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


//让编译器计算元素个数
#if 0
int main(void)
{
	int days[] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	int index;

	printf("%zd\n", sizeof days);//数组days占48个字节（int占32位即4个字节）
	for (index = 0; index < sizeof days; index++)
		printf("Month %3d has %2d days. \n", index + 1, days[index]);

	putchar('\n');

	for (index = 0; index < sizeof days / sizeof days[0]; index++)//sizeof days/sizeof days[0]=12
		printf("Month %3d has %2d days. \n", index + 1, days[index]);

	return 0;
}
#endif


//使用初始化器
#if 0
#define MONTHS 12
int main(void)
{
	int days[MONTHS] = { 31,28,[4] = 31,    30,[1] = 29 };//29会覆盖掉28，30赋给索引值为5的项

	int index;
	for (index = 0; index < MONTHS; index++)
		printf("Month %3d has %2d days. \n", index + 1, days[index]);

	return 0;
}
#endif


//使用二位数组计算每年的总降水量，年平均降水量，每月都平均降水量
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

	printf("  年           降水量\n");
	for (year = 0, nianzonghe = 0; year < YEARS; year++)
	{
		for (month = 0, yuezonghe = 0; month < MONTHS; month++)
			yuezonghe += rain[year][month];
		printf("%5d%15.1f\n", 2010 + year, yuezonghe);
		nianzonghe += yuezonghe;
	}
	printf("每年的平均降水量为%.1f\n", nianzonghe / YEARS);

	printf("月降水量平均值为：\n");
	printf("Jan  Feb  Mar  Apr  May  Jun  Jul  Aug  Sep  Oct  Nov  Dec\n");

	for (month = 0; month < MONTHS; month++)
	{
		for (year = 0, yuezonghe = 0; year < YEARS; year++)
			yuezonghe += rain[year][month];//例:5年来的每个1月份的降水量之和
		printf("%-5.1f", yuezonghe / YEARS);
	}
	printf("\n");

	return 0;
}
#endif


//指针加上一个数，对地址的影响
#if 0
#define SIZE   4
int main(void)
{
	short a[SIZE];
	short* pti;//指向short类型的指针
	double b[SIZE];
	double* ptd;

	pti = a;//数组名是该数组首元素的地址
	ptd = b;
	printf("%23s%23s\n", "short", "double");

	for (int index = 0; index < SIZE; index++)
		printf("pointer+%d:%10p%20p\n", index, pti + index, ptd + index);

	return 0;
}
#endif


//使用指针来检索存储在数组中的值
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


//使用指针计算数组中的元素的和
#if 1
#define SIZE 10
int sum(int* ar, int n);
int main(void)
{
	int marbles[SIZE] = { 20,10,5,39,4,16,19,26,31,20 };
	long answer;

	answer = sum(marbles, SIZE);
	printf("数组的总和为：%ld\n", answer);
	printf("数组占%zd个字节\n", sizeof marbles);

	return 0;
}
int sum(int* ar, int n)
{
	int index;
	int sum = 0;

	for (index = 0; index < n; index++)
		sum += *(ar + index);
	printf("ar占%zd个字节\n", sizeof ar);

	return sum;
}
#endif


//使用指针计算数组中的元素的和(法二)
#if 0
#define SIZE 10
int sum(int* start, int* end);
int main(void)
{
	int marbles[SIZE] = { 20,10,5,39,4,16,19,26,31,20 };
	long answer;

	answer = sum(marbles, marbles + SIZE);
	printf("数组的总和为：%ld\n", answer);
	printf("数组占%zd个字节\n", sizeof marbles);

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


//指针运算中的优先级
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


//指针操作
#if 0
int main(void)
{
	int shuzu[5] = { 100,200,300,400,500 };
	int* p1, * p2, * p3;

	printf("     shuzu=%p\n", shuzu);                                //注意！ 这三条语句等价！
	printf("    &shuzu=%p\n", &shuzu);
	printf(" &shuzu[0]=%p\n", &shuzu[0]);

	p1 = shuzu;
	p2 = &shuzu[2];

	printf("指针指向的地址			指针指向地址中的值			指针本身的地址\n");
	printf("p1=%p		*p1=%d					&p1=%p\n", p1, *p1, &p1);

	//指针加法
	p3 = p1 + 4;
	printf("p1+4=%p		*(p1+4)=%d\n", p1 + 4, *(p1 + 4));
	p1++;
	printf("p1++后\n");
	printf("p1=%p		*p1=%d			  	        &p1=%p\n", p1, *p1, &p1);

	p2--;
	printf("p2减1后\n");
	printf("p2=%p		*p2=%d			  	        &p2=%p\n", p2, *p2, &p2);

	--p1;
	++p2;
	printf("p1,p2还原\n");

	printf("p1=%p,p2=%p\n", p1, p2);

	//指针相减
	printf("p1=%p,p2=%p,p2-p1=%td\n", p1, p2, p2 - p1);
	//指针减去一个整数
	printf("p3=%p,p3-2=%p\n", p3, p3 - 2);

	//指针间的赋值
	//p1 = p1 + p2;无效

	return 0;
}
#endif


//处理数组的函数
#if 0
#define SIZE 5
void show_array(const double* ar, int n);
void mult_array(double ar[], int n, double mult);
int main(void)
{
	double dip[SIZE] = { 20.0,17.66,8.2,15.3,22.22 };

	printf("原始的数组中的数据是：\n");
	show_array(dip, SIZE);
	printf("处理后数组中的数据是：\n");
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


//理解指针如何表示二维数组
#if 0
int main(void)
{
	int zippo[4][2] = { {2,4},{6,8},{1,3},{5,7} };

	printf("       zippo=%p\n", zippo);                                //重要！！！！！
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


//通过指针获取二维数组的信息
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


//指针的指针
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

	printf("*p1=%d\n", *p1);//若写成%p,则为0000000002
	printf("*p2=%p\n", *p2);
	printf("**p2=%d\n", **p2);

	return 0;
}
#endif


//处理二维数组的函数
#if 0
#define ROWS 3
#define COLS 4
void sum_rows(int(*ar)[COLS], int rows);//计算数列的行和
void sum_cols(int  ar[][COLS], int rows);//计算数列的列和
int sum(int  ar[][COLS], int rows);//计算数列的总和

int main(void)
{
	int shuzu[ROWS][COLS] = { {2,4,6,8},
													{3,5,7,9},
													{12,10,8,6} };

	sum_rows(shuzu, ROWS);
	sum_cols(shuzu, ROWS);
	printf("数组所有元素之和为：%d\n", sum(shuzu, ROWS));

	return 0;
}
void sum_rows(int(*ar)[COLS], int rows)
{
	int i, j, sum1;

	for (i = 0; i < rows; i++)
	{
		sum1 = 0;
		for (j = 0; j < COLS; j++)
			//sum1 += shuzu[i][j];     //这样写没用，只能用指针
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
			/*			sum2 += ar[i][j];*/                //错误！！！
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


//变长数组(无法实现)
#if 0
#define ROWS 3
#define COLS 4

int sum(int rows, int cols, int ar[rows][cols]);//计算数列的总和

int main(void)
{
	int shuzu[ROWS][COLS] = { {2,4,6,8},
													{3,5,7,9},
													{12,10,8,6} };

	sum_rows(shuzu, ROWS);
	sum_cols(shuzu, ROWS);
	printf("数组所有元素之和为：%d\n", sum(ROWS, COLS, shuzu));

	return 0;
}
int sum(int rows, int cols, int ar[rows][cols])
{
	int i, j, sum1;

	for (i = 0; i < rows; i++)
	{
		sum1 = 0;
		for (j = 0; j < COLS; j++)
			//sum1 += shuzu[i][j];     //这样写没用，只能用指针
			sum1 += ar[i][j];

		printf("row=%d, sum1=%d\n", i, sum1);

	}
}
#endif


//复合字面量
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
	//p2 = (int[2][COLS]){ {1,2,3,-9},{4,5,6,-8} };   此语句无法实现

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


//复习题
//4.
#if 0
int main(void)
{
	int* ptr;
	int torf[2][2] = { 12,14,16 };
	ptr = torf[0];

	printf("%d\n", *ptr);
	printf("%d\n", *(ptr + 2));
	printf("%d\n", torf[0][2]);//会读torf[1][0]上的值

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
	//things[5] = rootbeer;//一维数组不能直接向二维数组的一行赋值

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
	printf("和为%.2f\n", sum);
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
	printf("和为%.2f", sum);
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


//编程练习
//1.
#if 0
#define MONTHS 12
#define YEARS 5
double sumnian(int(*ar)[MONTHS], int years);
void sumyue(int(*ar)[MONTHS], int years);

int main(void)
{
	const double rain[YEARS][MONTHS] =                                            //此处若写成const float rain    则计算的数据会很大，发生错误
	{
		{4.3,4.3,4.3,3.0,2.0,1.2,0.2,0.2,0.4,2.4,3.5,6.6},
		{8.5,8.2,1.2,1.6,2.4,0.0,5.2,0.9,0.3,0.9,1.4,7.3},
		{9.1,8.5,6.7,4.3,2.1,0.8,0.2,0.2,1.1,2.3,6.1,8.4},
		{7.2,9.9,8.4,3.3,1.2,0.8,0.4,0.0,0.6,1.7,4.3,6.2},
		{7.6,5.6,3.8,2.8,3.8,0.2,0.0,0.0,0.0,1.3,2.6,5.2}
	};
	double nianzonghe;
	nianzonghe = sumnian(rain, YEARS);
	printf("每年的平均降水量为%.1f\n", nianzonghe / YEARS);

	printf("月降水量平均值为：\n");
	printf("Jan  Feb  Mar  Apr  May  Jun  Jul  Aug  Sep  Oct  Nov  Dec\n");

	sumyue(rain, YEARS);

	//int year, month;
	//float yuezonghe, nianzonghe;

	//printf("  年           降水量\n");
	//for (year = 0, nianzonghe = 0; year < YEARS; year++)
	//{
	//	for (month = 0, yuezonghe = 0; month < MONTHS; month++)
	//		yuezonghe += rain[year][month];
	//	printf("%5d%15.1f\n", 2010 + year, yuezonghe);
	//	nianzonghe += yuezonghe;
	//}
	//printf("每年的平均降水量为%.1f\n", nianzonghe / YEARS);

	//printf("月降水量平均值为：\n");
	//printf("Jan  Feb  Mar  Apr  May  Jun  Jul  Aug  Sep  Oct  Nov  Dec\n");

	//for (month = 0; month < MONTHS; month++)
	//{
	//	for (year = 0, yuezonghe = 0; year < YEARS; year++)
	//		yuezonghe += rain[year][month];//例:5年来的每个1月份的降水量之和
	//	printf("%-5.1f", yuezonghe / YEARS);
	//}
	//printf("\n");

	return 0;
}
double sumnian(double(*ar)[MONTHS], int years)                                          //计算每年的降水量    注意写的两个double的含义
{
	int i, j;
	double sum, sumsum = 0.0;

	for (i = 0; i < years; i++)
	{
		for (j = 0, sum = 0.0; j < MONTHS; j++)
		{

			sum += ar[i][j];  //sum += *(*(ar + i) + j);  也可
			/*sumsum += sum;*/                                                                //注意：sumsum放在此处不行，这存的是sum每次增加后的值
		}
		printf("%5d%15.1f\n", 2010 + i, sum);//sum->每年的
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
			sum += *(*(ar + j) + i);																							          //只要每个月的总和，不用所有月的总和
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
void copy_ptrs(double(*p1), double(*p2), double* p3)//实参：target3, source, source+5
{
	int i;
	double* p4;
	p4 = p2;																															//必须要加个中间值来存储p2
																																			//因为p2后来会作为判断循环终止的条件
	for (i = 0; p2 < p3; p2++, i++)
	{
		*(p1 + i) = *(p4 + i);																								      //写成*(p1 + i) = *(p2 + i); 错误！！     
	}
}
//法二：(不用定义一个中间值)
//for ( i=0   ;p3-p2>i;    i++)
//{
//	*(p1 + i) = *(p2 + i);																								      //写成*(p1 + i) = *(p2 + i); 错误！！     
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
	printf("请输入整数数字(按q结束)：\n");

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

	printf("最大值是：%d", search_max_value(num, index + 1));

	return 0;
}
int search_max_value(int* p, int n)//找出数组中的最大值
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
	printf("请输入小数数字(按q结束)：\n");

	double num[256];
	int index = -1;
	double num1;

	while (scanf("%lf", &num1) == 1)
	{
		index++;
		num[index] = num1;
	}

	printf("最大值的下标是：[%d]", search_max_value(num, index + 1));

	return 0;
}
int search_max_value(double* p, int n)//找出数组中的最大值的下标
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
	printf("请输入小数数字(按q结束)：\n");

	double num[256];
	int index = -1;
	double num1;

	while (scanf("%lf", &num1) == 1)
	{
		index++;
		num[index] = num1;
	}

	printf("最大值与最小值的差值是%.2f", search_max_value(num, index + 1));

	return 0;
}
double max - min_value(double* p, int n)//返回数组中的最大值和最小值的差值
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
	printf("请输入小数数字(按q结束)：\n");

	double num[256];
	int index = -1;
	double num1;

	while (scanf("%lf", &num1) == 1)
	{
		index++;
		num[index] = num1;
	}

	int yuansugeshu = index + 1;//元素个数

	printf("输入的数组元素是：");
	for (index = 0; index < yuansugeshu; index++)
		printf("%-6.2f", num[index]);

	putchar('\n');

	reverse_value(num, yuansugeshu);
	printf("    倒序排列后是：");
	for (index = 0; index < yuansugeshu; index++)
		printf("%-6.2f", num[index]);


	return 0;
}
#endif
#if 0
void reverse_value(double* p, int n)
{
	int index;

	//double temp[n];																//思路1：把num数组拷贝到一个新数组中，然后对num中的元素重新赋值
	//double temp[] = {};															// temp[n]不行，n不是常量

	double temp;
	for (index = 0; index < n; index++)
	{
		temp = p[n - index - 1];
		p[index] = temp;											//思路2：直接用指针
	}																						//						   1.10  2.20  3.30  4.40  5.50
																						   //倒序排列后是：5.50  4.40  3.30  4.40  5.50
	return;																		   //如何解决??
}																							//用中间变量来暂存值  失败，    首尾相交换的方法不行
#elif 0
//改正
//排序中最基础的方法：比较排序法
//比较相邻两个元素的大小关系，通过交换元素位置来调整不符合要求的相邻元素。
//相邻元素两两比较，需要通过n-1次比较才能保证一个元素到达最终位置。
void reverse_value(double* p, int n)
{
	double temp;

	for (int i = 0; i < n - 1; i++)
	{
		for (int j = 0; j < n - 1; j++)//或：for (int j = 0; j < n - 1-i; j++)	//从第一个元素开始，两两对比，处理，直到最后两个元素比较完。
		{																									//	注：内层循环完后，仍有部分元素未排好。如：最大的元素在最后的位置
			if (p[j] < p[j + 1])						//内层循环一次，能保证一个元素调整到合适位置，
			{													//在外层循环完后，保证所有元素到正确位置。
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
//void show(double *p1[3],int rows);  错误！！
void show(double(*p1)[3], int rows);

//法二：一维数组复制函数+循环
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
	//printf("%5.2lf", p1[0][0]);//为什么不显示？  因为 (* p1)[3] 错写成*p1 [3]
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
	copy_ptr(&target[0], &source[0], 3);//数组元素的地址，待处理元素的个数
	show(target, 3);

	return 0;
}
void copy_ptr(double(*p1), double(*p2), int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		*(p1 + i) = *(p2 + 2 + i);//p1的索引0，1，2  被赋上 p2的索引2，3，4即第3，4，5个元素的值
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
//void show(int rows,int cols,double p1[rows][cols]);		//变长数组无法实现

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
	printf("各值翻倍后\n");
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
	const double rain[YEARS][MONTHS] =                                            //此处若写成const float rain    则计算的数据会很大，发生错误
	{
		{4.3,4.3,4.3,3.0,2.0,1.2,0.2,0.2,0.4,2.4,3.5,6.6},
		{8.5,8.2,1.2,1.6,2.4,0.0,5.2,0.9,0.3,0.9,1.4,7.3},
		{9.1,8.5,6.7,4.3,2.1,0.8,0.2,0.2,1.1,2.3,6.1,8.4},
		{7.2,9.9,8.4,3.3,1.2,0.8,0.4,0.0,0.6,1.7,4.3,6.2},
		{7.6,5.6,3.8,2.8,3.8,0.2,0.0,0.0,0.0,1.3,2.6,5.2}
	};
	double nianzonghe;
	nianzonghe = sumnian(rain, YEARS);
	printf("每年的平均降水量为%.1f\n", nianzonghe / YEARS);

	printf("月降水量平均值为：\n");
	printf("Jan  Feb  Mar  Apr  May  Jun  Jul  Aug  Sep  Oct  Nov  Dec\n");

	sumyue(rain, YEARS);

	return 0;
}
double sumnian(double(*ar)[MONTHS], int years)                                          //计算每年的降水量    注意写的两个double的含义
{
	int i, j;
	double sum, sumsum = 0.0;

	for (i = 0; i < years; i++)
	{
		for (j = 0, sum = 0.0; j < MONTHS; j++)
		{

			sum += ar[i][j];  //sum += *(*(ar + i) + j);  也可
			/*sumsum += sum;*/                                                                //注意：sumsum放在此处不行，这存的是sum每次增加后的值
		}
		printf("%5d%15.1f\n", 2010 + i, sum);//sum->每年的
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
			sum += *(*(ar + j) + i);																							          //只要每个月的总和，不用所有月的总和
		}
		printf("%-5.1f", sum / YEARS);
	}
	return;
}
#endif


//13.
#if 1
void input_data(double(*p)[5], int rows);//任务a
double row_average(double* p, int n);//任务b：计算并返回一维数组平均值，利用循环，调用该函数3次
double total_average(double(*p)[5], int rows);//任务c
double find_max_value(double(*p)[5], int rows);//任务d
void show(double(*p)[5], int rows, double(*p1), double total_average, double find_max_value);//任务e

int main(void)
{
	printf("请输入3组小数数字,每组有5个小数(在新行按ctrl+Z以结束输入)：\n");
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

	//	while (scanf("%lf", &num) ==1)									//为什么scanf("%lf", &num) !=EOF  不起作用？
	//	{																						//错误的赋值语句块！
	//		for (i = 0; i < rows; i++)
	//		{
	//			for (j = 0; j < 5; j++)
	//				p[i][j] = num;
	//		}
	//	}

		//一维：
		/*while (scanf("%d", &num1) == 1)   //index=-1;
		{
			index++;
			num[index] = num1;
		}*/

		//二维：
	while (scanf("%lf", &num) == 1)//假设输入1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 （复制这些值来调试程序）
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
//二维数组的数据输入（法二）
#if 1
void input_data(double(*p)[5], int rows)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < 5; j++)
			//scanf("%lf",p[i][j]);     //错误！
			scanf("%lf", &p[i][j]);

	}
}
#endif
double row_average(double* p, int n)	//p指向shuzu[i]，p存的是shuzu[i]的地址，即shuzu[i][0]的地址
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
	//sum2 += sum1;																																					//放置位置错误

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
	//how(shuzu, 3, rowaverage(数组), totalaverage, max);

	printf("输入的值是：\n");
	int i, j;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < 5; j++)
			printf("%5.2f", p[i][j]);
		putchar('\n');
	}

	putchar('\n');

	for (i = 0; i < rows; i++)
		printf("一维数组%d的平均值-->%5.2f\n", i, p1[i]);

	printf("\n所有数据的平均值：%.2lf\n", total_average);

	printf("最大值：%.2lf\n", find_max_value);
}
#endif
//法二：
//在show函数中再调用求每组数据的平均值函数，求所有数据的平均值函数，求最大值函数。
#endif


//chapter 11
//code1.c
#if 0
#include<stdio.h>
//
#if 1
#endif


//程序中表示字符的几种方式
#if 0
#define MSG "I am a symbolic string constant"//我是一个符号字符串常量
#define LENGTH 81
int main(void)
{
	char words[LENGTH] = "I am a string in an array.";
	const char* p1 = "Something is pointing at me.";
	puts("Here are some strings:");
	puts(MSG);//法一：字符串常量法
	puts(words);//法二：char类型数组法
	puts(p1);     //法三：指向char的指针法
	words[8] = 'p';
	puts(words);

	puts("a");//此处“a”是个字符串。
	puts('a');//不会显示

	/*words = "abc";    //words 不可以修改
	puts(words);*/

	return 0;
}
#endif


//把字符串看作指针
#if 0
int main(void)
{
	printf("%s, %p, %c\n", "We", "are", *"space farers");

	return 0;
}
#endif


//比较数组形式表示法和指针形式表示法创建字符串的不同之处
#if 0
#define MSG "I'm special"
int main(void)
{
	char ar[] = MSG;
	const char* p = MSG;

	printf("I'm special的地址是：%p\n", "I'm special");
	printf("ar的地址是：%p\n", ar);
	printf("p的地址是：%p\n", p);
	printf("MSG的地址是：%p\n", MSG);
	printf("再打印一次I'm special后\"I'm special\"的地址是：%p\n", "I'm special");

	return 0;
}
#endif


//数组和指针的区别
#if 0
int main(void)
{
	char heart[] = "I love shuzu";
	const char* head = "I love zhizhen";

	//只有指针才能作++操作
	while (*(head) != '\0')
		putchar(*head++);//	putchar(*(head)++); 也可

	putchar('\n');

	//用数组修改字符串
	char shuzu[] = "frame";
	shuzu[0] = 'l';
	printf("%s", shuzu);

	//能否使用指针修改字符串？
	char* word = "frame";
	word[0] = 'l';
	printf("frame");//未打印，说明程序异常中断。

	return 0;
}
#endif


//指针数组，字符串数组
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

	puts("让我们来比较比较：");
	printf("%-36s %-25s\n", "My Talents", "Your Talents");
	for (i = 0; i < hangshu; i++)
		printf("%-36s %-25s\n", mytalents[i], yourtalents[i]);

	printf("\nsizeof mytalents: %zd, sizeof yourtalents: %zd\n", sizeof(mytalents), sizeof(yourtalents));

	return 0;
}
#endif


//使用指针拷贝字符串--->实际上拷贝的是指针的值
#if 0
int main(void)
{
	const char* mesg = "Don't be a fool!";
	const char* copy;

	copy = mesg;
	printf("%s\n", copy);
	printf("mesg=%s; &mesg=%p; vaule=%p\n", mesg, &mesg, mesg);//&mesg:显示指针被存放的地址。value:显示指针的值
	printf("copy=%s; &copy=%p; vaule=%p\n", copy, &copy, copy);

	return 0;
}
#endif


//使用gets(), puts()
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


//使用fgets()和fputs()
#if 0
int main(void)
{
	char words[14];
	puts("请输入字符串：");
	fgets(words, 14, stdin);
	printf("您输入的是：\n");

	puts(words);
	fputs(words, stdout);

	return 0;
}
#endif
#if 0
int main(void)
{
	char words[10];
	puts("请输入字符串：");
	while (fgets(words, 10, stdin) != NULL && words[0] != '\n')
		fputs(words, stdout);//能处理过长的输入

	puts("Done !\n");
	return 0;
}
#endif


//读取行，替换存储在字符串中的换行符为空字符；若没有换行符，则当出现空字符，就丢弃数组装不下的字符
#if 0
int main(void)
{
	char words[10];
	puts("请输入字符串：");
	while (fgets(words, 10, stdin) != NULL && words[0] != '\n')//输入不为^Z 或  '\n'
	{
		int i = 0;
		while (words[i] != '\n' && words[i] != '\0')
			i++;//遍历字符串，直至遇到换行符或空字符

		if (words[i] == '\n')
			words[i] = '\0';//若遇到换行符，就换成空字符
		else
			while (getchar() != '\n')
				continue;//若遇到空字符，则丢弃输入行的剩余字符，若没有else语句块，则会以每9个字符为一组，循环读取缓冲区的内容

		puts(words);
	}

	puts("Done !\n");
	return 0;
}
#endif


//使用scanf()
#if 0
int main(void)
{
	char name1[11], name2[11];
	int count;

	printf("请输入两个名字：\n");
	count = scanf("%5s %10s", name1, name2);
	printf("我读入到%d个名字，分别为%s和%s", count, name1, name2);

	return 0;
}
#endif


//使用puts()
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

	puts(&string2);//输出是乱码
	puts(string2 + 4);

	return 0;
}
#endif


//如果puts()没遇到空字符
#if 0
int main(void)
{
	char a[] = "a";
	char dont[] = { 'W','O','W','!' };
	puts(dont);

	return 0;
}
#endif


//自定义输出函数
#if 0
void put1(const char* string1);//打印字符串，不添加\n
int  put2(const char* string2);//打印字符串，统计打印的字符数
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
	while (*string1 != '\0')//或while(*string)
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


//使用strlen()函数缩短字符串长度
#if 0
#include <string.h>
void fit(char* string, unsigned int size);
int main(void)
{
	char message[] = "Things should be as simple as possible,"" but not simpler.";//翻译事情应该简化而不是更简单

	puts(message);
	fit(message, 38);
	puts(message);
	puts(message + 39);//打印从message[39]开始的地址上的内容

	return 0;
}
void fit(char* string, unsigned int size)
{
	if (strlen(string) > size)
		string[size] = '\0';//若输入size=38,则输出索引为0至37的字符
}
#endif


//s_gets()函数的返回值
#if 0
#include <string.h>
#define SIZE 80
char* s_gets(char* string, int n);
int main(void)
{
	char flower[SIZE];

	printf("%p\n", s_gets(flower, SIZE));																			//特殊情况：输入^Z则此句输出0000000000000000
	printf("%p\n", flower);								//（一般情况下）两者相同
	printf("%p\n", &flower[0]);					    //说明fgets()的返回值是flower数组首元素的地址
	printf("%d\n", s_gets(flower, SIZE));//地址类型用%d输出时，无法显示内容

	return 0;
}
char* s_gets(char* string, int n)
{
	char* fanhui;
	int i = 0;
	fanhui = fgets(string, n, stdin);//n为80，fgets()只会读入79个字符，并自动在其后加\0

	if (fanhui)
	{
		while (string[i] != '\n' && string[i] != '\0')
			i++;

		if (string[i] == '\n')
			string[i] = '\0';
		else//当string[i] == '\0'时
			while (getchar() != '\n')
				continue;
	}

	return fanhui;
}
#endif


//使用strcat()函数，s_gets()函数拼接两个字符串
#if 0
#include <string.h>
#define SIZE 80
char* s_gets(char* string, int n);
int main(void)
{
	char flower[SIZE];
	char add[] = "s smell like old shoes.";

	puts("What is your favorite flower ?");
	if (s_gets(flower, SIZE))//若没遇到^Z则执行if语句块
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


//完善strcat()和使用strncat()来拼接两个字符串
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
	printf("flower数组的大小：%zd\n", strlen(flower));//若输入^Z则flower数组的大小是87

	if (strlen(flower) + strlen(add) + 1 <= SIZE)
	{
		strcat(flower, add);
		puts(flower);
	}


	puts("What is your favorite bug ?");
	s_gets(bug, BUGSIZE);

	available = BUGSIZE - strlen(bug) - 1;//防止多出来的字符溢出到相邻存储单元
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


//使用strcmp()函数比较两个字符串
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


//strcmp()的返回值
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


//限定输入的行数，设置检测到EOF、quit或达到最大输入行数时退出。
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
	printf("请输入最多%d行内容（键入quit以退出）：\n", LIM);

	while (count < LIM && s_gets(input[count], SIZE) != NULL && strcmp(input[count], STOP) != 0)
	{																								//改为&&input[count][0]!='\0'实现输入空行就退出的功能
		count++;
	}
	printf("%d行已输入\n", count);

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


//使用strncmp()比较两个字符串的指定位置的异同。
#if 0
#include <string.h>
#define LISTSIZE 6
int main(void)
{
	const char* list[LISTSIZE] = {																												//	一个数组，内含6个指针
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


//用strcpy()拷贝整个字符串（不是拷贝字符串的地址）
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

	printf("请输入以q开头的%d行单词：\n", LIM);
	while (i < LIM && s_gets(temp, SIZE))
	{
		if (temp[0] != 'q')
			printf("%s没有以q开头！\n", temp);
		else
		{
			strcpy(qwords[i], temp);
			i++;
		}
	}
	puts("以下是已拷贝的字符串：");
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


//strcpy()的返回值
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
	puts(fanhui);//strcpy()返回是一个指针，此时指针指向target的第8个字符。puts从target的第8个字符开始打印，到beast\0  停止

	return 0;
}
#endif


//用strncpy()拷贝整个字符串（不是拷贝字符串的地址）
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

	printf("请输入以q开头的%d行单词：\n", LIM);
	while (i < LIM && s_gets(temp, SIZE))
	{
		if (temp[0] != 'q')
			printf("%s没有以q开头！\n", temp);
		else
		{
			strncpy(qwords[i], temp, TARGET_SIZE - 1);
			qwords[i][TARGET_SIZE - 1] = '\0';
			i++;
		}
	}
	puts("以下是已拷贝的字符串：");
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


//用sprintf()把3个项合成为一个字符串
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

	puts("请输入你的姓：");
	s_gets(first, MAX);
	puts("请输入你的名：");
	s_gets(last, MAX);
	puts("请输入你的奖金金额：");
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


//读入字符串，并排序字符串
#if 0
#include <string.h>
#define  SIZE 81//限制字符串长度
#define LIM 20  //限制字符串行数

void sort_str(char** strings, int num);
char* s_gets(char* string, int n);
int main(void)
{
	char input[SIZE][LIM];		//创建char型二维数组
	char* p[LIM];						//内含指针变量的数组
	int in_count = 0;					//输入的行数计数
	int out_count = 0;				//输出的行数计数

	printf("请输入最多%d行字符串，然后我会进行排序。\n", LIM);
	printf("若要停止程序，请输入空行。\n");

	while (in_count < LIM && s_gets(input[in_count], SIZE) != NULL && input[in_count][0] != '\0')//s_gets()会把\n替换成\0，所以是!='\0'
	{
		p[in_count] = input[in_count];//设置指针指向字符串   类似于第10章的       声明char *p；  
																										//						 p=input[in_count]; 即p存的是&input[in_count][0]
		in_count++;
	}
	sort_str(p, in_count);
	puts("\n以下是排序好的字符串：\n");
	for (out_count = 0; out_count < in_count; out_count++)
		puts(p[out_count]);

	return 0;
}
void sort_str(char** strings, int num)
{
	char* temp;
	int seek1, seek2;

	for (seek1 = 0; seek1 < num - 1; seek1++)//外层循环指明正在处理的元素
	{
		for (seek2 = seek1 + 1; seek2 < num; seek2++)//内层循环找出应存储在该元素的值
		{
			if (strcmp(strings[seek1], strings[seek2]) > 0)//若前一串字符串的首字母排序序列位于后一串字符串的首字母后面
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


//用strchr()实现s_gets()的替换\n为\0功能，用toupper()实现字符串的小写字母改为大写字母，用ispunct()统计标点符号个数
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

	puts("请输入一行字符：");
	fgets(line, LIMIT, stdin);

	find = strchr(line, '\n');
	if (find)
		*find = '\0';					//去掉输入的\n

	ToUpper(line);
	puts(line);

	printf("输入的字符串中有%d个标点符号\n", PunctCount(line));//注意：程序到此仅会执行一遍，若输入的字符过多，则仍有字符在缓冲区
																										//但程序不再循环执行fgets(line,LIMIT,stdin);   所以不需要清空缓冲区了。
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


//使用strtol()函数进行进制转换
#if 0
#include <stdlib.h>
#define LIM 30

char* s_gets(char* string, int n);
int main(void)
{
	char number[LIM];
	char* end;
	long value;

	puts("请输入一个数字（输入空行以退出）：");
	while (s_gets(number, LIM) && number[0] != '\n')
	{
		value = strtol(number, &end, 10);
		printf("输入（10进制），输出（10进制）：%ld，数字输入结束后的字符：%s，该字符的首字符ASCII码是：%d\n"
			, value, end, *end);
		//end:字符的地址   *end:地址上的值

		value = strtol(number, &end, 16);
		printf("输入（16进制），输出（10进制）：%ld，数字输入结束后的字符：%s，该字符的首字符ASCII码是：%d\n"
			, value, end, *end);
		puts("继续（输入空行以退出）：");
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


//复习题
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

	printf("%p\n", s_gets(flower, SIZE));																			//特殊情况：输入^Z则此句输出0000000000000000
	//printf("%d\n", s_gets(flower, SIZE));//地址类型用%d输出时，无法显示内容
	puts(flower);

	return 0;
}
char* s_gets(char* string, int n)
{
	char* fanhui;
	//int i = 0;
	fanhui = fgets(string, n, stdin);//n为80，fgets()只会读入79个字符，并自动在其后加\0

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

	puts("请输入字符串：");

	printf("字符串首地址：%p\n内容为：", s_gets(flower, SIZE));
	//printf("%d\n", s_gets(flower, SIZE));//地址类型用%d输出时，无法显示内容
	puts(flower);

	printf("字符串长度为%d\n", strlen(flower));

	return 0;
}
int strlen(char* p)
{
	int i;
	for (i = 0; *(p + i) != '\0'; i++)
		;

	//若输入空行，则i为0时不进入for循环。若输入一个字符，则i为0时进入for循环，后来i为1时退出循环。
	return i;
}
//法二：
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
	fanhui = fgets(string, n, stdin);//n为80，fgets()只会读入79个字符，并自动在其后加\0

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

	printf("s_gets()的返回的指针的地址值%p\n", s_gets(flower, SIZE));
	puts(flower);

	return 0;
}
char* s_gets(char* string, int n)
{
	char* fanhui;
	//int i = 0;
	fanhui = fgets(string, n, stdin);//n为80，fgets()只会读入79个字符，并自动在其后加\0

	char* find;

	if (fanhui)//若输入不为^Z
	{
		find = strchr(string, '\n');

		if (find)
			*find = '\0';
		else//若未找到，则find=NULL，执行else
			while (getchar() != '\n')//吃掉缓冲区多余数据
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
	printf("输入的内容是:");
	puts(flower);

	char* find;
	find = find_space(flower);

	if (find != NULL)
	{
		printf("空格及其后的字符是:");
		puts(find);
	}
	else
		puts("未找到空格！");//若没有else语句块，则输入没有空格的字符串时，程序会出错。

	return 0;
}
char* find_space(char* string)
{
	char* find;

	while (*string != ' ' && *string != '\0')
		string++;

	if (*string == ' ')
		find = string;//指向空格的后一个字符
	else//*string=='\0'时
		find = NULL;

	return find;
}
char* s_gets(char* string, int n)
{
	char* fanhui;
	//int i = 0;
	fanhui = fgets(string, n, stdin);//n为80，fgets()只会读入79个字符，并自动在其后加\0

	char* find;

	if (fanhui)//若输入不为^Z
	{
		find = strchr(string, '\n');

		if (find)
			*find = '\0';
		else//若未找到，则find=NULL，执行else
			while (getchar() != '\n')//吃掉缓冲区多余数据
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


//编程练习
//1.
#if 0
#define LIMT 20
#define SIZE 20
char* duqv(char* string, int n);
int main(void)
{
	char cunchu[LIMT][SIZE];
	puts("请输入字符:(输入空行以结束)");

	int count = 0;
	while (count < LIMT && duqv(cunchu[count], SIZE) != NULL && cunchu[count][0] != '\0')
	{
		count++;
	}

	puts("您输入的内容是:");
	for (int i = 0; i < count; i++)
		puts(cunchu[i]);

	return 0;
}
char* duqv(char* string, int n)
{
	char* fanhui;

	fanhui = fgets(string, n, stdin);

	if (fanhui)//输入不为^Z
	{
		while (*string != '\n' && *string != '\0')
			string++;
		if (*string == '\n')																							//瑕疵：无法体现输入\n
			*string = '\0';
		else//*string == '\0'时
			while (getchar() != '\n')
				continue;
	}
	return fanhui;
}
#endif
//1.改				//思路：用getchar()自定义一个读取数据并保存至数组中的函数。
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

	//puts(arr);//不能用puts()，因为没有\0输入，程序会跑飞。

	return 0;
}
//void get_char(char* ar, char* end)
//{
//	for (; ar < end; ar++)
//		*ar = getchar();
//}
//或
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
	puts("请输入字符:(输入^Z以结束)");

	int count = 0;
	while (count < LIMT && duqv(cunchu[count], SIZE) != NULL)
	{
		count++;
	}

	puts("您输入的内容是:");
	for (int i = 0; i < count; i++)
		puts(cunchu[i]);

	return 0;
}
char* duqv(char* string, int n)
{
	char* fanhui;

	fanhui = fgets(string, n, stdin);

	if (fanhui)//输入不为^Z
	{
		while (*string != '\n' && *string != '\0' && *string != ' ' && *string != '\t')
			string++;
		if (*string == '\n' || *string != ' ' || *string != '\t')
			*string = '\0';
		else//*string == '\0'时
			while (getchar() != '\n')
				continue;
	}
	return fanhui;
}
#endif
//法二：getchar(),putchar();
#if 0		
int get_char(char* string, int n);
int main(void)
{
	char cunchu[10];
	puts("请输入10个字符:（输入空格、制表符或换行符时停止输入）");
	int length = get_char(cunchu, 10);

	puts("您输入的内容是:");
	for (int i = 0; i <= length; i++)
		putchar(cunchu[i]);

	return 0;
}
int get_char(char* string, int n)//n是元素个数
{
	int i = 0;
	while (i < n)//i是索引
	{
		*(string + i) = getchar();//当输入abc\n    时i=3


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
char* duqv(char* string, int n);//读取
int main(void)
{
	char cunchu[SIZE];
	puts("请输入字符:(输入Enter结束)");

	char* find;
	find = duqv(cunchu, SIZE);

	puts("您输入的单词是:");
	puts(find);

	return 0;
}
char* duqv(char* string, int n)
{
	char* fanhui;

	fanhui = fgets(string, n, stdin);

	char* start = fanhui;// start 必须赋一个初始值

	for (; isalpha(*fanhui) == NULL && fanhui < (string + strlen(string)); fanhui++)//当输入空格、制表符、换行符后再输入单词                    
		start = fanhui;																										//strlen()不记录\n	,用来处理只输入换行符的情况								
																																	//瑕疵：输入\n再输入单词的情况仍未处理好
	start = fanhui;//start指向第一个非空白字符

	while (*fanhui != ' ' && *fanhui != '\t' && *fanhui != '\n' && *fanhui != '\0')//第一个非空白字符串其后若还有空白字符，则用\0截断
		fanhui++;

	if (*fanhui == ' ' || *fanhui == '\t' || *fanhui == '\n')
	{
		*fanhui = '\0';
	}
	else //*fanhui=='\0时
		while (getchar() != '\n')
			continue;

	return start;
}
#endif
// 以上的程序当输入'\n'时必须要将其转化为'\0'，所以存在输入\n再输入单词的情况不好处理
//3.改
#if 0
#include <ctype.h>
#include <string.h>
#define SIZE 20
void duqv(char* string, int n);//读取
int main(void)
{
	char cunchu[SIZE];
	puts("请输入字符:(输入Enter结束)");

	duqv(cunchu, SIZE);

	puts("您输入的单词是:");
	//puts(cunchu);
	printf("%s", cunchu);

	return 0;
}
void duqv(char* string, int n)
{
	char temp[SIZE];
	char* temp_p = temp;

	fgets(temp, SIZE, stdin);																						//行缓冲输入，输入\n时，temp数组就完成了输入。
																																//无法实现连续输入\n再输入单词的情况。
	while (isalpha(*temp_p) == 0)
	{
		if (temp_p >= temp + strlen(temp))//输入\n时弹出循环
			break;

		temp_p++;
	}
	while (isalpha(*temp_p))
		*string++ = *temp_p++;

	*string = '\0';
}
#endif
//使用getchar()，可以实现连续输入\n再输入单词的情况。
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
int get_word(char* string)//检测输入的第一个单词
{
	int length = 0;//表示元素个数
	_Bool inword = 0;

	while (*string = getchar())
	{
		if (isspace(*string) && !inword)                               //若输入          空格 (SPC)
																							//'\t'	    0x09	水平制表符(TAB)
																							//'\n'	0x0a	换行符(LF)
																							//'\v'	0x0b	垂直制表符(VT)
																							//'\f' 	0x0c    换页(FF)
																							//'\r'	    0x0d    回车(CR)
			continue;																	//继续读取输入
		else if (!isspace(*string) && !inword)//当输入字母
			inword = 1;
		else if (isspace(*string) && inword)//当再次输入空白字符
			break;

		length++;//单词长度加一		
		string++;//指向数组后面元素的位置

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
char* duqv(char* string, int n);//读取
int main(void)
{
	char cunchu[SIZE];
	puts("请输入字符:(输入Enter结束)");

	char* find;
	find = duqv(cunchu, SIZE);

	puts("您输入的单词是:");
	puts(find);

	return 0;
}
char* duqv(char* string, int n)
{
	char* fanhui;

	fanhui = fgets(string, n, stdin);

	char* start = fanhui;// start 必须赋一个初始值

	for (; isalpha(*fanhui) == NULL && fanhui < (string + strlen(string)); fanhui++)//当输入空格、制表符、换行符后再输入单词                    
		start = fanhui;																										//strlen()不记录\n	,用来处理只输入换行符的情况								
																																	//瑕疵：只输入\n的情况仍未处理好
	start = fanhui;//start指向第一个非空白字符

	while (*fanhui != ' ' && *fanhui != '\t' && *fanhui != '\n' && *fanhui != '\0')//第一个非空白字符串其后若还有空白字符，则用\0截断
		fanhui++;

	if (*fanhui == ' ' || *fanhui == '\t' || *fanhui == '\n')
	{
		*fanhui = '\0';
	}
	else //*fanhui=='\0时
		while (getchar() != '\n')
			continue;

	return start;
}
#endif
//4.改
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
	int length = 0;//表示元素个数
	_Bool inword = 0;

	//while (*string = getchar())
	//{
	//	if (isspace(*string) && !inword)                               //若输入          空格 (SPC)
	//																						//'\t'	    0x09	水平制表符(TAB)
	//																						//'\n'	0x0a	换行符(LF)
	//																						//'\v'	0x0b	垂直制表符(VT)
	//																						//'\f' 	0x0c    换页(FF)
	//																						//'\r'	    0x0d    回车(CR)
	//		continue;																	//继续读取输入
	//	else if (!isspace(*string) && !inword)//当输入字母
	//		inword = 1;
	//	else if (isspace(*string) && inword)//当再次输入空白字符
	//		break;

	//	length++;
	//	string++;//指向数组后面元素的位置

	//	if (length == n)
	//		break;
	//}
	//或
	char* temp = string;

	while (temp < string + n)
	{
		*temp = getchar();
		if (isspace(*temp) && !inword)                               //若输入          空格 (SPC)
																							//'\t'	    0x09	水平制表符(TAB)
																							//'\n'	0x0a	换行符(LF)
																							//'\v'	0x0b	垂直制表符(VT)
																							//'\f' 	0x0c    换页(FF)
																							//'\r'	    0x0d    回车(CR)
			continue;																	//继续读取输入
		else if (!isspace(*temp) && !inword)//当输入字母
			inword = 1;
		else if (isspace(*temp) && inword)//当再次输入空白字符
			break;

		length++;
		temp++;//指向数组后面元素的位置		
	}

	return length;
}
#endif


//5.
#if 0
#include <string.h>
#define SIZE 50
char* duqv(char* string, int n);//读取
char* find(char* string, char ch);
int main(void)
{

	while (1)
	{
		char cunchu[SIZE];
		puts("请输入字符:(输入Enter结束)");

		duqv(cunchu, SIZE);

		puts("您输入的内容是:");
		puts(cunchu);

		char ch;
		puts("请输入要查找的字符:");
		scanf("%c", &ch);
		while (getchar() != '\n')
			continue;

		char* Find;
		Find = find(cunchu, ch);
		if (Find)
		{
			printf("该字母及其后的内容为:");
			puts(Find);
		}
		else
			puts("未找到该字符！");
	}
	return 0;
}
char* find(char* string, char ch)
{
	char* find = string;
	while (*find != ch)
	{
		find++;

		if (find == string + strlen(string))//若输入两个字符，则strlen（）=2，string+2指向数组最后一个元素的后面第一个位置
		{																	//法二：if(find=='\0')
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

	if (fanhui)//输入不为^Z
	{
		while (*string != '\n' && *string != '\0')
			string++;
		if (*string == '\n')
			*string = '\0';
		else//*string == '\0'时
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
		puts("请输入字符串:");
		duqv(cunchu, 50);

		puts("请输入要寻找的字符:");
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

		if (xunzhao == string + strlen(string))//若指针xunzhao 指向了数组后的第一个位置，则弹出。
			break;
	}

	find = (*xunzhao == ch) ? 1 : 0;

	//或
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

	if (fanhui)//输入不为^Z
	{
		while (*string != '\n' && *string != '\0')
			string++;
		if (*string == '\n')
			*string = '\0';
		else//*string == '\0'时
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

	puts("请输入待拷贝的字符串:");

	while (duqv(temp, 80) && temp[0] != '\0')//输入^Z或空行，停止程序
	{
		fanhui = mystrncpy(cunchu, temp, SIZE);
		*(cunchu + SIZE - 1) = '\0';//第10个元素赋'\0'

		puts("您输入的内容是:");
		puts(cunchu);
		puts(fanhui);

		puts("请输入待拷贝的字符串:");
	}
	puts("再见！");

	return 0;
}
char* mystrncpy(char* string1, char* string2, int n)//n=10，n是元素个数					//注：源字符长度大于n，strncpy不会自动添加\0
{
	char* fanhui = string1;
	int i;

	for (i = 0; i < n - 1; i++)
	{
		*(string1 + i) = *(string2 + i);//拷贝到第9个元素为止
	}

	return fanhui;
}
char* duqv(char* string, int n)
{
	char* fanhui;

	fanhui = fgets(string, n, stdin);

	if (fanhui)//输入不为^Z
	{
		while (*string != '\n' && *string != '\0')
			string++;
		if (*string == '\n')
			*string = '\0';
		else//*string == '\0'时
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

	puts("请输入待查找的字符串:");

	while (duqv(cunchu1, 80) && cunchu1[0] != '\0')
	{
		puts("请输入要查找的字符串:");
		duqv(cunchu2, 80);

		fanhui = string_in(cunchu1, cunchu2);

		if (fanhui)
		{
			puts("待查找的字符串含有:");
			puts(fanhui);
		}
		else
			puts("未找到！");

		puts("请输入待查找的字符串:");
	}
	puts("再见！");

	return 0;
}
char* string_in(char* string1, char* string2)																                                    //瑕疵：只支持找两个字符
{
	char* fanhui = NULL;//必须先初始化

	int biaoji1 = 0, biaoji2 = 0;
	char* xunzhao = string1;
	char* temp = NULL;//必须先初始化

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

	if (fanhui)//输入不为^Z
	{
		while (*string != '\n' && *string != '\0')
			string++;
		if (*string == '\n')
			*string = '\0';
		else//*string == '\0'时
			while (getchar() != '\n')
				continue;
	}
	return fanhui;
}
#endif
//8.改正																//8.原思路：设两个标记，每个标记一个字符匹配，所以只能支持两个字符检测。
#if 0																//新思路：标记改为计数器count，只有count的值等于检测字符串的长度，才返回字符串首地址
#include<string.h>
char* string_in(char* string1, char* string2);
char* duqv(char* string, int n);
int main(void)
{
	char cunchu1[80];
	char cunchu2[80];
	char* fanhui;

	puts("请输入待查找的字符串:");

	while (duqv(cunchu1, 80) && cunchu1[0] != '\0')
	{
		puts("请输入要查找的字符串:");
		duqv(cunchu2, 80);

		fanhui = string_in(cunchu1, cunchu2);

		if (fanhui)
		{
			puts("主串中以子串的首元素开头的字符串为:");
			puts(fanhui);
		}
		else
			puts("未找到！");

		puts("请输入待查找的字符串:");
	}
	puts("再见！");

	return 0;
}
char* string_in(char* string1, char* string2)
{

	int count = 0;//匹配度计数
	int length = strlen(string2);

	while (count < length && *string1 != '\0')//若匹配未完成，且没有轮到string1的末尾字符后的第一个位置。
	{
		if (*(string1 + count) == *(string2 + count))//若s1和s2的第一个字符匹配，则计数值加一。
			count++;
		else
		{
			count = 0;
			string1++;//若不匹配，则轮到s1的第二个字符与s2的第一个字符检测。
		}
	}
	if (count == length)
		return string1;//返回主串中子串的首地址。

	else
		return NULL;
}
char* duqv(char* string, int n)
{
	char* fanhui;

	fanhui = fgets(string, n, stdin);

	if (fanhui)//输入不为^Z
	{
		while (*string != '\n' && *string != '\0')
			string++;
		if (*string == '\n')
			*string = '\0';
		else//*string == '\0'时
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

	puts("请输入待反序的字符串:");

	while (duqv(cunchu, 80) && cunchu[0] != '\0')
	{
		fanxu(cunchu);
		puts("反序后的字符串:");
		puts(cunchu);

		puts("请输入待反序的字符串:");
	}
	puts("再见！");

	return 0;
}
void fanxu(char* string)
{
	int size = strlen(string);

	char* temp1 = string + size - 1;//创建一个指针，指向数组最后一个元素

	char temp2[80];//创建一个暂存反序后的数据的数组

	for (int i = 0; i < size; i++)
		*(temp2 + i) = *(temp1 - i);

	temp1 = string;//让temp1指向数组首元素

	for (int i = 0; i < size; i++)
		*(temp1 + i) = *(temp2 + i);

	temp1[size] = '\0';

	return;
}
char* duqv(char* string, int n)
{
	char* fanhui;

	fanhui = fgets(string, n, stdin);

	if (fanhui)//输入不为^Z
	{
		while (*string != '\n' && *string != '\0')
			string++;
		if (*string == '\n')
			*string = '\0';
		else//*string == '\0'时
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

	puts("请输入待删除空格的字符串:");

	while (duqv(cunchu, 80) && cunchu[0] != '\0')
	{
		delete_space(cunchu);
		puts("处理好后的字符串:");
		puts(cunchu);

		puts("请输入待删除空格的字符串:");
	}
	puts("再见！");

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
		//*fanhui = *(fanhui+1);//string数组中的存储空格的位置被其后一个字符覆盖							//错误，应该被空格后的字符串覆盖
		*fanhui = '\0';//把temp1内容在空格处截断

		strcpy(temp2, fanhui + 1);//空格后内容拷贝给temp2

		strcat(temp1, temp2);//temp1和temp2拼接

		fanhui = strchr(temp1, ' ');
	}
	//上面的操作处理的都不是string数组本身
//string = temp1;  //temp1地址赋给string											
//puts(string);																										 //确实删除了空格	     为什么没有改变cunchu数组的内容？
	strcpy(string, temp1);																						//因为主函数的puts(cunchu);cunchu指针没有指向temp1数组。 

	return;
}
char* duqv(char* string, int n)
{
	char* fanhui;

	fanhui = fgets(string, n, stdin);

	if (fanhui)//输入不为^Z
	{
		while (*string != '\n' && *string != '\0')
			string++;
		if (*string == '\n')
			*string = '\0';
		else//*string == '\0'时
			while (getchar() != '\n')
				continue;
	}
	return fanhui;
}
#endif//法一：使用临时字符串存储删除空格后的字符串，再找到\0，拼接两个字符串
//10.法二：使用多个指针，调整原字符串
#if 0
#include<string.h>
void delete_space(char* string);
char* duqv(char* string, int n);
int main(void)
{
	char cunchu[80];

	puts("请输入待删除空格的字符串:");

	while (duqv(cunchu, 80) && cunchu[0] != '\0')
	{
		delete_space(cunchu);
		puts("处理好后的字符串:");
		puts(cunchu);

		puts("请输入待删除空格的字符串:");
	}
	puts("再见！");

	return 0;
}
void delete_space(char* string)
{
	char* finish = string;//定义一个处理好后的字符串的指针finish
	int count = 0;//记录删除的空格数

	while (*string != '\0')//若指向原字符串的指针没处理到最后的元素后的第一个位置
	{
		if (*string != ' ')
			*finish++ = *string++;
		else
		{
			string++;//若检测到空格字符，则原字符串指针后移一位。
			count++;
		}
	}

	/*while (count--)
		*finish++ = '\0';*/   //最后，在处理好后的字符串后补上\0。不写的话，因为虽然指向原字符串的指针没有向finish赋\0，但是
		//原字符串后的\0，仍然存在。但是：请输入待删除空格的字符串:
																 //a b c d e f
																//	处理好后的字符串 :
																//abcdefd e f
																//	请输入待删除空格的字符串 :
		//出现此情况的原因：string已经指向了原字符串的\0，程序终止了。后面的d e f是原字符串的残留内容

	while (count--)
		*finish++ = '\0';//能清除剩余字符。

	return;
}
char* duqv(char* string, int n)
{
	char* fanhui;

	fanhui = fgets(string, n, stdin);

	if (fanhui)//输入不为^Z
	{
		while (*string != '\n' && *string != '\0')
			string++;
		if (*string == '\n')
			*string = '\0';
		else//*string == '\0'时
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
	char* chuli[LIM];//创建内含指针变量的数组
	int shuru_jishu = 0;
	int shuchu_jishu;

	puts("请输入至多10行字符串:");
	while (shuru_jishu < LIM && duqv(input[shuru_jishu], SIZE) != NULL)
	{
		chuli[shuru_jishu] = input[shuru_jishu];//给每个指针赋值
		shuru_jishu++;
	}

	int choice;
	showmenu();
	scanf("%d", &choice);
	while (choice != 5)
	{
		switch (choice)
		{
		case 1:yuanzifuchuan(chuli, shuru_jishu);//第一个实参：内含指针变量的数组，最多包含10个指针
			break;													//注意：shuru_jishu量上等于元素个数，而不是最大索引值，因为++过了
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
	puts("再见！");

	return 0;
}
void showmenu(void)
{
	puts("*******************************************************************************");
	printf("请输入您选择的功能:(输入功能前对应的数字即可)\n");
	printf("1)打印源字符串列表		2)以ASCII中的顺序打印字符串\n");
	printf("3)按长度递增顺序打印字符串	4)按字符串中第1个单词的长度打印字符串\n");
	puts("5)退出");
	puts("*******************************************************************************");
}
void yuanzifuchuan(char* string[], int n)
{
	puts("源字符串列表:");
	for (int i = 0; i < n; i++)
		puts(string[i]);
}
void ASCII_paixu(char* string[], int n)//n是元素个数
{
	char* string1[LIM];
	for (int i = 0; i < n; i++)
		string1[i] = string[i];//原指针数组拷贝到string1

	char* temp;
	int top, seek;
	for (top = 0; top < n - 1; top++)//最多指向倒数第二个元素
		for (seek = top + 1; seek < n; seek++)
			if (strcmp(string1[top], string1[seek]) > 0)
			{
				temp = string1[top];
				string1[top] = string1[seek];
				string1[seek] = temp;
			}

	puts("处理后字符串列表:");
	for (int i = 0; i < n; i++)
		puts(string1[i]);
}
void length_paixu(char* string[], int n)
{
	char* string1[LIM];
	for (int i = 0; i < n; i++)
		string1[i] = string[i];//原指针数组拷贝到string1

	char* temp;
	int top, seek;
	for (top = 0; top < n - 1; top++)//最多指向倒数第二个元素
		for (seek = top + 1; seek < n; seek++)
			if (strlen(string1[top]) > strlen(string1[seek]))
			{
				temp = string1[top];
				string1[top] = string1[seek];
				string1[seek] = temp;
			}

	puts("处理后字符串列表:");
	for (int i = 0; i < n; i++)
		puts(string1[i]);
}
void first_word_length_paixu(char* string[], int n)
{
	char* string1[LIM];
	for (int i = 0; i < n; i++)
		string1[i] = string[i];//原指针数组拷贝到string1

	char* temp;
	int top, seek;

	int dancichangdu[LIM] = { 0,0,0 };//部分赋初值

	//法一：
	//for (int i = 0; i < n; i++)
	//{
	//	for (int j=0; string1[i][j] != ' '; j++)
	//		dancichangdu[i]++;
	//}

	//法二：
	for (int i = 0; i < n; i++)
	{
		dancichangdu[i] = get_word_length(string1[i]);
	}


	for (top = 0; top < n - 1; top++)//最多指向倒数第二个元素
		for (seek = top + 1; seek < n; seek++)
			//if (strchr(string1[top],' ') > strchr(string1[seek],' '))//失败
			if (dancichangdu[top] > dancichangdu[seek])
			{
				temp = string1[top];
				string1[top] = string1[seek];
				string1[seek] = temp;
			}

	puts("处理后字符串列表:");
	for (int i = 0; i < n; i++)
		puts(string1[i]);
}
char* duqv(char* string, int n)
{
	char* fanhui;

	fanhui = fgets(string, n, stdin);

	if (fanhui)//输入不为^Z
	{
		while (*string != '\n' && *string != '\0')
			string++;
		if (*string == '\n')
			*string = '\0';
		else//*string == '\0'时
			while (getchar() != '\n')
				continue;
	}
	return fanhui;
}
int get_word_length(char* string)//计算单词长度的函数
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

	puts("请输入字符:");		//测试输入：danci1 danci2 DAXIE xiaoxie, haha.       en?   123456
	duqv(input, SIZE);

	printf("读入的单词数:%d\n", dancishu(input));
	printf("读入的大写字母数:%d\n", daxiezimushu(input));
	printf("读入的小写字母数:%d\n", xiaoxiezimushu(input));
	printf("读入的标点符号数:%d\n", biaodianfuhaoshu(input));
	printf("读入的数字字符数:%d\n\n", shuzizifushu(input));

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
			count++;// 统计单词个数
		}
		if (!isalpha(*find) && biaoji)
			biaoji = 0;// 已到单词的末尾

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

	if (fanhui)//输入不为^Z（即EOF）
	{
		while (*string != '\n' && *string != '\0')
			string++;
		if (*string == '\n')
			*string = '\0';
		else//*string == '\0'时
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
	char* cunchudezhizhen = cunchu;//指向cunchu

	int length = strlen(argv[1]);
	for (int i = 0; i < length; i++)
		*(cunchudezhizhen + i) = *(argv[1] + i);			//argv[1]既是字符串数组的名字也是字符串数组的指针。

	puts(cunchu);
	puts(argv[1]);//两个输出显示效果相同
	putchar('\n');

	//for (i = argc-1; i - 1 >= 1; i--)//4个字符串，第一个作为程序名，实际上只有3个字符串，argc=4。
	//strcat(argv[i],argv[i-1]);
	// 

	//strcat(argv[3],argv[2]);
	//strcat(argv[3],argv[1]);

	//puts(argv[3]);																															 //效果不好，且程序打印完后会崩溃

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

	double dishu;//底数
	int zhishu;//指数
	double jieguo = 1.0;

	dishu = atof(argv[1]);
	zhishu = atoi(argv[2]);

	for (int i = 1; i <= zhishu; i++)
		jieguo *= dishu;

	printf("%.2lf的%d次方等于%.2lf", dishu, zhishu, jieguo);

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
	puts("请输入字符:");
	duqv(cunchu, 80);

	int fanhui;
	fanhui = atoi(cunchu);
	printf("atoi()处理好后，数组中的字符为:%s\n", cunchu);
	printf("atoi()的返回值是%d\n", fanhui);

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
			temp[i] = *find;																			//错误：虽然temp中的字符串变成了字符，但还不是数值。
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

	if (fanhui)//输入不为^Z（即EOF）
	{
		while (*string != '\n' && *string != '\0')
			string++;
		if (*string == '\n')
			*string = '\0';
		else//*string == '\0'时
			while (getchar() != '\n')
				continue;
	}
	return fanhui;
}
#endif
//15.改正
#if 0
#include <string.h>
#include <ctype.h>
int atoi(char* string);
char* duqv(char* string, int n);
int main(void)
{

	char cunchu[80];
	puts("请输入字符:");
	duqv(cunchu, 80);//用scanf()效果相同

	printf("atoi()处理好后，输入的数字为%d\n", atoi(cunchu));

	return 0;
}
int atoi(char* string)
{
	int result = 0;
	int weiquan = 1;//个位的权是1，十位的权是10
	int length = strlen(string);

	for (int i = length; i > 0; i--)
	{
		if (isdigit(*(string + i - 1)) == 0)//先判断末位是否为数字字符
		{
			printf("存在非数字字符！");
			return 0;
		}
		result += (*(string + i - 1) - '0') * weiquan;//两个字符的ASCII码相减，能得到数字！

		weiquan *= 10;
	}

	return result;
}
char* duqv(char* string, int n)
{
	char* fanhui;

	fanhui = fgets(string, n, stdin);

	if (fanhui)//输入不为^Z（即EOF）
	{
		while (*string != '\n' && *string != '\0')
			string++;
		if (*string == '\n')
			*string = '\0';
		else//*string == '\0'时
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
	else if (argc == 1 || !strcmp(argv[1], "-p"))//没输入第二个字符串，或者输入了第二个字符串且为-P时。
		print();
	else if (!strcmp(argv[1], "-u"))//比较后相同，则返回0，取非后为1。
		to_up();
	else if (!strcmp(argv[1], "-l"))
		to_low();
	putchar('\n');

	return 0;
}
void print(void)
{
	char ch;

	while ((ch = getchar()) != EOF)   //文件导入
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


//外层块中的变量与内层块中的变量同名的情况
#if 0
int main(void)
{
	int x = 30;
	printf("x在外层块：值为%d地址为%p\n", x, &x);

	{
		int x = 77;
		printf("x在内层块：值为%d地址为%p\n", x, &x);
	}

	printf("x在外层块：值为%d地址为%p\n", x, &x);

	while (x++ < 33)//外层块的x为30时进入，x变为31，。。。。。。x为33时判断为假不进入，x变为34。
	{
		int x = 100;
		x++;
		printf("x在while循环中：值为%d地址为%p\n", x, &x);
	}

	printf("x在外层块：值为%d地址为%p\n", x, &x);

	return 0;
}
#endif


//新的C99块规则
#if 0
int main(void)
{
	int n = 8;
	printf("最初：n=%d，地址：p=%p\n", n, &n);

	for (int n = 1; n < 3; n++)
		printf("第一个for循环：索引n=%d，地址：p=%p\n", n, &n);

	printf("第一个for循环结束后：n=%d，地址：p=%p\n", n, &n);

	for (int n = 1; n < 3; n++)
	{
		printf("第二个for循环：索引n=%d，地址：p=%p\n", n, &n);
		int n = 6;
		printf("第二个for循环：新变量n=%d，地址：p=%p\n", n, &n);
		n++;//n=6+1=7
	}
	printf("第二个for循环结束后：n=%d，地址：p=%p\n", n, &n);


	return 0;
}
#endif


//使用局部静态变量（块作用域的静态变量）（块作用域无链接静态存储期）
#if 0
void ceshi(void);
int main(void)
{
	int count;
	for (count = 1; count <= 3; count++)
	{
		printf("迭代次数%d:\n", count);
		ceshi();
	}

	return 0;
}
void ceshi(void)
{
	int fade = 1;
	static int stay;//若未初始化静态变量则默认值为0
	printf("fade=%d     stay=%d\n", fade++, stay++);
}
#endif


//使用外部变量（外部链接的静态变量）
#if 0
int shuzi;
void ceshi(void);
int main(void)
{
	puts("请输入数字:");
	scanf("%d", &shuzi);

	while (shuzi != 66)
	{
		ceshi();
	}
	puts("答对了！");

	return 0;
}
void ceshi(void)
{
	printf("输入的数字不对，请重新输入！\n");
	scanf("%d", &shuzi);
}
#endif


//使用多种存储类别，编写实现计算等差数列的程序													//要与qiuhehanshu.c一起编译
#if 0
void baogao_zhixincishu(void);//报告程序执行次数
extern void qiuhe(int k);//对输入的实参代表的等差数列求和      extern：当前文件使用的函数被定义在别处

int count = 0;//定义式声明：文件作用域外部链接静态存储期-->外部链接的静态变量

int main(void)
{
	int shuzi;//块作用域无链接自动存储期-->自动变量
	register int i;//块作用域无链接自动存储期-->寄存器变量

	printf("请输入一个正整数(输入0以退出程序)：");
	while (scanf("%d", &shuzi) == 1 && shuzi > 0)
	{
		count++;//使用外部链接的静态变量
		for (i = shuzi; i >= 0; i--)					//i为0时打印循环次数和计算结果
			qiuhe(i);

		printf("请输入一个正整数(输入0以退出程序)：");
	}
	baogao_zhixincishu();

	return 0;
}
void baogao_zhixincishu(void)//报告程序执行次数
{
	printf("程序执行了%d次\n", count);//使用外部链接的静态变量
}
#endif


//使用内部链接的静态变量编写生成伪随机数的函数														//要与rand1.c一起编译
#if 0//驱动程序
#include<time.h>
extern unsigned int rand1(void);
extern void seed_to_next(unsigned int seed);

int main(void)
{
	int count;
	unsigned seed;

	printf("使用系统时间作为种子数字\n");
	seed_to_next((unsigned int)time(0));

	for (count = 0; count < 10; count++)
		printf("%d\n", rand1());

	return 0;
}
#endif


//使用两个翻译单元文件完成掷骰子程序																		//要与zhitouzi.c一起编译
#if 0
#include<stdlib.h>//提供srand()原型
#include <time.h>//提供time()原型
#include"zhitouzi.h"

int main(void)
{
	int geshu, mianshu, shuzizongshu;
	int status;

	srand((unsigned int)time(0));//让rand()函数里的种子数字能随机生成
	printf("请输入骰子的面数：(输入0以退出程序)\n");

	while (scanf("%d", &mianshu) == 1 && mianshu > 0)
	{
		puts("有多少个骰子？");
		if ((status = scanf("%d", &geshu)) != 1)
		{
			if (status == EOF)
				break;
			else
			{
				puts("您应该输入一个正整数");
				puts("让我们再试一次");
				while (getchar() != '\n');
				continue;
				puts("有多少个骰子？");
			}
		}																						 //touzishuzizongshu是外部函数可被其他文件的函数访问
		shuzizongshu = touzishuzizongshu(geshu, mianshu);//注：变量名不能与函数名相同，因为若相同则会有二义性错误，编译器不知道该调用变量还是函数。
		printf("你使用%d个%d面的骰子掷出了%d\n\n", geshu, mianshu, shuzizongshu);

		printf("请输入骰子的面数：(输入0以退出程序)\n");
	}
	printf("touzishuzi()函数被执行了%d次", zhitouzicishu);

	return 0;
}
#endif


//使用malloc()实现动态分配内存
#if 0
#include<stdlib.h>

int main(void)
{
	double* p;
	int max, number;
	int i = 0;

	puts("要输入多少个double类型的值？");
	if (scanf("%d", &max) != 1)
	{
		puts("输入的数字不正确！");
		exit(EXIT_FAILURE);
	}
	p = (double*)malloc(max * sizeof(double));
	if (p == NULL)
	{
		puts("请求内存分配失败！");
		exit(EXIT_FAILURE);
	}

	puts("请输入数字(按q以退出)：");
	while (i < max && scanf("%lf", p + i) == 1)//例：1.1 2.2 3.3 4.4 5.5 6.6 7.7 8.8 9.9 10.10 11.11 12.12 13.13 14.14 15.15
		i++;

	printf("这是你输入的%d个数字：\n", i);

	number = i;
	for (i = 0; i < number; i++)
	{
		printf("%7.2f", *(p + i));
		if (i % 7 == 6)//每行限制在7个数字，第一行i为0至6，第二行i从7开始。循环结束后i的值等于输入数字的数量
			putchar('\n');
	}
	if (i % 7 != 0)//若每行数字没满，则打印换行符
		putchar('\n');

	puts("Done.");
	free(p);

	return 0;
}
#endif


//查看静态对象，自动对象，动态分配的对象存储在何处
#if 0
#include<stdlib.h>
#include<string.h>

int waibulianjie_jintai = 30;
const char* p1 = "p1指向字符串字面量，字符串是静态对象";

int main(void)
{
	int zidong = 40;
	char* p2 = "p2指向字符串字面量，字符串是静态对象";

	char shuzuxinshichuangjian[] = "数组形式创建字符串";

	int* p3 = (int*)malloc(1 * sizeof(int));
	*p3 = 35;

	//或char* p4 = (char*)calloc(strlen("abc")+1,sizeof(char));
	char* p4 = (char*)malloc(strlen("abc") + 1);
	strcpy(p4, "abc");

	printf("外部链接的静态变量：%d                                         地址：%p\n", waibulianjie_jintai, &waibulianjie_jintai);
	printf("字符串是静态对象:%s          地址：%p\n", p1, p1);
	printf("字符串是静态对象:%s          地址：%p\n", p2, p2);
	printf("数组形式创建字符串:%s		               地址：%p\n", shuzuxinshichuangjian, shuzuxinshichuangjian);
	printf("自动变量：%d                                                   地址：%p\n", zidong, &zidong);
	printf("动态分配的对象：%d                                             地址：%p\n", *p3, &p3);
	printf("动态分配的对象：%s				      	       地址：%p\n", p4, p4);

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


//复习题
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


//编程练习
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
int critic(int num)//units和num的地址不相同。
{
	printf("No luck, my friend. Try again.\n");
	scanf("%d", &num);

	return num;
}
#endif
//1.法二：指针
#if 0
void critic(int* num);
int main(void)
{
	int units;
	printf("How many pounds to a firkin of butter?\n");
	scanf("%d", &units);

	while (units != 56)
	{
		critic(&units);//向指针num传入units的地址。
	}
	printf("You must have looked it up!\n");

	return 0;
}
void critic(int* num)
{
	printf("No luck, my friend. Try again.\n");
	scanf("%d", num);//修改units的值
}
#endif


//2.																						//与pe12-2a.c, pe12-2a.h一起编译
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


//3.																						//与pe12-3a.c, pe12-3a.h一起编译
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
			mode1 = mode;//输入0或1，则给mode1赋值。

		if (mode != 0 && mode != 1)//输入不是0且不是1，则用原来mode1的值赋给mode。
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
//法二：在main()中定义mode, distance, fuel。
//三个函数改为：
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
	puts("要调用几次？");
	scanf("%d", &num);
	for (int i = 0; i < num; i++)
	{
		cishu = ceshi();
		printf("被调用了%d次\n", cishu);
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
#include<stdlib.h>/*提供 rand（）的原型 */
int tigongshuzi(void);
void paixu(int* p, int num);

int main(void)
{
	srand((unsigned int)time(0));
	int i;
	int shuzu[100];
	for (i = 0; i < 100; i++)
		*(shuzu + i) = tigongshuzi();

	puts("原数字：");
	for (i = 0; i < 100; i++)
		printf("%5d\n", *(shuzu + i));

	puts("降序排列后：");
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
//				(p+top)= (p + seek);									//注：此处会报错：左侧必须是个可修改的左值。
//				p + seek= temp;										//原因：p+top不指定内存上的内容  P320		
//			}																		//p=p+1正确     p+1=p错误
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

	printf("请输入你选择的种子数字：");
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
		printf("\n请输入你选择的种子数字：");
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
	printf("出现次数：1          2            3            4           5           6          7          8          9           10\n");
	for (int i = 0; i < 10; i++)													//记（书P79）
		printf("%12d", *(jilu + i));													//scanf()      参数列表：指向变量的指针
																								//printf()		参数列表：变量，常量和表达式
}
#endif
//6.用ANSI C 的srand()和rand()
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
	printf("出现次数：1          2            3            4           5           6          7          8          9           10\n");
	for (int i = 0; i < 10; i++)													//记（书P79）
		printf("%12d", *(jilu + i));												//scanf()      参数列表：指向变量的指针
																								//printf()		参数列表：变量，常量和表达式
}
#endif


//7.
#if 0
#include<stdlib.h>//提供srand()原型
#include <time.h>//提供time()原型
#include"zhitouzi.h"

int main(void)
{
	int cishu, geshu, mianshu, shuzizongshu;
	int status;

	srand((unsigned int)time(0));//让rand()函数里的种子数字能随机生成

	printf("请输入掷骰子的次数(输入q以退出程序)：");

	while (scanf("%d", &cishu) == 1)
	{
		printf("请输入骰子的面数和个数：");

		if (scanf("%d%d", &mianshu, &geshu) != 2)
		{
			puts("让我们再试一次");
			while (getchar() != '\n');
			continue;
			printf("请输入骰子的面数和个数：");
		}

		printf("下面是掷%d次%d个%d面的骰子的数字：\n", cishu, geshu, mianshu);

		int i;
		for (i = 0; i < cishu; i++)
		{
			shuzizongshu = touzishuzizongshu(geshu, mianshu);//注：变量名不能与函数名相同，因为若相同则会有二义性错误，编译器不知道该调用变量还是函数。
			printf("%5d", shuzizongshu);

			if (i % 15 == 14)
				putchar('\n');
		}
		if (i % 15 != 0)
			putchar('\n');

		printf("请输入掷骰子的次数：(输入q以退出程序)");
	}

	printf("\ntouzishuzi()函数被执行了%d次", zhitouzicishu);

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
	printf("请问要输入几个单词？");
	scanf("%d", &dancishu);

	char** p1;
	p1 = make_array(dancishu);

	printf("现在请输入%d个单词：\n", dancishu);
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
//9.改正
#if 0
#include<stdlib.h>//malloc()
#include<string.h>//strlen()
char* make_array(int elem);

int main(void)
{
	int dancishu;
	printf("请问要输入几个单词？");
	scanf("%d", &dancishu);

	char** p1;
	p1 = make_array(dancishu);//创建一个指针数组，指针个数为等于单词数，指针都指向char，p1是指针的指针。

	printf("现在请输入%d个单词：", dancishu);
	char temp[200];

	for (int i = 0; i < dancishu; i++)
	{
		scanf("%s", temp);//利用scanf()每次只能读一个单词的功能，每次循环都从缓冲区读入一个单词。

		char* p2 = (char*)malloc((strlen(temp) + 1) * sizeof(char));//根据每个单词的长度，分配一个合适的内存。

		strcpy(p2, temp);//每次都向分配的内存中存入一个单词。
		*(p1 + i) = p2;//将p1数组的指针都指向新分配的内存空间。
	}

	puts("以下是你输入的单词序列：");
	for (int i = 0; i < dancishu; i++)
		puts(*(p1 + i));
	//printf("%s\n", *(p1+i));

	free(p1);
	puts("完成！");

	return 0;
}
char* make_array(int elem)
{
	char** p1 = (char**)malloc(elem * sizeof(char*));//创建一个数组，数组中的每个元素都是指向char的指针，因此返回值应是指针的指针
	return p1;
}
#endif
#endif


//chapter 13
//code1.c
#if 0
#include <stdio.h>
#include <stdlib.h>//提供exit()原型
//
#if 1
#endif


//使用标准I/O
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


//编写文件压缩程序
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
	if ((in = fopen(argv[1], "r")) == NULL)//打开第一个文件
	{
		fprintf(stderr, "Can't open %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	strncpy(name, argv[1], LEN - 5);					//文件名改名，分3步操作
	name[LEN - 5] = '\0';
	strcat(name, ".red");//注：一般情况下第二个字符串仅会从第一个字符串的第一个空字符处开始覆盖。    red即reduced

	if ((out = fopen(name, "w")) == NULL)//打开第二个文件
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


//使用fprintf()、fscanf()、rewind()
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
	puts("请输入要存入文件的内容：(在新行按#以结束输入)");
	while ((fscanf(stdin, "%40s", words) == 1) && (words[0] != '#'))
		fprintf(fp, "%s\n", words);

	puts("文件的内容是：");
	rewind(fp);
	while (fscanf(fp, "%s", words) == 1)
		puts(words);
	puts("Done !");

	if (fclose(fp) != 0)
		fprintf(stderr, "关闭文件失败！\n");

	return 0;
}
#endif


//使用fseek()、ftell()倒序打印指定文件的字符
#if 0
#define MAX 81
int main(void)
{
	char file[MAX];
	char ch;

	FILE* fp;
	long count, last;

	puts("请输入要打开的文件名：");
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


//把文件的内容附加到另一个文件的末尾
#if 1
#include<string.h>//提供strchr()原型
#define BUFSIZE 4096//缓冲区大小
#define LEN 81//文件名最大长度

void appendix(FILE* source, FILE* destination);//内容附加函数
char* s_gets(char* string, int n);//输入函数

int main(void)
{
	FILE* fpsource, * fptarget;//指向源文件  指向目标文件
	int files = 0;//附加文件数量计数

	char file_target[LEN];
	char file_source[LEN];
	int ch;//逐个字符显示

	puts("请输入待处理的目标文件名：");
	s_gets(file_target, LEN);
	if ((fptarget = fopen(file_target, "a+b")) == NULL)//读或写目标文件
	{
		fprintf(stderr, "未能打开目标文件：%s\n", file_target);
		exit(EXIT_FAILURE);
	}
	//if (setvbuf(fptarget, NULL, _IOFBF, BUFSIZE) != 0)//创建一个输出缓冲区
	//{
	//	fprintf(stderr, "未能创建%s的输出缓冲区\n", file_target);
	//	exit(EXIT_FAILURE);
	//}

	puts("请输入要被拷贝内容的第一个源文件名：(输入空行以结束)");
	while (s_gets(file_source, LEN) && file_source[0] != '\0')//输入空行，s_gets()会把\n转化成\0
	{
		if (strcmp(file_source, file_target) == 0)
			fputs("不能拷贝文件内容至其本身\n", stderr);
		else if ((fpsource = fopen(file_source, "rb")) == NULL)//读源文件
			fprintf(stderr, "未能打开源文件：%s\n", file_source);
		else
		{
			//if (setvbuf(fpsource, NULL, _IOFBF, BUFSIZE) != 0)//创建一个输入缓冲区
			//{
			//	fprintf(stderr, "未能创建%s的输入缓冲区\n", file_source);
			//	continue;
			//}

			appendix(fptarget, fpsource);

			if (ferror(fptarget) != 0)
				fprintf(stderr, "写文件%s错误\n", fptarget);
			if (ferror(fpsource) != 0)
				fprintf(stderr, "读源文件%s错误\n", fpsource);
			fclose(fpsource);
			files++;
			printf("文件%s内容已附加到%s\n", file_source, file_target);

			puts("请输入要被拷贝内容的下一个源文件名：(输入空行以结束)");
		}
	}
	printf("操作完成！%d个文件的内容已附加到%s", files, file_target);

	rewind(fptarget);
	printf("%s的内容是：", file_target);
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
		//待读取文件数据拷贝进内存中的地址，待读数据块的大小，待读数据块数量，待读取的文件
		fwrite(temp, sizeof(char), bytes, target);
	//待写入的文件数据所在的内存中的地址，待写数据块的大小，待写数据块数量，待写入的文件
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
//命令行：D:\CODE\C_CODE\C Primer Plus Code practice\chapter 13\code1\Project1\x64\Debug
//Project1.exe
//mubiao.txt
//yuanwenjian1.txt
//yuanwenjian2.txt

//*******注*****此程序无论文本模式还是二进制模式的fopen()均能完成任务
#endif


//从文件中读取选定的内容
#if 0
#define SIZE 1000
int main(void)
{
	double numbers[SIZE];

	for (int i = 0; i < SIZE; i++)
		numbers[i] = 100.0 * i + 1.0 / (i + 1);//创建一组double类型的值

	const char* file = "numbers.txt";
	FILE* iofile;

	if ((iofile = fopen(file, "wb")) == NULL)//写模式（二进制模式打开文件）
	{
		fprintf(stderr, "未能打开文件(此文件用于存储输出的数据)：%s\n", file);
		exit(EXIT_FAILURE);
	}

	fwrite(numbers, sizeof(double), SIZE, iofile);
	//待写入的文件数据所在的内存中的地址，待写数据块的大小，待写数据块数量，待写入的文件
	fclose(iofile);

	if ((iofile = fopen(file, "rb")) == NULL)//读模式（二进制模式打开文件）
	{
		fprintf(stderr, "未能打开文件(此文件用于读出数据)：%s\n", file);
		exit(EXIT_FAILURE);
	}


	printf("请输入一个索引值（0~999）：\n");
	int index;
	double value;
	while (scanf("%d", &index) == 1 && index >= 0 && index <= 999)
	{
		long pos = (long)index * sizeof(double);//pos即偏移量，用于确定指针指向double类型值的位置
		fseek(iofile, pos, SEEK_SET);//找到存储double类型数值的文件的某个数值的位置
		fread(&value, sizeof(double), 1, iofile);
		//待读取文件数据在内存中的地址，待读数据块的大小，待读数据块数量，待读取的文件
		printf("此处的值为%f\n", value);

		printf("请输入下一个索引值（0~999，超过范围将退出程序）：\n");
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
//若要命令行运行，文件路径在：D:\CODE\C_CODE\C Primer Plus Code practice\chapter 13\code2\Project1\x64\Debug
//
#if 1
#endif


//复习题
//4.
#if 0
int main(int argc, char** argv)
{
	double temp[1];
	double sum = 0;
	int count = 0;

	if (argc < 1 || argc>2)
	{
		fprintf(stderr, "输入的项数错误！");
		exit(EXIT_FAILURE);
	}
	else if (argc == 1)
	{
		puts("请输入小数：(输入q以停止)");
		while ((fscanf(stdin, "%lf", temp) == 1))
		{
			sum += *temp;
			count++;
		}
		printf("输入数字的算数平均值是%.3lf", sum / count);
	}
	else
	{
		FILE* fp;

		if ((fp = fopen(argv[1], "r")) == NULL)
		{
			fprintf(stdout, "Can't open %s file.\n", argv[1]);
			exit(EXIT_FAILURE);
		}

		while (fscanf(fp, "%lf", temp) == 1)//或：while(!feof(fp)&&(fscanf(fp, "%lf", temp) == 1))
		{
			sum += *temp;
			count++;
		}
		printf("输入数字的算数平均值是%.3lf", sum / count);

		fclose(fp);
	}
	puts("\n完成！");

	return 0;
}
#endif
//也可以使用fp=stdin;   处理无参数输入的情况


//5.
#if 0
#include<string.h>
int main(int argc, char** argv)
{
	if (argc != 3)
	{
		fprintf(stderr, "输入的项数错误！");
		exit(EXIT_FAILURE);
	}

	FILE* fp;

	if ((fp = fopen(argv[2], "r")) == NULL)
	{
		fprintf(stdout, "Can't open %s file.\n", argv[2]);
		exit(EXIT_FAILURE);
	}

	char temp[80];

	puts("包含该字符的行：");

	while ((fgets(temp, 80, fp) != NULL))//fgets()一行一行读入，因为是行缓冲。
	{
		if (strchr(temp, *argv[1]) != NULL)//注：strchr()第二个参数是整型值，所以必须加*号
			fputs(temp, stdout);
	}
	//法二：(不使用strchr)
	//while ((fgets(temp, 80, fp) != NULL))
	//{
	//	char* p = temp;
	//	while (*p != '\0')
	//	{
	//		if (*p++ == *argv[1])
	//		{
	//			fputs(temp, stdout);
	//			break;//该行只打印一次
	//		}
	//	}
	//}

	fclose(fp);

	puts("完成！");

	return 0;
}//测试：Project1.exe y 13.10.5.txt
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
//若要命令行运行，文件路径在：D:\CODE\C_CODE\C Primer Plus Code practice\chapter 13\code3\Project1\x64\Debug
//
#if 1
#endif


//13.11编程练习
//1.
#if 0
char* s_gets(char* string, int n);
int main(void)
{
	puts("请输入要打开的文件名：");
	char wenjianmin[80];
	s_gets(wenjianmin, 80);

	FILE* fp;
	if ((fp = fopen(wenjianmin, "r")) == NULL)
	{
		printf("打开%s文件失败\n", wenjianmin);
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
#define BUFSIZE 4096//缓冲区大小
#define LEN 81//文件名最大长度
void kaobei(FILE* source, FILE* destination);//拷贝函数

int main(int argc, char** argv)
{
	FILE* fpsource, * fptarget;//指向源文件  指向目标文件

	if (argc != 3)
	{
		printf("输入项数错误！\n");
		exit(EXIT_FAILURE);
	}

	if ((fptarget = fopen(argv[2], "wb")) == NULL)//拷贝到的目标文件
	{
		fprintf(stderr, "未能打开目标文件：%s\n", argv[2]);
		exit(EXIT_FAILURE);
	}
	if (setvbuf(fptarget, NULL, _IOFBF, BUFSIZE) != 0)//创建一个输出缓冲区
	{
		fprintf(stderr, "未能创建%s的输出缓冲区\n", argv[2]);
		exit(EXIT_FAILURE);
	}

	if (strcmp(argv[1], argv[2]) == 0)
		fputs("不能拷贝文件内容至其本身\n", stderr);


	if ((fpsource = fopen(argv[1], "rb")) == NULL)//获取源文件
	{
		fprintf(stderr, "未能打开源文件：%s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	if (setvbuf(fpsource, NULL, _IOFBF, BUFSIZE) != 0)//创建一个输入缓冲区
	{
		fprintf(stderr, "未能创建%s的输入缓冲区\n", argv[1]);
		exit(EXIT_FAILURE);
	}

	kaobei(fptarget, fpsource);

	if (ferror(fptarget) != 0)
		fprintf(stderr, "写文件%s错误\n", fptarget);
	if (ferror(fpsource) != 0)
		fprintf(stderr, "读源文件%s错误\n", fpsource);

	printf("文件%s内容已拷贝到%s\n", argv[1], argv[2]);

	fclose(fpsource);
	fclose(fptarget);

	return 0;
}
void kaobei(FILE* target, FILE* source)
{
	size_t bytes;
	static char temp[BUFSIZE];

	while ((bytes = fread(temp, sizeof(char), BUFSIZE, source)) > 0)
		//待读取文件数据拷贝进内存中的地址，待读数据块的大小，待读数据块数量，待读取的文件
		fwrite(temp, sizeof(char), bytes, target);
	//待写入的文件数据所在的内存中的地址，待写数据块的大小，待写数据块数量，待写入的文件
}
//命令行：Project1.exe 13.11.2(1).txt 13.11.2(2).txt
#endif


//3.
#if 0
#include <ctype.h>
#define BUFSIZE 4096//缓冲区大小
#define LEN 81//文件名最大长度
void kaobei(FILE* source, FILE* destination);
char* s_gets(char* string, int n);//输入函数

int main(void)
{
	FILE* fpsource, * fptarget;//指向源文件  指向目标文件
	int files = 0;//附加文件数量计数

	char file_target[LEN];
	char file_source[LEN];

	puts("请输入待处理的目标文件名：");
	s_gets(file_target, LEN);
	if ((fptarget = fopen(file_target, "w")) == NULL)//写目标文件
	{
		fprintf(stderr, "未能打开目标文件：%s\n", file_target);
		exit(EXIT_FAILURE);
	}

	puts("请输入要被拷贝内容的第一个源文件名：(输入空行以结束)");
	while (s_gets(file_source, LEN) && file_source[0] != '\0')//输入空行，s_gets()会把\n转化成\0
	{
		if (strcmp(file_source, file_target) == 0)
			fputs("不能拷贝文件内容至其本身\n", stderr);
		else if ((fpsource = fopen(file_source, "r")) == NULL)//读源文件
			fprintf(stderr, "未能打开源文件：%s\n", file_source);
		else
		{
			kaobei(fptarget, fpsource);

			if (ferror(fptarget) != 0)
				fprintf(stderr, "写文件%s错误\n", fptarget);
			if (ferror(fpsource) != 0)
				fprintf(stderr, "读源文件%s错误\n", fpsource);
			fclose(fpsource);
			files++;
			printf("文件%s内容已拷贝到%s\n", file_source, file_target);

			puts("请输入要被拷贝内容的下一个源文件名：(输入空行以结束)");
		}
	}
	printf("操作完成！%d个文件的内容已转化为大写后拷贝到%s", files, file_target);

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
//命令行：输入Project1.exe和13.11.3(2).txt和13.11.3(1).txt								//注：不使用命令行则无法完成此程序的功能
#endif
//3.题目要求是在原文件上完成对内容的修改，最终效果要体现在原文件上
//法一：读入原文件，对每个字符进行处理，保存至一个临时文件中，最后将其内容复制再覆盖到原文件。
#if 0
#include <ctype.h>
#define BUFSIZE 4096//缓冲区大小
#define LEN 81//文件名最大长度
void kaobei(FILE* source, FILE* destination);
char* s_gets(char* string, int n);//输入函数

int main(void)
{
	FILE* fp1, * fp2;

	char file1[LEN];

	puts("请输入待处理的目标文件名：");
	s_gets(file1, LEN);

	//法一：打开，关闭文件两次
#if 0
	if ((fp1 = fopen(file1, "r+")) == NULL)//读或写目标文件
	{
		fprintf(stderr, "未能打开目标文件：%s\n", file1);
		exit(EXIT_FAILURE);
	}

	if ((fp2 = fopen("13.11.3(2).txt", "r+")) == NULL)//读或写临时文件
	{
		fprintf(stderr, "未能打开临时文件：%s\n", "13.11.3(2).txt");
		exit(EXIT_FAILURE);
	}

	kaobei(fp1, fp2);
	if (fclose(fp1) != 0 || fclose(fp2) != 0)
		fprintf(stderr, "Error in closing files\n");


	if ((fp1 = fopen(file1, "r+")) == NULL)//读或写目标文件
	{
		fprintf(stderr, "未能打开目标文件：%s\n", file1);
		exit(EXIT_FAILURE);
	}

	if ((fp2 = fopen("13.11.3(2).txt", "r+")) == NULL)//读或写临时文件
	{
		fprintf(stderr, "未能打开临时文件：%s\n", "13.11.3(2).txt");
		exit(EXIT_FAILURE);
	}
	kaobei(fp2, fp1);
#endif

	//法二：写入文件后用rewind()
#if 1
	if ((fp1 = fopen(file1, "r+")) == NULL)//读或写目标文件
	{
		fprintf(stderr, "未能打开目标文件：%s\n", file1);
		exit(EXIT_FAILURE);
	}

	if ((fp2 = fopen("13.11.3(2).txt", "r+")) == NULL)//读或写临时文件
	{
		fprintf(stderr, "未能打开临时文件：%s\n", "13.11.3(2).txt");
		exit(EXIT_FAILURE);
	}

	kaobei(fp1, fp2);
	rewind(fp1);
	rewind(fp2);
	kaobei(fp2, fp1);
#endif

	printf("操作完成！\n");

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
//示例文本：Take a leap. Take a chance.
//命令行：Project1.exe
//13.11.3(1).txt
#endif
//法二：利用随机读写功能fseek()函数，读写一个字符，然后转换字符并将文件指针回退一个字符，再将转换后的字符写入文件，每次覆盖一个原字符
#if 0
#include <ctype.h>
#define LEN 81//文件名最大长度
char* s_gets(char* string, int n);//输入函数

int main(void)
{
	FILE* fp1;

	char file1[LEN];

	puts("请输入待处理的目标文件名：");
	s_gets(file1, LEN);

	if ((fp1 = fopen(file1, "r+")) == NULL)//读或写目标文件
	{
		fprintf(stderr, "未能打开目标文件：%s\n", file1);
		exit(EXIT_FAILURE);
	}


	char ch;
	while ((ch = getc(fp1)) != EOF)//读取文件中的原字符，存入ch，**文件内的光标后移一位字符**
	{
		//强制类型转换
		fseek(fp1, -(long)sizeof(char), SEEK_CUR);//光标前移一位字符
		putc(toupper(ch), fp1);//处理好的字符存入光标位置，即覆盖原字符，**文件内的光标后移一位字符**

		//当你使用随机读写的方式来读写文件时。如果此刻您从正在写的方式要切换到读的方式。
		//	就必须使用定位函数重新定位到你要读的地方，不然就得不到理想结果，还会乱码。//https://blog.csdn.net/weixin_44603568/article/details/91349059
		fseek(fp1, 0L, SEEK_CUR);


		/*程序进入死循环就跳出*/
		static int count = 0;
		count++;
		if (count == 99)
			break;
	}


	printf("操作完成！\n");

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
//示例文本：Take a leap. Take a chance.
//命令行：Project1.exe
//13.11.3(1).txt
#endif


//4.
#if 0
#define BUFSIZE 4096//缓冲区大小
#define LEN 81//文件名最大长度

int main(int argc, char** argv)
{
	FILE* fp[5];//定义5个指向FILE的指针

	if (argc < 2)//只输入0或1项时报错
	{
		printf("输入项数错误！\n");
		exit(EXIT_FAILURE);
	}

	for (int i = 0; i < argc - 1; i++)//若输入2项，则有一个文件，argc=2，只需fp[0]即可
		if ((fp[i] = fopen(argv[i + 1], "r")) == NULL)//fp[0]=argv[1]
		{
			fprintf(stderr, "未能打开文件：%s\n", argv[i + 1]);
			exit(EXIT_FAILURE);
		}

	char ch;
	for (int i = 0; i < argc - 1; i++)
	{
		printf("第%d个文件内容：", i + 1);
		while ((ch = getc(fp[i])) != EOF)
			putchar(ch);

		putchar('\n');
	}

	printf("已完成所列文件的显示\n");

	for (int i = 0; i < argc - 1; i++)
		fclose(fp[i]);

	return 0;
}
//命令行：Project1.exe 13.11.4(1).txt 13.11.4(2).txt 13.11.4(3).txt
#endif


//5.
#if 0
#define BUFSIZE 4096//缓冲区大小
#define LEN 81//文件名最大长度

void appendix(FILE* source, FILE* destination);//内容附加函数

int main(int argc, char** argv)
{
	FILE* fptarget;//指向目标文件
	FILE* fpsource[6];//6个用于指向源文件的指针 
	int files = 0;//附加文件数量计数
	int ch;//逐个字符显示

	if (argc < 3)//只输入0或1或2项时报错
	{
		printf("输入项数错误！\n");
		exit(EXIT_FAILURE);
	}

	if ((fptarget = fopen(argv[1], "a+")) == NULL)//读或写目标文件
	{
		fprintf(stderr, "未能打开目标文件：%s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	if (setvbuf(fptarget, NULL, _IOFBF, BUFSIZE) != 0)//创建一个输出缓冲区
	{
		fprintf(stderr, "未能创建%s的输出缓冲区\n", argv[1]);
		exit(EXIT_FAILURE);
	}


	int i = 0;
	while (i < argc - 2)//输入3个参数，则只有1个源文件
	{
		if (strcmp(argv[1], argv[i + 2]) == 0)//检验目标文件是否和源文件名一致
			fputs("不能拷贝文件内容至其本身\n", stderr);
		else if ((fpsource[i] = fopen(argv[i + 2], "r")) == NULL)//读源文件
			fprintf(stderr, "未能打开源文件：%s\n", argv[i + 2]);
		else
		{
			appendix(fptarget, fpsource[i]);

			if (ferror(fptarget) != 0)
				fprintf(stderr, "写文件%s错误\n", fptarget);
			if (ferror(fpsource[i]) != 0)
				fprintf(stderr, "读源文件%s错误\n", fpsource[i]);
			fclose(fpsource[i]);
			files++;
		}
		i++;																				//注：若此处不写i++，上面改成while (i++<argc-2)，则i是以1的值进入循环的
	}																						//造成无法拷贝内容的后果。
	printf("操作完成！%d个文件的内容已附加到%s\n", files, argv[1]);

	rewind(fptarget);
	printf("%s的内容是：\n", argv[1]);
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
		//待读取文件数据拷贝进内存中的地址，待读数据块的大小，待读数据块数量，待读取的文件
		fwrite(temp, sizeof(char), bytes, target);
	//待写入的文件数据所在的内存中的地址，待写数据块的大小，待写数据块数量，待写入的文件
}
//命令行：Project1.exe 13.11.5(1).txt 13.11.5(2).txt 13.11.5(3).txt
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
	puts("请输入要打开的文件名：");
	char wenjianmin[80];
	s_gets(wenjianmin, 80);

	if ((in = fopen(wenjianmin, "r")) == NULL)
	{
		printf("打开%s文件失败\n", wenjianmin);
		exit(EXIT_FAILURE);
	}

	strncpy(name, wenjianmin, LEN - 5);
	name[LEN - 5] = '\0';//保险起见，在字符串的索引LEN-5处加入空字符，文件名较短时，在索引LEN-5前面也会有空字符。
	strcat(name, "-reduced.txt");//注：一般情况下第二个字符串仅会从第一个字符串的第一个空字符处开始覆盖。    red即reduced

	if ((out = fopen(name, "w")) == NULL)//打开第二个文件
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

	puts("压缩完成！");

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
//命令行：Project1.exe 
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

	puts("请输入要打开的第一个文件名：");
	scanf("%80s", file1);
	if ((fp1 = fopen(file1, "r")) == NULL)
	{
		fprintf(stderr, "Can't open %s file.\n", file1);
		exit(EXIT_FAILURE);
	}

	puts("请输入要打开的第二个文件名：");
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
	//	if (fgets(temp, 80, fp2) != NULL);													//有瑕疵，若第一个文件行数少于第二个，则第二个文件内容不能打印完
	//	fputs(temp, stdout);
	//}
	char temp1[80];
	char temp2[80];
	int a, b;
	a = b = 1;
	//while ((a=fgets(temp1, 80, fp1)) != NULL|| (b=fgets(temp2, 80, fp2) )!= NULL)//错误：若前者为真，则不对后者进行计算。

	while (a || b)
	{
		a = fgets(temp1, 80, fp1);//一行一行读入
		if (a)//a为EOF时，不执行打印
			fputs(temp1, stdout);


		b = fgets(temp2, 80, fp2);
		if (b)//b为EOF时，不执行打印
			fputs(temp2, stdout);
	}


	if (fclose(fp1) != 0 || fclose(fp2) != 0)
		fprintf(stderr, "Error in closing files\n");

	return 0;
}
//命令行：Project1.exe 
//13.11.7(1).txt
//13.11.7(2).txt
#endif
//法二：
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

	puts("请输入要打开的第一个文件名：");
	scanf("%80s", file1);
	if ((fp1 = fopen(file1, "r")) == NULL)
	{
		fprintf(stderr, "Can't open %s file.\n", file1);
		exit(EXIT_FAILURE);
	}

	puts("请输入要打开的第二个文件名：");
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

		if (a && b)//若文件1和2的行读入都不为EOF
		{
			if (find = strchr(temp1, '\n'))//找文件1的某一行后的换行符，并使其替换成空字符
				*find = '\0';

			strcat(temp1, temp2);
			fputs(temp1, stdout);
		}
		else if (a)//若文件1不为EOF
			fputs(temp1, stdout);
		else if (b)//若文件2不为EOF
			fputs(temp2, stdout);
	}

	if (fclose(fp1) != 0 || fclose(fp2) != 0)
		fprintf(stderr, "Error in closing files\n");

	return 0;
}
//命令行：Project1.exe 
//13.11.7(1).txt
//13.11.7(2).txt
#endif
//法二
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
		fprintf(stderr, "错误的输入项！");
		exit(EXIT_FAILURE);
	}
	if (strlen(argv[1]) != 1)
	{
		fprintf(stderr, "只能查找一个字符！");
		exit(EXIT_FAILURE);
	}

	char* find;
	int count = 0;

	if (argc == 2)
	{
		printf("请输入字符串：");
		char words[41];
		fscanf(stdin, "%40s", words);

		find = words;

		while (find < words + strlen(words))
		{
			if (*find == *argv[1])
				count++;
			find++;
		}
		fprintf(stdout, "字符%s共出现了%d次。", argv[1], count);
	}

	if (argc > 2)
	{
		FILE* fp[5];//定义5个指向FILE的指针

		for (int i = 0; i < argc - 2; i++)//若输入3项，则有一个文件，argc=3，只需fp[0]即可
			if ((fp[i] = fopen(argv[i + 2], "r")) == NULL)//fp[0]=argv[2]
			{
				fprintf(stderr, "未能打开文件：%s\n", argv[i + 2]);
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
			printf("字符%s在文件%s中共出现了%d次。", argv[1], argv[i + 2], count);
			count = 0;
			putchar('\n');
		}
		for (int i = 0; i < argc - 2; i++)
			fclose(fp[i]);
	}

	return 0;
}
//命令行：Project1.exe 
//13.11.8(1).txt
//13.11.8(2).txt
#endif
//读取标准输入，并判断字符与给定字符相同的次数
//法二：不一定要创建二维数组来存储输入的字符，直接在输入时逐个字符判断也可行。
#if 0
printf("请输入字符串：");
while ((ch = getchar()) != EOF)
{
	if (ch == argv[1][0])
		count++;
}
#endif


//9.单词编号
#if 0
#define MAX 41
int main(void)
{
	FILE* fp;
	char temp[MAX];
	char words[MAX];

	if ((fp = fopen("13.11.9.txt", "a+")) == NULL)//读和写
	{
		fprintf(stderr, "Can't open \"13.11.9.txt\" file.\n");
		exit(EXIT_FAILURE);
	}

	int count = 0;

	rewind(fp);//若无此语句，则程序运行时效果不佳。		//*****************注：若fopen模式为r+，则不用写此语句。*****************
	while ((fscanf(fp, "%40s", temp) == 1))//scanf执行了几次，就证明文件中已有几个单词。
		count++;


	puts("请输入要存入文件的内容：(在新行按#以结束输入)");
	while ((fscanf(stdin, "%40s", words) == 1) && (words[0] != '#'))
	{
		count++;
		fprintf(fp, "%d.", count);
		fprintf(fp, "%s\n", words);
	}

	puts("文件的内容是：");
	rewind(fp);
	while (fscanf(fp, "%s", words) == 1)
		puts(words);
	puts("Done !");

	if (fclose(fp) != 0)
		fprintf(stderr, "关闭文件失败！\n");

	return 0;
}
//命令行：Project1.exe 
#endif
//法二：使用fgets()来确定原文件中的行数
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

	printf("请输入您要打开的文件名：");
	scanf("%s", name);

	if ((fp = fopen(name, "rb")) == NULL)//读文件						//此处用文本模式还是二进制模式读文件内容，
	{																									//文本的一行可见字符后还有两个位置，是\r\n
		fprintf(stderr, "未能打开目标文件：%s\n", name);
		exit(EXIT_FAILURE);
	}

	printf("请输入一个文件位置：");
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
		//while ((fgets(temp, 80, fp) != NULL))//读入该文件位置所在的行，行缓冲。但是无法设置遇到\n停止读入。
		//但是可以把上句改为if即可完成程序功能
		/*if (fgets(temp, 80, fp) != NULL)
			printf("%s",temp);*/

		printf("\n请输入一个文件位置(输入负数或非数字字符可退出程序)：");
	}

	rewind(fp);
	fclose(fp);

	return 0;
}
//命令行：Project1.exe
//13.11.10.txt
#endif


//11.
#if 0
char* string_in(char* string1, char* string2);

int main(int argc, char** argv)
{
	if (argc != 3)//程序名，字符串，文件名
	{
		printf("输入项数错误！\n");
		exit(EXIT_FAILURE);
	}
	FILE* fp;
	if ((fp = fopen(argv[2], "r")) == NULL)
	{
		printf("打开%s文件失败\n", argv[2]);
		exit(EXIT_FAILURE);
	}

	char temp[80];
	puts("包含该字符的行：");
	while ((fgets(temp, 80, fp) != NULL))//fgets()一行一行读入，因为是行缓冲。
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

	int count = 0;//匹配度计数
	int length = strlen(string2);

	while (count < length && *string1 != '\0')//若匹配未完成，且没有轮到string1的末尾字符后的第一个位置。
	{
		if (*(string1 + count) == *(string2 + count))//若s1和s2的第一个字符匹配，则计数值加一。
			count++;
		else
		{
			count = 0;
			string1++;//若不匹配，则轮到s1的第二个字符与s2的第一个字符检测。
		}
	}
	if (count == length)
		return string1;//返回主串中子串的首地址。

	else
		return NULL;
}
//命令行：Project1.exe a 13.11.11.txt
#endif
//法二：使用strstr()
#if 0
int main(int argc, char** argv)
{
	if (argc != 3)//程序名，字符串，文件名
	{
		printf("输入项数错误！\n");
		exit(EXIT_FAILURE);
	}
	FILE* fp;
	if ((fp = fopen(argv[2], "r")) == NULL)
	{
		printf("打开%s文件失败\n", argv[2]);
		exit(EXIT_FAILURE);
	}

	char temp[80];
	puts("包含该字符的行：");
	while ((fgets(temp, 80, fp) != NULL))//fgets()一行一行读入，因为是行缓冲。
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

	if ((fp = fopen("13.11.12(1).txt", "rb")) == NULL)//读模式（二进制模式打开文件）
	{
		fprintf(stderr, "未能打开文件(此文件用于读出数据)：%s\n", "13.11.12(1).txt");
		exit(EXIT_FAILURE);
	}

	//用fscanf()读取字符，存为整型数据，不读取空格和换行符。
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLUMNS; j++)
			fscanf(fp, "%d", &number[i][j]);
	}

	puts("读取到如下数据：");
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLUMNS; j++)
			printf("%d", number[i][j]);
		putchar('\n');
	}

	fclose(fp);

	puts("根据以上描述选择特定的输出字符，最终输出如下：");

	//创建一个临时二维数组存转换好的字符数据
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
																					//*************************************注**********************************************
	//或：																		//	char shuchu[ROWS][COLUMNS+1] ;不能写成int shuchu[ROWS][COLUMNS+1] ;
	for (int i = 0; i < ROWS; i++)								//否则转换说明%s只能打印数组的首个元素。					
		fprintf(stdout, "%s\n", shuchu[i]);


	FILE* out;
	if ((out = fopen("13.11.12(2).txt", "wb")) == NULL)//写模式（二进制模式打开文件）
	{
		fprintf(stderr, "未能打开文件：%s\n", "13.11.12(2).txt");
		exit(EXIT_FAILURE);
	}


	//for (int i = 0; i < ROWS; i++)
	//{
	//	for (int j = 0; j < COLUMNS + 1; j++)
	//		fprintf(out,"%c", shuchu[i][j]);
	//	putc('\n',out);
	//}
	//或
	for (int i = 0; i < ROWS; i++)
		fprintf(out, "%s\n", shuchu[i]);


	puts("最终输出内容已存入13.11.12(2).txt");

	fclose(out);

	return 0;
}
//命令行：Project1.exe 
#endif
//法二：通过查找一维字符数组的下标和元素值来实现整数到符号的转换
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
//法三：利用宏定义的数组+指针来实现转换数据
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
//法四：不使用二维数组和fscanf()，而用fgets()将字符转换成规定的数据。
#if 0
char line[61];//数字+空格+'\0'=61个char形存储空间
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


//13.用变长数组(VLA)代替标准数组,完成上述程序的功能
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
	// 读取文件中的内容到整型数组
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			//这样做是为了确保fscanf()正确读到1个数,而不受空格和其他字符影响
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


//14.图像抖动优化算法
#if 0
# include <stdio.h>
# include <stdlib.h>
# include <math.h>

# define ROWS 20
# define COLS 30
# define FNAME "no12.txt"
# define FARGS "no12.dat"
# define STR " .':~*=&%#"

void initialize_ar(FILE * fp, int n, int m, int ar[n][m]);//读取文件中的原始字符数据并存入临时二维数组ar中（类型：int）
void reconstruction(int n, int m, int ar[n][m]);//优化算法，处理二维数组ar的值
void set_st(int n, int m, char st[n][m + 1], int ar[n][m]);//临时二维数组ar中的值处理为字符后存入临时二维数组st中（类型：char）

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
	// 读取文件中的内容到整型数组
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			//这样做是为了确保fscanf()正确读到1个数,而不受空格和其他字符影响
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
		for (int j = 0; j < m; j++)//从ar二维数组的第一行第一列开始处理
		{
			l = r = u = d = 1;

			//法二：
			//left = right = up = down = -1 ;
			sum = 0;
			count = 0;

			if (j > 0)
			{
				//left = ar[i][m - 1] ;
				l = abs(ar[i][j] - ar[i][j - 1]) > 1 ? 1 : 0;//abs:绝对值函数
				sum += ar[i][j - 1];
				count++;
			}

			if (j < m - 1)
			{
				r = abs(ar[i][j] - ar[i][j + 1]) > 1 ? 1 : 0;//以第一行第一列为例，其与其右侧的数作差，判断是否大于1
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
				d = abs(ar[i][j] - ar[i + 1][j]) > 1 ? 1 : 0;//以第一行第一列为例，其与其下侧的数作差，判断是否大于1
				sum += ar[i + 1][j];
				count++;
				//down = ar[i + 1][m] ;
			}

			if (l && r && u && d)//若某数与其上下左右的数的差都大于1，则某数要被优化（4条边上的数值不会被优化）
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


//利用结构，创建一本书的图书目录
#if 0
#define MAX_SHUMING 41 //最大书名长度
#define MAX_ZUOZHE 41 //最大作者姓名长度

char* s_gets(char* string, int n);

struct book											//结构声明（也叫创建一个结构模板）	//book是个结构的标记，后面程序可以使用book引用此结构
{															//声明一个标记为book的结构
	char shuming[MAX_SHUMING];
	char zuozhe[MAX_ZUOZHE];
	float value;
};

int main(void)
{
	struct book library;						//声明一个使用book结构布局的结构变量library（把library声明为一个book类型的变量）
	printf("请输入书名：\n");
	s_gets(library.shuming, MAX_SHUMING);//访问shuming数组

	puts("请输入作者姓名：");
	s_gets(library.zuozhe, MAX_ZUOZHE);//访问zuozhe数组

	puts("请输入售价：");
	scanf("%f", &library.value);

	printf("%s:《%s》（￥%.2f）", library.zuozhe, library.shuming, library.value);

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


//利用结构，创建多本书的图书目录
#if 0
#define MAX_SHUMING 41 //最大书名长度
#define MAX_ZUOZHE 41 //最大作者姓名长度
#define MAX_SHULIANG 100//最大书籍数量

char* s_gets(char* string, int n);

struct book												//声明一个标记为book的结构
{
	char shuming[MAX_SHUMING];
	char zuozhe[MAX_ZUOZHE];
	float value;
};

int main(void)
{
	struct book library[MAX_SHULIANG];//声明一个使用book结构布局的结构变量数组library[100]
	int count = 0;
	int index;

	printf("请输入书名(在新行输入^Z或在新行输入[Enter]以结束)：\n");
	while (count < MAX_SHULIANG && s_gets(library[count].shuming, MAX_SHUMING) != NULL && library[count].shuming[0] != '\0')
	{
		puts("请输入作者姓名：");
		s_gets(library[count].zuozhe, MAX_ZUOZHE);

		puts("请输入售价：");
		scanf("%f", &library[count].value);
		while (getchar() != '\n')//消除scanf()执行后缓冲区留下的\n
			continue;

		count++;

		printf("请输入书名(在新行输入^Z或在新行输入[Enter]以结束)：\n");
	}

	printf("以下是图书目录：\n");
	for (index = 0; index < count; index++)
	{
		printf("%s:《%s》（￥%.2f）\n", library[index].zuozhe, library[index].shuming, library[index].value);
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


//使用嵌套结构来表示数据
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
	struct names handle;//嵌套结构，声明一个使用name结构布局的结构变量handle
	char job[LEN];
	char favoriate_food[LEN];
	float income;
};
int main(void)
{
	struct guy fellow =//声明一个使用guy结构布局的结构变量fellow，并对其初始化
	{
		{"Ewen","Villard"},//**************初始化嵌套结构的成员（使用两次花括号）***************
		"personality coach",
		"grilled salmon",
		68112.00
	};

	printf("Dear %s,\n\n", fellow.handle.first);//******访问嵌套结构的成员（使用两次点运算符）***********
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


//使用指向结构的指针和嵌套结构来表示数据
#if 0
#define LEN 20
struct names					//声明一个标记为names的结构
{
	char first[LEN];
	char last[LEN];
};
struct guy
{
	struct names handle;//嵌套结构，声明一个使用names结构布局的结构变量handle
	char job[LEN];
	char favoriate_food[LEN];
	float income;
};
int main(void)
{
	struct guy fellow[2] =//声明一个使用guy结构布局的结构变量数组fellow[2]，并对其初始化
	{
		{//对fellow[0]初始化
		{"Ewen","Villard"},//**************初始化嵌套结构的成员（使用两次花括号）***************
		"personality coach",
		"grilled salmon",
		68112.00
		},

		{//对fellow[1]初始化
		{"Rodney", "Swillbelly"},//**************初始化嵌套结构的成员（使用两次花括号）***************
		"editor",
		"tripe",
		432400.00
		}
	};

	struct guy* him;//声明一个指向guy结构布局的结构的指针him

	printf("结构变量fellow[0]的地址：%p\n结构变量fellow[1]的地址：%p\n\n", &fellow[0], &fellow[1]);

	him = &fellow[0];//结构指针指向fellow[0]结构
	printf("结构指针him的地址：%p\n      him+1的地址：%p\n", him, him + 1);
	printf("him->income：%.2f\n(*him).income:%.2f\n\n", him->income, (*him).income);

	him++;
	printf("结构指针him++的地址：%p\n", him);
	printf("him->favoriate_food：%s\nhim->handle.last:%s\n\n", him->favoriate_food, him->handle.last);

	return 0;
}
#endif


//把结构成员作为实参传递（也可以把结构成员的地址作为实参传递）
#if 0
#define FUNDLEN 50

struct funds//	//声明一个标记为funds的结构
{
	char bank[FUNDLEN];
	double bankfund;
	char save[FUNDLEN];
	double savefund;
};
double sum(double x, double y);//声明一个函数

int main(void)
{
	struct funds zhangsan =//声明一个使用funds结构布局的结构变量zhangsan，并对其初始化
	{
	"Bank of China",
	4023.27,
	"Luck's Savings",
	8543.94
	};

	printf("张三总共有%.2f块钱\n", sum(zhangsan.bankfund, zhangsan.savefund));

	return 0;
}
double sum(double x, double y)
{
	return (x + y);
}
#endif


//把结构的地址作为实参传递
#if 0
#define FUNDLEN 50

struct funds//	//声明一个标记为funds的结构
{
	char bank[FUNDLEN];
	double bankfund;
	char save[FUNDLEN];
	double savefund;
};
double sum(const struct funds* money);//声明一个函数，形参是一个指向funds结构布局的结构的指针money

int main(void)
{
	struct funds zhangsan =//声明一个使用funds结构布局的结构变量zhangsan，并对其初始化
	{
	"Bank of China",
	4023.27,
	"Luck's Savings",
	8543.94
	};

	printf("张三总共有%.2f块钱\n", sum(&zhangsan));

	return 0;
}
double sum(const struct funds* money)
{
	return (money->bankfund + (*money).savefund);
}
#endif


//把结构作为实参传递
#if 0
#define FUNDLEN 50

struct funds//	//声明一个标记为funds的结构
{
	char bank[FUNDLEN];
	double bankfund;
	char save[FUNDLEN];
	double savefund;
};
double sum(const struct funds money);//声明一个函数，形参是一个使用funds结构布局的结构变量money

int main(void)
{
	struct funds zhangsan =//声明一个使用funds结构布局的结构变量zhangsan，并对其初始化
	{
	"Bank of China",
	4023.27,
	"Luck's Savings",
	8543.94
	};

	printf("张三总共有%.2f块钱\n", sum(zhangsan));//向money结构变量的成员拷贝zhangsan结构变量的成员的值

	return 0;
}
double sum(const struct funds money)
{
	return (money.bankfund + money.savefund);
}
#endif


//使用结构指针进行函数间双向通信
#if 0
#define LEN 30
struct names					//声明一个标记为names的结构
{
	char first[LEN];
	char last[LEN];
	int letters;
};

void getinfo(struct names*);//声明一个函数，形参是一个指向names结构布局的结构指针
void makeinfo(struct names*);
void showinfo(const struct names*);
char* s_gets(char* string, int n);

int main(void)
{
	struct names person;//声明一个使用names结构布局的结构变量person

	getinfo(&person);//对结构变量person的成员赋值
	makeinfo(&person);
	showinfo(&person);

	return 0;
}
void getinfo(struct names* p)
{
	puts("请输入你的姓");
	s_gets(p->first, LEN);
	puts("请输入你的名");
	s_gets(p->last, LEN);
}
void makeinfo(struct names* p)
{
	p->letters = strlen(p->first) + strlen(p->last);
}
void showinfo(const struct names* p)
{
	printf("%s %s,你的名字占%d个字节\n", p->first, p->last, p->letters);
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


//使用结构参数和返回值进行函数间双向通信
#if 0
#define LEN 30
struct names					//声明一个标记为names的结构
{
	char first[LEN];
	char last[LEN];
	int letters;
};

struct names getinfo(void);//声明一个函数，返回值是使用names结构布局的结构变量，形参无
struct names makeinfo(struct names);
void showinfo(struct names);
char* s_gets(char* string, int n);

int main(void)
{
	struct names person;//声明一个使用names结构布局的结构变量person

	person = getinfo();//把一个结构赋值给另一个结构
	person = makeinfo(person);
	showinfo(person);

	return 0;
}
struct names getinfo(void)
{
	struct names temp;
	puts("请输入你的姓");
	s_gets(temp.first, LEN);
	puts("请输入你的名");
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
	printf("%s %s,你的名字占%d个字节\n", p.first, p.last, p.letters);
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


//使用指向char的指针来代替字符数组
#if 0
#define LEN 30
struct names					//声明一个标记为names的结构
{
	char* first;//使用指针来代替字符数组
	char* last;
	int letters;
};

void getinfo(struct names*);//声明一个函数，形参是一个指向names结构布局的结构指针
void makeinfo(struct names*);
void showinfo(const struct names*);
void cleanup(struct names*);
char* s_gets(char* string, int n);

int main(void)
{
	struct names person;//声明一个使用names结构布局的结构变量person

	getinfo(&person);//对结构变量person的成员赋值
	makeinfo(&person);
	showinfo(&person);
	cleanup(&person);

	return 0;
}
void getinfo(struct names* p)
{
	char temp[LEN];
	puts("请输入你的姓");
	s_gets(temp, LEN);//数据暂存入temp数组
	p->first = (char*)malloc(strlen(temp) + 1);//first指针指向分配到的内存，这样就不会造成s_gets(p->first, LEN);
	strcpy(p->first, temp);																			//导致数据被存在任何可能造成程序崩溃的地方。

	puts("请输入你的名");
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
	printf("%s %s,你的名字占%d个字节\n", p->first, p->last, p->letters);
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


//使用代表结构内容的复合字面量
#if 0
#define MAX_SHUMING 41 //最大书名长度
#define MAX_ZUOZHE 41 //最大作者姓名长度

char* s_gets(char* string, int n);

struct book											//结构声明（也叫创建一个结构模板）	//book是个结构的标记，后面程序可以使用book引用此结构
{															//声明一个标记为book的结构
	char shuming[MAX_SHUMING];
	char zuozhe[MAX_ZUOZHE];
	float value;
};

int main(void)
{
	struct book library;						//声明一个使用book结构布局的结构变量library（把library声明为一个book类型的变量）

	puts("请输入考试分数：");
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

	printf("你应该读的书是%s:《%s》（￥%.2f）", library.zuozhe, library.shuming, library.value);

	return 0;
}
#endif


//使用伸缩型数组成员
#if 0
struct flex
{
	size_t count;
	double average;
	double scores[];
};
void showflex(const struct flex* p);//形参：一个指向flex结构布局的结构的指针p

int main(void)
{
	struct flex* p1;
	int n = 5;
	int i;
	int total = 0;

	p1 = malloc(sizeof(struct flex) + n * sizeof(double));//为常规内容和伸缩型数组成员分配所需的内存空间

	p1->count = n;
	for (i = 0; i < n; i++)
	{
		p1->scores[i] = 20.0 - i;//为5个数组元素赋值
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


//使用结构数组进行函数间双向通信（本质上还是把结构的地址作为实参传递）
#if 0
#define FUNDLEN 50

struct funds//	//声明一个标记为funds的结构
{
	char bank[FUNDLEN];
	double bankfund;
	char save[FUNDLEN];
	double savefund;
};
double sum(const struct funds* money, int n);//声明一个函数，形参是一个使用funds结构布局的结构指针money

int main(void)
{
	struct funds zhangsan[2] =//声明一个使用funds结构布局的结构变量zhangsan，并对其初始化
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
	printf("张三总共有%.2f块钱\n", sum(zhangsan, 2));//*******************【拷贝】给函数zhangsan这个结构   ╳    *******************
																					  //正确理解：传递的是zhangsan数组的地址，即该数组首元素的地址&zhangsan[0]
	return 0;																	  //对比第320行。结构变量名不是结构的地址。但此处是zhangsan是个结构数组，
}																					  //*********因此zhangsan是数组地址也是结构地址，传递的是结构地址**********
double sum(const struct funds* money, int n)
{												//money指向zhangsan[0]，存储&zhangsan[0]
	double total;
	int i;
	for (i = 0, total = 0; i < n; i++)
	{
		total += money[i].bankfund + (*(money + i)).savefund;//money[i]相当于*(money+i)
	}																									    //money[0]就是zhangsan[0]结构变量
	return total;																				    //money[1]就是zhangsan[1]结构变量
}
#endif


//在文件中保存结构中的内容
#if 0
#define MAX_SHUMING 41 //最大书名长度
#define MAX_ZUOZHE 41 //最大作者姓名长度
#define MAX_SHULIANG 100//最大书籍数量

char* s_gets(char* string, int n);

struct book												//声明一个标记为book的结构
{
	char shuming[MAX_SHUMING];
	char zuozhe[MAX_ZUOZHE];
	float value;
};

int main(void)
{
	struct book library[MAX_SHULIANG];//声明一个使用book结构布局的结构变量数组library[100]
	int count = 0;

	//打开文件，并计算文件中原有的图书数量
	FILE* fp;
	if ((fp = fopen("book_data.txt", "a+b")) == NULL)
	{
		fputs("打开文件失败！", stderr);
		exit(EXIT_FAILURE);
	}
	//二进制模式下的
	rewind(fp);											//待读取文件数据拷贝进内存中的地址，待读数据块的大小，待读数据块数量，待读取的文件
	while (count < MAX_SHULIANG && fread(&library[count], sizeof(struct book), 1, fp) == 1)
	{
		if (count == 0)
			puts("当前文件中含有的图书信息如下：");

		printf("%s:《%s》（￥%.2f）\n", library[count].zuozhe, library[count].shuming, library[count].value);
		count++;
	}

	//保存文件中图书数量的值        (注：此处count的值是文件中图书数量的值，因为count从0开始递增)
	int filecount = count;				//      (count值能赋给filecount，两者都能在后面程序中成为索引值)

	//判断文件中图书数量是否大于了100本
	if (filecount == MAX_SHULIANG)
	{
		fprintf(stderr, "book_data.txt已满！");
		exit(EXIT_FAILURE);
	}

	//文件中图书数量没到100本
	printf("请输入书名(在新行输入^Z或在新行输入[Enter]以结束)：\n");
	while (count < MAX_SHULIANG && s_gets(library[count].shuming, MAX_SHUMING) != NULL && library[count].shuming[0] != '\0')
	{
		puts("请输入作者姓名：");
		s_gets(library[count].zuozhe, MAX_ZUOZHE);

		puts("请输入售价：");
		scanf("%f", &library[count].value);
		while (getchar() != '\n')//消除scanf()执行后缓冲区留下的\n
			continue;

		count++;

		if (count < MAX_SHULIANG)
			printf("请输入书名(在新行输入^Z或在新行输入[Enter]以结束)：\n");
	}

	//显示添加的图书，并把新加的图书也保存在文件中
	printf("以下是图书目录：\n");
	for (int index = 0; index < count; index++)
	{
		printf("%s:《%s》（￥%.2f）\n", library[index].zuozhe, library[index].shuming, library[index].value);
	}
	//待写入的文件数据所在的内存中的地址，待写数据块的大小，待写数据块数量，待写入的文件
	fwrite(&library[filecount], sizeof(struct book), count - filecount, fp);
	//count-filecount得出新添加的图书数量
	puts("存入文件已完成！");
	fclose(fp);                                                      //************************注意*************************************
																		   //若写成fclose("fp");则程序不会把数据存入文件，还难以排查错误！！！
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
//命令行运行程序：D:\CODE\C_CODE\C Primer Plus Code practice\chapter 14\code1\Project1\x64\Debug
//Project1.exe

//*****注*******此程序的操作的文件不管fopen()是文本模式还是二进制模式，用文件编辑器看是乱码
#endif


//使用枚举类型来提高程序的可读性
#if 0
#define LEN 30
char* s_gets(char* string, int n);

enum spectrum { red, orange, yellow, green, blue, violet };//声明一个标记为spectrum的枚举类型

//const char ** colors = { "red","orange","yellow","green","blue","violet" };												//**********这样写不行**********
const char* colors[6] = { "red","orange","yellow","green","blue","violet" };//用于和输入内容比较

int main(void)
{
	enum spectrum color;//声明一个使用spectrum枚举布局的枚举变量color

	char choice[LEN];
	int biaoji = 0;//标记输入内容是否与给定的字符串内容相同
	puts("请用英文输入一种颜色(在空行按下[Enter]以退出)：");
	while (s_gets(choice, LEN) != NULL && choice[0] != '\0')
	{
		for (color = red; color <= violet; color++)//for (color =0; color <= 5; color++)
		{
			if (strcmp(choice, colors[color]) == 0)
				biaoji = 1;
			break;
		}

		if (biaoji)//输入内容与给定的字符串内容相同
		{
			switch (color)//枚举变量color，此处用法与整数变量相同
			{
			case red://枚举常量(枚举符)是int类型的常量，red代表0
				puts("玫瑰是红色的");
				break;
			case orange:
				puts("马缨丹是橙色的");
			case yellow:
				puts("葵花是黄色的");
			case green:
				puts("草是绿色的");
			case blue:
				puts("风信子是蓝色的");
			case violet:
				puts("紫罗兰是紫色的");
			}
		}
		else
			printf("我不知道什么植物的颜色是%s\n", choice);

		biaoji = 0;
		puts("请用英文输入一种颜色(在空行按下[Enter]以退出)：");
	}
	puts("再见！");

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


//使用typedef提高程序的可读性
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


//使用函数指针
#if 0
#define LEN 81
char* s_gets(char* string, int n);
char showmenu(void);
void eatline(void);																		//清理输入缓冲区
void show(void (*function_p)(char*), char* string);//选择的函数和待处理的内容
void Toupper(char*);
void Tolower(char*);
void Transpose(char*);
void Original(char*);

int main(void)
{
	char yuanshuju[LEN];
	char daichuli[LEN];

	void (*function_p)(char*);//声明一个函数指针，指向的函数形参是char*，返回值是void
	char choice;

	puts("请输入一个字符串（在空行输入[Enter]以退出程序）：");
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
				puts("出现错误！");
				exit(1);
			}
			strcpy(daichuli, yuanshuju);
			show(function_p, daichuli);
		}

		puts("请输入一个字符串（在空行输入[Enter]以退出程序）：");
	}
	puts("再见！");

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
	puts("请输入您选择的菜单上的功能：");
	puts("u) 转换成大写	l)转换成小写");
	puts("t) 大小写转置	o)原始字符串");
	puts("n)处理下一条字符串");

	answer = getchar();
	answer = tolower(answer);//使用C库的tolower()

	eatline();
	while (strchr("ulton", answer) == NULL)
	{
		puts("请输入u、l、t、o或n");
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
		*string = tolower(*string);*/  //错误！
		if (islower(*string))
			*string = toupper(*string);
		else
			*string = tolower(*string);		//二选一用if...else
		string++;
	}
}
void Original(char* string)
{
}
void show(void (*function_p)(char*), char* string)
{
	(*function_p)(string);//把用户选定的函数作用于字符串
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


//复习题
//3-5.
#if 0
typedef struct //月份					//声明一个省略了标记的结构，并用YUEFEN类型名来命名该结构类型
{
	char yuefen_min[10];
	char min_suoxie[4];//三个字母加一个空字符
	int yuefen_tianshu;
	int yuefen_hao;//月份号
} YUEFEN;

YUEFEN yinian[12] =			  //声明一个使用YUEFEN结构布局的结构数组yinian[12]
{
	{
		"January",
		"Jan",//一月写为January，可缩写为Jan。二月写为February，可缩写为Feb。三月写为March，可缩写为Mar。四月写为April，可缩写为Apr。五月写为May，没有缩略形式。六月写为June，可缩写为Jun。
		31,	////七月写为July，可缩写为Jul。八月写为August，可缩写为Aug。九月写为September，可缩写为Sept。十月写为October，可缩写为Oct。十一月写为November，可缩写为Nov。12月写为December，可缩写为Dec。
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
int jisuantianshu(YUEFEN* yuefen, int yuefenhao);//计算一年中到该月的天数

int main(void)
{
	int yuefenhao;
	puts("请输入您选择的月份号：");

	scanf("%d", &yuefenhao);
	int tianshu = jisuantianshu(yinian, yuefenhao);
	printf("一年中到该月的天数是：%d\n", tianshu);

	return 0;
}
int jisuantianshu(YUEFEN* yuefen, int yuefenhao)
{
	int sum = 0;

	for (int i = 0; i < yuefenhao - 1; i++)//索引值i为0 时，操作的是1月份
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
	//******************************注**************************************
//lens_shuzu[2] =					//这样不行，P243：除初始化外，不允许使用花括号的形式给数组赋值
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
//6.a.改正（题目要求是单独给成员赋值而不是初始化）
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
	//lens_shuzu[2].brand = {"Remarkata"};//无效
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

	printf("\n完成！\n");

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
	char* p1 = pt->name.fname;//赋值为数组首元素的地址
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
	printf("名和姓共有字母%d个\n", count);

	return 0;
}
#endif
//或：strlen(willie.name.fname)+strlen(willie.name.lname);


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
//法二：a.方法：传入结构   b.方法：传入结构指针


//11.
#if 0
enum choices { no, yes, maybe };   //中间不用'='号
#endif


//12.
#if 0
char* (*function_p)(char* p, char ch);
#endif


//13.
#if 0
//double(       (*function_p)   [4]     )(double a,double b);																		//报错：不允许使用函数数组
double(*function_p1)(double a, double b);
double(*function_p2)(double a, double b);
double(*function_p3)(double a, double b);
double(*function_p4)(double a, double b);

double(*function_p[4])(double a, double b);//声明4个函数指针

int main(void)
{
	function_p[0] = function_p1;
	function_p[1] = function_p2;
	function_p[2] = function_p3;
	function_p[3] = function_p4;

	function_p[1](10.0, 2.5);							//法一
	(*function_p[1])(10.0, 2.5);						//法二

	//*(function_p + 1)(10.0,2.5);//错误
	(*(function_p + 1))(10.0, 2.5);				//法二的另一种写法
}
double(*function_p1)(double a, double b);
double(*function_p2)(double a, double b)
{
	printf("%.2lf", a + b);
}
double(*function_p3)(double a, double b);
double(*function_p4)(double a, double b);
#endif
//***********************************************注************************************************************************************
//错误：在没有函数名时就用函数指针的形式声明函数

#if 1
//double(       (*function_p)   [4]     )(double a,double b);																		//报错：不允许使用函数数组
double function1(double a, double b);
double function2(double a, double b);
double function3(double a, double b);
double function4(double a, double b);

double(*function_p[4])(double a, double b);//声明1个函数指针数组，其中的每个元素都是指向函数的指针

//法二：直接初始化函数指针数组
//double(*function_p[4])(double a, double b) = { function_p1,function_p2 ,function_p3,function_p4 };
//法三：用typedef+初始化函数指针数组
//typedef double(*ptype)(double a, double b);
//ptype function_p[4]= { function_p1,function_p2 ,function_p3,function_p4 };

int main(void)
{
	//法一：在主函数中对元素赋值
	function_p[0] = function1;
	function_p[1] = function2;
	function_p[2] = function3;
	function_p[3] = function4;

	function_p[1](10.0, 2.5);							//调用函数法一
	(*function_p[1])(10.0, 2.5);						//调用函数法二

	//*(function_p + 1)(10.0,2.5);//错误
	(*(function_p + 1))(10.0, 2.5);				//调用函数法二的另一种写法
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


//编程练习
//1.
#if 0
typedef struct //月份					//声明一个省略了标记的结构，并用YUEFEN类型名来命名该结构类型
{
	char yuefen_min[10];
	char min_suoxie[4];
	int yuefen_tianshu;
	int yuefen_hao;//月份号
} YUEFEN;

YUEFEN yinian[12] =			  //声明一个使用YUEFEN结构布局的结构数组yinian[12]
{
	{
		"January",
		"Jan",//一月写为January，可缩写为Jan。二月写为February，可缩写为Feb。三月写为March，可缩写为Mar。四月写为April，可缩写为Apr。五月写为May，没有缩略形式。六月写为June，可缩写为Jun。
		31,	////七月写为July，可缩写为Jul。八月写为August，可缩写为Aug。九月写为September，可缩写为Sept。十月写为October，可缩写为Oct。十一月写为November，可缩写为Nov。12月写为December，可缩写为Dec。
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
int jisuantianshu(YUEFEN* yinian, const char* yuefenmin);//计算一年中到该月的天数

int main(void)
{
	char yuefenmin[10];
	puts("请输入您选择的月份名(如January等)：");

	s_gets(yuefenmin, 10);

	int tianshu = jisuantianshu(yinian, yuefenmin);
	printf("一年中到该月的天数是：%d\n", tianshu);

	return 0;
}
int jisuantianshu(YUEFEN* yinian, const char* yuefenmin)//声明一个指向YUEFEN结构布局的结构指针yinian，指针指向yinian结构
{
	int j = -1;

	//for (int i = 0; i < 12; i++)
	//{

	//	if (		strcmp(	(yinian + i)->yuefen_min, yuefenmin	) == 0		)
	//	{
	//		j = i;//j存储的是遍历寻到的第x个结构
	//		break;
	//	}
	//}

	//或这样写：
	char* p;

	for (int i = 0; i < 12; i++)
	{
		p = (yinian + i)->yuefen_min;
		if (strcmp(p, yuefenmin) == 0)
		{
			j = i;//		j存储的是遍历寻到的第x个结构
			break;
		}
	}


	if (j == -1)
	{
		puts("未找到月份！");
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
//法二：
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
typedef struct //月份					//声明一个省略了标记的结构，并用YUEFEN类型名来命名该结构类型
{
	char yuefen_min[10];
	char min_suoxie[4];
	int yuefen_tianshu;
	int yuefen_hao;//月份号
} YUEFEN;

YUEFEN yinian[12] =			  //声明一个使用YUEFEN结构布局的结构数组yinian[12]
{
	{
		"January",
		"Jan",//一月写为January，可缩写为Jan。二月写为February，可缩写为Feb。三月写为March，可缩写为Mar。四月写为April，可缩写为Apr。五月写为May，没有缩略形式。六月写为June，可缩写为Jun。
		31,	////七月写为July，可缩写为Jul。八月写为August，可缩写为Aug。九月写为September，可缩写为Sept。十月写为October，可缩写为Oct。十一月写为November，可缩写为Nov。12月写为December，可缩写为Dec。
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
int jisuantianshu(YUEFEN* yinian, const char* yuefen, int ri);//计算一年中到该月的天数
char* s_gets(char* string, int n);
void eatline(void);

int main(void)
{
	int nian;
	printf("请输入年分：");
	scanf("%d", &nian);
	eatline();

	char yuefen[20];
	printf("请输入月份（月份号、月份名或月份名缩写）：");
	s_gets(yuefen, 20);
	//eatline();此处不需要

	int ri;
	printf("请输入日：");
	scanf("%d", &ri);

	int tianshu = jisuantianshu(yinian, yuefen, ri);
	printf("一年中到该月的天数是：%d\n", tianshu);

	return 0;
}
int jisuantianshu(YUEFEN* yinian, const char* yuefen, int ri)//声明一个指向YUEFEN结构布局的结构指针yinian，指针指向yinian结构
{
	int j = -1;

	char* p;

	for (int i = 0; i < 12; i++)
	{
		p = (yinian + i)->yuefen_min;
		if ((yinian + i)->yuefen_hao == atoi(yuefen) || strcmp(p, yuefen) == 0 || strcmp((yinian + i)->min_suoxie, yuefen) == 0)
		{
			j = i;//		j存储的是遍历寻到的第x个结构
			break;
		}
	}

	if (j == -1)
	{
		puts("未找到月份！");
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
#define MAX_SHUMING 41 //最大书名长度
#define MAX_ZUOZHE 41 //最大作者姓名长度
#define MAX_SHULIANG 100//最大书籍数量

struct book												//声明一个标记为book的结构
{
	char shuming[MAX_SHUMING];
	char zuozhe[MAX_ZUOZHE];
	float value;
};

char* s_gets(char* string, int n);
void shumin_paixu(struct book*, int num);//书名排序
void shumin_paixu2(struct book* library, int num);//书名排序方法二
void jiage_paixu(struct book*, int num);//价格排序

int main(void)
{
	struct book library[MAX_SHULIANG];//声明一个使用book结构布局的结构变量数组library[100]，其中的每个元素都是一个结构
	int count = 0;
	int index;

	printf("请输入书名(在新行输入^Z或在新行输入[Enter]以结束)：\n");
	while (count < MAX_SHULIANG && s_gets(library[count].shuming, MAX_SHUMING) != NULL && library[count].shuming[0] != '\0')
	{
		puts("请输入作者姓名：");
		s_gets(library[count].zuozhe, MAX_ZUOZHE);

		puts("请输入售价：");
		scanf("%f", &library[count].value);
		while (getchar() != '\n')//消除scanf()执行后缓冲区留下的\n
			continue;

		count++;

		printf("请输入书名(在新行输入^Z或在新行输入[Enter]以结束)：\n");
	}

	printf("以下是图书目录：\n");
	for (index = 0; index < count; index++)//count 在数值上等于书籍的数量
	{
		printf("%s:《%s》（￥%.2f）\n", library[index].zuozhe, library[index].shuming, library[index].value);
	}

	shumin_paixu2(library, count);//书名排序方法二

	struct book library_kaobei[MAX_SHULIANG];
	for (index = 0; index < count; index++)
	{
		library_kaobei[index] = library[index];//拷贝结构数组的每个元素，即每个结构
	}
	shumin_paixu(library_kaobei, count);


	for (index = 0; index < count; index++)
	{
		library_kaobei[index] = library[index];
	}
	jiage_paixu(library_kaobei, count);

	return 0;
}																				//*****************************************注****************************************************
void shumin_paixu(struct book* library_kaobei, int num)//结构可以作为实参传递，但是数组只能由指针传递。所以结构数组也只能由指针传递。
{
	struct book  temp;
	int seek1, seek2;

	for (seek1 = 0; seek1 < num - 1; seek1++)//外层循环指明正在处理的元素
	{
		for (seek2 = seek1 + 1; seek2 < num; seek2++)//内层循环找出应存储在该元素的值
		{
			if (strcmp((library_kaobei + seek1)->shuming, (library_kaobei + seek2)->shuming) > 0)//若前一串字符串的首字母排序序列位于后一串字符串的首字母后面
			{
				/*	temp = (library_kaobei + seek1);	//可以														//前面改为	struct book * temp;
					(library_kaobei + seek1) = (library_kaobei + seek2);	//不可以					//***注***此处拷贝地址失败，library_kaobei是指针变量，存的是地址值，可以作为左值，
					(library_kaobei + seek1) = temp;*/																//											 但library_kaobei + seek1是个多项表达式，存的是临时地址值，不能成为左值(属于非左值）
																																			//													《C++ Primer Plus》P215
				temp = *(library_kaobei + seek1);					  //对结构进行排序									               
				library_kaobei[seek1] = library_kaobei[seek2];//*******************************两种写法**********************************
				library_kaobei[seek2] = temp;							  //***地址上的内容可以被替换、覆盖、更改***

			}
		}
	}

	printf("以下是按书名的字母排序的图书目录：\n");
	for (int index = 0; index < num; index++)//num 在数值上等于书籍的数量
	{
		printf("%s:《%s》（￥%.2f）\n", (*(library_kaobei + index)).zuozhe, (library_kaobei + index)->shuming, library_kaobei[index].value);
	}															//*****************************************三种表示方法****************************************************
}
void jiage_paixu(struct book* library_kaobei, int num)
{
	struct book  temp;
	int seek1, seek2;

	for (seek1 = 0; seek1 < num - 1; seek1++)//外层循环指明正在处理的元素
	{
		for (seek2 = seek1 + 1; seek2 < num; seek2++)//内层循环找出应存储在该元素的值
		{
			if ((library_kaobei + seek1)->value - (library_kaobei + seek2)->value > 0)
			{
				temp = *(library_kaobei + seek1);
				library_kaobei[seek1] = library_kaobei[seek2];
				library_kaobei[seek2] = temp;
			}
		}
	}

	printf("以下是按价格排序的图书目录：\n");
	for (int index = 0; index < num; index++)//num 在数值上等于书籍的数量
	{
		printf("%s:《%s》（￥%.2f）\n", (*(library_kaobei + index)).zuozhe, (library_kaobei + index)->shuming, library_kaobei[index].value);
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
//书名排序法二
void shumin_paixu2(struct book* library, int num)
{									//传原结构的地址给调用函数

	//char* temp_shumin[num];//不支持变长数组，可以使用malloc()来实现
	char** shumin;
	shumin = (char**)malloc(num * sizeof(char*));//*************可以回顾12.9.9.****************

	char* temp;
	int seek1, seek2;

	for (int i = 0; i < num; i++)
	{
		*(shumin + i) = (library + i)->shuming;
	}

	for (seek1 = 0; seek1 < num - 1; seek1++)//外层循环指明正在处理的元素
	{
		for (seek2 = seek1 + 1; seek2 < num; seek2++)//内层循环找出应存储在该元素的值
		{
			if (strcmp(*(shumin + seek1), *(shumin + seek2)) > 0)
			{
				temp = *(shumin + seek1);						//对指针进行排序，所以不影响结构成员的内容
				*(shumin + seek1) = *(shumin + seek2);			//temp存的是指针*(shumin + seek1)的地址
				*(shumin + seek2) = temp;								//********************************************
			}
		}
	}

	printf("以下是按书名的字母排序的图书目录：\n");
	for (int index = 0; index < num; index++)//num 在数值上等于书籍的数量
	{
		for (int i = 0; i < num; i++)//对结构遍历
		{
			if (*(shumin + index) == (library + i)->shuming)//判断指针上存的地址和shuming数组首元素的地址，两个地址是否匹配
				printf("%s:《%s》（￥%.2f）\n", (*(library + i)).zuozhe, (library + i)->shuming, library[i].value);
		}
	}															//*****************************************三种表示方法****************************************************

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
}NAME;//名字										//**********注：此结构若置于XINXI结构之下，则后面函数访问不了name*************************
typedef struct
{
	long shebaohao;
	NAME name;
}XINXI;//信息

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
		{"bbb", "", "bbb"}//没有中间名
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

	dayin(xinxi);//传递结构的地址，即&xinxi[0]

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
}NAME;//名字										//**********注：此结构若置于XINXI结构之下，则后面函数访问不了name*************************
typedef struct
{
	long shebaohao;
	NAME name;
}XINXI;//信息

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
		{"bbb", "", "bbb"}//没有中间名
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
		dayin(xinxi[i]);//*****传递结构的值*******

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
		.xinmin.min = "Bbb",//***********************************************三种初始化方法*******************************************
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

	printf("请输入学生的姓名(名和姓之间用空格分开)(输入0 0以退出)：");
	//scanf("%s",xin);
	//scanf("%s", min);
	//或写成：
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
			fprintf(stderr, "输入有误！请重新输入！");
			continue;
		}

		printf("请输入该学生的3个分数：");
		scanf("%f%f%f", &(xueshen + j)->grade[0], &(xueshen + j)->grade[1], &(xueshen + j)->grade[2]);

		count++;
		if (count == num)
			break;
		printf("请继续输入学生的姓名(名和姓之间用空格分开)(输入0 0以退出)：");
	}

	/*printf("%s%s",xin,min);
	printf("%f   %f    %f", xueshen->grade[0], xueshen->grade[1], xueshen->grade[2]);*/     //用于检测此函数的功能
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
		printf("学生姓名：%s %s\n", (xueshen + i)->xinmin.min, (xueshen + i)->xinmin.xin);
		printf("三项分数：%.2f %.2f %.2f\n", (xueshen + i)->grade[0], (xueshen + i)->grade[1], (xueshen + i)->grade[2]);
		printf("平均分：%.2f\n", (xueshen + i)->average);
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

	printf("班级平均分：%.2f\n\n", sum / CSIZE);
}
#endif
//题目要求存入学生姓名，而不是判断输入的姓名是否与结构中的姓名匹配
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

	printf("请输入学生的姓名(名和姓之间用空格分开)(输入0 0以退出)：");
	//scanf("%s",xin);
	//scanf("%s", min);
	//或写成：
	//scanf("%s%s", min,xin);

	while (count < num && scanf("%s%s", min, xin) == 2 && xin[0] != '0' && min[0] != '0')
	{
		if (strlen(min) < 1 && strlen(xin) < 1)
		{
			printf("输入有误，请重新输入！\n");
			continue;
		}

		strcpy((xueshen + count)->xinmin.min, min);
		strcpy((xueshen + count)->xinmin.xin, xin);

		printf("请输入该学生的3个分数：");
		scanf("%f%f%f", &((xueshen + count)->grade[0]), &((xueshen + count)->grade[1]), &((xueshen + count)->grade[2]));

		count++;
		if (count == num)
			break;
		printf("请继续输入学生的姓名(名和姓之间用空格分开)(输入0 0以退出)：");
	}

	/*printf("%s%s",xin,min);
	printf("%f   %f    %f", xueshen->grade[0], xueshen->grade[1], xueshen->grade[2]);*/     //用于检测此函数的功能
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
	//法二：不用中间变量sum
	/*for (int i = 0; i < num; i++)
	{
		(xueshen + i)->average =( (xueshen + i)->grade[0] + (xueshen + i)->grade[1] + (xueshen + i)->grade[2] )/3;
	}*/
}
void dayinjieguo(struct student* xueshen, int num)
{
	for (int i = 0; i < num; i++)
	{
		printf("学生姓名：%s %s\n", (xueshen + i)->xinmin.min, (xueshen + i)->xinmin.xin);
		printf("三项分数：%.2f %.2f %.2f\n", (xueshen + i)->grade[0], (xueshen + i)->grade[1], (xueshen + i)->grade[2]);
		printf("平均分：%.2f\n", (xueshen + i)->average);
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

	printf("班级平均分：%.2f\n\n", sum / CSIZE);
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
}QIUYUAN;//球员
void jisuan_andalv(QIUYUAN* qiuyuan, int num);

int main(void)
{
	QIUYUAN qiuyuan[SIZE];
	QIUYUAN temp[SIZE];

	FILE* fp;
	if ((fp = fopen("qiuyuanxinxi_data.txt", "a+")) == NULL)
	{
		fputs("打开文件失败！", stderr);
		exit(EXIT_FAILURE);
	}

	rewind(fp);

	int count = 0;							//第count个结构的地址
	while (count < SIZE && fread(&temp[count], sizeof(QIUYUAN), 1, fp) == 1)
	{
		if (count == 0)
			puts("当前文件中含有的球员信息如下：");

		printf("%d %s %s %d %d %d %d\n", count, temp[count].min, temp[count].xin, temp[count].shangchang\
			, temp[count].jizhong, temp[count].zoulei, temp[count].dadian);
		count++;
	}


	return 0;
}
void jisuan_andalv(QIUYUAN* qiuyuan, int num)
{

}
//命令行：D:\CODE\C_CODE\C Primer Plus Code practice\chapter 14\code3\Project3\x64\Debug
//Project3.exe
#endif
//以上程序思路错误：
// 从文件中读取内容用fread()的话读的是文件中的结构，而结构内容存入文本中用文件编辑器看是乱码，手动输入没法输入乱码让程序去读取。
// 所以文件中的内容是不能用fread()用读结构的方式去读的。
// 正确思路：用文本模式的fscanf()函数读文件内容。
//6.
#if 0
#define SIZE 19
typedef struct
{
	int haoma;
	char min[20];
	char xin[20];
	int shangchang;//上场次数
	int jizhong;		   //击中数
	int zoulei;		   //走垒数
	int dadian;		   //打点
	float anda;		   //安打率
}QIUYUAN;//球员

void addmessage(FILE* fp, QIUYUAN* qiuyuan, int num);
void jisuan_andalv(QIUYUAN* qiuyuan, int num);
void show(QIUYUAN* qiuyuan, int num);

int main(void)
{
	QIUYUAN qiuyuan[SIZE] = { {0} };						//初始化成员为0，防止球员数少于19时结构中的成员信息不全，导致乱码刷屏

	FILE* fp;
	if ((fp = fopen("qiuyuanxinxi_data.txt", "a+")) == NULL)
	{
		fputs("打开文件失败！", stderr);
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
		(qiuyuan + haoma)->haoma = haoma;//****************注*****************
																		 //球员号可以作为结构的索引值
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
	printf("球员号  名     姓  上场次数  击中数  走垒数  打点  安打率\n");
	for (int i = 0; i < num; i++)
		printf("%5d    %s  %s   %d          %d     %d      %d      %.2f\n", (qiuyuan + i)->haoma, (qiuyuan + i)->min, (qiuyuan + i)->xin, \
			(qiuyuan + i)->shangchang, (qiuyuan + i)->jizhong, (qiuyuan + i)->zoulei, (qiuyuan + i)->dadian, (qiuyuan + i)->anda);
}
//命令行：D:\CODE\C_CODE\C Primer Plus Code practice\chapter 14\code3\Project3\x64\Debug
//Project3.exe
#endif


//7.
#if 0
#define MAX_SHUMING 41 //最大书名长度
#define MAX_ZUOZHE 41 //最大作者姓名长度
#define MAX_SHULIANG 100//最大书籍数量

char* s_gets(char* string, int n);
void eatline(void);

struct book												//声明一个标记为book的结构
{
	char shuming[MAX_SHUMING];
	char zuozhe[MAX_ZUOZHE];
	float value;
	int delete_biaoji;
};

int main(void)
{
	struct book library[MAX_SHULIANG];//声明一个使用book结构布局的结构变量数组library[100]
	int count = 0;

	//打开文件，并计算文件中原有的图书数量
	FILE* fp;
	if ((fp = fopen("book_data.txt", "r+b")) == NULL)//二进制模式下
	{
		fputs("打开文件失败！", stderr);
		exit(EXIT_FAILURE);
	}

	rewind(fp);											//待读取文件数据拷贝进内存中的地址，待读数据块的大小，待读数据块数量，待读取的文件
	while (count < MAX_SHULIANG && fread(&library[count], sizeof(struct book), 1, fp) == 1)
	{
		if (count == 0)
			puts("当前文件中含有的图书信息如下：");

		printf("%s:《%s》（￥%.2f）\n", library[count].zuozhe, library[count].shuming, library[count].value);
		count++;
	}

	//保存文件中图书数量的值        (注：此处count的值是文件中图书数量的值，因为count从0开始递增)
	int filecount = count;				//      (count值能赋给filecount，两者都能在后面程序中成为索引值)

	//判断文件中图书数量是否大于了100本
	if (filecount == MAX_SHULIANG)
	{
		fprintf(stderr, "book_data.txt已满！");
		exit(EXIT_FAILURE);
	}

	//文件中图书数量没到100本
	printf("请输入书名(在新行输入^Z或在新行输入[Enter]以结束)：\n");
	while (count < MAX_SHULIANG && s_gets(library[count].shuming, MAX_SHUMING) != NULL && library[count].shuming[0] != '\0')
	{
		puts("请输入作者姓名：");
		s_gets(library[count].zuozhe, MAX_ZUOZHE);

		puts("请输入售价：");
		scanf("%f", &library[count].value);
		while (getchar() != '\n')//消除scanf()执行后缓冲区留下的\n
			continue;

		count++;

		if (count < MAX_SHULIANG)
			printf("请输入书名(在新行输入^Z或在新行输入[Enter]以结束)：\n");
	}

	//显示添加的图书，并把新加的图书也保存在文件中
	printf("以下是图书目录：\n");
	for (int index = 0; index < count; index++)
	{
		printf("%s:《%s》（￥%.2f）\n", library[index].zuozhe, library[index].shuming, library[index].value);
	}
	//待写入的文件数据所在的内存中的地址，待写数据块的大小，待写数据块数量，待写入的文件
	fwrite(&library[filecount], sizeof(struct book), count - filecount, fp);
	//count-filecount得出新添加的图书数量
	puts("存入文件已完成！");
	//************************注意*******************
  //若写成fclose("fp");则程序不会把数据存入文件，还难以排查错误！！！

	char ch;
	printf("您想要修改记录的内容吗？(输入y或n)");
	scanf("%c", &ch);
	eatline();

	if (ch == 'y')
	{
		printf("请输入您要修改的记录的行号(输入q以退出)：");
		int line;
		while (scanf("%d", &line) == 1)
		{
			eatline();
			printf("是这行吗(输入y或n)：%s:《%s》（￥%.2f）", library[line].zuozhe, library[line].shuming, library[line].value);
			scanf("%c", &ch);
			eatline();
			if (ch == 'y')
			{
				library[line].delete_biaoji = 1;
				puts("此行内容已删除！");
				printf("请输入您要修改的记录的行号(输入q以退出)：");
			}
			else
			{
				printf("请输入您要修改的记录的行号(输入q以退出)：");
				continue;
			}
		}

		eatline();																										//*************************注**********************************
		printf("要在已有记录后继续写入内容吗？(输入y或n)");								//瑕疵：若仅删除但不添加内容，则文件中仍会留有部分原记录
		scanf("%c", &ch);																						//应该可以由fopen()的w模式解决
		eatline();																										//*************************注**********************************

		if (ch == 'y')
		{
			printf("请输入书名(在新行输入^Z或在新行输入[Enter]以结束)：\n");
			while (count < MAX_SHULIANG && s_gets(library[count].shuming, MAX_SHUMING) != NULL && library[count].shuming[0] != '\0')
			{
				puts("请输入作者姓名：");
				s_gets(library[count].zuozhe, MAX_ZUOZHE);

				puts("请输入售价：");
				scanf("%f", &library[count].value);
				eatline();

				library[count].delete_biaoji = 0;

				count++;

				if (count < MAX_SHULIANG)
					printf("请输入书名(在新行输入^Z或在新行输入[Enter]以结束)：\n");
			}
		}

	}
	rewind(fp);
	printf("以下是图书目录：\n");
	for (int index = 0; index < count; index++)
	{
		if (library[index].delete_biaoji != 1)
		{
			printf("%s:《%s》（￥%.2f）\n", library[index].zuozhe, library[index].shuming, library[index].value);
			fwrite(&library[index], sizeof(struct book), 1, fp);
		}
	}

	puts("存入文件已完成！");

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
//命令行运行程序：D:\CODE\C_CODE\C Primer Plus Code practice\chapter 14\code3\Project3\x64\Debug
//Project3.exe
//*****注*******此程序的操作的文件不管fopen()是文本模式还是二进制模式，用文件编辑器看是乱码。
#endif
//7.修改
//**************************************************************************
//实现了只删除记录但不添加新内容并将未删除的记录存入文件的功能
//实现了在要修改的行添加内容的功能
//实现了输入非指定字母，提示用户，并支持再次输入的功能
//**************************************************************************
#if 0
#define MAX_SHUMING 41 //最大书名长度
#define MAX_ZUOZHE 41 //最大作者姓名长度
#define MAX_SHULIANG 100//最大书籍数量

char* s_gets(char* string, int n);
char get_choice(void);
void eatline(void);

struct book												//声明一个标记为book的结构
{
	char shuming[MAX_SHUMING];
	char zuozhe[MAX_ZUOZHE];
	float value;
	int delete_biaoji;
};

int main(void)
{
	struct book library[MAX_SHULIANG];//声明一个使用book结构布局的结构变量数组library[100]
	int count = 0;

	//打开文件，并计算文件中原有的图书数量
	FILE* fp;
	if ((fp = fopen("book_data.txt", "r+b")) == NULL)//二进制模式下
	{
		fputs("打开文件失败！", stderr);
		exit(EXIT_FAILURE);
	}

	rewind(fp);											//待读取文件数据拷贝进内存中的地址，待读数据块的大小，待读数据块数量，待读取的文件
	while (count < MAX_SHULIANG && fread(&library[count], sizeof(struct book), 1, fp) == 1)
	{
		if (count == 0)
			puts("当前文件中含有的图书信息如下：");

		printf("%s:《%s》（￥%.2f）\n", library[count].zuozhe, library[count].shuming, library[count].value);
		count++;
	}

	//保存文件中图书数量的值        (注：此处count的值是文件中图书数量的值，因为count从0开始递增)
	int filecount = count;				//      (count值能赋给filecount，两者都能在后面程序中成为索引值)

	//判断文件中图书数量是否大于了100本
	if (filecount == MAX_SHULIANG)
	{
		fprintf(stderr, "book_data.txt已满！");
		exit(EXIT_FAILURE);
	}

	//文件中图书数量没到100本
	printf("请输入书名(在新行输入^Z或在新行输入[Enter]以结束)：\n");
	while (count < MAX_SHULIANG && s_gets(library[count].shuming, MAX_SHUMING) != NULL && library[count].shuming[0] != '\0')
	{
		puts("请输入作者姓名：");
		s_gets(library[count].zuozhe, MAX_ZUOZHE);

		puts("请输入售价：");
		scanf("%f", &library[count].value);
		while (getchar() != '\n')//消除scanf()执行后缓冲区留下的\n
			continue;

		count++;

		if (count < MAX_SHULIANG)
			printf("请输入书名(在新行输入^Z或在新行输入[Enter]以结束)：\n");
	}

	//显示添加的图书，并把新加的图书也保存在文件中
	printf("以下是图书目录：\n");
	for (int index = 0; index < count; index++)
	{
		printf("%s:《%s》（￥%.2f）\n", library[index].zuozhe, library[index].shuming, library[index].value);
	}
	//待写入的文件数据所在的内存中的地址，待写数据块的大小，待写数据块数量，待写入的文件
	fwrite(&library[filecount], sizeof(struct book), count - filecount, fp);
	//count-filecount得出新添加的图书数量
	puts("存入文件已完成！");				//count:图书总数，filecount文件中原图书数量
																				//************************注意*******************
	fclose(fp);															//若写成fclose("fp");则程序不会把数据存入文件，还难以排查错误！！！


	char ch;
	printf("您想要修改记录的内容吗？(输入y或n)");
	ch = get_choice();

	if (ch == 'y')
	{
		if ((fp = fopen("book_data.txt", "wb")) == NULL)//二进制模式下
		{
			fputs("打开文件失败！", stderr);
			exit(EXIT_FAILURE);
		}
	}
	else
	{
		if ((fp = fopen("book_data.txt", "r+b")) == NULL)//二进制模式下
		{
			fputs("打开文件失败！", stderr);
			exit(EXIT_FAILURE);
		}
	}

	int line;
	if (ch == 'y')
	{
		printf("请输入您要修改的记录的行号(如第一行，则输入0)(输入q以退出)：");

		while (scanf("%d", &line) == 1)
		{
			if (line<0 || line>count - 1)
			{
				printf("输入有误，请重新输入！");
				continue;
			}

			eatline();
			printf("是这行吗(输入y或n)：%s:《%s》（￥%.2f）", library[line].zuozhe, library[line].shuming, library[line].value);
			ch = get_choice();

			if (ch == 'y')
			{
				library[line].delete_biaoji = 1;									//****************************注********************************
				//count--;										//减去一本书。    不能减，后面count用来控制for循环遍历，要作为结束的条件
				puts("此行内容已删除！");
				printf("请输入您要修改的记录的行号(如第一行，则输入0)(输入q以退出)：");
			}
			else
			{
				printf("请输入您要修改的记录的行号(如第一行，则输入0)(输入q以退出)：");
				continue;
			}
		}

		eatline();
		printf("要在此行写入新内容吗？(输入y或n)");
		ch = get_choice();

		if (ch == 'y')
		{
			printf("请输入书名：\n");
			s_gets(library[line].shuming, MAX_SHUMING);
			puts("请输入作者姓名：");
			s_gets(library[line].zuozhe, MAX_ZUOZHE);
			puts("请输入售价：");
			scanf("%f", &library[line].value);
			eatline();
			library[line].delete_biaoji = 0;
		}

		printf("要在已有记录后继续写入内容吗？(输入y或n)");
		ch = get_choice();

		if (ch == 'y')
		{
			printf("请输入书名(在新行输入^Z或在新行输入[Enter]以结束)：\n");
			while (count < MAX_SHULIANG && s_gets(library[count].shuming, MAX_SHUMING) != NULL && library[count].shuming[0] != '\0')
			{
				puts("请输入作者姓名：");
				s_gets(library[count].zuozhe, MAX_ZUOZHE);

				puts("请输入售价：");
				scanf("%f", &library[count].value);
				eatline();

				library[count].delete_biaoji = 0;

				count++;

				if (count < MAX_SHULIANG)
					printf("请输入书名(在新行输入^Z或在新行输入[Enter]以结束)：\n");
			}
		}

	}

	rewind(fp);

	printf("以下是图书目录：\n");
	for (int index = 0; index < count; index++)//*****count：delete_biaoji为1或0的图书数量*****
	{
		if (library[index].delete_biaoji != 1)
		{
			printf("%s:《%s》（￥%.2f）\n", library[index].zuozhe, library[index].shuming, library[index].value);
			fwrite(&library[index], sizeof(struct book), 1, fp);
		}
	}

	puts("存入文件已完成！");

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
	answer = tolower(answer);//使用C库的tolower()

	eatline();
	while (strchr("yn", answer) == NULL)
	{
		puts("请输入y或n");
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
//命令行运行程序：D:\CODE\C_CODE\C Primer Plus Code practice\chapter 14\code3\Project3\x64\Debug
//Project3.exe
//*****注*******此程序的操作的文件不管fopen()是文本模式还是二进制模式，用文件编辑器看是乱码。
#endif


//8.
#if 0
typedef struct
{
	int zuoweibianhao;//座位编号
	int yuding_biaoji;//座位被预订的标记
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
	XINXI xinxi[SIZE] = { {0} };//初始化结构的成员值为0

	int j = -1;//表示预订的座位编号所在的第x个结构
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
			j = quxiaozuowei(xinxi, j);//		j用来标记用户预订了座位，可以选择取消预订这个功能。
			break;
		case 'f':
		default:
			printf("程序已退出！");
			exit(1);
		}
	}

	//法二：
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
	puts("请从如下选项中选择一项功能：");
	puts("a)显示空余的座位数量");
	puts("b)显示空余的座位列表");
	puts("c)按字母表顺序显示座位上的乘客列表");
	puts("d)为您分配座位");
	puts("e)清除您的座位记录");
	puts("f)退出");
}
char get_choice(void)
{
	char choice;

	choice = getchar();
	choice = tolower(choice);//使用C库的tolower()

	eatline();
	while (strchr("abcdef", choice) == NULL)
	{
		puts("请输入a、b、c、d、e或f");
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

	printf("共有%d个空座位\n", count);
}
void show_list_of_empty_seats(XINXI* xinxi, int num)
{
	int i;
	for (i = 0; i < num; i++)
	{
		if ((xinxi + i)->yuding_biaoji == 0)
			printf("座位编号:%3d    ", (xinxi + i)->zuoweibianhao);

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
		xinxi_kaobei[index] = *(xinxi + index);//拷贝结构数组的每个元素，即每个结构
	}

	XINXI  temp;
	int seek1, seek2;

	for (seek1 = 0; seek1 < num - 1; seek1++)//外层循环指明正在处理的元素
	{
		for (seek2 = seek1 + 1; seek2 < num; seek2++)//内层循环找出应存储在该元素的值
		{
			if (strcmp((xinxi_kaobei + seek1)->name_min, (xinxi_kaobei + seek2)->name_min) > 0)//若前一串字符串的首字母排序序列位于后一串字符串的首字母后面
			{
				temp = *(xinxi_kaobei + seek1);					//对结构排序	
				xinxi_kaobei[seek1] = xinxi_kaobei[seek2];//*******************************两种写法**********************************
				xinxi_kaobei[seek2] = temp;
			}
		}
	}
	//法二：对指针排序，可参考第3.题

	printf("以下是按乘客字母排序的乘客列表：\n");
	for (int index = 0; index < num; index++)
	{
		if ((xinxi_kaobei + index)->yuding_biaoji != 0)
			printf("乘客名：%s 座位号：%d \n", (xinxi_kaobei + index)->name_min, (xinxi_kaobei)->zuoweibianhao);
	}
}
int fenpeizuowei(XINXI* xinxi, int num)
{
	int zuoweibianhao;
	printf("请输入您要预订的座位编号(输入q以退出)：");

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
			printf("未找到该座位编号，请重新输入！");
			continue;
		}

		if ((xinxi + j)->yuding_biaoji == 1)
		{
			printf("该座位编号已被预订，请重新输入！");
			continue;
		}

		break;
	}

	if (j == -1)//输入q时
		eatline();

	if (j != -1)
	{
		char name_min[20];
		char name_xin[20];

		printf("请输入您的名和姓：");
		scanf("%s%s", name_min, name_xin);
		eatline();

		(xinxi + j)->yuding_biaoji = 1;
		strcpy((xinxi + j)->name_min, name_min);
		strcpy((xinxi + j)->name_xin, name_xin);

		printf("座位编号：%d   %s %s\n", (xinxi + j)->zuoweibianhao, (xinxi + j)->name_min, (xinxi + j)->name_xin);
		puts("写入完成！");
	}

	return j;
}
int quxiaozuowei(XINXI* xinxi, int num)
{
	if (num == -1)
	{
		printf("您还未订座位！");
	}
	else
	{
		printf("确定取消座位编号%d的预订吗？（输入y或n）");
		char choice;

		choice = getchar();
		choice = tolower(choice);//使用C库的tolower()

		eatline();
		while (strchr("yn", choice) == NULL)
		{
			puts("请输入y或n");
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

			puts("已删除预订信息！");
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
	int zuoweibianhao;//座位编号
	int yuding_biaoji;//座位被预订的标记
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
	XINXI xinxi[4][SIZE] = { {0} };//四个航班，每个航班都是个XINXI布局的结构

	printf("请选择航班号：102	311	444	519	（输入0以退出）:");
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
				puts("正在处理航班102");
				break;
			case 311:
				x = 1;
				puts("正在处理航班311");
				break;
			case 444:
				x = 2;
				puts("正在处理航班444");
				break;
			case 519:
				x = 3;
				puts("正在处理航班519");
				break;
			default:
				if (hangbanhao == 0)
					exit(1);//也可以使用go to 语句
				else
				{
					puts("输入有误，请重新输入！");
					continue;
				}
			}
			break;
		}

		showmenu();
		char choice = '0';
		int j = -1;//表示预订的座位编号所在的第x个结构
		while ((choice = get_choice()) && choice != 'f')					//*******************************注*********************************************************
		{																							//错误写法：while (		choice= get_choice()&&choice!='f'     )	若输入a，则choice=1
			switch (choice)																//优先级：算数，关系，逻辑，赋值
			{
			case 'a':													  //*************************注************************************************
				show_empty_seats(*(xinxi + x), SIZE);//*(xinxi + x)=*(&xinxi[0]+x)=*(&xinxi[x])=xinxi[x] 传入的是&xinxi[x][0]
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
				printf("已退出！\n");
			}
			showmenu();
		}

		printf("请选择航班号：102	311	444	519	（输入0以退出）:");
	}
	return 0;
}
void showmenu(void)
{
	puts("请从如下选项中选择一项功能：");
	puts("a)显示空余的座位数量");
	puts("b)显示空余的座位列表");
	puts("c)按字母表顺序显示座位上的乘客列表");
	puts("d)为您分配座位");
	puts("e)清除您的座位记录");
	puts("f)退出");
}
char get_choice(void)
{
	char choice;

	choice = getchar();
	choice = tolower(choice);//使用C库的tolower()

	eatline();
	while (strchr("abcdef", choice) == NULL)
	{
		puts("请输入a、b、c、d、e或f");
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

	printf("共有%d个空座位\n", count);
}
void show_list_of_empty_seats(XINXI* xinxi, int num)
{
	int i;
	for (i = 0; i < num; i++)
	{
		if ((xinxi + i)->yuding_biaoji == 0)
			printf("座位编号:%3d    ", (xinxi + i)->zuoweibianhao);

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
		xinxi_kaobei[index] = xinxi_kaobei[index];//拷贝结构数组的每个元素
	}

	XINXI  temp;
	int seek1, seek2;

	for (seek1 = 0; seek1 < num - 1; seek1++)//外层循环指明正在处理的元素
	{
		for (seek2 = seek1 + 1; seek2 < num; seek2++)//内层循环找出应存储在该元素的值
		{
			if (strcmp((xinxi_kaobei + seek1)->name_min, (xinxi_kaobei + seek2)->name_min) > 0)//若前一串字符串的首字母排序序列位于后一串字符串的首字母后面
			{
				temp = *(xinxi_kaobei + seek1);
				xinxi_kaobei[seek1] = xinxi_kaobei[seek2];//*******************************两种写法**********************************
				xinxi_kaobei[seek2] = temp;
			}
		}
	}

	printf("以下是按乘客字母排序的乘客列表：\n");
	for (int index = 0; index < num; index++)
	{
		if ((xinxi + index)->yuding_biaoji != 0)
			printf("乘客名：%s 座位号：%d \n", (xinxi_kaobei + index)->name_min, (xinxi_kaobei)->zuoweibianhao);
	}
}
int fenpeizuowei(XINXI* xinxi, int num)
{
	int zuoweibianhao;
	printf("请输入您要预订的座位编号(输入q以退出)：");

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
			printf("未找到该座位编号，请重新输入！");
			continue;
		}

		if ((xinxi + j)->yuding_biaoji == 1)
		{
			printf("该座位编号已被预订，请重新输入！");
			continue;
		}

		break;
	}

	if (j == -1)//输入q时
		eatline();

	if (j != -1)
	{
		char name_min[20];
		char name_xin[20];

		printf("请输入您的名和姓：");
		scanf("%s%s", name_min, name_xin);
		eatline();

		(xinxi + j)->yuding_biaoji = 1;
		strcpy((xinxi + j)->name_min, name_min);
		strcpy((xinxi + j)->name_xin, name_xin);

		printf("座位编号：%d   %s %s\n", (xinxi + j)->zuoweibianhao, (xinxi + j)->name_min, (xinxi + j)->name_xin);
		puts("写入完成！");
	}

	return j;
}
int quxiaozuowei(XINXI* xinxi, int num)
{
	if (num == -1)
	{
		printf("您还未订座位！");
	}
	else
	{
		printf("确定取消座位编号%d的预订吗？（输入y或n）");
		char choice;

		choice = getchar();
		choice = tolower(choice);//使用C库的tolower()

		eatline();
		while (strchr("yn", choice) == NULL)
		{
			puts("请输入y或n");
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

			puts("已删除预订信息！");
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

	void (*function_p[3])(void) = { showmenu1,showmenu2,showmenu3 };//声明一个函数指针数组。

	puts("请选择菜单前的字母(输入a、b或c)：");

	choice = getchar();
	choice = tolower(choice);//使用C库的tolower()

	eatline();
	while (strchr("abc", choice) == NULL)
	{
		puts("请输入a、b或c");
		choice = tolower(getchar());
		eatline();
	}

	switch (choice)
	{
	case 'a':
		function_p[0] = showmenu1;//可以之前不初始化，到这里对函数指针赋值
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
	puts("这是一个菜单a！");
}
void showmenu2(void)
{
	puts("这是一个菜单b！");
}
void showmenu3(void)
{
	puts("这是一个菜单c！");
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
	static int i = 0;//只在编译transform()时被初始化一次

	double jieguo[100] = { 0 };

	*(jieguo + i) = p(*(source + i));

	i++;

	return (*(jieguo + i - 1));//********注：-1必须要写***************************
}
#endif
//transform()无返回值的版本如下：
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

	puts("原数组数据如下：");
	for (i = 0; i < num; i++)
	{
		printf("%8.2lf", source[i]);
		if (i % 6 == 5)
			putchar('\n');
	}
	if (i % 6 != 0)
		putchar('\n');

	transform(source, target, num, sin);//   double sin (double a)

	puts("目标数组数据如下(sin)：");
	for (i = 0; i < num; i++)
	{
		printf("%8.2lf", target[i]);
		if (i % 6 == 5)
			putchar('\n');
	}
	if (i % 6 != 0)
		putchar('\n');

	transform(source, target, num, cos);//   double cos (double a)

	puts("目标数组数据如下(cos)：");
	for (i = 0; i < num; i++)
	{
		printf("%8.2lf", target[i]);
		if (i % 6 == 5)
			putchar('\n');
	}
	if (i % 6 != 0)
		putchar('\n');

	transform(source, target, num, zidinyi1);//   自定义函数1

	puts("目标数组数据如下(自定义函数1)：");
	for (i = 0; i < num; i++)
	{
		printf("%8.2lf", target[i]);
		if (i % 6 == 5)
			putchar('\n');
	}
	if (i % 6 != 0)
		putchar('\n');

	transform(source, target, num, zidinyi2);//   自定义函数2

	puts("目标数组数据如下(自定义函数2)：");
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
#include <limits.h>//提供明示常量(也叫符号常量)CHAR_BIT 即char类型的位数
#include <stdlib.h>//exit()
//
#if 1
#endif


//用位操作（按位逻辑运算符+移位运算符）显示计算机上存储的十进制数对应的二进制数据
#if 0
char* i_to_bs(int zhengshu, char* string);//声明一个整数转换成二进制数的函数(二进制数被存放于字符数组中)，形参是整数和指向char型的指针，返回值与传入指针的地址值相同，以便作为printf()的参数。
void show(int number, char* string);

int main(void)
{
	printf("本系统1字节的位数为%d\n", CHAR_BIT);
	printf("本系统int型数据占%zd个字节\n", sizeof(int));
	char erjinzhi[CHAR_BIT * sizeof(int) + 1];//CHAR_BIT*sizeof(int),得出当前系统下的int型整数的二进制位数即8*4(该系统环境下1字节的位数乘以int的字节数)。这样写的好处是可移植性。
																	//+1是留给'\0'的空间，所以本系统中erjinzhi数组存储单元个数是33。
	int number;
	printf("请输入要显示为二进制数的整数：");
	while (scanf("%d", &number) == 1)
	{
		i_to_bs(number, erjinzhi);
		show(number, erjinzhi);
	}

	return 0;
}
char* i_to_bs(int zhengshu, char* string)//其实zhengshu变量中存的就是输入的整数对应的二进制数，现在函数要将其放入数组中显示出来
{
	const static int size = CHAR_BIT * sizeof(int);

	for (int i = size - 1; i >= 0; i--, zhengshu >>= 1)
	{
		*(string + i) = (0x1 & zhengshu) + '0';//从数组的最后一个元素开始赋值		1 & zhengshu计算后就是最后一位二进制数的值		+ '0'作用是转化成字符数据好存入字符数组中
	}
	*(string + size) = '\0';//本系统下erjinzhi[32]='\0'

	return string;
}
void show(int number, char* string)
{
	printf("%d对应的二进制数据是：", number);

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


//用位操作（按位逻辑运算符+移位运算符）切换二进制数的后n位状态
#if 0
char* i_to_bs(int zhengshu, char* string);//声明一个整数转换成二进制数的函数(二进制数被存放于字符数组中)，形参是整数和指向char型的指针，返回值与传入指针的地址值相同，以便作为printf()的参数。
void show(char* string);
int invert(int zhengshu, int bits);

int main(void)
{
	printf("本系统1字节的位数为%d\n", CHAR_BIT);
	printf("本系统int型数据占%zd个字节\n", sizeof(int));
	char erjinzhi[CHAR_BIT * sizeof(int) + 1];//CHAR_BIT*sizeof(int),得出当前系统下的int型整数的二进制位数即8*4(该系统环境下1字节的位数乘以int的字节数)。这样写的好处是可移植性。
																	//+1是留给'\0'的空间，所以本系统中erjinzhi数组存储单元个数是33。
	int number;
	printf("请输入要显示为二进制数的整数：");
	while (scanf("%d", &number) == 1)
	{
		i_to_bs(number, erjinzhi);
		printf("%d对应的二进制数据是：", number);
		show(erjinzhi);

		number = invert(number, 4);
		i_to_bs(number, erjinzhi);
		printf("最后4位切换后的二进制数据是：", number);
		show(erjinzhi);
		//或写为：
		//show(i_to_bs(number, erjinzhi));
	}

	return 0;
}
char* i_to_bs(int zhengshu, char* string)//其实zhengshu变量中存的就是输入的整数对应的二进制数，现在函数要将其放入数组中显示出来
{
	const static int size = CHAR_BIT * sizeof(int);

	for (int i = size - 1; i >= 0; i--, zhengshu >>= 1)
	{
		*(string + i) = (0x1 & zhengshu) + '0';//从数组的最后一个元素开始赋值		1 & zhengshu计算后就是最后一位二进制数的值		+ '0'作用是转化成字符数据好存入字符数组中
	}
	*(string + size) = '\0';//本系统下erjinzhi[32]='\0'

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

	while (bits > 0)						//使mask的后bits个位都为1。
	{
		mask |= wei;
		wei <<= 1;

		bits--;
	}

	return (zhengshu ^ mask);//切换zhengshu二进制数据的最后4位的值
}
#endif


//使用位字段
#if 0
struct									//声明一个结构，其成员是4个1位的字段
{
	unsigned int autfd : 1;
	unsigned int bldfc : 1;
	unsigned int undln : 1;
	unsigned int itals : 1;
}prnt;									//结构变量prnt，包含了4个1位的字段
int main(void)
{
	prnt.autfd = 0;
	prnt.bldfc = 1;
	prnt.undln = 0;
	prnt.itals = 1;

	printf("%d %d %d %d\n", prnt.autfd, prnt.bldfc, prnt.undln, prnt.itals);
	printf("sizeof(prnt) = %d\n", sizeof(prnt));
	printf("十进制: %d\n", prnt);

	//结果：0 1 0 1
	//           sizeof(prnt) = 4
	//	          十进制: 10
	//可以看出prnt的二进制值是0000 0000 0000 0000 0000 0000 000 1010，
	//**********所以本系统上字段存储在int中的顺序是从右往左。****************
	//********************本系统把第一位字段载入最低位**************

	return 0;
}
#endif


//如果声明的总位数超过一个unsigned int类型的大小（4 bytes）的情况
#if 0
struct
{
	unsigned a : 4;
	unsigned b : 4;
	unsigned c : 4;
	unsigned d : 25;
}prnt;								//位字段大小共37bits
int main(void)
{
	prnt.a = 15;//即0xF
	prnt.b = 0;
	prnt.c = 15;
	prnt.d = 0x1FFFFFF;

	printf("0x%x %d %d 0x%x\n", prnt.a, prnt.b, prnt.c, prnt.d);
	printf("sizeof(prnt) = %d\n", sizeof(prnt));

	//结果：
	//二进制 32 - 63位：0000 0001 1111 1111 1111 1111 1111 1111
	//二进制 0 - 31位：  0000 0000 0000 0000 0000 1111 0000 1111

	//从输出的结果可以看出，首先，prnt的大小为8个字节；其次，编译器强制prnt.d字段发生边界对齐，即prnt.d位于第二个unsigned int上，
	// prnt.c与prnt.d之间会填充未命名的“洞”。
	//实际上，我们也可以人为地在结构体当中设置未命名的字段宽度来进行填充。

	return 0;
}
#endif


//人为地在结构体当中设置未命名的字段宽度来进行填充。
#if 0
struct {
	unsigned field1 : 1;
	unsigned : 2;							//使用一个宽度为2的未命名的字段来添加field1和field2字段之间的"洞”(空隙)。
	unsigned field2 : 1;
	unsigned : 0;							//使用一个宽度为0的未命名的字段迫使下一个字段与下一个整数对齐。
	unsigned field3 : 4;
} stuff;

int main(void)
{
	stuff.field1 = 1;
	stuff.field2 = 1;
	stuff.field3 = 0xf;

	printf("0x%x %d %d \n", stuff.field1, stuff.field2, stuff.field3);
	printf("sizeof(prnt) = %d\n", sizeof(stuff));

	//结果：
	//二进制 32 - 63位： 0000 0000 0000 0000 0000 0000 0000 1111
	//二进制 0 - 31位：   0000 0000 0000 0000 0000 0000 0000 1001

	//也就是说，在这里，stuff.field1和stuff.field2之间，有一个2位的空隙；stuff.field3被强迫与下一个整数对齐，存储到下一个unsigned	int中。
	//stuff的大小为8个字节。

	return 0;
}
#endif


//赋值超出字段可容纳数值范围的情况
#if 0
struct {
	unsigned field1 : 1;
	unsigned field2 : 2;
	unsigned field3 : 4;
} stuff;

int main(void)
{
	stuff.field1 = 1;
	stuff.field2 = 7;//即0111
	stuff.field3 = 0xf;

	printf("0x%x %d %d \n", stuff.field1, stuff.field2, stuff.field3);
	printf("sizeof(prnt) = %d\n", sizeof(stuff));

	//结果：
	//stuff.field2值为0011，即截断了超出的部分

	return 0;
}
#endif


//定义并使用位字段
#if 0
//线的样式
#define SHIXIAN		 0//实线
#define DIANXIAN		 1//点线
#define XUXIAN			 2//虚线

//三原色
#define BLUE				 4 //蓝：100
#define GREEN			 2//绿：010					//所以本系统上字段存储在int中的顺序是从右往左，所以到时候看二进制时，对应的是红绿蓝
#define RED				 1//红：001

//混合色
#define BLACK			 0
#define YELLOW		 (RED|GREEN)//即3
#define PURPLE			 (RED|BLUE)
#define CYAN			 (GREEN|BLUE)
#define WHITE			 (RED|GREEN|BLUE)

struct fangkuang//方框属性 
{
	unsigned int opaque : 1;//透明或不透明
	unsigned int fill_color : 3;//填充色
	unsigned int : 4;

	unsigned int biankuang : 1;//边框可见或隐藏
	unsigned int biankuang_color : 3;//填充色
	unsigned int biankuang_style : 2;//线的样式
	unsigned int : 2;
};
void show_settings(const struct fangkuang* p);

int main(void)
{
	struct fangkuang box = { 1,YELLOW,1,GREEN,XUXIAN };

	printf("方框原属性：\n");
	show_settings(&box);

	return 0;
}
void show_settings(const struct fangkuang* p)
{
	printf("方框：%s", p->opaque == 1 ? "透明" : "不透明");

	const char* colors[8] = { "BLACK","RED","GREEN","YELLOW","BLUE","PURPLE","CYAN","WHITE" };
	printf(" 颜色：%s", *(colors + (p->fill_color)));//color是指针的指针

	printf(" 边框：%s", p->biankuang == 1 ? "可见" : "不可见");

	printf(" 颜色：%s", colors[p->biankuang_color]);		  //***两种表示方法***

	printf(" 线的样式：");

	switch (p->biankuang_style)
	{
	case SHIXIAN:
		printf("实线");
		break;
	case DIANXIAN:
		printf("点线");
		break;
	case XUXIAN:
		printf("虚线");
		break;
	default:
		exit(1);
	}

	//总结：
	//表示方法一：只用0或1表示的信息，可以用条件运算符。
	//表示方法二：用0，1和2或更多来表示的信息，可以用switch语句。
	//表示方法三：用0，1，2，。。。来表示信息，可以用指针数组，每个指针指向一个字符串。
}
#endif


//用联合，比较位字段和按位运算符这两种方法
#if 0
/*位字段使用的符号常量*/
//线的样式
#define SHIXIAN		 0//实线
#define DIANXIAN		 1//点线
#define XUXIAN			 2//虚线

//三原色
#define RED				 1//红：001
#define GREEN			 2//绿：010					//所以本系统上字段存储在int中的顺序是从右往左，所以到时候看二进制时，对应的是红绿蓝
#define BLUE				 4 //蓝：100

//混合色
#define BLACK			 0
#define YELLOW		 (RED|GREEN)//即3
#define PURPLE			 (RED|BLUE)
#define CYAN			 (GREEN|BLUE)
#define WHITE			 (RED|GREEN|BLUE)

/*按位运算符使用的符号常量*/
#define OPAQUE				0x1
#define RED_ANWEI			0x2//最后一位是透明或不透明，所以颜色要从倒数第二位开始，占用倒数2~4位
#define GREEN_ANWEI		0x4
#define BLUE_ANWEI		0x8


struct fangkuang//方框属性 
{
	unsigned int opaque : 1;//透明或不透明
	unsigned int fill_color : 3;//填充色
	unsigned int : 4;

	unsigned int biankuang : 1;//边框可见或隐藏
	unsigned int biankuang_color : 3;//填充色
	unsigned int biankuang_style : 2;//线的样式
	unsigned int : 2;
};																										    //共32位

union fangfa
{
	struct fangkuang box_weiziduan;//位字段法
	unsigned int box_anwei;				//按位运算符法(unsigned int 也是32位)
};

void show_settings1(const struct fangkuang* p);
void show_settings2(const unsigned);
char* i_to_bs(int zhengshu, char* string);
void show(char* string);

int main(void)
{

	//struct fangkuang box_weiziduan = { 1,YELLOW,1,GREEN,XUXIAN };//初始化结构成员
																														//相当于没有用union封装，那就不能在同一个内存空间中用位字段和按位运算符两种方法查看成员的内容了。

	/*两种联合初始化方法*/
	union fangfa box = { { 1,YELLOW,1,GREEN,XUXIAN } };//初始化联合
	//union fangfa box = { .box_weiziduan={ 1,YELLOW,1,GREEN,XUXIAN } };//初始化联合

	char erjinzhi[33];//或写[CHAR_BIT*sizeof(int)+1]

	printf("方框原属性：\n");
	show_settings1(&box.box_weiziduan);
	printf("方框原属性用unsigned int 查看：\n");
	show_settings2(box.box_anwei);

	//printf("用二进制显示数据：%s", i_to_bs(box.box_weiziduan,erjinzhi));//**无效**
	//printf("用二进制显示数据：%s", i_to_bs(box.box_anwei,erjinzhi));		  //有效

	i_to_bs(box.box_anwei, erjinzhi);
	printf("用二进制显示数据：");
	show(erjinzhi);

	return 0;
}
void show_settings1(const struct fangkuang* p)
{
	printf("方框：%s", p->opaque == 1 ? "透明" : "不透明");

	const char* colors[8] = { "BLACK","RED","GREEN","YELLOW","BLUE","PURPLE","CYAN","WHITE" };
	printf(" 颜色：%s", *(colors + (p->fill_color)));			  //color是指针的指针

	printf(" 边框：%s", p->biankuang == 1 ? "可见" : "不可见");

	printf(" 颜色：%s", colors[p->biankuang_color]);		  //***两种表示方法***

	printf(" 线的样式：");

	switch (p->biankuang_style)
	{
	case SHIXIAN:
		printf("实线");
		break;
	case DIANXIAN:
		printf("点线");
		break;
	case XUXIAN:
		printf("虚线");
		break;
	default:
		exit(1);
	}
	putchar('\n');

	//总结：
	//表示方法一：只用0或1表示的信息，可以用条件运算符。
	//表示方法二：用0，1和2或更多来表示的信息，可以用switch语句。
	//表示方法三：用0，1，2或更多来表示的信息，可以用指针数组，每个指针指向一个字符串。
}
void show_settings2(const unsigned  shuju)
{
	printf("方框：%s", shuju & OPAQUE == 1 ? "透明" : "不透明");//第1位存透明或不透明

	const char* colors[8] = { "BLACK","RED","GREEN","YELLOW","BLUE","PURPLE","CYAN","WHITE" };
	printf(" 颜色：%s", *(colors + (shuju >> 1 & 0x7)));//第2~4位存颜色		//color是指针的指针

	printf(" 边框：%s", (shuju >> 8 & 0x1) == 1 ? "可见" : "不可见");//用未命名字段宽度4填了4个空隙，即第9位存可见或不可见
	//法二：#define BIANKUANG 0x100   然后检查位  (shuju&BIANKUANG)==BIANKUANG? "可见" : "不可见"

	printf(" 颜色：%s", colors[(shuju >> 9 & 0x7)]);//第10~12位存颜色

	printf(" 线的样式：");

	switch (shuju >> 12 & 0x3)//第13~14位存线的样式
	{
	case SHIXIAN:
		printf("实线");
		break;
	case DIANXIAN:
		printf("点线");
		break;
	case XUXIAN:
		printf("虚线");
		break;
	default:
		exit(1);
	}
	//法二：书P439

	putchar('\n');
}
char* i_to_bs(int zhengshu, char* string)//其实zhengshu变量中存的就是输入的整数对应的二进制数，现在函数要将其放入数组中显示出来
{
	const static int size = CHAR_BIT * sizeof(int);

	for (int i = size - 1; i >= 0; i--, zhengshu >>= 1)
	{
		*(string + i) = (0x1 & zhengshu) + '0';//从数组的最后一个元素开始赋值		1 & zhengshu计算后就是最后一位二进制数的值		+ '0'作用是转化成字符数据好存入字符数组中
	}
	*(string + size) = '\0';//本系统下erjinzhi[32]='\0'

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


//使用_Alignof和_Alignas(此编译器不支持)
#endif


//chapter 15
//code2.c
#if 0
#include <stdio.h>


#if 0
//复习题
//7.a
struct muban1							//从右往左填充结构位字段，即把第一位字段载入最低位。
{
	unsigned int ruanpan : 2;
	unsigned int : 1;
	unsigned int CD_ROM : 2;
	unsigned int : 1;
	unsigned int yinban : 2;
};
//7.b
struct muban2							//从左往右填充结构位字段，即把第一位字段载入最高位。
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
#include <limits.h>//提供明示常量(也叫符号常量)CHAR_BIT 即char类型的位数
#include <stdlib.h>//exit()
#include <string.h>//strchr()
#include <ctype.h>//tolower()
//
#if 1
#endif


//编程练习
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
//法一：从低位到高位累加
int b_to_i(const char* string)
{
	int num = 0;
	int length = strlen(string);
	int weiquan = 1;									 //二进制数据第0号位的位权

	for (int index = length - 1; index >= 0; index--)
	{
		int temp = *(string + index) - '0';  //得到每位是0还是1

		num += temp * weiquan;

		weiquan *= 2;
	}

	return num;
}
//法二：从高位到低位累加
# if 0
int b_to_i(const char* string)
{
	int num = 0;

	while (*string != '\0')				//若输入110，则最高位1进入循环，num=1，第1号位进入循环，num=3，第0号位进入循环，num=6
	{												//通过循环使每一位上的值都持续乘以2
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
char* i_to_bs(int zhengshu, char* string);//其实zhengshu变量中存的就是二进制数，现在函数要将其放入数组中显示出来
void show(char* string);

int main(int argc, char** argv)
{
	if (argc != 3)
	{
		puts("Erroe !");
		exit(EXIT_FAILURE);
	}

	int shuju1, shuju2;

	shuju1 = b_to_i(argv[1]);//字符串表示的二进制内容转化为机器上存的二进制数据
	shuju2 = b_to_i(argv[2]);

	int temp1, temp2;
	temp1 = ~shuju1;
	temp2 = ~shuju2;

	char erjinzhi1[33];
	char erjinzhi2[33];

	i_to_bs(temp1, erjinzhi1);//机器上存的二进制转化成字符串表示二进制内容，以此来打印在显示器上
	i_to_bs(temp2, erjinzhi2);

	printf("第一个二进制数取反后：");
	show(erjinzhi1);
	printf("第二个二进制数取反后：");
	show(erjinzhi2);

	temp1 = shuju1 & shuju2;
	i_to_bs(temp1, erjinzhi1);
	printf("第一个二进制数与第二个二进制进行&运算后：");
	show(erjinzhi1);

	temp1 = shuju1 | shuju2;
	i_to_bs(temp1, erjinzhi1);
	printf("第一个二进制数与第二个二进制进行|运算后：");
	show(erjinzhi1);

	temp1 = shuju1 ^ shuju2;
	i_to_bs(temp1, erjinzhi1);
	printf("第一个二进制数与第二个二进制进行^运算后：");
	show(erjinzhi1);

	return 0;
}
int b_to_i(const char* string)
{
	int num = 0;
	int length = strlen(string);
	int weiquan = 1;									 //位权

	for (int index = length - 1; index >= 0; index--)
	{
		int temp = *(string + index) - '0';  //得到每位是0还是1

		num += temp * weiquan;

		weiquan *= 2;
	}

	return num;
}
char* i_to_bs(int zhengshu, char* string)//其实zhengshu变量中存的就是二进制数，现在函数要将其放入数组中显示出来
{
	const static int size = CHAR_BIT * sizeof(int);

	for (int i = size - 1; i >= 0; i--, zhengshu >>= 1)
	{
		*(string + i) = (0x1 & zhengshu) + '0';//从数组的最后一个元素开始赋值		1 & zhengshu计算后就是最后一位二进制数的值		+ '0'作用是转化成字符数据好存入字符数组中
	}
	*(string + size) = '\0';//本系统下erjinzhi[32]='\0'

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
//命令行运行：D:\CODE\C_CODE\C Primer Plus Code practice\chapter 15\code3\Project3\x64\Debug
//Project3.exe 01001001 00000001
#endif


//3.
#if 0
int dakaiwei_shuliang(int);
int main(void)
{
	int num;
	int fanhuizhi;

	printf("请输入一个整数：");
	scanf("%d", &num);

	fanhuizhi = dakaiwei_shuliang(num);
	printf("打开%d位", fanhuizhi);

	return 0;
}
int dakaiwei_shuliang(int num)
{
	int count = 0;

	for (int i = 0; i < 32; i++, num >>= 1)							//i表示正在处理的是第x号位
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

	printf("请输入一个整数：");
	scanf("%d", &num);
	printf("请输入一个指定的位的位号：");
	scanf("%d", &position);

	fanhuizhi = panduanwei(num, position);
	printf("%s", fanhuizhi == 1 ? "该位为1" : "该位为0");

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
//法二：先根据位的位置，设置好掩码，再利用位逻辑运算符的检查位值的功能，对该位置的值进行检查
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

	printf("请输入一个非负整数：");
	scanf("%d", &num);
	i_to_bs(num, erjinzhi);
	printf("该整数对应的二进制数据是：\n");
	show(erjinzhi);

	printf("请输入要循环左移的位的数量：");
	int zuoyi;
	scanf("%d", &zuoyi);

	unsigned int fanhui = rotate_l(num, zuoyi);
	i_to_bs(fanhui, erjinzhi);
	printf("该整数循环左移%d位后对应的二进制数据是：\n", zuoyi);
	show(erjinzhi);

	return 0;
}
//法一：要移动几位，就把最左侧的几位的值都拷贝到int类型的变量当中，最后原数据移动好后再与变量进行按位或运算。
unsigned int rotate_l(unsigned int x, int zuoyi)
{
	//int temp[zuoyi+1];//无效
	//int* temp =(int *) malloc(zuoyi*sizeof());//无法声明一个指针指向位类型，所以不用malloc()

	unsigned int y, temp1, temp2;
	y = x;														//x的值先拷贝一份给y
	temp2 = 0;

	for (int i = 0; i < zuoyi; i++, y <<= 1)
	{
		temp1 = y;
		temp1 &= 0x80000000;					//1000 0000 0000 0000 0000 0000 0000 0000
		//temp2 |= temp1 >> (31 - i);			//错误：若左侧数据是1000，要移动4位，则temp2右侧是0001

		temp1 >>= 31;									//先把最高位的值移到最低位
		temp2 |= temp1 << (zuoyi - i - 1);			//*********************注*************************************************************************
	}																//若移动2位，则先左移1位，再左移0位。若左侧数据是1000，要移动4位，则temp2右侧是1000

	x <<= zuoyi;
	x |= temp2;

	return x;
}
//法二：根据移出的最高位的值是1还是0，跳转到不同的分支语句。
#if 0
unsigned int rotate_l(unsigned int x, int zuoyi)
{
	for (int i = 0; i < zuoyi; i++)
	{
		if (x & 0x80000000)//先判断最高位的值		或写为：if(x&(1<<31))
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
		*(string + i) = (0x1 & zhengshu) + '0';//从数组的最后一个元素开始赋值		1 & zhengshu计算后就是最后一位二进制数的值		+ '0'作用是转化成字符数据好存入字符数组中
	}
	*(string + size) = '\0';//本系统下erjinzhi[32]='\0'

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
//unsigned int 本系统用32位存储，范围是0~4294967295，测试程序的数字可以是2294967295
#endif


//6.
#if 0
struct ziticanshu								//字体参数
{
	unsigned int ziti_id : 8;				//0~7号位，范围0~255
	unsigned int ziti_daxiao : 7;		//8~14号位，范围0~127
	unsigned int : 1;							//15号位(即第16位)用未命名字段填空隙
	unsigned int duiqi : 2;				//16~17号位，范围0~3
	unsigned int jiacu : 1;				//18号位，范围0~1
	unsigned int xieti : 1;					//19号位，范围0~1
	unsigned int xiahuaxian : 1;		//20号位，范围0~1
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

	int count = 0;//用来计数运行次数，其值的奇偶性可以用来切换开关状态
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
			count % 2 == 0 ? (attribute.jiacu = 1) : (attribute.jiacu = 0);//*****注*****括号必须要加

			//法二：**********一位数据可以直接使用非逻辑运算符************
			/*attribute.jiacu = !attribute.jiacu;*/
			break;
		case 'i':
			count % 2 == 0 ? (attribute.xieti = 1) : (attribute.xieti = 0);//*****注*****括号必须要加
			break;
		case 'u':
			count % 2 == 0 ? (attribute.xiahuaxian = 1) : (attribute.xiahuaxian = 0);//*****注*****括号必须要加
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
		printf("输入有误，请重新输入！");
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

	num = num & 0x7f;							//最终值被修改为1个7位数据
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
		printf("输入有误，请重新输入！");
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

	num = num & 0xff;							//最终值被修改为1个8位数据
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
	attribute |= 0x00000;				//[00] 0000 0000 0000 0000			对齐
	attribute |= 0x000000;			  //[0]00 0000 0000 0000 0000			加粗
													//[0]000 0000 0000 0000 0000			斜体
												 //[0] 0000 0000 0000 0000 0000			下划线
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
			attribute ^= 0x40000;//切换位
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
		printf("输入有误，请重新输入！");
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

	num = num & 0x7f;							//最终值被修改为1个7位数据

	num <<= 8;

	*xinxi &= ~(0x7f00);							//先清零
	*xinxi |= num;										//再置位
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
		printf("输入有误，请重新输入！");
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
		*xinxi &= ~(0x30000);					//先清零
		*xinxi |= 0x10000;							//再置位
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

	num = num & 0xff;							//最终值被修改为1个8位数据

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


//编译器的作用——在预处理之前对程序进行翻译，即1.字符映射到源字符集2.删除反斜杠+[Enter]的实例3.把文本划分成三类序列
#if 0
int/*这看起来不是一个空格*/ceshi;
int main(void)
{
	printf("这是一个\
长文本");

	return 0;
}
#endif


//#define预处理指令的用法
#if 0
#define TWO 2
#define FOUR TWO*TWO
#define DAYIN1 printf("X的值为%d\n",X)
#define DAYIN2 "X的值是%d\n"
const char* p = "X的值是%d\n";
#define MINYAN "consistency is the last refuge of the unimag\
native"																													//反斜杠+[Enter]把该定义延伸到下一行

int main(void)
{
	int X = TWO;
	DAYIN1;

	X = FOUR;
	printf(DAYIN2, X);			//法一
	printf(p, X);						//法二


	printf("%s\n", MINYAN);
	printf("TWO:MINYAN\n");

	return 0;
}
#endif


//使用带参数的宏
#if 0
#define SQUARE(X)				X*X
#define DAYIN(X)					printf("结果是：%d\n",X)

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
	DAYIN(SQUARE(x + 2));				//宏展开后：x+2*x+2=17

	printf("100/SQUARE(2) :");
	DAYIN(100 / SQUARE(2));			//宏展开后：100/2*2=100

	printf("x=%d\n", x);
	printf("SQUARE(++x) :");
	DAYIN(SQUARE(++x));				//宏展开后：++x  *  ++x   求值是未定义行为

	printf("递增后，x=%d\n", x);

	return 0;
}
#endif


//用#运算符把宏形参替换为实参字符串后进行字符串组合
#if 0
#define DAYIN(x)			printf("计算"#x"的平方是：%d\n",((x)*(x)))
#define DAYIN1(x)			printf("计算#x的平方是：%d\n",((x)*(x)))				//******注******   #x被视为普通文本，而不是个可替换的记号

int main(void)
{
	int y = 5;

	DAYIN(y);
	DAYIN(2 + 4);

	DAYIN1(y);

	return 0;
}
#endif


//用##运算符把宏形参替换为实参后进行记号组合
#if 0
#define X(n)							x##n
#define DAYIN_X(n)				printf("x"#n"=%d\n",x##n)

int main(void)
{
	int X(1) = 1;							//即int x1=1;
	int X(2) = 2;

	DAYIN_X(1);						//即printf("x1=%d\n",x1);
	DAYIN_X(2);

	return 0;
}
#endif


//使用变参宏
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


//使用条件编译来标记C语句块
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


//预定义宏和预定义标识符__func__
#if 0
#line 1																//重置行信息，即下一行行号为1
void function(void);

int main(void)
{
	//printf("C标准是%ld\n", __STDC_VERSION__);

	printf("文件名为%s\n", __FILE__);

	printf("日期是%s\n", __DATE__);
	printf("时间是%s\n", __TIME__);

	printf("此行的行号是%d\n", __LINE__);
	printf("正在执行的函数是%s\n", __func__);
	function();

	return 0;
}
void function(void)
{
	printf("此行的行号是%d\n", __LINE__);
	printf("正在执行的函数是%s\n", __func__);
}
#endif


//泛型选择表达式(此IDE不支持)
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
	printf("%s\n", GENERIC(&num));				//&num类型是int*

	return 0;
}
#endif


//使用内联函数
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


//把直角坐标转化成极坐标（传递并返回结构法）
#if 0
#include <math.h>
#define RAD_TO_DEG				(180/(4*atan(1)))				//弧度转化成角度的公式
typedef struct
{
	double jijin;					//极径
	double jijiao;					//极角(角度制)
}JIZUOBIAO;
typedef struct
{
	double x;
	double y;
}ZHIJIAOZUOBIAO;

JIZUOBIAO zhuanhuan(ZHIJIAOZUOBIAO zhijiaozuobiao);

int main(void)
{
	ZHIJIAOZUOBIAO input;																	//结构1
	JIZUOBIAO result;																				//结构2

	puts("请输入直角坐标下x和y的值(输入q以退出)：");
	while (scanf("%lf%lf", &input.x, &input.y) == 2)
	{
		result = zhuanhuan(input);
		printf("极径：%.2lf		极角：%.2lf\n", result.jijin, result.jijiao);
		puts("请输入直角坐标下x和y的值(输入q以退出)：");
	}

	return 0;
}
JIZUOBIAO zhuanhuan(ZHIJIAOZUOBIAO zhijiaozuobiao)				//结构3
{
	JIZUOBIAO temp;																				//结构4
	temp.jijin = sqrt(zhijiaozuobiao.x * zhijiaozuobiao.x + zhijiaozuobiao.y * zhijiaozuobiao.y);
	//temp.jijiao = RAD_TO_DEG * atan2(zhijiaozuobiao.x,zhijiaozuobiao.y);  //错误，应改为y轴的值除以x轴的值
	temp.jijiao = RAD_TO_DEG * atan2(zhijiaozuobiao.y, zhijiaozuobiao.x);

	return temp;
}
#endif


//把直角坐标转化成极坐标（传递结构地址法）
#if 0
#include <math.h>
#define RAD_TO_DEG				(180/(4*atan(1)))				//弧度转化成角度的公式
typedef struct
{
	double jijin;					//极径
	double jijiao;					//极角(角度制)
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

	puts("请输入直角坐标下x和y的值(输入q以退出)：");
	while (scanf("%lf%lf", &input.x, &input.y) == 2)
	{
		zhuanhuan(&input, &result);
		printf("极径：%.2lf		极角：%.2lf\n", result.jijin, result.jijiao);
		puts("请输入直角坐标下x和y的值(输入q以退出)：");
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


//利用泛型选择表达式来定义泛型类函数宏
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


//使用atexit()
#if 0
#include <stdlib.h>

void sign_off(void);
void too_bad(void);

int main(void)
{
	int n;

	atexit(sign_off);//注册sign_off()函数，sign_off是函数指针
	puts("请输入一个整数：");
	if (scanf("%d", &n) != 1)
	{
		puts("这不是整数！");
		atexit(too_bad);//注册too_bad()函数
		exit(EXIT_FAILURE);//执行到此处时，因为已经注册了sign_off和too_bad函数，exit()会从新到旧(先入先出)地执行这些函数
	}
	printf("%d是%s\n", n, (n % 2) == 0 ? ("偶数") : ("奇数"));

	return 0;						//	主函数执行完后会隐式调用exit()
}
void sign_off(void)
{
	puts("程序退出");
}
void too_bad(void)
{
	puts("程序中途退出");
}
#endif


//使用qsort()函数排序一组数字
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
	srand((unsigned int)time(0));			/* 随机种子 */
	fill_array(shuzu, SIZE);

	puts("数组中的随机数如下");
	show_array(shuzu, SIZE);

	qsort(shuzu, SIZE, sizeof(double), mycompare);

	puts("数组中的随机数排序完成后如下");
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
	//法一：
		//if (*((const double*)p1) < *((const double*)p2))
		//	return -1;
		//else if (*((const double*)p1) == *((const double*)p2))
		//	return 0;
		//else
		//	return 1;

	//法二：
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


//使用assert()
#if 0
#include <math.h>
#include <assert.h>
//#define NDEBUG

int main(void)
{
	double x, y, z;

	puts("请输入一对数字(输入0 0以退出程序)：");
	while (scanf("%lf%lf", &x, &y) == 2 && (x != 0 || y != 0))
	{
		z = x * x - y * y;
		assert(z >= 0);//对表达式求值，若为假，就中止程序，并显示出问题的行号
		printf("答案是：%.2lf\n", sqrt(z));
	}

	return 0;
}
#endif


//使用_Static_assert()   (此IDE不支持)
#if 0
#include <math.h>
#include <limits.h>
_Static_assert(CHAR_BIT == 16, "错误的一字节的位数");

int main(void)
{
	double x, y, z;

	puts("请输入一对数字(输入0 0以退出程序)：");
	while (scanf("%lf%lf", &x, &y) == 2 && (x != 0 || y != 0))
	{
		z = x * x - y * y;
		printf("答案是：%.2lf\n", sqrt(z));
	}

	return 0;
}
#endif


//使用memcpy()和memmove()
#if 0
#include <string.h>
#define SIZE 10

void show_array(const int* p, int n);

int main(void)
{
	int source[SIZE] = { 1,2,3,4,5,6,7,8,9,10 };
	int target[SIZE];

	double ceshi[SIZE / 2] = { 1.0,2.0,3.0,4.0,5.0 };

	puts("使用memcpy()：");
	puts("源字符数组内容：");
	show_array(source, SIZE);

	memcpy(target, source, SIZE * sizeof(int));
	puts("目标字符数组内容：");
	show_array(target, SIZE);

	puts("\n使用memmove()（两个内存区域有重叠的情况）：");
	memmove(target + 2, target, 5 * sizeof(int));
	puts("目标字符数组的第1至5个元素拷贝到目标数组的第3至7个元素：");
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


//变参函数
#if 0
#include <stdarg.h>
double sum(int lim, ...);							//1.函数原型至少一个形参和一个省略号

int main(void)
{
	double result1, result2;

	result1 = sum(3, 1.1, 2.5, 13.3333333);
	result2 = sum(6, 1.1, 2.1, 13.1, 4.1, 5.1, 6.1);

	printf("sum(3,1.1,2.5,13.3)=				%g\n", result1);
	printf("sum(6, 1.1, 2.1, 13.1,4.1,5.1,6.1)=		%g\n", result2);

	return 0;
}
double sum(int lim, ...)							//lim是parmN形参，其值为传入的实参的数量
{
	va_list ap;											//2.声明一个存储省略号部分的数据对象ap
	va_start(ap, lim);									//3.实参的数据拷贝到ap(把ap初始化为参数列表)

	double total = 0;
	for (int i = 0; i < lim; i++)
		total += va_arg(ap, double);			//4.访问参数列表的内容

	va_end(ap);											//5.用宏完成清理工作(释放动态分配的用于存储参数的内存)

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


//复习题
//2.(修改前)
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
//2.(修改后)
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
//3.改正
#if 0
#define	MIN(X,Y)			(	(X)>(Y)?(Y):(X)	  )
#endif


//4.
#if 0
#define EVEN_GT(X,Y)		(	(	(X)%2==0	)&&(	 (X)>(Y) 	)	)?1:0
#endif
//4.改正
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
#define PR_DATE		printf("日期是：%s",__DATE__)

int main(void)
{
#ifdef PR_DATE
	PR_DATE;
#endif
	return 0;
}
#endif
//法二：
#if 0
#define PR_DATE	

int main(void)
{
#ifdef PR_DATE
	printf("日期是：%s", __DATE__);
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
	srand((unsigned int)time(0));			/* 随机种子 */

	fill_array(shuzu, SIZE);

	puts("数组中的随机数如下");
	show_array(shuzu, SIZE);

	qsort(shuzu, SIZE, sizeof(int), mycompare);

	puts("数组中的随机数排序完成后如下");
	show_array(shuzu, SIZE);

	return 0;
}
void fill_array(int* p, int num)
{
	for (int index = 0; index < num; index++)
	{
		*(p + index) = (int)rand() % 1000 + 1;//值控制在1至1000
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

	if (*a1 < *a2)										//要求降序排序
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

	srand((double)time(0));			/* 随机种子 */
	fill_array(data2, SIZE);

	puts("data2数组内容：");
	show_array(data2, SIZE);

	puts("把data2的前100个元素拷贝到data1中：");
	memcpy(data1, data2, SIZE / 3 * sizeof(double));
	puts("data1数组内容：");
	show_array(data1, SIZE / 3);
	puts("把data2的后100个元素拷贝到data1中：");					//*****注*****后100个元素即第201至第300个元素
	memcpy(data1, data2 + 200, SIZE / 3 * sizeof(double));     //data2+200也可写作&data2[200]
	puts("data1数组内容：");
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


//编程练习
//1.
#if 0
int main(void)
{
	printf("touwenjian.h中包含了stdio.h头文件\n");

	return 0;
}
#endif


//2.
#if 0
#define TIAOHE_PINJUNSHU(X,Y)			(	2*(x)*(y)	)/(		 (x)+(y)	)			
//法二：
//#define TIAOHE_PINJUNSHU(X,Y)			(	1/(	(1/(x)+1/(y)	)	/2		)	)

int main(void)
{
	double x, y, result;

	printf("请输入x和y的值(输入0 0以退出程序)：");
	while (scanf("%lf%lf", &x, &y) == 2 && (x != 0 || y != 0))
	{
		result = TIAOHE_PINJUNSHU(x, y);
		printf("%.2lf和%.2lf的调和平均数是%.2lf\n", x, y, result);
		printf("请输入x和y的值(输入0 0以退出程序)：");
	}

	return 0;
}
#endif


//3.
#if 0
#include <math.h>
#define DEG_TO_RAD				((4*atan(1))/180)				//角度转化成弧度的公式
typedef struct
{
	double jijin;					//极径
	double jijiao;					//极角(角度制)
}JIZUOBIAO;
typedef struct
{
	double x;
	double y;
}ZHIJIAOZUOBIAO;

ZHIJIAOZUOBIAO zhuanhuan(JIZUOBIAO jizuobiao);

int main(void)
{
	JIZUOBIAO input;																							//结构1
	ZHIJIAOZUOBIAO result;																				//结构2

	puts("请输入极坐标下向量的模和角度(单位：度)的值(输入q以退出)：");
	while (scanf("%lf%lf", &input.jijin, &input.jijiao) == 2)
	{
		result = zhuanhuan(input);
		printf("x坐标：%.2lf		y坐标：%.2lf\n", result.x, result.y);
		puts("请输入极坐标下向量的模和角度(单位：度)的值(输入q以退出)：");
	}

	return 0;
}
ZHIJIAOZUOBIAO zhuanhuan(JIZUOBIAO jizuobiao)									//结构3
{
	ZHIJIAOZUOBIAO temp;																				//结构4
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

	printf("请输入要延时的时间(单位：秒)：");
	scanf("%lf", &time);
	delay(time);
	printf("\n延时已完成！\n");

	return 0;
}
void delay(double time)
{
	double clock_start = (double)clock();
	int i;

	while (((double)clock() - clock_start) / CLOCKS_PER_SEC < time)//CLOCKS_PER_SEC：每秒钟处理器时钟滴答次数(每秒钟处理器的时间单位的数量)
	{
		for (i = 0; i < 0xfff; i++)
			continue;
	}
}
//法二：
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
//	*****注*****
//也可以使用Sleep(1000);							//延时1000毫秒		//前提：#include <windows.h>


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
	printf("请输入选取次数(1~6)：");
	while (scanf("%d", &cishu) == 1)
	{
		if (cishu < 1 || cishu>6)
		{
			printf("错误！请输入选取次数(1~6)：");
			continue;
		}
		srand((int)time(0));
		dayin(shuzu, SIZE, cishu);
	}

	return 0;
}
//法一：对元素个数为cishu的值的temp数组随机赋值(即索引值)，然后判断是否有重复的值，若有则重新赋值
//赋完值之后一次性打印信息
#if 0
void dayin(int* p, int num, int cishu)
{
	int* temp = (int*)malloc(cishu * sizeof(int));//用动态内存分配，创建temp[cishu]

step1:	for (int index = 0; index < cishu; index++)
{
	*(temp + index) = ((int)rand() % num);//索引值控制在0至num(即SIZE的值)
	//printf("%3d", *(temp + index));	//检测值
}

//putchar('\n');

int index1, index2, biaoji = 0;
for (index1 = 0; index1 < cishu - 1; index1++)//遍历数组中的元素，若有重复值，标记置1
{
	for (index2 = index1 + 1; index2 < cishu; index2++)
		if (*(temp + index1) == *(temp + index2))
			biaoji = 1;
}

if (biaoji)
goto step1;

printf("索引值的最终结果：\n");
for (int index = 0; index < cishu; index++)
{
	printf("%3d", *(temp + index));
}
putchar('\n');

printf("从数组中选择的数值为：\n");
for (int index = 0; index < cishu; index++)
{
	printf("%3d", *(p + *(temp + index)));
}
putchar('\n');

free(temp);
}
#endif
//法二：对元素个数为num的值的biaoji数组随机赋值(即索引值)，biaoji数组索引值对应的元素值置1，然后下次赋值时
//判断赋的索引值对应的元素值是否为1，若为1则重新赋值(即索引值)
//每赋一次值打印一次信息(也可以赋完值之后一次性打印信息)
#if 1
void dayin(int* p, int num, int cishu)
{
	int* biaoji = (int*)malloc(num * sizeof(int));//用动态内存分配，创建biaoji[num]

	for (int i = 0; i < num; i++)
		*(biaoji + i) = 0;											//biaoji数组元素先全部赋为0，若不这么做，则数组中都为垃圾值

	int index;

	while (cishu > 0)
	{
		index = rand() % num;

		if (biaoji[index] != 0)									//先利用biaoji数组判断索引值是否已被使用
			continue;
		else
			biaoji[index] = 1;

		//每赋一次值打印一次信息
		//printf("选择的索引值是%d	数值为%d：\n",index,*(p+index));

		cishu--;
	}

	//赋完值之后一次性打印信息
	for (int i = 0; i < num; i++)
	{
		if (biaoji[i] == 1)
			printf("选择的索引值是%d	数值为%d：\n", i, *(p + i));
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

	puts("结构数组中的内容如下");
	show(staff, 6);

	qsort(staff, 6, sizeof(struct names), mycompare);

	puts("结构数组中的内容排序完成后如下");
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
	if (a = strcmp(a1->last, a2->last))//先比较姓
	{
		if (a == 1)
			return 1;
		else
			return -1;
		//法二：
		//return a;
	}
	return strcmp(a1->first, a2->first);//后比较名
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
double* new_d_array(int n, ...)				//1.函数原型、函数声明至少一个形参和一个省略号
{
	double* p = (double*)malloc(n * sizeof(double));

	va_list temp;										//2.声明一个存储省略号部分的数据对象temp
	va_start(temp, n);								//3.实参的数据拷贝到temp(把temp初始化为参数列表)

	for (int i = 0; i < n; i++)
		*(p + i) = va_arg(temp, double);		//4.访问参数列表的内容

	va_end(temp);										//5.用宏完成清理工作(释放动态分配的用于存储参数的内存)

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


//第17章
//程序清单17.1		使用结构数组来存储数据
#if 0
#define LENGTH	45   //存储影片片名的最大长度
#define MAX			500//存储影片的最大数量

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

	puts("请输入电影的标题：");
	while (jishu < MAX && s_gets(movies[jishu].title, LENGTH) != NULL && movies[jishu].title[0] != '\0')
	{
		puts("请输入您的评分(0-10)：");
		scanf("%d", &movies[jishu].rating);

		while (getchar() != '\n')
			continue;

		jishu++;
		puts("请输入下一个电影的标题(输入^Z或空行以退出)：");
	}

	puts("以下是电影目录：");
	for (int index = 0; index < jishu; index++)
		printf("电影名:%-20s电影评分:%d\n", movies[index].title, movies[index].rating);

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


//使用结构和动态内存分配，节省运行时使用的内存空间
#if 0
#include <stdlib.h>//malloc()

#define LENGTH	45//存储影片片名的最大长度

struct film
{
	char title[LENGTH];
	int rating;
};
char* s_gets(char* string, int num);

int main(void)
{
	int max;
	printf("请输入您要写入的电影数量\n");
	scanf("%d", &max);

	while (getchar() != '\n')
		continue;

	struct film* movies = (struct film*)malloc(max * sizeof(struct film));
	//创建movies[max]指针数组，内含max个指针，都是指向film结构布局的指针
	int jishu = 0;

	puts("请输入电影的标题：");
	while (jishu < max && s_gets((*(movies + jishu)).title, LENGTH) != NULL && movies[jishu].title[0] != '\0')
	{
		puts("请输入您的评分(0-10)：");
		scanf("%d", &movies[jishu].rating);

		while (getchar() != '\n')
			continue;

		jishu++;
		puts("请输入下一个电影的标题(输入^Z或空行以退出)：");
	}

	puts("以下是电影目录：");
	for (int index = 0; index < jishu; index++)
		printf("电影名:%-20s电影评分:%d\n", movies[index].title, movies[index].rating);

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


//程序清单17.2		使用结构链表来表示数据
#if 0
#include <stdlib.h>//malloc()

#define LENGTH 45

struct film
{
	char title[LENGTH];
	int rating;
	struct film* next;															//1.当创建新结构时，可以把该结构的地址存储在上一个结构中
};

char* s_gets(char* string, int num);

int main(void)
{
	struct film* head = NULL;												//2.需要一个单独的指针存储第一个结构的地址(即头指针)
	struct film* previous = 0x00, * current;							//3.定义一个以film结构布局的结构变量previous和current，并对previous初始化

	char input[LENGTH];
	puts("请输入电影的标题：");
	while (s_gets(input, LENGTH) != NULL && input[0] != '\0')
	{
		current = (struct film*)malloc(sizeof(struct film));	//4.若用户输入内容到临时存储区(input数组)，则分配一个结构的空间，
																							//	并将该结构的地址赋给结构指针current
		if (head == NULL)														//5.判断若处理的是第一个结构，则把第一个结构的地址存入头指针
			head = current;
		else
			previous->next = current;							  	    //6.若处理的不是第一个结构，则结构指针previous指向的next成员(next也是个结构指针)存当前分配的结构的地址

		current->next = NULL;												//7.表示当前结构是链表的最后一个结构
		strcpy(current->title, input);

		puts("请输入您的评分(0-10)：");
		scanf("%d", &current->rating);

		while (getchar() != '\n')
			continue;

		puts("请输入下一个电影的标题(输入^Z或空行以退出)：");
		previous = current;												    //8.previous指向当前结构的地址，而current要为下一次输入做好准备(用于存入新分配的结构的地址)
	}																						//*****注*****第6.和第8.对应起来看：6.中的previous->next其中的previous
																							//就是在下一次分配新结构时，当前结构将成为新结构的上一个结构

	/****************
	//第一个结构被创建后，head存第一个结构的地址，												   第一个结构的next成员先设为NULL，输入内容后，第一个结构的地址存入previous，
	//第二个结构被创建后，previous(即第一个结构)的next成员存第二个结构的地址，第二个结构的next成员先设为NULL，输入内容后，第二个结构的地址存入previous，
	//第三个结构被创建后，previous(即第二个结构)的next成员存第三个结构的地址，第三个结构的next成员先设为NULL，输入内容后，第三个结构的地址存入previous
																																																									   ****************/

	if (head == NULL)
		printf("无数据输入！\n");
	else
		puts("以下是电影目录：");

	current = head;																//9.用结构指针current从头开始遍历链表
	while (current != NULL)
	{
		printf("电影名:%-20s电影评分:%d\n", current->title, current->rating);
		current = current->next;
	}

	current = head;
	while (current != NULL)
	{
		head = current->next;												//10.current配合head，释放内存
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


//定义新类型的方法，用3步完成从抽象到具体的过程
//1.提供类型属性和相关操作的抽象描述(抽象地描述ADT)
//2.编写一个实现ADT的编程接口(如在list.h中指明如何存储数据和执行所需操作的函数)
//3.编写代码来实现接口(如在list.c中)，编写代码来使用接口(在main.c中)。
#if 0
//程序清单17.4		*****把接口应用于特定编程问题的源代码文件*****
#include <stdlib.h.>//exit()
#include <stdbool.h>
#include "list.h"

void showmovies(Item item);

char* s_gets(char* string, int num);

int main(void)
{
	P_Node movies;//创建一个指向Node结构布局的指针movies

	Item temp;//创建一个film结构布局的结构temp

//初始化链表的头指针
	InitializeList(&movies);
	if (ListIsFull(&movies))
	{
		fprintf(stderr, "错误，链表数量已达到最大值！");
		exit(1);
	}

	//获取用户输入并存储
	puts("请输入电影的标题：");
	while (s_gets(temp.title, LENGTH) != NULL && temp.title[0] != '\0')
	{
		puts("请输入您的评分(0-10)：");
		scanf("%d", &temp.rating);

		while (getchar() != '\n')
			continue;

		if (AddItem(temp, &movies) == false)
		{
			fprintf(stderr, "错误，分配内存失败！");
			break;
		}
		if (ListIsFull(&movies))
		{
			puts("链表数量已达到最大值！");
			break;
		}

		puts("请输入下一个电影的标题(输入^Z或空行以退出)：");
	}

	//显示
	if (ListIsEmpty(&movies))
		printf("没有数据输入！\n");
	else
	{
		printf("以下是电影目录\n");
		Traverse(&movies, showmovies);
	}
	printf("你输入了%d部电影\n", ListItemCount(&movies));

	//清理
	EmptyTheList(&movies);
	printf("再见！\n");

	return 0;
}
void showmovies(Item item)
{
	printf("电影名:%-20s电影评分:%d\n", item.title, item.rating);
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


//程序清单17.8		队列ADT
#if 0
#include <stdio.h>
#include "queue.h"

int main(void)
{
	Queue line;
	Item shuju;//queue.h中改为typedef int Item;
	char choice;

	InitializeQueue(&line);
	puts("**********测试接口**********");
	puts("输入a来添加数据，输入d来删除数据，输入q退出程序：");

	while ((choice = getchar()) != 'q')
	{
		if (choice != 'a' && choice != 'd')
			continue;

		if (choice == 'a')
		{
			printf("请输入要添加的整数数据：\n");
			scanf("%d", &shuju);
			if (!QueueIsFull(&line))
			{
				printf("已向队列中存入%d\n", shuju);
				AddQueue(shuju, &line);
			}
			else
				printf("队列已满！\n");
		}

		else if (choice == 'd')
		{
			if (QueueIsEmpty(&line))
				puts("队列为空，无法删除数据！");
			else
			{
				DeQueue(&shuju, &line);
				printf("在队列的第一个节点删除了数据：%d\n", shuju);
			}
		}

		printf("队列中存在%d个数据\n", QueueItemCount(&line));
		puts("输入a来添加数据，输入d来删除数据，输入q退出程序：");
	}

	EmptyTheQueue(&line);
	puts("再见！");

	return 0;
}
#endif


//程序清单17.9		用队列包来模拟 	咨询Sigmund的顾客	队列
#if 0
#include <stdio.h>
#include "queue.h"
#include <time.h>//time()
#include <stdlib.h>//srand()、rand()

#define MIN_PER_HOUR	60.0

bool newcustomer(double x);//是否有新顾客到来
Item customertime(long when);//设置顾客参数

int main(void)
{
	Queue line;//创建一个顾客队列
	int hours;//模拟的小时数
	int customers_per_hour;//平均每小时的顾客数量

	long cyclelimit;//循环计数器的上限
	double min_per_customers;//平均每个顾客到来所需时间

	int cycle;//循环计数器
	int turnaways = 0;//因队列节点数满而被拒的顾客数量
	int customers = 0;//加入队列的顾客数量
	Item temp;//临时存数项目(顾客参数)

	int wait_process_finished_time = 0;//当前仍需等待顾客咨询完毕的时间
	int in_queue_wait_time = 0;//被服务的顾客在队列中累计等待的时间
	int served = 0;//服务的顾客数量
	int sum_nodes = 0;//累计队列节点数

	InitializeQueue(&line);

	srand((unsigned int)time(0));/*初始化种子 */

	puts("**********咨询摊位的顾客数据研究**********");
	puts("请输入模拟的时长(单位：小时)：");
	scanf("%d", &hours);
	puts("请输入平均每小时的顾客数量：");
	scanf("%d", &customers_per_hour);
	cyclelimit = MIN_PER_HOUR * hours;
	min_per_customers = MIN_PER_HOUR / customers_per_hour;

	for (cycle = 0; cycle < cyclelimit; cycle++)
	{
		if (newcustomer(min_per_customers))//判断每分钟是否有顾客来
		{
			if (QueueIsFull(&line))
				turnaways++;
			else
			{
				customers++;
				temp = customertime(cycle);//在当前分钟数下新顾客的参数
				AddQueue(temp, &line);
			}
		}

		if (wait_process_finished_time <= 0 && !QueueIsEmpty(&line))//当队列中有顾客且摊位空闲时
		{											 //*****注*****
			DeQueue(&temp, &line);//排第一个的顾客在队列中被排除，其开始咨询(其数据赋给了temp)

			wait_process_finished_time = temp.processtime;//赋新的咨询花费的时间
			in_queue_wait_time += cycle - temp.arrive;//当前时间-加入队列的时间=当前排第一个的顾客在队列中等待的时间

			served++;
		}

		if (wait_process_finished_time > 0)
			wait_process_finished_time--;

		sum_nodes += QueueItemCount(&line);
	}

	if (customers > 0)
	{
		printf("%-10s%d\n", "到摊位的顾客人数：", customers);
		printf("%-10s%d\n", "服务的顾客人数：", served);
		printf("%-10s%d\n", "被拒的顾客人数：", turnaways);

		printf("%-10s%.2lf\n", "队列平均节点数：", (double)sum_nodes / cyclelimit);//平均每分钟排队的人数
		printf("%-10s%.2lf\n", "队列平均等待时间(单位：分钟)：", (double)in_queue_wait_time / served);//平均每个被服务的人要等待的时间
	}
	else
		puts("没有顾客！");

	EmptyTheQueue(&line);
	puts("程序模拟结束！");

	return 0;
}
bool newcustomer(double x)//是否有新顾客到来	//x：平均每个顾客到来所需时间
{
	if (rand() * x / RAND_MAX < 1)//RAND_MAX：rand()能产生的最大值
		return true;								//0<=rand()<=RAND_MAX
	else												//0<=rand()*x<=x*RAND_MAX
		return false;							//所以rand() * x / RAND_MAX范围是0~x
}														//根据客流的一般情况，x会大于1，
														//设置小于1，即小于1分钟(cycle计数器每次递增1分钟)
Item customertime(long when)//设置顾客参数
{
	Item jiegouticanshu;//结构体的参数

	jiegouticanshu.arrive = when;
	jiegouticanshu.processtime = rand() % 3 + 1;//rand() % 3 + 1范围1~3
	//以下写法错误：
	//jiegouticanshu.processtime = rand()*2/RAND_MAX + 1;//范围1~3(processtime声明为int类型)
																						//***注***只有当ran()=RAND_MAX时，结果才为3
	return jiegouticanshu;												//所以结果1、2、3的概率并不相同(其中3概率极小)
}																						//因此赋值的对象是int类型时，此语句慎用
#endif


//程序清单17.12		二叉树ADT
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
			printf("俱乐部里有%d只宠物\n", TreeItemCount(&pets));
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
	puts("再见！");

	return 0;
}
void menu(void)
{
	puts("Nerfville Pet Club Membership Program");
	puts("Enter the letter corresponding to your choice:");
	puts("a) 添加宠物 s) 显示宠物名单");
	puts("n) 计算宠物数量 f) 寻找宠物");
	puts("d) 删除一只宠物 q)退出");
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
		puts("请输入a、s、n、f、d或q");
		choice = tolower(getchar());
		while (getchar() != '\n')
			continue;
	}

	//或
	/*while ((choice = getchar()) != EOF)
	{
		while (getchar() != '\n')
			continue;
		choice = tolower(choice);

		if (strchr("asnfdq", choice) == NULL)
			puts("请输入a、s、n、f、d或q");
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
		puts("宠物数量已达到最大值！");
	else
	{
		puts("请输入宠物的名字：");
		s_gets(temp.petname, LENGTH);
		puts("请输入宠物的类型：");
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
		puts("没有输入内容！");
	else
		Traverse(ptree, dayin);
}
void dayin(Item item)
{
	printf("宠物名：%-19s，宠物类型：%-19s\n", item.petname, item.petkind);
}
void findpet(const Tree* ptree)
{
	Item temp;

	if (TreeIsEmpty(ptree))
	{
		puts("没有输入内容！");
		return;
	}

	puts("请输入您想搜索的宠物的名字：");
	s_gets(temp.petname, LENGTH);
	puts("请输入您想搜索的宠物的类型：");
	s_gets(temp.petkind, LENGTH);

	lowercase(temp.petname);
	lowercase(temp.petkind);

	printf("宠物名：%-19s，宠物类型：%-19s", temp.petname, temp.petkind);

	if (InTree(&temp, ptree))
		printf("在其中！\n");
	else
		printf("不在其中！\n");
}
void droppet(Tree* ptree)
{
	Item temp;

	if (TreeIsEmpty(ptree))
	{
		puts("没有输入内容！");
		return;
	}

	puts("请输入您想删除的宠物的名字：");
	s_gets(temp.petname, LENGTH);
	puts("请输入您想删除的宠物的类型：");
	s_gets(temp.petkind, LENGTH);

	lowercase(temp.petname);
	lowercase(temp.petkind);

	printf("宠物名：%-19s，宠物类型：%-19s", temp.petname, temp.petkind);

	if (DeleteItem(&temp, ptree))
		printf("已删除！\n");
	else
		printf("不在其中，无法删除！\n");
}
#endif
#endif


//chapter 17
//code2.c
#if 0
#include <stdio.h>

//17.11复习题
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


//17.12编程练习
//1.方法一：修改链表的定义
#if 0
#include <stdlib.h>//malloc()
#include <string.h>//strcpy()

#define LENGTH 45

struct film
{
	char title[LENGTH];
	int rating;
	struct film* previous;
	struct film* next;															//1.当创建新结构时，可以把该结构的地址存储在上一个结构中
};

char* s_gets(char* string, int num);

int main(void)
{
	struct film* head = NULL;												//2.需要一个单独的指针存储第一个结构的地址(即头指针)
	struct film* prev = 0x00, * current = 0x01;					//3.定义一个以film结构布局的结构变量prev和current，并对prev初始化

	char input[LENGTH];
	puts("请输入电影的标题：");
	while (s_gets(input, LENGTH) != NULL && input[0] != '\0')
	{
		current = (struct film*)malloc(sizeof(struct film));	//4.若用户输入内容到临时存储区(input数组)，则分配一个结构的空间，
																							//	并将该结构的地址赋给结构指针current
		if (head == NULL)														//5.判断若处理的是第一个结构，则把第一个结构的地址存入头指针
		{
			head = current;
			current->previous = NULL;//第一个节点之前的节点为NULL
														  //此语句不写不影响程序
		}
		else
		{
			prev->next = current;							  				//6.若处理的不是第一个结构，则结构指针prev指向的next成员(next也是个结构指针)存当前分配的结构的地址
			current->previous = prev;//第二个节点的previous指针存第一个节点的地址
		}
		current->next = NULL;												//7.表示当前结构是链表的最后一个结构

		strcpy(current->title, input);

		puts("请输入您的评分(0-10)：");
		scanf("%d", &current->rating);

		while (getchar() != '\n')
			continue;

		puts("请输入下一个电影的标题(输入^Z或空行以退出)：");
		prev = current;														    //8.prev指向当前结构的地址，而current要为下一次输入做好准备(用于存入新分配的结构的地址)
	}																						//*****注*****第6.和第8.对应起来看：6.中的prev->next其中的prev
																							//就是在下一次分配新结构时，当前结构将成为新结构的上一个结构

//struct film* temp = prev;//暂存current，即暂存最后一个节点的地址
	/*也可以写成*/struct film* temp = current;//前提条件：current先要初始化

	if (head == NULL)
		printf("无数据输入！\n");
	else
		puts("以下是电影目录：");

	current = head;																//9.用结构指针current从头开始遍历链表
	while (current != NULL)
	{
		printf("电影名:%-20s电影评分:%d\n", current->title, current->rating);
		current = current->next;
	}

	puts("以下是电影目录（逆序显示）：");

	while (temp != NULL)
	{
		printf("电影名:%-20s电影评分:%d\n", temp->title, temp->rating);
		temp = temp->previous;
	}


	//释放已分配的内存
	current = head;
	while (current != NULL)
	{
		head = current->next;												//10.current配合head，释放内存
		free(current);
		current = head;
	}
	//释放已分配的内存(法二)
		//while (head != NULL)
		//{
		//	current = head;//先把第一个节点的地址赋给current							
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
//1.方法二：用递归
#if 0
#include <stdlib.h>//malloc()
#include <string.h>//strcpy()

#define LENGTH 45

struct film
{
	char title[LENGTH];
	int rating;
	struct film* next;															//1.当创建新结构时，可以把该结构的地址存储在上一个结构中
};

char* s_gets(char* string, int num);
void show_reversed_order(struct film*);

int main(void)
{
	struct film* head = NULL;												//2.需要一个单独的指针存储第一个结构的地址(即头指针)
	struct film* prev = 0x00, * current;								//3.定义一个以film结构布局的结构变量prev和current，并对prev初始化

	char input[LENGTH];
	puts("请输入电影的标题：");
	while (s_gets(input, LENGTH) != NULL && input[0] != '\0')
	{
		current = (struct film*)malloc(sizeof(struct film));	//4.若用户输入内容到临时存储区(input数组)，则分配一个结构的空间，
																							//	并将该结构的地址赋给结构指针current
		if (head == NULL)														//5.判断若处理的是第一个结构，则把第一个结构的地址存入头指针
		{
			head = current;
		}
		else
		{
			prev->next = current;							  				//6.若处理的不是第一个结构，则结构指针prev指向的next成员(next也是个结构指针)存当前分配的结构的地址
		}
		current->next = NULL;												//7.表示当前结构是链表的最后一个结构

		strcpy(current->title, input);

		puts("请输入您的评分(0-10)：");
		scanf("%d", &current->rating);

		while (getchar() != '\n')
			continue;

		puts("请输入下一个电影的标题(输入^Z或空行以退出)：");
		prev = current;														    //8.prev指向当前结构的地址，而current要为下一次输入做好准备(用于存入新分配的结构的地址)
	}																						//*****注*****第6.和第8.对应起来看：6.中的prev->next其中的prev
																							//就是在下一次分配新结构时，当前结构将成为新结构的上一个结构

	if (head == NULL)
		printf("无数据输入！\n");
	else
		puts("以下是电影目录：");

	current = head;																//9.用结构指针current从头开始遍历链表

	struct film* temp = current;//暂存current，即暂存第一个节点的地址

	while (current != NULL)
	{
		printf("电影名:%-20s电影评分:%d\n", current->title, current->rating);
		current = current->next;
	}

	puts("以下是电影目录（逆序显示）：");
	show_reversed_order(temp);


	//释放已分配的内存
	current = head;
	while (current != NULL)
	{
		head = current->next;												//10.current配合head，释放内存
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
		p = p->next;									//***错误***：p值被改变后再递归，导致第一个节点的内容无法打印出来
		show_reversed_order(p);				//还导致最后一个节点的内容会被打印两遍
	}

	printf("电影名:%-20s电影评分:%d\n", p->title, p->rating);
}
*/
void show_reversed_order(struct film* p)
{
	if (p->next != NULL)
	{
		show_reversed_order(p->next);
	}

	printf("电影名:%-20s电影评分:%d\n", p->title, p->rating);
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
	P_Node movies;//创建一个P_Node结构布局的结构变量movies

	Item temp;//创建一个film结构布局的结构temp

//初始化链表的头指针
	InitializeList(&movies);
	if (ListIsFull(&movies))
	{
		fprintf(stderr, "错误，链表数量已达到最大值！");
		exit(1);
	}

	//获取用户输入并存储
	puts("请输入电影的标题：");
	while (s_gets(temp.title, LENGTH) != NULL && temp.title[0] != '\0')
	{
		puts("请输入您的评分(0-10)：");
		scanf("%d", &temp.rating);

		while (getchar() != '\n')
			continue;

		if (AddItem(temp, &movies) == false)
		{
			fprintf(stderr, "错误，分配内存失败！");
			break;
		}
		if (ListIsFull(&movies))
		{
			puts("链表数量已达到最大值！");
			break;
		}

		puts("请输入下一个电影的标题(输入^Z或空行以退出)：");
	}

	//显示
	if (ListIsEmpty(&movies))
		printf("没有数据输入！\n");
	else
	{
		printf("以下是电影目录\n");
		Traverse(&movies, showmovies);
	}
	printf("你输入了%d部电影\n", ListItemCount(&movies));

	//清理
	EmptyTheList(&movies);
	printf("再见！\n");

	return 0;
}
void showmovies(Item item)
{
	printf("电影名:%-20s电影评分:%d\n", item.title, item.rating);
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
	List movies;//创建一个List结构布局的结构变量movies

	Item temp;//创建一个film结构布局的结构temp

//初始化链表的头指针
	InitializeList(&movies);
	if (ListIsFull(&movies))
	{
		fprintf(stderr, "错误，元素数量已达到最大值！");
		exit(1);
	}

	//获取用户输入并存储
	puts("请输入电影的标题：");
	while (s_gets(temp.title, LENGTH) != NULL && temp.title[0] != '\0')
	{
		puts("请输入您的评分(0-10)：");
		scanf("%d", &temp.rating);

		while (getchar() != '\n')
			continue;

		if (AddItem(temp, &movies) == false)
		{
			fprintf(stderr, "错误，分配内存失败！");
			break;
		}
		if (ListIsFull(&movies))
		{
			puts("元素数量已达到最大值！");
			break;
		}

		puts("请输入下一个电影的标题(输入^Z或空行以退出)：");
	}

	//显示
	if (ListIsEmpty(&movies))
		printf("没有数据输入！\n");
	else
	{
		printf("以下是电影目录\n");
		Traverse(&movies, showmovies);
	}
	printf("你输入了%d部电影\n", ListItemCount(&movies));

	//清理
	EmptyTheList(&movies);
	printf("再见！\n");

	return 0;
}
void showmovies(Item item)
{
	printf("电影名:%-20s电影评分:%d\n", item.title, item.rating);
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
//方法一：创建队列数组，顾客随机进其中一个队列，用else if处理有一个摊位满时的情况
#if 0
#include <stdio.h>
#include "queue.h"
#include <time.h>//time()
#include <stdlib.h>//srand()、rand()

#define MIN_PER_HOUR	60.0

bool newcustomer(double x);//是否有新顾客到来
Item customertime(long when);//设置顾客参数

int main(void)
{
	Queue line[2];//创建一个顾客队列数组
	int hours;//模拟的小时数
	int customers_per_hour;//平均每小时的顾客数量

	long cyclelimit;//循环计数器的上限
	double min_per_customers;//平均每个顾客到来所需时间

	int cycle;//循环计数器
	int turnaways = 0;//因队列节点数满而被拒的顾客数量
	int customers = 0;//加入队列的顾客数量
	Item temp;//临时存数项目(顾客参数)

	int wait_process_finished_time_1 = 0;//第一个摊位当前仍需等待顾客咨询完毕的时间
	int wait_process_finished_time_2 = 0;//第二个摊位当前仍需等待顾客咨询完毕的时间

	int in_queue_wait_time_1 = 0;//被服务的顾客在队列中累计等待的时间
	int in_queue_wait_time_2 = 0;//被服务的顾客在队列中累计等待的时间

	int served_1 = 0;//服务的顾客数量
	int served_2 = 0;//服务的顾客数量

	int sum_nodes_1 = 0;//累计队列节点数
	int sum_nodes_2 = 0;//累计队列节点数

	int choice = 0;//顾客选择去哪个摊位

	InitializeQueue(&line[0]);
	InitializeQueue(&line[1]);

	srand((unsigned int)time(0));/*初始化种子 */

	puts("**********咨询摊位的顾客数据研究**********");
	puts("请输入模拟的时长(单位：小时)：");
	scanf("%d", &hours);
	puts("请输入平均每小时的顾客数量：");
	scanf("%d", &customers_per_hour);
	cyclelimit = MIN_PER_HOUR * hours;
	min_per_customers = MIN_PER_HOUR / customers_per_hour;

	for (cycle = 0; cycle < cyclelimit; cycle++)
	{
		if (newcustomer(min_per_customers))//判断每分钟是否有顾客来
		{
			if (QueueIsFull(&line[0]) && QueueIsFull(&line[1]))
				turnaways++;
			else
			{
				customers++;
				temp = customertime(cycle);//在当前分钟数下新顾客的参数

				if (!QueueIsFull(&line[0]) && !QueueIsFull(&line[1]))//当两个摊位队列都没满时，顾客随机选择去哪个摊位
				{
					choice = rand() % 2;//choice为0或1
					AddQueue(temp, &line[choice]);
				}
				else if (QueueIsFull(&line[0]))//当第一个摊位队列满时
				{
					AddQueue(temp, &line[1]);
				}
				else//当第二个摊位队列满时
				{
					AddQueue(temp, &line[0]);
				}

			}
		}

		if (wait_process_finished_time_1 <= 0 && !QueueIsEmpty(&line[0]))//当第一个摊位队列中有顾客且摊位空闲时
		{											 //*****注*****
			DeQueue(&temp, &line[0]);//排第一个的顾客在队列中被排除，其开始咨询(其数据赋给了temp)

			wait_process_finished_time_1 = temp.processtime;//赋新的咨询花费的时间
			in_queue_wait_time_1 += cycle - temp.arrive;//当前时间-加入队列的时间=当前排第一个的顾客在队列中等待的时间

			served_1++;
		}

		if (wait_process_finished_time_2 <= 0 && !QueueIsEmpty(&line[1]))//当第二个摊位队列中有顾客且摊位空闲时
		{											 //*****注*****
			DeQueue(&temp, &line[1]);//排第一个的顾客在队列中被排除，其开始咨询(其数据赋给了temp)

			wait_process_finished_time_2 = temp.processtime;//赋新的咨询花费的时间
			in_queue_wait_time_2 += cycle - temp.arrive;//当前时间-加入队列的时间=当前排第一个的顾客在队列中等待的时间

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
		printf("%-10s%d\n\n\n", "到摊位的顾客人数：", customers);

		printf("%-10s%d\n", "摊位1已服务的顾客人数：", served_1);
		printf("%-10s%.2lf\n", "摊位1队列平均节点数：", (double)sum_nodes_1 / cyclelimit);//平均每分钟排队的人数
		printf("%-10s%.2lf\n\n", "摊位1队列平均等待时间(单位：分钟)：", (double)in_queue_wait_time_1 / served_1);//平均每个被服务的人要等待的时间

		printf("%-10s%d\n", "摊位2已服务的顾客人数：", served_2);
		printf("%-10s%.2lf\n", "摊位2队列平均节点数：", (double)sum_nodes_2 / cyclelimit);//平均每分钟排队的人数
		printf("%-10s%.2lf\n\n\n", "摊位2队列平均等待时间(单位：分钟)：", (double)in_queue_wait_time_2 / served_2);//平均每个被服务的人要等待的时间


		printf("%-10s%d\n\n", "被拒的顾客人数：", turnaways);

	}
	else
		puts("没有顾客！");

	EmptyTheQueue(&line);
	puts("程序模拟结束！");

	return 0;
}
bool newcustomer(double x)//是否有新顾客到来	//x：平均每个顾客到来所需时间
{
	if (rand() * x / RAND_MAX < 1)//RAND_MAX：rand()能产生的最大值
		return true;								//0<=rand()<=RAND_MAX
	else												//0<=rand()*x<=x*RAND_MAX
		return false;							//所以rand() * x / RAND_MAX范围是0~x
}														//根据客流的一般情况，x会大于1，
														//设置小于1，即小于1分钟(cycle计数器每次递增1分钟)
Item customertime(long when)//设置顾客参数
{
	Item jiegouticanshu;//结构体的参数

	jiegouticanshu.arrive = when;
	jiegouticanshu.processtime = rand() % 3 + 1;//rand() % 3 + 1范围1~3
	//以下写法错误：
	//jiegouticanshu.processtime = rand()*2/RAND_MAX + 1;//范围1~3(processtime声明为int类型)
																						//***注***只有当ran()=RAND_MAX时，结果才为3
	return jiegouticanshu;												//所以结果1、2、3的概率并不相同(其中3概率极小)
}																						//因此赋值的对象是int类型时，此语句慎用
#endif
//4.
//方法二：创建含队列各项参数的结构布局的结构数组，
//顾客按照给定参数进入两个队列
#if 0
#include <stdio.h>
#include "queue.h"
#include <time.h>//time()
#include <stdlib.h>//srand()、rand()

#define MIN_PER_HOUR	60.0

struct 	booth_line
{
	Queue line;//创建一个顾客队列
	int hours;//模拟的小时数
	int customers_per_hour;//平均每小时的顾客数量

	long cyclelimit;//循环计数器的上限
	double min_per_customers;//平均每个顾客到来所需时间

	int cycle;//循环计数器
	int turnaways;//因队列节点数满而被拒的顾客数量
	int customers;//加入队列的顾客数量

	int wait_process_finished_time;//当前仍需等待顾客咨询完毕的时间

	int in_queue_wait_time;//被服务的顾客在队列中累计等待的时间

	int served;//服务的顾客数量
	int sum_nodes;//累计队列节点数
};

bool newcustomer(double x);//是否有新顾客到来
Item customertime(long when);//设置顾客参数

int main(void)
{
	struct booth_line  Booth_line[2] = { {.hours = 0},{.hours = 0} };

	Item temp;//临时存数项目(顾客参数)

	InitializeQueue(&Booth_line[0].line);
	InitializeQueue(&((Booth_line + 1)->line));

	srand((unsigned int)time(0));/*初始化种子 */

	puts("**********咨询摊位的顾客数据研究**********");
	puts("请输入摊位1模拟的时长(单位：小时)：");
	scanf("%d", &Booth_line[0].hours);
	puts("请输入平均每小时的顾客数量：");
	scanf("%d", &Booth_line[0].customers_per_hour);
	Booth_line[0].cyclelimit = MIN_PER_HOUR * Booth_line[0].hours;
	Booth_line[0].min_per_customers = MIN_PER_HOUR / Booth_line[0].customers_per_hour;

	puts("请输入摊位2模拟的时长(单位：小时)：");
	scanf("%d", &Booth_line[1].hours);
	puts("请输入平均每小时的顾客数量：");
	scanf("%d", &Booth_line[1].customers_per_hour);
	Booth_line[1].cyclelimit = MIN_PER_HOUR * Booth_line[1].hours;
	Booth_line[1].min_per_customers = MIN_PER_HOUR / Booth_line[1].customers_per_hour;

	for (int i = 0; i < 2; i++)
	{
		for (Booth_line[i].cycle = 0; Booth_line[i].cycle < Booth_line[i].cyclelimit; Booth_line[i].cycle++)
		{
			if (newcustomer(Booth_line[i].min_per_customers))//判断每分钟是否有顾客来
			{
				if (QueueIsFull(&Booth_line[i].line))
					Booth_line[i].turnaways++;
				else
				{
					Booth_line[i].customers++;
					temp = customertime(Booth_line[i].cycle);//在当前分钟数下新顾客的参数
					AddQueue(temp, &Booth_line[i].line);
				}
			}

			if (Booth_line[i].wait_process_finished_time <= 0 && !QueueIsEmpty(&Booth_line[i].line))//当摊位队列中有顾客且摊位空闲时
			{											 //*****注*****
				DeQueue(&temp, &Booth_line[i].line);//排第一个的顾客在队列中被排除，其开始咨询(其数据赋给了temp)

				Booth_line[i].wait_process_finished_time = temp.processtime;//赋新的咨询花费的时间
				Booth_line[i].in_queue_wait_time += Booth_line[i].cycle - temp.arrive;//当前时间-加入队列的时间=当前排第一个的顾客在队列中等待的时间

				Booth_line[i].served++;
			}

			if (Booth_line[i].wait_process_finished_time > 0)
				Booth_line[i].wait_process_finished_time--;

			Booth_line[i].sum_nodes += QueueItemCount(&Booth_line[i].line);
		}

		if (Booth_line[i].customers > 0)
		{
			printf("摊位%d\n", i + 1);
			printf("%-10s%d\n", "到摊位的顾客人数：", Booth_line[i].customers);

			printf("%-10s%d\n", "摊位已服务的顾客人数：", Booth_line[i].served);
			printf("%-10s%.2lf\n", "摊位队列平均节点数：", (double)Booth_line[i].sum_nodes / Booth_line[i].cyclelimit);//平均每分钟排队的人数
			printf("%-10s%.2lf\n", "摊位队列平均等待时间(单位：分钟)：", (double)Booth_line[i].in_queue_wait_time / Booth_line[i].served);//平均每个被服务的人要等待的时间

			printf("%-10s%d\n\n", "被拒的顾客人数：", Booth_line[i].turnaways);

		}
		else
			puts("没有顾客！");

		EmptyTheQueue(&Booth_line[i].line);
	}

	puts("程序模拟结束！");

	return 0;
}
bool newcustomer(double x)//是否有新顾客到来	//x：平均每个顾客到来所需时间
{
	if (rand() * x / RAND_MAX < 1)//RAND_MAX：rand()能产生的最大值
		return true;								//0<=rand()<=RAND_MAX
	else												//0<=rand()*x<=x*RAND_MAX
		return false;							//所以rand() * x / RAND_MAX范围是0~x
}														//根据客流的一般情况，x会大于1，
														//设置小于1，即小于1分钟(cycle计数器每次递增1分钟)
Item customertime(long when)//设置顾客参数
{
	Item jiegouticanshu;//结构体的参数

	jiegouticanshu.arrive = when;
	jiegouticanshu.processtime = rand() % 3 + 1;//rand() % 3 + 1范围1~3
	//以下写法错误：
	//jiegouticanshu.processtime = rand()*2/RAND_MAX + 1;//范围1~3(processtime声明为int类型)
																						//***注***只有当ran()=RAND_MAX时，结果才为3
	return jiegouticanshu;												//所以结果1、2、3的概率并不相同(其中3概率极小)
}																						//因此赋值的对象是int类型时，此语句慎用
#endif


//5.法一：堆栈的链接表示（利用单链表）
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
		fprintf(stderr, "错误，元素数量已达到最大值！");
		exit(1);
	}

	char temp2[MAX_STACK + 1];//创建temp2数组暂存输入的字符串

	int jishu;

	puts("请输入字符串：");//最多存10个字符
	scanf("%s", temp2);

	jishu = strlen(temp2);

	for (int index = 0; index < jishu; index++)
		temp1[index].data = temp2[index];//通过循环，给temp1结构数组的成员(即每个结构)的data成员赋字符

	for (int index = 0; index < jishu; index++)
	{
		if (PushItem(temp1[index], &shuju) == false)
		{
			fprintf(stderr, "错误，分配内存失败！");
			break;								//***注***
		}											//每次调用PushItem()时，数据都会自动存入下一个节点
		if (StackIsFull(&shuju))
		{
			puts("元素数量已达到最大值！");
			break;
		}
	}

	if (StackIsEmpty(&shuju))
		printf("没有数据输入！\n");
	else
	{
		printf("以下是栈中的字符数据：\n");
		Traverse(&shuju, show);
	}
	printf("你输入了%d个字符\n", StackItemCount(&shuju));

	printf("以下是从栈中弹出的字符数据：\n");
	while (!StackIsEmpty(&shuju))
	{
		PopItem(&temp1, &shuju);
		printf("%c\n", temp1[0]);
	}

	EmptyTheStack(&shuju);
	printf("再见！\n");

	return 0;
}
void show(Item item)
{
	printf("%c\n", item.data);
}
#endif
//法二：堆栈的顺序表示（利用数组）


//6.
#if 0
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 40

void fill_array(int* p, int n);
void show_array(const int* p, int n);
int mycompare(const void* p1, const void* p2);
bool find(int* zhengshu, int num, int search);//形参：指向数组的指针，数组元素个数，待查找的整数

int main(void)
{
	int shuzu[SIZE];
	srand((unsigned int)time(0));			/* 随机种子 */
	fill_array(shuzu, SIZE);

	puts("数组中的随机数如下");
	show_array(shuzu, SIZE);

	qsort(shuzu, SIZE, sizeof(int), mycompare);

	puts("数组中的随机数排序完成后如下");
	show_array(shuzu, SIZE);

	printf("请输入您要寻找的整数：");
	int search;
	scanf("%d", &search);
	if (find(shuzu, SIZE, search))
		printf("已找到！\n");
	else
		printf("未找到！\n");

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
	int head = 0, tail = num - 1, try = (head + tail) / 2;//try是索引值

	while (try >= head && try <= tail && num)
	{
		if (*(zhengshu + try) < search)//如果小了
		{
			head = try + 1;
			try = (head + tail) / 2;
		}
		else if (*(zhengshu + try) > search)//如果大了
		{
			tail = try - 1;
			try = (head + tail) / 2;
		}
		else
			return true;

		num--;//由于(head + tail) / 2最终结果会截断成整数，查找后期会导致索引值无变化，陷入死循环
	}			   //可以利用num值归0来跳出循环
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
	puts("再见！");
}
void addwords(Tree* ptree)
{
	Item temp;

	FILE* fp;
	char words[MAX];//用于在显示屏上显示内容
	//int zifujishu, index;//字符计数值，索引值
	char ch;
	int index = 0;

	if ((fp = fopen("17.12.7.txt", "a+")) == NULL)//读和写
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
		puts("单词数量已达到最大值，无法存入二叉树！");
	else
	{
		/*while (fscanf(fp, "%s", words) == 1)//从第一个非空白字符开始，到下一个空白字符之前的所有字符都是输入
		{
			zifujishu = strlen(words);
			for(index = 0; index < zifujishu; index++)
			{
				temp.danci[index] = words[index];
			}*/				//错误：存储的不是字符，而应该是字符串

			/*while (fscanf(fp, "%s", temp.danci) == 1)//从第一个非空白字符开始，到下一个空白字符之前的所有字符都是输入
			{
				temp.cishu = 1;//每个输入到danci的字符串，cishu都先设为0

				if (SeekItem(&temp, ptree).child != NULL)//当输入重复的字符串时
				{													//***注***SeekItem()改为外部函数，而不是静态函数
					SeekItem(&temp, ptree).child->item.cishu++;//找到树中该字符串所在的节点的地址，并对该项的cishu成员值增1
				}
				else//当输入不相同的字符串时
					AddItem(&temp, ptree);
			}*/					//瑕疵：polling和polling,   算两个单词，因为fscanf()判定逗号也是字符				


		while ((ch = getc(fp)) != EOF)//逐个字符读入
		{
			if (isalpha(ch))
			{
				temp.danci[index] = ch;
				index++;
			}
			else
			{
				temp.danci[index] = '\0';//处理为字符串
				index = 0;

				//*****注*****
				if (temp.danci[0] == '\0')//若输入的是逗号和空格，则逗号前的单词存入树，但是空格就跳转到对循环的测试表达式求值
					continue;

				temp.cishu = 1;//每个输入到danci的字符串，cishu都先设为0

				if (SeekItem(&temp, ptree).child != NULL)//当输入重复的字符串时
				{													//***注***SeekItem()改为外部函数，而不是静态函数
					SeekItem(&temp, ptree).child->item.cishu++;//找到树中该字符串所在的节点的地址，并对该项的cishu成员值增1
				}
				else//当输入不相同的字符串时
					AddItem(&temp, ptree);
			}
		}
	}

	//法二：用fscanf()，且SeekItem()仍保持为静态函数，只变动AddItem()函数
	//while (fscanf(fp, "%s", temp.danci) == 1)//逐个非空白字符串读入
	//{
	//	if (!isalpha(temp.danci[0]))//若输入的是空格标点符号空格
	//		continue;
	//	if (!isalpha(temp.danci[strlen(temp.danci) - 1]))//若输入字母和标点符号
	//		temp.danci[strlen(temp.danci) - 1] = '\0';
	//	temp.cishu = 1;
	//	AddItem(&temp, ptree);
	//}

	/*(tree.c文件中)
	bool AddItem(const Item* pitem, Tree* ptree)
	{
	Treenode* current;

	if (TreeIsFull(ptree))//判断是否达到设置的最大的节点数量
	{
		fprintf(stderr, "错误，树已满！\n");
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

	puts("以上单词已存入单词树 !");

	if (fclose(fp) != 0)
		fprintf(stderr, "关闭文件失败！\n");
}

void menu(void)
{
	puts("单词管理程序");
	puts("请输入您需要的功能前对应的单词：");
	printf("%-20s%20s\n", "a) 列出所有单词及其出现次数", " b) 查询单词在文件中出现的次数");
	printf("%-20s\n", "c）退出");
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
		puts("请输入a、b或c");
		choice = tolower(getchar());
		while (getchar() != '\n')
			continue;
	}

	//或
	/*while ((choice = getchar()) != EOF)
	{
		while (getchar() != '\n')
			continue;
		choice = tolower(choice);

		if (strchr("asnfdq", choice) == NULL)
			puts("请输入a、s、n、f、d或q");
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
		puts("没有输入内容！");
	else
		Traverse(ptree, dayin);
}

void dayin(Item item)
{
	printf("%-s%-30s %20s%-6d\n", "单词：", item.danci, "出现次数：", item.cishu);
}

void findwords(const Tree* ptree)
{
	Item temp;

	if (TreeIsEmpty(ptree))
	{
		puts("没有内容！");
		return;
	}

	puts("请输入您想搜索的单词：");
	s_gets(temp.danci, LENGTH);

	printf("%-s%-30s\n", "单词：", temp.danci);

	if (InTree(&temp, ptree))
	{
		printf("在其中！出现次数：%d\n", SeekItem(&temp, ptree).child->item.cishu);
	}
	else
		printf("不在其中！\n");
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
//命令行：D:\CODE\C_CODE\C Primer Plus Code practice\chapter 17\code3\Project3\x64\Debug
//Project3.exe
#endif


//8.法一：使用一维数组petkind，用strcat()拼接petkind
//实现petkind存储同名但不同种类的宠物的种类数据
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
			printf("俱乐部里有%d只宠物\n", TreeItemCount(&pets));
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
	puts("再见！");

	return 0;
}
void menu(void)
{
	puts("Nerfville Pet Club Membership Program");
	puts("Enter the letter corresponding to your choice:");
	puts("a) 添加宠物 s) 显示宠物名单");
	puts("n) 计算宠物数量 f) 寻找宠物");
	puts("d) 删除一只宠物 q)退出");
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
		puts("请输入a、s、n、f、d或q");
		choice = tolower(getchar());
		while (getchar() != '\n')
			continue;
	}

	//或
	/*while ((choice = getchar()) != EOF)
	{
		while (getchar() != '\n')
			continue;
		choice = tolower(choice);

		if (strchr("asnfdq", choice) == NULL)
			puts("请输入a、s、n、f、d或q");
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
		puts("宠物数量已达到最大值！");
	else
	{
		puts("请输入宠物的名字：");
		s_gets(temp.petname, LENGTH);
		puts("请输入宠物的类型：");
		s_gets(temp.petkind, LENGTH);

		lowercase(temp.petname);
		lowercase(temp.petkind);

		if (SeekItem(&temp, ptree).child)//找同名的宠物
		{
			find = strchr(SeekItem(&temp, ptree).child->item.petkind, '\0');
			*find = ',';
			*(find + 1) = '\0';

			strcat((SeekItem(&temp, ptree).child->item.petkind), temp.petkind);
			//strcpy((SeekItem(&temp, ptree).child->item.petkind)+5*n, temp.petkind);
			//n *= 2;
			/***为什么不能用strcpy实现数组内容的拷贝？***/
			//因为在'\0'的位置之后是垃圾值(垃圾值的值为0(即空字符)很常见)，所以即使指定在第6个元素的位置上拷贝了数据，它们之间的数据也不能打印出来
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
		puts("没有输入内容！");
	else
		Traverse(ptree, dayin);
}
void dayin(Item item)
{
	printf("宠物名：%-19s宠物类型：%-19s\n", item.petname, item.petkind);
}
void findpet(const Tree* ptree)
{
	Item temp;

	if (TreeIsEmpty(ptree))
	{
		puts("没有输入内容！");
		return;
	}

	puts("请输入您想搜索的宠物的名字：");
	s_gets(temp.petname, LENGTH);

	lowercase(temp.petname);

	printf("宠物名：%s的宠物", temp.petname);

	if (InTree(&temp, ptree))
	{
		printf("在其中！\n");
		printf("叫该名字的宠物类型有：%s\n", SeekItem(&temp, ptree).child->item.petkind);
	}
	else
		printf("不在其中！\n");
}
void droppet(Tree* ptree)
{
	Item temp;

	if (TreeIsEmpty(ptree))
	{
		puts("没有输入内容！");
		return;
	}

	puts("请输入您想删除的宠物的名字：");
	s_gets(temp.petname, LENGTH);
	puts("请输入您想删除的宠物的类型：");
	s_gets(temp.petkind, LENGTH);

	lowercase(temp.petname);
	lowercase(temp.petkind);

	printf("宠物名：%-19s，宠物类型：%-19s", temp.petname, temp.petkind);

	if (DeleteItem(&temp, ptree))
		printf("已删除！\n");
	else
		printf("不在其中，无法删除！\n");
}
#endif
//法一和法二的瑕疵：删除项函数不能只删除同名的某一种宠物

//8.法二：把Item结构布局的perkind成员改为二维数组以存储同名但不同种类的宠物的种类数据
//SeekItem()仍保持为静态函数，只变动AddItem()函数
//也要变动dayin()等函数的定义
#if 1
/*(tree_1.h文件中)
typedef struct
{
	char petname[LENGTH];
	char petkind[LENGTH][LENGTH];
}Item;
*/

/*(tree_1.c文件中)
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

/*(code3.c文件中)
void dayin(Item item)
{
	int i = 0;
	while (strlen(item.petkind[i]) > 0)
	{
		printf("宠物名：%-19s宠物类型：%-19s\n", item.petname, item.petkind);
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
			printf("俱乐部里有%d只宠物\n", TreeItemCount(&pets));
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
	puts("再见！");

	return 0;
}
void menu(void)
{
	puts("Nerfville Pet Club Membership Program");
	puts("Enter the letter corresponding to your choice:");
	puts("a) 添加宠物 s) 显示宠物名单");
	puts("n) 计算宠物数量 f) 寻找宠物");
	puts("d) 删除一只宠物 q)退出");
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
		puts("请输入a、s、n、f、d或q");
		choice = tolower(getchar());
		while (getchar() != '\n')
			continue;
	}

	//或
	/*while ((choice = getchar()) != EOF)
	{
		while (getchar() != '\n')
			continue;
		choice = tolower(choice);

		if (strchr("asnfdq", choice) == NULL)
			puts("请输入a、s、n、f、d或q");
		else
			break;
	}
	if(choice==EOF)
	choice='q'*/
	return choice;
}
void addpet(Tree* ptree)
{
	Item temp = { .petkind[0][0] = '\0' };//***注***必须要初始化！！！
	char* find;

	if (TreeIsFull(ptree))
		puts("宠物数量已达到最大值！");
	else
	{
		puts("请输入宠物的名字：");
		s_gets(temp.petname, LENGTH);
		puts("请输入宠物的类型：");
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
		puts("没有输入内容！");
	else
		Traverse(ptree, dayin);
}
//void dayin(Item item)
//{
//	printf("宠物名：%-19s宠物类型：%-19s\n", item.petname, item.petkind);
//}
void dayin(Item item)
{
	int i = 0;
	while (strlen(item.petkind[i]) > 0)
	{
		printf("宠物名：%-19s宠物类型：%-19s\n", item.petname, item.petkind[i]);
		i++;
	}
}
void findpet(const Tree* ptree)
{
	Item temp;

	if (TreeIsEmpty(ptree))
	{
		puts("没有输入内容！");
		return;
	}

	puts("请输入您想搜索的宠物的名字：");
	s_gets(temp.petname, LENGTH);

	lowercase(temp.petname);

	printf("宠物名：%s的宠物", temp.petname);

	if (InTree(&temp, ptree))
	{
		printf("在其中！\n");
	}
	else
		printf("不在其中！\n");
}
void droppet(Tree* ptree)
{
	Item temp;

	if (TreeIsEmpty(ptree))
	{
		puts("没有输入内容！");
		return;
	}

	puts("请输入您想删除的宠物的名字：");
	s_gets(temp.petname, LENGTH);
	puts("请输入您想删除的宠物的类型：");
	s_gets(temp.petkind[0], LENGTH);

	lowercase(temp.petname);
	lowercase(temp.petkind[0]);

	printf("宠物名：%-19s，宠物类型：%-19s", temp.petname, temp.petkind[0]);

	if (DeleteItem(&temp, ptree))
		printf("已删除！\n");
	else
		printf("不在其中，无法删除！\n");
}
#endif
#endif