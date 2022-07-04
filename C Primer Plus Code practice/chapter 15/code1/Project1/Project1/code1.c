#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <limits.h>//提供明示常量(也叫符号常量)CHAR_BIT 即char类型的位数
//
#if 1
#endif


//用位操作（按位运算符+移位运算符）显示计算机上存储的十进制数对应的二进制数据
#if 0
char* i_to_bs(int zhengshu, char *string);//声明一个整数转换成二进制数的函数(二进制数被存放于字符数组中)，形参是整数和指向char型的指针，返回值与传入指针的地址值相同，以便作为printf()的参数。
void show(int number,char *string);

int main(void)
{
	printf("本系统1字节的位数为%d\n", CHAR_BIT);
	printf("本系统int型数据占%zd个字节\n",sizeof(int));
	char erjinzhi[CHAR_BIT*sizeof(int)+1];//CHAR_BIT*sizeof(int),得出当前系统下的int型整数的二进制位数即8*4(该系统环境下1字节的位数乘以int的字节数)。这样写的好处是可移植性。
																	//+1是留给'\0'的空间，所以本系统中erjinzhi数组存储单元个数是33。
	int number;
	printf("请输入要显示为二进制数的整数：");
	while (scanf("%d", &number) == 1)
	{
		i_to_bs(number,erjinzhi);
		show(number,erjinzhi);
	}

	return 0;
}
char* i_to_bs(int zhengshu, char* string)//其实zhengshu变量中存的就是输入的整数对应的二进制数，现在函数要将其放入数组中显示出来
{
	const static int size =CHAR_BIT * sizeof(int);

	for (int i = size - 1;				 i >= 0;				 i--, zhengshu>>=1)
	{
		*(string + i) = (0x1 & zhengshu) + '0';//从数组的最后一个元素开始赋值		1 & zhengshu计算后就是最后一位二进制数的值		+ '0'作用是转化成字符数据好存入字符数组中
	}
	*(string + size) = '\0';//本系统下erjinzhi[32]='\0'

	return string;
}
void show(int number,char* string)
{
	printf("%d对应的二进制数据是：",number);

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


//用位操作（按位运算符+移位运算符）切换二进制数的后n位状态
#if 0
char* i_to_bs(int zhengshu, char* string);//声明一个整数转换成二进制数的函数(二进制数被存放于字符数组中)，形参是整数和指向char型的指针，返回值与传入指针的地址值相同，以便作为printf()的参数。
void show(char* string);
int invert(int zhengshu,int bits);

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

		number = invert(number,4);
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

	return (zhengshu^mask);//切换zhengshu二进制数据的最后4位的值
}
#endif


//使用位字段
#if 0
struct
{
	unsigned int autfd : 1;
	unsigned int bldfc : 1;
	unsigned int undln : 1;
	unsigned int itals : 1;
}prnt;								//prnt包含了4个1位的字段
int main(void)
{
	prnt.autfd = 0;
	prnt.bldfc = 1;
	prnt.undln = 0;
	prnt.itals = 1;

	printf("%d %d %d %d\n", prnt.autfd, prnt.bldfc, prnt.undln, prnt.itals);
	printf("sizeof(prnt) = %d\n", sizeof(prnt));
	printf("十进制: %d\n", prnt);//可以看出prnt的二进制值是0000 0000 0000 0000 0000 0000 000 1010，
												  //*****************************所以本系统上字段存储在int中的顺序是从右往左。*******************

	return 0;
}
#endif


//如果声明的总位数超过一个unsigned int类型的大小（4 bytes）的情况
#if 0
struct {
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


//定义并使用字段
#if 1
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
#define YELLOW		 (RED|GREEN)
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
void show_settings(const struct fangkuang  *p);


int main(void)
{
	struct fangkuang box = {1,YELLOW,1,GREEN,XUXIAN};

	printf("方框原属性：\n");
	show_settings(&box);

	return 0;
}
void show_settings(const struct fangkuang* p)
{
	printf("方框：%s",p->opaque==1?"透明":"不透明");

	const char* colors[8] = {"BLACK","RED","GREEN","YELLOW","BLUE","PURPLE","CYAN","WHITE"};
	printf(" %s", colors[p->fill_color]);

}
#endif