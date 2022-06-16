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
#if 0
#include<string.h>//提供strchr()原型
#define BUFSIZE 4096//缓冲区大小
#define LEN 81//文件名最大长度

void appendix(FILE *source,FILE *destination);//内容附加函数
char* s_gets(char* string, int n);//输入函数

int main(void)
{
	FILE* fpsource, * fptarget;//指向源文件  指向目标文件
	int files = 0;//附加文件数量计数

	char file_target[LEN];
	char file_source[LEN];
	int ch;//逐个字符显示

	puts("请输入待处理的目标文件名：");
	s_gets(file_target,LEN);
	if ((fptarget = fopen(file_target, "a+")) == NULL)//读或写目标文件
	{
		fprintf(stderr,"未能打开目标文件：%s\n",file_target);
		exit(EXIT_FAILURE);
	}
	//if (setvbuf(fptarget, NULL, _IOFBF, BUFSIZE) != 0)//创建一个输出缓冲区
	//{
	//	fprintf(stderr, "未能创建%s的输出缓冲区\n", file_target);
	//	exit(EXIT_FAILURE);
	//}

	puts("请输入要被拷贝内容的第一个源文件名：(输入空行以结束)");
	while (s_gets(file_source, LEN) && file_source[0] != '\0')//输入空行，s_gets()会把\n转化成\0
	{
		if (strcmp(file_source, file_target) == 0)
			fputs("不能拷贝文件内容至其本身\n", stderr);
		else if ((fpsource = fopen(file_source, "r")) == NULL)//读源文件
			fprintf(stderr,"未能打开源文件：%s\n",file_source);
		else
		{
			//if (setvbuf(fpsource, NULL, _IOFBF, BUFSIZE) != 0)//创建一个输入缓冲区
			//{
			//	fprintf(stderr, "未能创建%s的输入缓冲区\n", file_source);
			//	continue;
			//}

			appendix(fptarget, fpsource);

			if (ferror(fptarget) != 0)
				fprintf(stderr,"写文件%s错误\n", fptarget);
			if (ferror(fpsource) != 0)
				fprintf(stderr, "读源文件%s错误\n", fpsource);
			fclose(fpsource);
			files++;
			printf("文件%s内容已附加到%s\n",file_source,file_target);

			puts("请输入要被拷贝内容的下一个源文件名：(输入空行以结束)");
		}
	}
	printf("操作完成！%d个文件的内容已附加到%s",files,file_target);

	rewind(fptarget);
	printf("%s的内容是：",file_target);
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
		//待读取文件数据在内存中的地址，待读数据块的大小，待读数据块数量，待读取的文件
		fwrite(temp,sizeof(char),bytes,target);
}
char* s_gets(char* string, int n)
{
	char* fanhui;
	char* find;
	fanhui = fgets(string,n,stdin);
	if (fanhui)
	{
		find = strchr(string,'\n');
		if (find)
			*find = '\0';
		else
			while (getchar() != '\n')
				continue;
	}
	return fanhui;
}

#endif


//从文件中读取选定的内容
#if 1
#define SIZE 1000
int main(void)
{
	double numbers[SIZE];

	const char* file = "numbers.data";
	FILE* iofile;

	for (int i = 0; i < SIZE; i++)
		numbers[i] = 100.0 * i + 1.0 / (i+1);//创建一组double类型的值

	if ((iofile = fopen(file, "wb")) == NULL)//写模式
	{
		fprintf(stderr, "未能打开文件(此文件用于存储输出的数据)：%s\n", file);
		exit(EXIT_FAILURE);
	}
	
	fwrite(numbers,sizeof(double),SIZE,iofile);
//待写入文件数据在内存中的地址，待写数据块的大小，待写数据块数量，待写的文件
	fclose(iofile);

	if ((iofile = fopen(file, "rb")) == NULL)//读模式
	{
		fprintf(stderr, "未能打开文件(此文件用于读出数据)：%s\n", file);
		exit(EXIT_FAILURE);
	}


	printf("请输入一个索引值（0~999）：\n");
	int index;
	double value;
	while (scanf("%d", &index) == 1 && index >= 0 && index <= 999)
	{
		long pos = (long)index * sizeof(double);//确定指针指向double类型值的位置
		fseek(iofile,pos,SEEK_SET);//找到存储double类型数值的文件的某个数值的位置
		fread(&value,sizeof(double),1,iofile);
//待读取文件数据在内存中的地址，待读数据块的大小，待读数据块数量，待读取的文件
		printf("此处的值为%f\n",value);

		printf("请输入下一个索引值（0~999）：\n");
	}
	fclose(iofile);

	return 0;
}
#endif
