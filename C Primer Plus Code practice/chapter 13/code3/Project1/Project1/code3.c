#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//若要命令行运行，文件路径在：D:\CODE\C_CODE\C Primer Plus Code practice\chapter 13\code3\Project1\x64\Debug
//
#if 1
#endif


//编程练习
//1.
#if 0
char* s_gets(char* string, int n);
int main(void)
{
	puts("请输入要打开的文件名：");
	char wenjianmin[80];
	s_gets(wenjianmin,80);

	FILE* fp;
	if ((fp=fopen(wenjianmin,"r"))==NULL)
	{
		printf("打开%s文件失败\n", wenjianmin);
		exit(EXIT_FAILURE);
	}

	int ch;
	unsigned long count = 0;
	while ((ch = getc(fp)) != EOF)
	{
		putc(ch, stdout);
		count++;
	}
	fclose(fp);
	printf("\nFile %s has %lu characters\n", wenjianmin, count);

	return 0;
}
char* s_gets(char* string, int n)
{
	char* fanhui;
	char* find;
	fanhui = fgets(string, n, stdin);
	if (fanhui)
	{
		find = strchr(string, '\n');
		if (find)
			*find = '\0';
		else
			while (getchar() != '\n')
				continue;
	}
	return fanhui;
}
#endif


//2.
#if 0
#define BUFSIZE 4096//缓冲区大小
#define LEN 81//文件名最大长度
void kaobei(FILE* source, FILE* destination);//拷贝函数

int main(int argc,char **argv)
{
	FILE* fpsource, * fptarget;//指向源文件  指向目标文件

	if (argc != 3)
	{
		printf("输入项数错误！\n");
		exit(EXIT_FAILURE);
	}

	if ((fptarget = fopen(argv[2], "wb")) == NULL)//拷贝到的目标文件
	{
		fprintf(stderr, "未能打开目标文件：%s\n", argv[2]);
		exit(EXIT_FAILURE);
	}
	if (setvbuf(fptarget, NULL, _IOFBF, BUFSIZE) != 0)//创建一个输出缓冲区
	{
		fprintf(stderr, "未能创建%s的输出缓冲区\n", argv[2]);
		exit(EXIT_FAILURE);
	}

	if (strcmp(argv[1], argv[2]) == 0)
	fputs("不能拷贝文件内容至其本身\n", stderr);


	if ((fpsource = fopen(argv[1], "rb")) == NULL)//获取源文件
	{
		fprintf(stderr, "未能打开源文件：%s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	if (setvbuf(fpsource, NULL, _IOFBF, BUFSIZE) != 0)//创建一个输入缓冲区
	{
	 fprintf(stderr, "未能创建%s的输入缓冲区\n", argv[1]);
	 exit(EXIT_FAILURE);
	}

	kaobei(fptarget, fpsource);

	if (ferror(fptarget) != 0)
	fprintf(stderr, "写文件%s错误\n", fptarget);
	if (ferror(fpsource) != 0)
	fprintf(stderr, "读源文件%s错误\n", fpsource);

	printf("文件%s内容已拷贝到%s\n", argv[1], argv[2]);

	fclose(fpsource);
	fclose(fptarget);

	return 0;
}
void kaobei(FILE* target, FILE* source)
{
	size_t bytes;
	static char temp[BUFSIZE];

	while ((bytes = fread(temp, sizeof(char), BUFSIZE, source)) > 0)
		//待读取文件数据拷贝进内存中的地址，待读数据块的大小，待读数据块数量，待读取的文件
		fwrite(temp, sizeof(char), bytes, target);
	//待写入的文件数据所在的内存中的地址，待写数据块的大小，待写数据块数量，待写入的文件
}
//命令行：Project1.exe 13.11.2(1).txt 13.11.2(2).txt
#endif


//3.
#if 0
#include <ctype.h>
#define BUFSIZE 4096//缓冲区大小
#define LEN 81//文件名最大长度
void kaobei(FILE* source, FILE* destination);
char* s_gets(char* string, int n);//输入函数

int main(void)
{
	FILE* fpsource, * fptarget;//指向源文件  指向目标文件
	int files = 0;//附加文件数量计数

	char file_target[LEN];
	char file_source[LEN];
	
	puts("请输入待处理的目标文件名：");
	s_gets(file_target, LEN);
	if ((fptarget = fopen(file_target, "w")) == NULL)//写目标文件
	{
		fprintf(stderr, "未能打开目标文件：%s\n", file_target);
		exit(EXIT_FAILURE);
	}

	puts("请输入要被拷贝内容的第一个源文件名：(输入空行以结束)");
	while (s_gets(file_source, LEN) && file_source[0] != '\0')//输入空行，s_gets()会把\n转化成\0
	{
		if (strcmp(file_source, file_target) == 0)
			fputs("不能拷贝文件内容至其本身\n", stderr);
		else if ((fpsource = fopen(file_source, "r")) == NULL)//读源文件
			fprintf(stderr, "未能打开源文件：%s\n", file_source);
		else
		{	
			kaobei(fptarget, fpsource);

			if (ferror(fptarget) != 0)
				fprintf(stderr, "写文件%s错误\n", fptarget);
			if (ferror(fpsource) != 0)
				fprintf(stderr, "读源文件%s错误\n", fpsource);
			fclose(fpsource);
			files++;
			printf("文件%s内容已拷贝到%s\n", file_source, file_target);

			puts("请输入要被拷贝内容的下一个源文件名：(输入空行以结束)");
		}
	}
	printf("操作完成！%d个文件的内容已转化为大写后拷贝到%s", files, file_target);

	fclose(fptarget);

	return 0;
}
void kaobei(FILE* target, FILE* source)
{
	char ch;
	while ((ch = getc(source)) != EOF)
	{
		ch=toupper(ch);
		putc(ch, target);
	}
}
char* s_gets(char* string, int n)
{
	char* fanhui;
	char* find;
	fanhui = fgets(string, n, stdin);
	if (fanhui)
	{
		find = strchr(string, '\n');
		if (find)
			*find = '\0';
		else
			while (getchar() != '\n')
				continue;
	}
	return fanhui;
}
//命令行：输入Project1.exe和13.11.3(2).txt和13.11.3(1).txt								//注：不使用命令行则无法完成此程序的功能
#endif
//3.题目要求是在原文件上完成对内容的修改，最终效果要体现在原文件上
//法一：读入原文件，对每个字符进行处理，保存至一个临时文件中，最后将其内容复制再覆盖到原文件。
#if 0
#include <ctype.h>
#define BUFSIZE 4096//缓冲区大小
#define LEN 81//文件名最大长度
void kaobei(FILE* source, FILE* destination);
char* s_gets(char* string, int n);//输入函数

int main(void)
{
	FILE* fp1, * fp2;

	char file1[LEN];

	puts("请输入待处理的目标文件名：");
	s_gets(file1, LEN);

//法一：打开，关闭文件两次
#if 0
	if ((fp1 = fopen(file1, "r+")) == NULL)//读或写目标文件
	{
		fprintf(stderr, "未能打开目标文件：%s\n", file1);
		exit(EXIT_FAILURE);
	}

	if ((fp2 = fopen("13.11.3(2).txt", "r+")) == NULL)//读或写临时文件
	{
		fprintf(stderr, "未能打开临时文件：%s\n", "13.11.3(2).txt");
		exit(EXIT_FAILURE);
	}
		
	kaobei(fp1, fp2);
	if (fclose(fp1) != 0 || fclose(fp2) != 0)
		fprintf(stderr, "Error in closing files\n");


	if ((fp1 = fopen(file1, "r+")) == NULL)//读或写目标文件
	{
		fprintf(stderr, "未能打开目标文件：%s\n", file1);
		exit(EXIT_FAILURE);
	}

	if ((fp2 = fopen("13.11.3(2).txt", "r+")) == NULL)//读或写临时文件
	{
		fprintf(stderr, "未能打开临时文件：%s\n", "13.11.3(2).txt");
		exit(EXIT_FAILURE);
	}
	kaobei(fp2, fp1);
#endif

//法二：写入文件后用rewind()
#if 1
	if ((fp1 = fopen(file1, "r+")) == NULL)//读或写目标文件
	{
		fprintf(stderr, "未能打开目标文件：%s\n", file1);
		exit(EXIT_FAILURE);
	}

	if ((fp2 = fopen("13.11.3(2).txt", "r+")) == NULL)//读或写临时文件
	{
		fprintf(stderr, "未能打开临时文件：%s\n", "13.11.3(2).txt");
		exit(EXIT_FAILURE);
	}

	kaobei(fp1, fp2);
	rewind(fp1);
	rewind(fp2);
	kaobei(fp2, fp1);
#endif

	printf("操作完成！\n");

	if (fclose(fp1) != 0 || fclose(fp2) != 0)
		fprintf(stderr, "Error in closing files\n");

	return 0;
}
void kaobei(FILE* fp1, FILE* fp2)
{
	char ch;
	while ((ch = getc(fp1)) != EOF)
	{
		ch = toupper(ch);
		putc(ch, fp2);
	}
}
char* s_gets(char* string, int n)
{
	char* fanhui;
	char* find;
	fanhui = fgets(string, n, stdin);
	if (fanhui)
	{
		find = strchr(string, '\n');
		if (find)
			*find = '\0';
		else
			while (getchar() != '\n')
				continue;
	}
	return fanhui;
}
//示例文本：Take a leap. Take a chance.
//命令行：Project1.exe
//13.11.3(1).txt
#endif
//法二：利用随机读写功能fseek()函数，读写一个字符，然后转换字符并将文件指针回退一个字符，再将转换后的字符写入文件，每次覆盖一个原字符
#if 0
#include <ctype.h>
#define LEN 81//文件名最大长度
char* s_gets(char* string, int n);//输入函数

int main(void)
{
	FILE* fp1;

	char file1[LEN];

	puts("请输入待处理的目标文件名：");
	s_gets(file1, LEN);

	if ((fp1 = fopen(file1, "r+")) == NULL)//读或写目标文件
	{
		fprintf(stderr, "未能打开目标文件：%s\n", file1);
		exit(EXIT_FAILURE);
	}


	char ch;
	while ((ch = getc(fp1)) != EOF)//读取文件中的原字符，存入ch，**文件内的光标后移一位字符**
	{
						//强制类型转换
		fseek(fp1,-(long)sizeof(char),SEEK_CUR);//光标前移一位字符
		putc(toupper(ch),fp1);//处理好的字符存入光标位置，即覆盖原字符，**文件内的光标后移一位字符**

		//当你使用随机读写的方式来读写文件时。如果此刻您从正在写的方式要切换到读的方式。
		//	就必须使用定位函数重新定位到你要读的地方，不然就得不到理想结果，还会乱码。//https://blog.csdn.net/weixin_44603568/article/details/91349059
		fseek(fp1, 0L, SEEK_CUR);

		
		/*程序进入死循环就跳出*/
		static int count=0;
		count++;
		if (count == 99)
			break;			
	}
	
		
	printf("操作完成！\n");

	fclose(fp1);

	return 0;
}
char* s_gets(char* string, int n)
{
	char* fanhui;
	char* find;
	fanhui = fgets(string, n, stdin);
	if (fanhui)
	{
		find = strchr(string, '\n');
		if (find)
			*find = '\0';
		else
			while (getchar() != '\n')
				continue;
	}
	return fanhui;
}
//示例文本：Take a leap. Take a chance.
//命令行：Project1.exe
//13.11.3(1).txt
#endif


//4.
#if 0
#define BUFSIZE 4096//缓冲区大小
#define LEN 81//文件名最大长度

int main(int argc, char** argv)
{
	FILE* fp[5];//定义5个指向FILE的指针

	if (argc <2)//只输入0或1项时报错
	{
		printf("输入项数错误！\n");
		exit(EXIT_FAILURE);
	}

	for(int i=0;i<argc-1;i++)//若输入2项，则有一个文件，argc=2，只需fp[0]即可
	if ((fp[i] = fopen(argv[i+1], "r")) == NULL)//fp[0]=argv[1]
	{
		fprintf(stderr, "未能打开文件：%s\n", argv[i+1]);
		exit(EXIT_FAILURE);
	}

	char ch;
	for (int i = 0; i < argc - 1; i++)
	{
		printf("第%d个文件内容：",i+1);
		while ((ch = getc(fp[i])) != EOF)
			putchar(ch);

		putchar('\n');
	}

	printf("已完成所列文件的显示\n");

	for (int i = 0; i < argc - 1; i++)
	fclose(fp[i]);
	
	return 0;
}
//命令行：Project1.exe 13.11.4(1).txt 13.11.4(2).txt 13.11.4(3).txt
#endif


//5.
#if 0
#define BUFSIZE 4096//缓冲区大小
#define LEN 81//文件名最大长度

void appendix(FILE* source, FILE* destination);//内容附加函数

int main(int argc,char **argv)
{
	FILE* fptarget;//指向目标文件
	FILE* fpsource[6];//6个用于指向源文件的指针 
	int files = 0;//附加文件数量计数
	int ch;//逐个字符显示

	if (argc < 3)//只输入0或1或2项时报错
	{
		printf("输入项数错误！\n");
		exit(EXIT_FAILURE);
	}

	if ((fptarget = fopen(argv[1], "a+")) == NULL)//读或写目标文件
	{
		fprintf(stderr, "未能打开目标文件：%s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	if (setvbuf(fptarget, NULL, _IOFBF, BUFSIZE) != 0)//创建一个输出缓冲区
	{
		fprintf(stderr, "未能创建%s的输出缓冲区\n", argv[1]);
		exit(EXIT_FAILURE);
	}


	int i = 0;
	while (i<argc-2)//输入3个参数，则只有1个源文件
	{
		if (strcmp(argv[1], argv[i+2]) == 0)//检验目标文件是否和源文件名一致
			fputs("不能拷贝文件内容至其本身\n", stderr);
		else if ((fpsource[i] = fopen(argv[i + 2], "r")) == NULL)//读源文件
			fprintf(stderr, "未能打开源文件：%s\n", argv[i + 2]);
		else
		{
			appendix(fptarget, fpsource[i]);
		
			if (ferror(fptarget) != 0)
				fprintf(stderr, "写文件%s错误\n", fptarget);
			if (ferror(fpsource[i]) != 0)
				fprintf(stderr, "读源文件%s错误\n", fpsource[i]);
			fclose(fpsource[i]);
			files++;
		}	
		i++;																				//注：若此处不写i++，上面改成while (i++<argc-2)，则i是以1的值进入循环的
	}																						//造成无法拷贝内容的后果。
	printf("操作完成！%d个文件的内容已附加到%s\n", files, argv[1]);

	rewind(fptarget);
	printf("%s的内容是：\n", argv[1]);
	while ((ch = getc(fptarget)) != EOF)
		putchar(ch);

	fclose(fptarget);

	return 0;
}
void appendix(FILE* target, FILE* source)
{
	size_t bytes;
	static char temp[BUFSIZE];

	while ((bytes = fread(temp, sizeof(char), BUFSIZE, source)) > 0)
		//待读取文件数据拷贝进内存中的地址，待读数据块的大小，待读数据块数量，待读取的文件
		fwrite(temp, sizeof(char), bytes, target);
	//待写入的文件数据所在的内存中的地址，待写数据块的大小，待写数据块数量，待写入的文件
}
//命令行：Project1.exe 13.11.5(1).txt 13.11.5(2).txt 13.11.5(3).txt
#endif


//6.
#if 0
#define LEN 40
char* s_gets(char* string, int n);

int main(void)
{
	FILE* in, * out;
	int ch;
	char name[LEN];
	int count = 0;
	puts("请输入要打开的文件名：");
	char wenjianmin[80];
	s_gets(wenjianmin, 80);

	if ((in = fopen(wenjianmin, "r")) == NULL)
	{
		printf("打开%s文件失败\n", wenjianmin);
		exit(EXIT_FAILURE);
	}

	strncpy(name,wenjianmin, LEN - 5);
	name[LEN - 5] = '\0';//保险起见，在字符串的索引LEN-5处加入空字符，文件名较短时，在索引LEN-5前面也会有空字符。
	strcat(name, "-reduced.txt");//注：一般情况下第二个字符串仅会从第一个字符串的第一个空字符处开始覆盖。    red即reduced

	if ((out = fopen(name, "w")) == NULL)//打开第二个文件
	{
		fprintf(stderr, "Can't open %s\n", name);
		exit(EXIT_FAILURE);
	}
	while ((ch = getc(in)) != EOF)
	{
		if (count++ % 3 == 0)
			putc(ch, out);
	}
	if (fclose(in) != 0 || fclose(out) != 0)
		fprintf(stderr, "Error in closing files\n");

	puts("压缩完成！");

	return 0;
}
char* s_gets(char* string, int n)
{
	char* fanhui;
	char* find;
	fanhui = fgets(string, n, stdin);
	if (fanhui)
	{
		find = strchr(string, '\n');
		if (find)
			*find = '\0';
		else
			while (getchar() != '\n')
				continue;
	}
	return fanhui;
}
//命令行：Project1.exe 
//13.11.6.txt
#endif


//7.a
#if 0
#define MAX 81
int main(void)
{
	char file1[MAX];
	char file2[MAX];
	FILE* fp1, * fp2;

	char ch;
	long count, last;

	puts("请输入要打开的第一个文件名：");
	scanf("%80s", file1);
	if ((fp1 = fopen(file1, "r")) == NULL)
	{
		fprintf(stderr, "Can't open %s file.\n", file1);
		exit(EXIT_FAILURE);
	}

	puts("请输入要打开的第二个文件名：");
	scanf("%80s", file2);
	if ((fp2 = fopen(file2, "r")) == NULL)
	{
		fprintf(stderr, "Can't open %s file.\n", file2);
		exit(EXIT_FAILURE);
	}

	//char temp[80];
	//while (fgets(temp, 80, fp1) != NULL)
	//{
	//	fputs(temp, stdout);
	//	if (fgets(temp, 80, fp2) != NULL);													//有瑕疵，若第一个文件行数少于第二个，则第二个文件内容不能打印完
	//	fputs(temp, stdout);
	//}
		char temp1[80];
		char temp2[80];
		int a, b;
		a = b = 1;
	//while ((a=fgets(temp1, 80, fp1)) != NULL|| (b=fgets(temp2, 80, fp2) )!= NULL)//错误：若前者为真，则不对后者进行计算。
	
	while (a||b)
	{		
			a = fgets(temp1, 80, fp1);//一行一行读入
			if(a)//a为EOF时，不执行打印
			fputs(temp1, stdout);
			
		
			b = fgets(temp2, 80, fp2);
			if(b)////b为EOF时，不执行打印
			fputs(temp2, stdout);		
	}

	
	if (fclose(fp1) != 0 || fclose(fp2) != 0)
		fprintf(stderr, "Error in closing files\n");

	return 0;
}
//命令行：Project1.exe 
//13.11.7(1).txt
//13.11.7(2).txt
#endif
//法二：
#if 0
void function_a(FILE* f1, FILE* f2)
{
	char ch1, ch2;

	do
	{
		while ((ch1 = getc(f1)) != EOF && ch1 != '\n')
		{
			putc(ch1, stdout);
			putchar('\n');
		}

		while ((ch2 = getc(f2)) != EOF && ch2 != '\n')
		{
			putc(ch2, stdout);
			putchar('\n');
		}

	} while (ch1 != EOF && ch2 != EOF);
}
//https ://blog.csdn.net/weixin_44603568/article/details/91349059
#endif


//7.b
#if 0
#define MAX 81
int main(void)
{
	char file1[MAX];
	char file2[MAX];
	FILE* fp1, * fp2;

	puts("请输入要打开的第一个文件名：");
	scanf("%80s", file1);
	if ((fp1 = fopen(file1, "r")) == NULL)
	{
		fprintf(stderr, "Can't open %s file.\n", file1);
		exit(EXIT_FAILURE);
	}

	puts("请输入要打开的第二个文件名：");
	scanf("%80s", file2);
	if ((fp2 = fopen(file2, "r")) == NULL)
	{
		fprintf(stderr, "Can't open %s file.\n", file2);
		exit(EXIT_FAILURE);
	}

	char temp1[80];
	char temp2[80];
	int a, b;
	a = b = 1;
	char* find;

	while (a || b)
	{
		a = fgets(temp1, 80, fp1);
		b = fgets(temp2, 80, fp2);
		
		if (a && b)//若文件1和2的行读入都不为EOF
		{
			if(find=strchr(temp1,'\n'))//找文件1的某一行后的换行符，并使其替换成空字符
			*find = '\0';

			strcat(temp1, temp2);
			fputs(temp1, stdout);
		}
		else if(a)//若文件1不为EOF
			fputs(temp1, stdout);
		else if (b)//若文件2不为EOF
			fputs(temp2, stdout);
	}

	if (fclose(fp1) != 0 || fclose(fp2) != 0)
		fprintf(stderr, "Error in closing files\n");

	return 0;
}
//命令行：Project1.exe 
//13.11.7(1).txt
//13.11.7(2).txt
#endif
//法二
#if 0

void function_b(FILE* f1, FILE* f2)
{
	char ch1, ch2;

	do
	{
		while ((ch1 = getc(f1)) != EOF && ch1 != '\n')
		{
			putc(ch1, stdout);
		}

		while ((ch2 = getc(f2)) != EOF && ch2 != '\n')
		{
			putc(ch2, stdout);
		}
		putchar('\n');

	} while (ch1 != EOF && ch2 != EOF);
}
//https ://blog.csdn.net/weixin_44603568/article/details/91349059
#endif


//8.
#if 0
int main(int argc, char **argv)
{
	if (argc < 2)
	{
		fprintf(stderr,"错误的输入项！");
		exit(EXIT_FAILURE);
	}
	if (strlen(argv[1]) != 1)
	{
		fprintf(stderr, "只能查找一个字符！");
		exit(EXIT_FAILURE);
	}

	char* find;
	int count = 0;

	if (argc == 2)
	{
		printf("请输入字符串：");
		char words[41];
		fscanf(stdin, "%40s", words);

		find = words;
	
		while (find < words + strlen(words))
		{
			if(*find == *argv[1])
				count++;
			find++;
		}
		fprintf(stdout,"字符%s共出现了%d次。",argv[1],count);
	}

	if (argc > 2)
	{
		FILE* fp[5];//定义5个指向FILE的指针

		for (int i = 0; i < argc - 2; i++)//若输入3项，则有一个文件，argc=3，只需fp[0]即可
			if ((fp[i] = fopen(argv[i + 2], "r")) == NULL)//fp[0]=argv[2]
			{
				fprintf(stderr, "未能打开文件：%s\n", argv[i + 2]);
				exit(EXIT_FAILURE);
			}


		char ch;
		for (int i = 0; i < argc - 2; i++)
		{			
			while ((ch = getc(fp[i])) != EOF)
			{
				if (ch == *argv[1])
					count++;
			}
			printf("字符%s在文件%s中共出现了%d次。",argv[1], argv[i + 2],count);
			count = 0;
			putchar('\n');
		}
		for (int i = 0; i < argc - 2; i++)
			fclose(fp[i]);
	}

	return 0;
}
//命令行：Project1.exe 
//13.11.8(1).txt
//13.11.8(2).txt
#endif
//读取标准输入，并判断字符与给定字符相同的次数
//法二：不一定要创建二维数组来存储输入的字符，直接在输入时逐个字符判断也可行。
#if 0
printf("请输入字符串：");
while ((ch = getchar()) != EOF)
{
	if (ch == argv[1][0])
		count++;
}
#endif


//9.单词编号
#if 0
#define MAX 41
int main(void)
{
	FILE* fp;
	char temp[MAX];
	char words[MAX];

	if ((fp = fopen("13.11.9.txt", "a+")) == NULL)//读和写
	{
		fprintf(stderr, "Can't open \"13.11.9.txt\" file.\n");
		exit(EXIT_FAILURE);
	}

	int count=0;

	rewind(fp);//若无此语句，则程序运行时效果不佳。		//*****************注：若fopen模式为r+，则不用写此语句。*****************
	while ((fscanf(fp, "%40s", temp) == 1))//scanf执行了几次，就证明文件中已有几个单词。
		count++;

	 
	puts("请输入要存入文件的内容：(在新行按#以结束输入)");
	while ((fscanf(stdin, "%40s", words) == 1) && (words[0] != '#'))
	{
		count++;
		fprintf(fp, "%d.", count);
		fprintf(fp, "%s\n", words);		
	}

	puts("文件的内容是：");
	rewind(fp);
	while (fscanf(fp, "%s", words) == 1)
		puts(words);
	puts("Done !");

	if (fclose(fp) != 0)
		fprintf(stderr, "关闭文件失败！\n");

	return 0;
}
//命令行：Project1.exe 
#endif
//法二：使用fgets()来确定原文件中的行数
#if 0
int get_number(FILE* fp)
{
	int i = 0;
	char temp[80];
	rewind(fp);
	while (fgets(temp, 80, fp) != NULL)
		i++;
	return i;
}
#endif


//10.
#if 0
int main(void)
{
	FILE* fp;
	char name[20];

	printf("请输入您要打开的文件名：");
	scanf("%s",name);

	if ((fp = fopen(name, "rb")) == NULL)//读文件						//此处用文本模式还是二进制模式读文件内容，
	{																									//文本的一行可见字符后还有两个位置，是\r\n
		fprintf(stderr, "未能打开目标文件：%s\n", name);
		exit(EXIT_FAILURE);
	}

	printf("请输入一个文件位置：");
	int index;
	char ch;
	while (scanf("%d", &index) == 1 && index >= 0)
	{
		long pos = (long)index * sizeof(char);
		fseek(fp,pos,SEEK_SET);

		while ((ch = getc(fp)) != '\n')											
		{
			putc(ch, stdout);
		}
		//while ((fgets(temp, 80, fp) != NULL))//读入该文件位置所在的行，行缓冲。但是无法设置遇到\n停止读入。
		//但是可以把上句改为if即可完成程序功能
		/*if (fgets(temp, 80, fp) != NULL)
			printf("%s",temp);*/

		printf("\n请输入一个文件位置(输入负数或非数字字符可退出程序)：");
	}

	rewind(fp);
	fclose(fp);

	return 0;
}
//命令行：Project1.exe
//13.11.10.txt
#endif


//11.
#if 0
char* string_in(char* string1, char* string2);

int main(int argc,char **argv)
{
	if (argc != 3)//程序名，字符串，文件名
	{
		printf("输入项数错误！\n");
		exit(EXIT_FAILURE);
	}
	FILE* fp;
	if ((fp = fopen(argv[2], "r")) == NULL)
	{
		printf("打开%s文件失败\n", argv[2]);
		exit(EXIT_FAILURE);
	}

	char temp[80];
	puts("包含该字符的行：");
	while ((fgets(temp, 80, fp) != NULL))//fgets()一行一行读入，因为是行缓冲。
	{
		if (string_in(temp, argv[1]))
		{		
			fputs(temp, stdout);
		}
	}

	return 0;
}
char* string_in(char* string1, char* string2)																                        
{

	int count = 0;//匹配度计数
	int length = strlen(string2);

	while (count < length && *string1 != '\0')//若匹配未完成，且没有轮到string1的末尾字符后的第一个位置。
	{
		if (*(string1 + count) == *(string2 + count))//若s1和s2的第一个字符匹配，则计数值加一。
			count++;
		else
		{
			count = 0;
			string1++;//若不匹配，则轮到s1的第二个字符与s2的第一个字符检测。
		}
	}
	if (count == length)
		return string1;//返回主串中子串的首地址。

	else
		return NULL;
}
//命令行：Project1.exe a 13.11.11.txt
#endif
//法二：使用strstr()
#if 0
int main(int argc, char** argv)
{
	if (argc != 3)//程序名，字符串，文件名
	{
		printf("输入项数错误！\n");
		exit(EXIT_FAILURE);
	}
	FILE* fp;
	if ((fp = fopen(argv[2], "r")) == NULL)
	{
		printf("打开%s文件失败\n", argv[2]);
		exit(EXIT_FAILURE);
	}

	char temp[80];
	puts("包含该字符的行：");
	while ((fgets(temp, 80, fp) != NULL))//fgets()一行一行读入，因为是行缓冲。
	{
		if (strstr(temp, argv[1]))
		{
			fputs(temp, stdout);
		}
	}

	return 0;
}
#endif


//12.
#if 0
#define ROWS 20
#define COLUMNS 30
int main(void)
{
	int number[ROWS][COLUMNS] = {0};

	const FILE* fp;

	if ((fp = fopen("13.11.12(1).txt", "rb")) == NULL)//读模式（二进制模式打开文件）
	{
		fprintf(stderr, "未能打开文件(此文件用于读出数据)：%s\n", "13.11.12(1).txt");
		exit(EXIT_FAILURE);
	}

	//用fscanf()读取字符，存为整型数据，不读取空格和换行符。
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLUMNS; j++)
			fscanf(fp,"%d", &number[i][j]);
	}

	puts("读取到如下数据：");
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLUMNS; j++)
			printf("%d", number[i][j]);
		putchar('\n');
	}

	fclose(fp);

	puts("根据以上描述选择特定的输出字符，最终输出如下：");

	//创建一个临时二维数组存转换好的字符数据
	char shuchu[ROWS][COLUMNS+1] ;

	for (int i = 0; i < ROWS; i++)
	{
		shuchu[i][30] = '\0';
	}

	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLUMNS; j++)
		{
			if (number[i][j] == 0)
				shuchu[i][j] = ' ';
			if (number[i][j] == 1)
				shuchu[i][j] = '.';
			if (number[i][j] == 2)
				shuchu[i][j] = '\'';
			if (number[i][j] == 3)
				shuchu[i][j] = ':';
			if (number[i][j] == 4)
				shuchu[i][j] = '~';
			if (number[i][j] == 5)
				shuchu[i][j] = '*';
			if (number[i][j] == 6)
				shuchu[i][j] = '=';
			if (number[i][j] == 7)
				shuchu[i][j] = '$';
			if (number[i][j] == 8)
				shuchu[i][j] = '%';
			if (number[i][j] == 9)
				shuchu[i][j] = '#';
		}
	}

	//for (int i = 0; i < ROWS; i++)
	//{
	//	for (int j = 0; j < COLUMNS+1; j++)
	//		printf("%c", shuchu[i][j]);
	//	putchar('\n');
	//}
																					//*************************************注**********************************************
	//或：																		//	char shuchu[ROWS][COLUMNS+1] ;不能写成int shuchu[ROWS][COLUMNS+1] ;
	for (int i = 0; i < ROWS; i++)								//否则转换说明%s只能打印数组的首个元素。					
		fprintf(stdout, "%s\n", shuchu[i]);


	FILE* out;
	if ((out = fopen("13.11.12(2).txt", "wb")) == NULL)//写模式（二进制模式打开文件）
	{
		fprintf(stderr, "未能打开文件：%s\n", "13.11.12(2).txt");
		exit(EXIT_FAILURE);
	}


	//for (int i = 0; i < ROWS; i++)
	//{
	//	for (int j = 0; j < COLUMNS + 1; j++)
	//		fprintf(out,"%c", shuchu[i][j]);
	//	putc('\n',out);
	//}
	//或
	for (int i = 0; i < ROWS; i++)															
		fprintf(out, "%s\n", shuchu[i]);


	puts("最终输出内容已存入13.11.12(2).txt");

	fclose(out);

	return 0;
}
//命令行：Project1.exe 
#endif
//法二：通过查找一维字符数组的下标和元素值来实现整数到符号的转换
#if 0
char convert[] = { ' ',           '.',           '\'',             '\"',         '^',           '*',          '%',           '$',          '@',           '#' };
for (int i = 0; i < ROWS; i++)
{
	for (int j = 0; j < COLUMNS + 1; j++)
	{
		printf("%c", convert[   number[i][j]   ]   );
		fprintf(out, "%c", convert[number[i][j]]);
	}
	printf("\n");
	putc('\n', out);
}
#endif
//法三：利用宏定义的数组+指针来实现转换数据
#if 0
# define STR " .':~*=&%#"
for (int i=0,j = 0; i < 20; i++)
{
	for (j = 0; j < 30; j++)
		number[i][j] = *(STR + number[i][j]);

	number[i][j] = '\0';
	fprintf(out, "%s\n", number[i]);
}
//https ://blog.csdn.net/weixin_44603568/article/details/91349059
#endif
//法四：不使用二维数组和fscanf()，而用fgets()将字符转换成规定的数据。
#if 0
char line[61];//数字+空格+'\0'=61个char形存储空间
while ((fgets(line, 61 * sizeof(char)), fp)!=NULL)
{
	for (int i = 0; i < 61; i++)
	{
		if (line[i] >= 48 && line[i] <= 57)
		{
			printf("%c", convert[   line[i]-48    ]);
			fprintf(out, "%c", convert[line[i] - 48]);
		}
	}
	printf("\n");
	fprintf(out,"\n");
}
#endif


//13.用变长数组(VLA)代替标准数组,完成上述程序的功能
#if 0
# include <stdio.h>
# include <stdlib.h>

# define ROWS 20
# define COLS 30
# define FNAME "no12.txt"
# define FARGS "no12.dat"
# define STR " .':~*=&%#"

void initialize_ar(FILE* fp, int n, int m, int ar[n][m]);
void set_st(int n, int m, char st[n][m + 1], int ar[n][m]);

int main(void)
{
	FILE* fp, * ft;
	int ar[ROWS][COLS];
	char st[ROWS][COLS + 1];

	if (!(fp = fopen(FNAME, "r")))
	{
		fprintf(stderr, "Can't open file %s.\n", FNAME);
		exit(EXIT_FAILURE);
	}

	if (!(ft = fopen(FARGS, "w")))
	{
		fprintf(stderr, "Can't open file %s.\n", FARGS);
		exit(EXIT_FAILURE);
	}

	initialize_ar(fp, ROWS, COLS, ar);
	set_st(ROWS, COLS, st, ar);

	for (int i = 0; i < ROWS; i++)
		fprintf(ft, "%s\n", st[i]);

	if (fclose(fp) || fclose(ft))
	{
		fprintf(stderr, "Clossing error .\n");
		exit(EXIT_FAILURE);
	}

	return 0;
}

void initialize_ar(FILE* fp, int n, int m, int ar[n][m])
{
	// 读取文件中的内容到整型数组
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			//这样做是为了确保fscanf()正确读到1个数,而不受空格和其他字符影响
			while (fscanf(fp, "%d", &ar[i][j]) != 1)
				fscanf(fp, "%*c");
}

void set_st(int n, int m, char st[n][m + 1], int ar[n][m])
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			st[i][j] = *(STR + ar[i][j]);
		}
		st[i][j] = '\0';
	}
}
//https ://blog.csdn.net/weixin_44603568/article/details/91349059
#endif


//14.图像抖动优化算法
#if 0
# include <stdio.h>
# include <stdlib.h>
# include <math.h>

# define ROWS 20
# define COLS 30
# define FNAME "no12.txt"
# define FARGS "no12.dat"
# define STR " .':~*=&%#"

void initialize_ar(FILE* fp, int n, int m, int ar[n][m]);//读取文件中的原始字符数据并存入临时二维数组ar中（类型：int）
void reconstruction(int n, int m, int ar[n][m]);//优化算法，处理二维数组ar的值
void set_st(int n, int m, char st[n][m + 1], int ar[n][m]);//临时二维数组ar中的值处理为字符后存入临时二维数组st中（类型：char）

int main(void)
{
	FILE* fp, * ft;
	int ar[ROWS][COLS];
	char st[ROWS][COLS + 1];

	if (!(fp = fopen(FNAME, "r")))
	{
		fprintf(stderr, "Can't open file %s.\n", FNAME);
		exit(EXIT_FAILURE);
	}

	if (!(ft = fopen(FARGS, "w")))
	{
		fprintf(stderr, "Can't open file %s.\n", FARGS);
		exit(EXIT_FAILURE);
	}

	initialize_ar(fp, ROWS, COLS, ar);
	reconstruction(ROWS, COLS, ar);
	set_st(ROWS, COLS, st, ar);

	for (int i = 0; i < ROWS; i++)
		fprintf(ft, "%s\n", st[i]);

	if (fclose(fp) || fclose(ft))
	{
		fprintf(stderr, "Clossing error .\n");
		exit(EXIT_FAILURE);
	}

	return 0;
}

void initialize_ar(FILE* fp, int n, int m, int ar[n][m])
{
	// 读取文件中的内容到整型数组
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			//这样做是为了确保fscanf()正确读到1个数,而不受空格和其他字符影响
			while (fscanf(fp, "%d", &ar[i][j]) != 1)
				fscanf(fp, "%*c");
}

void reconstruction(int n, int m, int ar[n][m])
{
	//int left, right, up, down;
	int l, r, u, d;
	int sum;
	int count;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)//从ar二维数组的第一行第一列开始处理
		{
			l = r = u = d = 1;

			//法二：
			//left = right = up = down = -1 ;
			sum = 0;
			count = 0;

			if (j > 0)
			{
				//left = ar[i][m - 1] ;
				l = abs(ar[i][j] - ar[i][j - 1]) > 1 ? 1 : 0;//abs:绝对值函数
				sum += ar[i][j - 1];
				count++;
			}

			if (j < m - 1)
			{
				r = abs(ar[i][j] - ar[i][j + 1]) > 1 ? 1 : 0;//以第一行第一列为例，其与其右侧的数作差，判断是否大于1
				sum += ar[i][j + 1];
				count++;
				//right = ar[i][m + 1] ;
			}
			if (i > 0)
			{
				u = abs(ar[i][j] - ar[i - 1][j]) > 1 ? 1 : 0;
				sum += ar[i - 1][j];
				count++;
				//up = ar[i - 1][m] ;
			}
			if (i < n - 1)
			{
				d = abs(ar[i][j] - ar[i + 1][j]) > 1 ? 1 : 0;//以第一行第一列为例，其与其下侧的数作差，判断是否大于1
				sum += ar[i + 1][j];
				count++;
				//down = ar[i + 1][m] ;
			}

			if (l && r && u && d)//若某数与其上下左右的数的差都大于1，则某数要被优化（4条边上的数值不会被优化）
			{
				ar[i][j] = sum / (double)count;
			}


			/*
			if ((abs(left - ar[i][j]) > 1) && (abs(right - ar[i][j]) > 1)
					&& (abs(up - ar[i][j]) > 1) && (abs(down - ar[i][j]) > 1))
				ar[i][j] = (left + right + up + down) / 4.0 ;
			*/
		}
	}
}

void set_st(int n, int m, char st[n][m + 1], int ar[n][m])
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			st[i][j] = *(STR + ar[i][j]);
		}
		st[i][j] = '\0';
	}
}
//https ://blog.csdn.net/weixin_44603568/article/details/91349059
#endif