#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//
#if 1
#endif


//程序中表示字符的几种方式
#if 0
#define MSG "I am a symbolic string constant"//我是一个符号字符串常量
#define LENGTH 81
int main (void)
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
	printf("%s, %p, %c\n","We","are",*"space farers");

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

	printf("I'm special的地址是：%p\n","I'm special");
	printf("ar的地址是：%p\n",ar);
	printf("p的地址是：%p\n", p);
	printf("MSG的地址是：%p\n",MSG);
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
	printf("%s",shuzu);

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
	"Walking in a straight line",
	"Sleeping",
	"Watching television",
	"Mailing letters",
	"Reading email"
	};
	int i;

	puts("让我们来比较比较：");
	printf("%-36s %-25s\n","My Talents","Your Talents");
	for (i = 0; i < hangshu; i++)
		printf("%-36s %-25s\n",mytalents[i],yourtalents[i]);

	printf("\nsizeof mytalents: %zd, sizeof yourtalents: %zd\n",sizeof(mytalents),sizeof(yourtalents));

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
	printf("%s\n",copy);
	printf("mesg=%s; &mesg=%p; vaule=%p\n",mesg,&mesg,mesg);//&mesg:显示指针被存放的地址。value:显示指针的值
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

	printf("%s\n",words);
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
	fgets(words,14,stdin);
	printf("您输入的是：\n");

	puts(words);
	fputs(words,stdout);

	return 0;
}
#endif
#if 0
int main(void)
{
	char words[10];
	puts("请输入字符串：");
	while (fgets(words, 10, stdin) != NULL && words[0] != '\n')
		fputs(words,stdout);//能处理过长的输入

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
	    int i=0;
		while (words[i] != '\n' && words[i] != '\0')
			i++;//遍历字符串，直至遇到换行符或空字符
		
		if (words[i] == '\n')
			words[i] = '\0';//若遇到换行符，就换成空字符
		else
			while (getchar() != '\n')
				continue;//若遇到空字符，则丢弃输入行的剩余字符

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
	count = scanf("%5s %10s",name1,name2);
	printf("我读入到%d个名字，分别为%s和%s",count,name1,name2);

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
	puts(string2+4);

	return 0;
}
#endif


//如果puts()没遇到空字符
#if 0
int main(void)
{
	char a[] = "a";
	char dont[] = {'W','O','W','!'};
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
	fit(message,38);
	puts(message);
	puts(message+39);//打印从message[39]开始的地址上的内容

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
	printf("%p\n",flower);								//（一般情况下）两者相同
	printf("%p\n", &flower[0]);					    //说明fgets()的返回值是flower数组首元素的地址
	printf("%d\n", s_gets(flower,SIZE));//地址类型用%d输出时，无法显示内容

	return 0;								
}
char* s_gets(char* string, int n)
{
	char *fanhui;
	int i = 0;
	fanhui = fgets(string, n, stdin);//n为80，fgets()只会读入79个字符，并自动在其后加\0
	
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
	printf("flower数组的大小：%zd\n",strlen(flower));//若输入^Z则flower数组的大小是87

	if (strlen(flower)+strlen(add)+1<=SIZE)
	{
		strcat(flower, add);
		puts(flower);
	}
	

	puts("What is your favorite bug ?");
	s_gets(bug, BUGSIZE);

	available = BUGSIZE - strlen(bug) - 1;//防止多出来的字符溢出到相邻存储单元
	strncat(bug,add,available);
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
	s_gets(try,SIZE);
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
	printf("%d\n",strcmp("A","A"));

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
	printf("请输入最多%d行内容（键入quit以退出）：\n",LIM);

	while (count < LIM && s_gets(input[count], SIZE) != NULL && strcmp(input[count], STOP) != 0)
	{																								//改为&&input[count][0]!='\0'实现输入空行就退出的功能
		count++;
	}
	printf("%d行已输入\n",count);

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

	for(i=0;i<LISTSIZE;i++)
		if(strncmp(list[i],"astronomy",5)==0)
		{
			printf("Found %s\n",list[i]);
			count++;
		}
	printf("The list contained %d words begining with astro.\n",count);

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

	printf("请输入以q开头的%d行单词：\n",LIM);
	while (i < LIM && s_gets(temp, SIZE))
	{
		if (temp[0] != 'q')
			printf("%s没有以q开头！\n",temp);
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

	fanhui = strcpy(target+7,source);

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
			strncpy(qwords[i], temp,TARGET_SIZE-1);
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
	char formal[2*MAX];
	double prize;

	puts("请输入你的姓：");
	s_gets(first,MAX);
	puts("请输入你的名：");
	s_gets(last, MAX);
	puts("请输入你的奖金金额：");
	scanf("%lf",&prize);

	sprintf(formal,"%s, %-19s : $%6.2lf", first,last,prize);
	
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

void sort_str(char* strings[], int num);
char* s_gets(char* string, int n);
int main(void)
{
	char input[SIZE][LIM];		//创建char型二维数组
	char* p[LIM];						//内含指针变量的数组
	int in_count = 0;					//输入的行数计数
	int out_count = 0;				//输出的行数计数

	printf("请输入最多%d行字符串，然后我会进行排序。\n",LIM);
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
void sort_str(char* strings[], int num)
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
#if 1
#include <string.h>
#include<ctype.h>
#define  LIMIT 81
void ToUpper(char* string);
char* s_gets(char* string, int n);
int main(void)
{
	char line[LIMIT];
	char* find;

	puts("请输入一行字符：");
	fgets(line,LIMIT,stdin);



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