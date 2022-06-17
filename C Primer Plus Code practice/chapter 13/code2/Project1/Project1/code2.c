#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>//exit()
//若要命令行运行，文件路径在：D:\CODE\C_CODE\C Primer Plus Code practice\chapter 13\code2\Project1\x64\Debug
//
#if 1
#endif


//复习题
//4.
#if 0
int main(int argc,char **argv)
{
	double temp[1];
	double sum=0;
	int count = 0;

	if (argc < 1||argc>2)
	{
		fprintf(stderr,"输入的项数错误！");
		exit(EXIT_FAILURE);
	}
	else if (argc == 1)
	{
		puts("请输入小数：(输入q以停止)");
		while ((fscanf(stdin, "%lf", temp) == 1))
		{
			sum += *temp;
			count++;
		}
		printf("输入数字的算数平均值是%.3lf",sum/count);
	}
	else
	{
		FILE* fp;
	
		if ((fp = fopen(argv[1], "r")) == NULL)
		{
			fprintf(stdout, "Can't open %s file.\n", argv[1]);
			exit(EXIT_FAILURE);
		}

		while (fscanf(fp, "%lf", temp) == 1)
		{
			sum += *temp;
			count++;
		}
		printf("输入数字的算数平均值是%.3lf", sum / count);

		fclose(fp);
	}
	puts("\n完成！");

	return 0;
}
#endif


//5.
#if 0
#include<string.h>
int main(int argc, char** argv)
{
	if (argc !=3)
	{
		fprintf(stderr, "输入的项数错误！");
		exit(EXIT_FAILURE);
	}
		
		FILE* fp;

		if ((fp = fopen(argv[2], "r")) == NULL)
		{
			fprintf(stdout, "Can't open %s file.\n", argv[2]);
			exit(EXIT_FAILURE);
		}

		char temp[80];

		puts("包含该字符的行：");
		
		while ((fgets(temp, 80, fp) !=NULL))//fgets()一行一行读入，因为是行缓冲。
		{
			if(strchr(temp, *argv[1])!=NULL)//注：strchr()第二个参数是整型值，所以必须加*号
				fputs(temp, stdout);
		}

		fclose(fp);
	
	puts("完成！");

	return 0;
}//测试：Project1.exe y 13.10.5.txt
#endif


//8.
#if 1
int main(void)
{
	char name[] = "Yan";

	printf("Hello, %s\n",name);
	fprintf(stdout,"Hello, %s\n", name);
	fprintf(stderr,"Hello, %s\n", name);

	return 0;
}
#endif