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


//读取行，删除存储在字符串中的换行符，若没有换行符，则丢弃数组装不下的字符
#if 1
int main(void)
{
	char words[10];
	puts("请输入字符串：");
	while (fgets(words, 10, stdin) != NULL && words[0] != '\n')
	{
		i = 0;
		while (words[i] != '\n' && words[i] != '\0')
			i++;//遍历字符串，直至遇到换行符或空字符
		if (words[i] == '\n')
			words[i] = '\0';//若遇到换行符，就换成空字符
		else
			while (getchar != '\n')
				continue;//若遇到空字符，则丢弃输入行的剩余字符

		puts(words);
	}

	puts("Done !\n");
	return 0;
}
#endif