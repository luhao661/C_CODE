#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main(void)
//{
//	char ch;
//
//	while ((ch = getchar()) != '#')
//		putchar(ch);//若写成putchar();    则会报错：putchar()参数过少。
//
//	return 0;
//}


//使用EOF
//int main(void)
//{
//	int ch;
//
//	while ((ch=getchar()) != EOF)
//		putchar(ch);
//
//	return 0;
//}


#if 0
//猜数字程序1
int main(void)
{
	printf("选择一个1~100的数字。然后我会尝试猜测。");
	printf("\n（输入y表示正确，输入n表示错误）\n");

	int num=1;
	printf("数字是%d吗？",num);
	while(getchar()!='y')
		printf("数字是%d吗？\n", ++num);//由于有\n输入，所以这段话会执行两遍！

	printf("好，我猜到了！\n");

	return 0;
}
#endif


#if (0)
//猜数字程序2
int main(void)
{
	printf("选择一个1~100的数字。然后我会尝试猜测。");
	printf("\n(输入y表示正确，输入n表示错误)\n");

	int num = 1;
	printf("数字是%d吗？\n", num);
	while (getchar() != 'y')
	{
		printf("数字是%d吗？\n", ++num);
		//if (getchar == '\n')       //错误
		//if (getchar() != '\n')     //这也可以。但仅限输入是一个字符（y或n）
		while (getchar() != '\n')
		continue;
	}
	printf("好，我猜到了！\n");

	return 0;
}
#endif


#if 0
//猜数字程序3
int main(void)
{
	printf("选择一个1~100的数字。然后我会尝试猜测。");
	printf("\n(输入y表示正确，输入n表示错误)\n");

	int num = 1;
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
	char ch;
	while ((ch=getchar()) != 'y')
	{
		if (ch == 'n')
			printf("数字是%d吗？\n", ++num);
		else
			printf("抱歉，我只能回应y或n\n");

	//	while (ch != '\n')                                              //会有异常，不再读取输入。
			while (getchar() != '\n')
			continue;
	}
	printf("好，我猜到了！\n");

	return 0;
}
#endif


#if 0
//根据输入的数字指定的参数打印字符
void display(char ch, int hang, int lie);
int main(void)
{
	int row, column;
	int ch;
	printf("请输入一个字母和两个整数数字：\n");

	while ((ch = getchar()) != '\n')
	{
		scanf("%d%d",&row,&column);
		display(ch,row,column);
		printf("请输入一个字母和两个整数数字：\n");
		printf("按下Enter以结束\n");
	}

	return 0;
}
void display(char ch, int hang, int lie)
{
	int hang1 = hang;
	int lie1 = lie;
	for (hang = 1; hang <= hang1; hang++)
	{
		for (lie = 1; lie <= lie1; lie++)
			putchar(ch);
		printf("\n");
	}
}
#endif


#if 0
//根据输入的数字指定的参数打印字符——改
void display(char ch, int hang, int lie);
int main(void)
{
	int row, column;
	int ch;
	printf("请输入一个字母和两个整数数字：\n");

	while ((ch = getchar()) != '\n')
	{
		if (scanf("%d%d", &row, &column) != 2)//scanf输入数字时，忽略掉空格，回车等
			break;
		display(ch, row, column);

		while (getchar() != '\n')//消耗掉column后的\n
			continue;

		printf("请输入一个字母和两个整数数字：\n");
		printf("按下Enter以结束\n");
	}
	printf("再见！\n");

	return 0;
}
void display(char ch, int hang, int lie)
{
	int hang1 = hang;
	int lie1 = lie;
	for (hang = 1; hang <= hang1; hang++)
	{
		for (lie = 1; lie <= lie1; lie++)
			putchar(ch);
		printf("\n");
	}
}
#endif


#if 1
//用getchar()读取错误的输入，并提示用户纠正
int main(void)
{
	int input;
	char ch;

	while (scanf("%d", &input) != 1)
	{
		while ((ch = getchar()) != '\n')
			putchar(ch);
		printf("不是一个整数！请重新输入：\n");
	}

		printf("%d",input);

	return 0;
}
#endif