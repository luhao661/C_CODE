#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>//exit()
//��Ҫ���������У��ļ�·���ڣ�D:\CODE\C_CODE\C Primer Plus Code practice\chapter 13\code2\Project1\x64\Debug
//
#if 1
#endif


//��ϰ��
//4.
#if 0
int main(int argc,char **argv)
{
	double temp[1];
	double sum=0;
	int count = 0;

	if (argc < 1||argc>2)
	{
		fprintf(stderr,"�������������");
		exit(EXIT_FAILURE);
	}
	else if (argc == 1)
	{
		puts("������С����(����q��ֹͣ)");
		while ((fscanf(stdin, "%lf", temp) == 1))
		{
			sum += *temp;
			count++;
		}
		printf("�������ֵ�����ƽ��ֵ��%.3lf",sum/count);
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
		printf("�������ֵ�����ƽ��ֵ��%.3lf", sum / count);

		fclose(fp);
	}
	puts("\n��ɣ�");

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
		fprintf(stderr, "�������������");
		exit(EXIT_FAILURE);
	}
		
		FILE* fp;

		if ((fp = fopen(argv[2], "r")) == NULL)
		{
			fprintf(stdout, "Can't open %s file.\n", argv[2]);
			exit(EXIT_FAILURE);
		}

		char temp[80];

		puts("�������ַ����У�");
		
		while ((fgets(temp, 80, fp) !=NULL))//fgets()һ��һ�ж��룬��Ϊ���л��塣
		{
			if(strchr(temp, *argv[1])!=NULL)//ע��strchr()�ڶ�������������ֵ�����Ա����*��
				fputs(temp, stdout);
		}

		fclose(fp);
	
	puts("��ɣ�");

	return 0;
}//���ԣ�Project1.exe y 13.10.5.txt
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