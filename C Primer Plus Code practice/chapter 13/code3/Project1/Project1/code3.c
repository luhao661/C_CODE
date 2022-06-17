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
#if 1
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
	if ((fptarget = fopen(file_target, "w")) == NULL)//读或写目标文件
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
