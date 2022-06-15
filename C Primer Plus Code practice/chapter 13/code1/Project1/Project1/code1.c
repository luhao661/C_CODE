#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>//提供exit()原型
//
#if 1
#endif


//使用标准I/O
#if 0
int main(int argc, char** argv)
{
	int ch;
	FILE* fp;
	unsigned long count = 0;
	if (argc != 2)
	{
		printf("Usage: %s filename\n",argv[0]);
		exit(EXIT_FAILURE);
	}
	if ((fp=fopen(argv[1],"r"))==NULL)
	{
		printf("Can't open %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while ((ch = getc(fp)) != EOF)
	{
		putc(ch, stdout);
		count++;
	}
	fclose(fp);
	printf("File %s has %lu characters\n",argv[1],count);

	return 0;
}
#endif


//编写文件压缩程序
#if 0
#include <string.h>
#define LEN 40
int main(int argc, char** argv)
{
	FILE* in, * out;
	int ch;
	char name[LEN];
	int count = 0;

	if (argc < 2)
	{
		printf("Usage: %s filename\n", argv[0]);
		exit(EXIT_FAILURE);
	}
	if ((in = fopen(argv[1], "r")) == NULL)//打开第一个文件
	{
		fprintf(stderr,"Can't open %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	strncpy(name,argv[1],LEN-5);
	name[LEN - 5] = '\0';
	strcat(name,".red");//注：第二个字符串仅会从第一个字符串的第一个空字符处开始覆盖。    red即reduced

	if ((out = fopen(name, "w")) == NULL)//打开第二个文件
	{
		fprintf(stderr, "Can't open %s\n", name);
		exit(EXIT_FAILURE);
	}
	while ((ch = getc(in)) != EOF)
	{
		if (count++ % 3 == 0)
			putc(ch,out);
	}
	if (fclose(in) != 0 || fclose(out) != 0)
		fprintf(stderr,"Error in closing files\n");

	return 0;
}
#endif


//使用fprintf()、fscanf()、rewind()
#if 0
#define MAX 41
int main(void)
{
	FILE* fp;
	char words[MAX];

	if ((fp = fopen("wordy.txt", "a+")) == NULL)
	{
		fprintf(stderr, "Can't open \"wordy\" file.\n");
		exit(EXIT_FAILURE);
	}
	puts("请输入要存入文件的内容：(在新行按#以结束输入)");
	while ((fscanf(stdin, "%40s", words) == 1) && (words[0] != '#'))
		fprintf(fp,"%s\n",words);

	puts("文件的内容是：");
	rewind(fp);
	while (fscanf(fp, "%s", words) == 1)
		puts(words);
	puts("Done !");

	if (fclose(fp) != 0)
		fprintf(stderr,"关闭文件失败！\n");

	return 0;
}
#endif


//使用fseek()、ftell()倒序打印指定文件的字符
#if 0
#define MAX 81
int main(void)
{
	char file[MAX];
	char ch;

	FILE* fp;
	long count, last;

	puts("请输入要打开的文件名：");
	scanf("%80s",file);
	if ((fp = fopen(file, "rb")) == NULL)
	{
		fprintf(stderr, "Can't open %s file.\n",file);
		exit(EXIT_FAILURE);
	}
	
	fseek(fp,0L,SEEK_END);
	last = ftell(fp);

	for (count = 1L; count <= last; count++)
	{
		fseek(fp,-count,SEEK_END);
		ch = getc(fp);
		if (ch != EOF)
			putchar(ch);
	}
	putchar('\n');
	fclose(fp);

	return 0;
}
#endif


//把文件的内容附加到另一个文件的末尾
#if 1
#include<string.h>
#define BUFSIZE 4096
#define LEN 81

void appendix(FILE *source,FILE *destination);
char* s_gets(char* string, int n);

int main(void)
{


	return 0;
}
#endif

