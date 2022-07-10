#define _CRT_SECURE_NO_WARNINGS 1
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
	printf(DAYIN2,X);			//法一
	printf(p, X);						//法二


	printf("%s\n",MINYAN);
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

	printf("x=%d\n",x);
	z = SQUARE(x);
	printf("SQUARE(x) :");
	DAYIN(z);

	z = SQUARE(2);
	printf("SQUARE(2) :");
	DAYIN(z);


	printf("SQUARE(x+2) :");
	DAYIN(SQUARE(x + 2));				//宏展开后：x+2*x+2=17

	printf("100/SQUARE(2) :");
	DAYIN(100/SQUARE(2));			//宏展开后：100/2*2=100

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
	DAYIN(2+4);

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
	DAYIN(1,"x=%g\n",x);
	DAYIN(2, "y=%.2lf\n", y);

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
	
	printf("total=%d\n",total);
	
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

	printf("文件名为%s\n",__FILE__);

	printf("日期是%s\n",__DATE__);
	printf("时间是%s\n", __TIME__);

	printf("此行的行号是%d\n",__LINE__ );
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

	printf("%s\n",GENERIC(num));
	printf("%s\n", GENERIC(2.0*num));
	printf("%s\n", GENERIC((long)num));		
	printf("%s\n", GENERIC(&num));				//&num类型是int*

	return 0;
}
#endif


//使用内联函数
#if 1
inline static double square(double x);

int main(void)
{
	double num = 5.0;
	printf("%.2lf",square(num));

	return 0;
}
double square(double x)
{
	return (x*x);
}
#endif