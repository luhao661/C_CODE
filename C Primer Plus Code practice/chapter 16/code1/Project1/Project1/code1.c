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
	DAYIN(66,"x=%g\n",x);
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
#if 0
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
		printf("极径：%.2lf		极角：%.2lf\n",result.jijin,result.jijiao);
		puts("请输入直角坐标下x和y的值(输入q以退出)：");
	}

	return 0;
}
JIZUOBIAO zhuanhuan(ZHIJIAOZUOBIAO zhijiaozuobiao)				//结构3
{
	JIZUOBIAO temp;																				//结构4
	temp.jijin = sqrt(zhijiaozuobiao.x* zhijiaozuobiao.x+ zhijiaozuobiao.y * zhijiaozuobiao.y);
	//temp.jijiao = RAD_TO_DEG * atan2(zhijiaozuobiao.x,zhijiaozuobiao.y);  //错误，应改为y轴的值除以x轴的值
	temp.jijiao = RAD_TO_DEG * atan2(zhijiaozuobiao.y,zhijiaozuobiao.x);  

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

void zhuanhuan(ZHIJIAOZUOBIAO * zhijiaozuobiao,JIZUOBIAO * jizuobiao);

int main(void)
{
	ZHIJIAOZUOBIAO input;																	
	JIZUOBIAO result;																			

	puts("请输入直角坐标下x和y的值(输入q以退出)：");
	while (scanf("%lf%lf", &input.x, &input.y) == 2)
	{
		zhuanhuan(&input,&result);
		printf("极径：%.2lf		极角：%.2lf\n", result.jijin, result.jijiao);
		puts("请输入直角坐标下x和y的值(输入q以退出)：");
	}

	return 0;
}
void zhuanhuan(ZHIJIAOZUOBIAO * zhijiaozuobiao,JIZUOBIAO * jizuobiao)			
{
	jizuobiao->jijin = sqrt(zhijiaozuobiao->x * zhijiaozuobiao->x + zhijiaozuobiao->y * zhijiaozuobiao->y);
	jizuobiao->jijiao = RAD_TO_DEG * atan2(zhijiaozuobiao->y, zhijiaozuobiao->x);

	return ;
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
	printf("%d是%s\n",n,(n%2)==0?("偶数"):("奇数"));

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
void fill_array(double *p,int n);
void show_array(const double *p,int n);
int mycompare(const void *p1,const void *p2);
int main(void)
{
	double shuzu[SIZE];
	srand((unsigned int)time(0));			/* 随机种子 */
	fill_array(shuzu,SIZE);

	puts("数组中的随机数如下");
	show_array(shuzu,SIZE);

	qsort(shuzu,SIZE,sizeof(double),mycompare);

	puts("数组中的随机数排序完成后如下");
	show_array(shuzu, SIZE);

	return 0;
}
void fill_array(double* p, int n)
{
	for (int index = 0; index < n; index++)
	{
		*(p + index) = (double)rand() / ((double)rand()+0.1);
	}
}
void show_array(const double* p, int n)
{
	int index;
	for ( index = 0; index < n; index++)
	{
		printf("%6.2lf", *(p + index));

		if (index % 6 == 5)
			putchar('\n');
	}
	if (index % 6 !=0)
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
		assert(z>=0);//对表达式求值，若为假，就中止程序，并显示出问题的行号
		printf("答案是：%.2lf\n",sqrt(z));
	}

	return 0;
}
#endif


//使用_Static_assert()   (此IDE不支持)
#if 0
#include <math.h>
#include <limits.h>
_Static_assert(CHAR_BIT == 16,"错误的一字节的位数");

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

void show_array(const int *p,int n);

int main(void)
{
	int source[SIZE] = {1,2,3,4,5,6,7,8,9,10};
	int target[SIZE];

	double ceshi[SIZE / 2] = {1.0,2.0,3.0,4.0,5.0};

	puts("使用memcpy()：");
	puts("源字符数组内容：");
	show_array(source,SIZE);

	memcpy(target,source,SIZE*sizeof(int));
	puts("目标字符数组内容：");
	show_array(target, SIZE);

	puts("\n使用memmove()（两个内存区域有重叠的情况）：");
	memmove(target+2, target, 5 * sizeof(int));
	puts("目标字符数组的第1至5个元素拷贝到目标数组的第3至7个元素：");
	show_array(target, SIZE);

	return 0;
}
void show_array(const int* p, int n)
{
	for (int index = 0; index < n; index++)
	{
		printf("%5d",*(p+index));
	}
	putchar('\n');
}
#endif


//变参函数
#if 0
#include <stdarg.h>
double sum(int lim,...);							//1.函数原型至少一个形参和一个省略号

int main(void)
{
	double result1, result2;

	result1 = sum(3,1.1,2.5,13.3333333);
	result2 = sum(6, 1.1, 2.1, 13.1,4.1,5.1,6.1);

	printf("sum(3,1.1,2.5,13.3)=				%g\n",result1);
	printf("sum(6, 1.1, 2.1, 13.1,4.1,5.1,6.1)=		%g\n", result2);

	return 0;
}
double sum(int lim, ...)							//lim是parmN形参，其值为传入的实参的数量
{
	va_list ap;											//2.声明一个存储省略号部分的数据对象ap
	va_start(ap,lim);									//3.实参的数据拷贝到ap(把ap初始化为参数列表)

	double total = 0;
	for (int i = 0; i < lim; i++)
		total += va_arg(ap,double);			//4.访问参数列表的内容

	va_end(ap);											//5.用宏完成清理工作(释放动态分配的用于存储参数的内存)

	return total;
}
#endif
