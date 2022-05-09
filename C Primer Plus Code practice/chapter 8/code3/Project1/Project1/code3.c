#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//复习题
//2.
#if 0
int main(void)
{
	//putchar('H');
	//putchar('\007');
	putchar('\b');
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
		if (ch == '\n')
			;			
		else
			count++;
	}

	printf("有%d个字符(不含换行符)",count);

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

	printf("读取到%d个字符\n",count);

	return 0;
}
#endif


//2.
#if 0
int main(void)
{
	printf("请输入字符：\n");
	int ch;
	int num=0;

	while ((ch = getchar()) != EOF)
	{
		if (num % 10 == 0)
		{
			putchar('\n');		
		}
		num++;
		switch (ch)
		{
		case '\n':
			printf("\n\\n-%-8d", ch);
		break;
		case '\t':
			printf("\\t-%-8d",ch);
		break;
		case 1:
			printf("^A-%-8d",ch);
		break;
		default:
			printf("%c-%-8d", ch, ch);
		}	
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
	int upjishu= 0;
	int lowjishu = 0;

	while ((ch = getchar()) != EOF)
	{
		if (ch >= 65 && ch <= 90)
			upjishu++;
		if (ch >= 97 && ch <= 122)
			lowjishu++;
	}
	printf("输入中的大写字母个数：%d\n",upjishu);
	printf("输入中的小写字母个数：%d\n", lowjishu);

	return 0;
}
#endif 


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
		
		if ((ch == ' ' ||ch=='\n') && dancibiaoji == 1)
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
# elseif  0
int main(void)
{
	printf("请输入字符：\n");
	int ch;
	int dancibiaoji = 0;
	int dancishu = 0;
	float zimushu=0.0F;

	while ((ch = getchar()) != EOF)
	{
		if(ch!=' '&&ch!='\n')
		zimushu++;

		if (ch != ' ' &&ch!='\n' && dancibiaoji != 1)
		{
			dancibiaoji = 1;
			dancishu++;
		}

		if ((ch == ' ' || ch == '\n') && dancibiaoji == 1)
		{
			dancibiaoji = 0;		
		}
		

	}
	printf("单词个数：%d\n", dancishu);
	printf("平均每个单词的字母数：%.2f\n\n",zimushu/dancishu);

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
	int a,b;
	while ((ch = getchar()) != 'y')
	{
		while (getchar() != '\n')//1处
			continue;

		while (ch != 'n'&&ch!='y')
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
			a= num;
			printf("数字是%d吗？\n",  erfenfa1(a));
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
int erfenfa1 (int a)
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


//6.书P205
#if 1
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

	while ((ch = getchar())== ' '|| ch == '\n' || ch == '\t')
		continue;

	while (getchar() != '\n')
		continue;

	return ch;
}
#endif
