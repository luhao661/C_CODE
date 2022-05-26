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

	printf("%p\n", s_gets(flower, SIZE));
	printf("%p\n",flower);								//两者相同
	printf("%p\n", &flower[0]);
	return 0;													    //说明fgets()的返回值是flower数组首元素的地址
}
char* s_gets(char* string, int n)
{
	char *fanhui;
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


//使用strcat()函数，s_gets()函数拼接两个字符串
#if 1
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


//
#if 1
#endif