#define _CRT_SECURE_NO_WARNINGS 1
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
	scanf("%lf%lf",&a,&b);
	printf("较小值是：%.3lf",min(a,b));

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
	scanf("%c",&ch);
	printf("请输入要打印的列数与行数：_________\b\b\b\b\b\b\b\b");
	scanf("%d%d",&i,&j);
	chline(ch,i,j);

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
	scanf("%lf%lf",&a,&b);
	printf(	"调和平均数是%.3lf\n",tiaohepinjunshu(a, b));

	return 0;
}
double tiaohepinjunshu(double x, double y)
{
	double jieguo1,jieguo2;
	double daoshu_x = 1 / x, daoshu_y = 1 / y;

	jieguo1 = (daoshu_x + daoshu_y) / 2;
	jieguo2 = 1 / jieguo1;                                                 //法二：化简后为  return 2/(1/x+1/y);

	return jieguo2;
}
#endif


//5.
#if 0
void larger_of(double *x, double *y);
int main(void)
{
	double a, b;
	printf("此程序把两个数的较大者赋值给两个数\n");
	printf("请输入两个浮点数：_________\b\b\b\b\b\b\b\b");
	scanf("%lf%lf", &a, &b);
	larger_of(&a,&b);
	printf("现在，两个数为%.3lf和%.3f%\n",a,b);

	return 0;
}
void larger_of(double *x, double *y)
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
	double a, b,c;
	printf("此程序把三个数按照由小到大排序\n");
	printf("请输入三个浮点数：_________\b\b\b\b\b\b\b\b");
	scanf("%lf%lf%lf", &a, &b,&c);
	paidaxiao(&a,&b,&c);
	printf("现在，三个数字是%.3lf，%.3f，%.3f\n", a, b,c);

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
	while ((ch = getchar())!=EOF)//ch=getchar()外的小括号要加
	{
		if (panduanzimu(ch) == -1)//输入非字母时
			printf("否");

		else if (panduanzimu(ch) == -2)//输入回车时
		{
			printf("否(键入了\\n)");
			printf("\n请继续输入字符：\n");
		}

		else
			printf("%-3d",panduanzimu(ch));

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
	else if (ch =='\n')
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
		if (ch =='\n')
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
	while (scanf("%lf%d", &x,& exp) == 2)
	{
		printf("%.2f的%d次方是%.2f\n",x,exp, power(x, exp));

		if (x==0&&exp==0)
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
	else if (p== 0 && n == 0)
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
	unsigned long num1,num2;

	printf("请输入一个整数和把此数转化成的(2~10)进制数（按q以退出）：\n");

	while (scanf("%d%d", &num1,&num2) == 2)
	{
		printf("转化为%d进制是：",num2);
		to_base_n(num1,num2);
		
		printf("\n请输入下一个整数和把此数转化成的(2~10)进制数（按q以退出）：\n");
	}

	return 0;
}
void to_base_n(int daichuli, int jinzhi)
{
	int yushupanduan;//余数判断

	yushupanduan = daichuli % jinzhi;

	if (daichuli >=jinzhi)
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
		printf("第%d项斐波那契数是%ld\n",num,Fibonacci(num));
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

	for (i = 2; i <= n-1; i++)//i=2，shuzu[2]相当于斐波那契的第3项的值
	{
		shuzu[i] = shuzu[i - 1] + shuzu[i - 2];
	}

	unsigned long jieguo = shuzu[i-1];//注意若写成shuzu[i]则显示不正确，因为for循环更新i值后，i会+1
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
		printf("%lu，",f1);                              //  1    1      2
		temp = f1 + f2;                                 //         f1    f2
		f1 = f2;//对前两项的值更新
		f2 = temp;
	}
	printf("\n");

	return;
}
#endif