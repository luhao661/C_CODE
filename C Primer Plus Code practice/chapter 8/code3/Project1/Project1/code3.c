#define _CRT_SECURE_NO_WARNINGS 1
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
		num++;  //瑕疵：输入换行符后之后的第一行可能不能逢10换行。

	
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
#elif  0
int main(void)
{
	printf("请输入字符：\n");
	int ch;
	int dancibiaoji = 0;
	int dancishu = 0;
	float zimushu=0.0F;

	while ((ch = getchar()) != EOF)
	{
		/*if(ch!=' '&&ch!='\n')
		zimushu++;*/
		if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
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
		//统计单词法二：
		/*if (ch == ' ' || ch == ',' || ch == '.' || ch = '\n')
			dancishu++;*/

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
//5.改正
#if 0
//int erfenfa1(int a,int b,int c);  //对于二分法，不用调用函数。因为head tail guess 三个变量均会变化。
//int erfenfa2(int a,int b,int c);       //而调用的函数的变量的变化只会在调用函数中生效,在主函数中不生效。

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
			tail = guess + 1;
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

	/*while (    (ch = getchar())== ' '         ||        ch == '\n'       ||         ch == '\t')
		continue;

	while (getchar() != '\n')
		continue;*/

	//法二：
	do
	{
		ch = getchar();
	} while (ch==' '||ch=='\n'||ch=='\t');  //注意：缓冲区有\n。

	return ch;
}
#endif
