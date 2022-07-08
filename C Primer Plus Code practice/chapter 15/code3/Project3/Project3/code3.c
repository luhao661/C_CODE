#define _CRT_SECURE_NO_WARNINGS 1
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
int b_to_i(const char *string);
int main(void)
{
	char* pbin = "01001001";

	int num=b_to_i(pbin);

	printf("%d",num);

	return 0;
}
//法一：从低位到高位累加
int b_to_i(const char* string)
{
	int num=0;
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

int main(int argc,char **argv)
{
	if (argc != 3)
	{
		puts("Erroe !");
		exit(EXIT_FAILURE);
	}

	int shuju1, shuju2;

	shuju1 = b_to_i(argv[1]);//字符串表示的二进制内容转化为机器上存的二进制数据
	shuju2 = b_to_i(argv[2]);

	int temp1,temp2;
	temp1 = ~shuju1;
	temp2 = ~shuju2;

	char erjinzhi1[33];
	char erjinzhi2[33];

	i_to_bs(temp1,erjinzhi1);//机器上存的二进制转化成字符串表示二进制内容，以此来打印在显示器上
	i_to_bs(temp2, erjinzhi2);

	printf("第一个二进制数取反后：");
	show(erjinzhi1);
	printf("第二个二进制数取反后：");
	show(erjinzhi2);

	temp1 = shuju1 & shuju2;
	i_to_bs(temp1,erjinzhi1);
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
	scanf("%d",&num);

	fanhuizhi = dakaiwei_shuliang(num);
	printf("打开%d位",fanhuizhi);

	return 0;
}
int dakaiwei_shuliang(int num)
{
	int count = 0;

	for (int i = 0;		 i <32;		 i++,num>>=1)							//i表示正在处理的是第x号位
	{
		if (num & 0x1 == 1)
			count++;
	}

	return count;
}
#endif


//4.
#if 0
int panduanwei(int,int);
int main(void)
{
	int num;
	int position;
	int fanhuizhi;

	printf("请输入一个整数：");
	scanf("%d", &num);
	printf("请输入一个指定的位的位号：");
	scanf("%d", &position);

	fanhuizhi = panduanwei(num,position);
	printf("%s", fanhuizhi==1?"该位为1":"该位为0");

	return 0;
}
int panduanwei(int num,int position)
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
unsigned int rotate_l(unsigned int x,int zuoyi);
char* i_to_bs(int zhengshu, char* string);
void show(char* string);

int main(void)
{
	unsigned int num;
	char erjinzhi[33];

	printf("请输入一个非负整数：");
	scanf("%d", &num);
	i_to_bs(num,erjinzhi);
	printf("该整数对应的二进制数据是：\n");
	show(erjinzhi);

	printf("请输入要循环左移的位的数量：");
	int zuoyi;
	scanf("%d",&zuoyi);

	unsigned int fanhui=rotate_l(num,zuoyi);
	i_to_bs(fanhui, erjinzhi);
	printf("该整数循环左移%d位后对应的二进制数据是：\n",zuoyi);
	show(erjinzhi);

	return 0;
}
//法一：要移动几位，就把最左侧的几位的值都拷贝到int类型的变量当中，最后原数据移动好后再与变量进行按位或运算。
unsigned int rotate_l(unsigned int x, int zuoyi)
{
	//int temp[zuoyi+1];//无效
	//int* temp =(int *) malloc(zuoyi*sizeof());//无法声明一个指针指向位类型，所以不用malloc()
		
	unsigned int y,temp1,temp2;
	y = x;														//x的值先拷贝一份给y
	temp2 = 0;

	for (int i = 0;			i < zuoyi;			i++,y<<=1)
	{
		temp1 = y ;
		temp1 &= 0x80000000;					//1000 0000 0000 0000 0000 0000 0000 0000
		//temp2 |= temp1 >> (31 - i);			//错误：若左侧数据是1000，要移动4位，则temp2右侧是0001
		
		temp1 >>= 31;									//先把最高位的值移到最低位
		temp2 |= temp1<<(zuoyi-i-1);			//*********************注*************************************************************************
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
	unsigned int ziti_id: 8;				//0~7号位，范围0~255
	unsigned int ziti_daxiao : 7;		//8~14号位，范围0~127
	unsigned int : 1;							//15号位(即第16位)用未命名字段填空隙
	unsigned int duiqi : 2;				//16~17号位，范围0~3
	unsigned int jiacu : 1;				//18号位，范围0~1
	unsigned int xieti : 1;					//19号位，范围0~1
	unsigned int xiahuaxian : 1;		//20号位，范围0~1
};

const char* duiqi[3] = {"left","center","right"};
void show_attribute(struct ziticanshu *xinxi);
char get_choice(void);
void change_size(struct ziticanshu* xinxi);
void change_alignment(struct ziticanshu* xinxi);
void change_font(struct ziticanshu* xinxi);

int main(void)
{
	struct ziticanshu attribute = {1,12,0,0,0,0};
	show_attribute(&attribute);
	char choice=get_choice();

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
			count % 2 == 0 ? (attribute.jiacu = 1 ): (attribute.jiacu = 0);//*****注*****括号必须要加
			
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
void show_attribute(struct ziticanshu *xinxi)
{
	puts("ID   SIZE   ALIGNMENT     B     I     U");
	printf("%d      %d   %s         %s   %s   %s\n\n",xinxi->ziti_id,xinxi->ziti_daxiao,duiqi[xinxi->duiqi],
		xinxi->jiacu==0?"off":"on",xinxi->xieti==0?"off":"on",xinxi->xiahuaxian==0?"off":"on");

	puts("f)change font  s)change size    a)change alignment ");
	puts("b)toggle bold  i)toggle italic  u)toggle underline ");
	puts("q)quit ");
}
char get_choice(void)
{
	char choice;
	scanf("%c",&choice);
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
	scanf("%d",&num);
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
void show_attribute(unsigned long *xinxi);
char get_choice(void);
void change_size(unsigned long* xinxi);
void change_alignment(unsigned long* xinxi);
void change_font(unsigned long* xinxi);

int main(void)
{
	unsigned long attribute=0;
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
			attribute^= 0x40000;//切换位
			break;
		case 'i':
			attribute^= 0x80000;
			break;
		case 'u':
			attribute^= 0x100000;
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
	printf("%d      %d   %s         %s   %s   %s\n\n", *xinxi&0xff, ( * xinxi & 0x7f00)>>8, duiqi[( * xinxi&0x3ffff)>>16],
	(*xinxi&0x4ffff)>>18== 0 ? "off" : "on", (*xinxi & 0x8ffff) >> 19 == 0 ? "off" : "on", (*xinxi & 0x1fffff) >> 20 == 0 ? "off" : "on");

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

	* xinxi &= ~(0x7f00);							//先清零
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