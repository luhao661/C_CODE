#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//��Ҫ���������У��ļ�·���ڣ�D:\CODE\C_CODE\C Primer Plus Code practice\chapter 13\code3\Project1\x64\Debug
//
#if 1
#endif


//�����ϰ
//1.
#if 0
char* s_gets(char* string, int n);
int main(void)
{
	puts("������Ҫ�򿪵��ļ�����");
	char wenjianmin[80];
	s_gets(wenjianmin,80);

	FILE* fp;
	if ((fp=fopen(wenjianmin,"r"))==NULL)
	{
		printf("��%s�ļ�ʧ��\n", wenjianmin);
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
#define BUFSIZE 4096//��������С
#define LEN 81//�ļ�����󳤶�
void kaobei(FILE* source, FILE* destination);//��������

int main(int argc,char **argv)
{
	FILE* fpsource, * fptarget;//ָ��Դ�ļ�  ָ��Ŀ���ļ�

	if (argc != 3)
	{
		printf("������������\n");
		exit(EXIT_FAILURE);
	}

	if ((fptarget = fopen(argv[2], "wb")) == NULL)//��������Ŀ���ļ�
	{
		fprintf(stderr, "δ�ܴ�Ŀ���ļ���%s\n", argv[2]);
		exit(EXIT_FAILURE);
	}
	if (setvbuf(fptarget, NULL, _IOFBF, BUFSIZE) != 0)//����һ�����������
	{
		fprintf(stderr, "δ�ܴ���%s�����������\n", argv[2]);
		exit(EXIT_FAILURE);
	}

	if (strcmp(argv[1], argv[2]) == 0)
	fputs("���ܿ����ļ��������䱾��\n", stderr);


	if ((fpsource = fopen(argv[1], "rb")) == NULL)//��ȡԴ�ļ�
	{
		fprintf(stderr, "δ�ܴ�Դ�ļ���%s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	if (setvbuf(fpsource, NULL, _IOFBF, BUFSIZE) != 0)//����һ�����뻺����
	{
	 fprintf(stderr, "δ�ܴ���%s�����뻺����\n", argv[1]);
	 exit(EXIT_FAILURE);
	}

	kaobei(fptarget, fpsource);

	if (ferror(fptarget) != 0)
	fprintf(stderr, "д�ļ�%s����\n", fptarget);
	if (ferror(fpsource) != 0)
	fprintf(stderr, "��Դ�ļ�%s����\n", fpsource);

	printf("�ļ�%s�����ѿ�����%s\n", argv[1], argv[2]);

	fclose(fpsource);
	fclose(fptarget);

	return 0;
}
void kaobei(FILE* target, FILE* source)
{
	size_t bytes;
	static char temp[BUFSIZE];

	while ((bytes = fread(temp, sizeof(char), BUFSIZE, source)) > 0)
		//����ȡ�ļ����ݿ������ڴ��еĵ�ַ���������ݿ�Ĵ�С���������ݿ�����������ȡ���ļ�
		fwrite(temp, sizeof(char), bytes, target);
	//��д����ļ��������ڵ��ڴ��еĵ�ַ����д���ݿ�Ĵ�С����д���ݿ���������д����ļ�
}
//�����У�Project1.exe 13.11.2(1).txt 13.11.2(2).txt
#endif


//3.
#if 0
#include <ctype.h>
#define BUFSIZE 4096//��������С
#define LEN 81//�ļ�����󳤶�
void kaobei(FILE* source, FILE* destination);
char* s_gets(char* string, int n);//���뺯��

int main(void)
{
	FILE* fpsource, * fptarget;//ָ��Դ�ļ�  ָ��Ŀ���ļ�
	int files = 0;//�����ļ���������

	char file_target[LEN];
	char file_source[LEN];
	
	puts("������������Ŀ���ļ�����");
	s_gets(file_target, LEN);
	if ((fptarget = fopen(file_target, "w")) == NULL)//����дĿ���ļ�
	{
		fprintf(stderr, "δ�ܴ�Ŀ���ļ���%s\n", file_target);
		exit(EXIT_FAILURE);
	}

	puts("������Ҫ���������ݵĵ�һ��Դ�ļ�����(��������Խ���)");
	while (s_gets(file_source, LEN) && file_source[0] != '\0')//������У�s_gets()���\nת����\0
	{
		if (strcmp(file_source, file_target) == 0)
			fputs("���ܿ����ļ��������䱾��\n", stderr);
		else if ((fpsource = fopen(file_source, "r")) == NULL)//��Դ�ļ�
			fprintf(stderr, "δ�ܴ�Դ�ļ���%s\n", file_source);
		else
		{	
			kaobei(fptarget, fpsource);

			if (ferror(fptarget) != 0)
				fprintf(stderr, "д�ļ�%s����\n", fptarget);
			if (ferror(fpsource) != 0)
				fprintf(stderr, "��Դ�ļ�%s����\n", fpsource);
			fclose(fpsource);
			files++;
			printf("�ļ�%s�����ѿ�����%s\n", file_source, file_target);

			puts("������Ҫ���������ݵ���һ��Դ�ļ�����(��������Խ���)");
		}
	}
	printf("������ɣ�%d���ļ���������ת��Ϊ��д�󿽱���%s", files, file_target);

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
//�����У�����Project1.exe��13.11.3(2).txt��13.11.3(1).txt								//ע����ʹ�����������޷���ɴ˳���Ĺ���
#endif


//4.
#if 0
#define BUFSIZE 4096//��������С
#define LEN 81//�ļ�����󳤶�

int main(int argc, char** argv)
{
	FILE* fp[5];//����5��ָ��FILE��ָ��

	if (argc <2)//ֻ����0��1��ʱ����
	{
		printf("������������\n");
		exit(EXIT_FAILURE);
	}

	for(int i=0;i<argc-1;i++)//������2�����һ���ļ���argc=2��ֻ��fp[0]����
	if ((fp[i] = fopen(argv[i+1], "r")) == NULL)//fp[0]=argv[1]
	{
		fprintf(stderr, "δ�ܴ��ļ���%s\n", argv[i+1]);
		exit(EXIT_FAILURE);
	}

	char ch;
	for (int i = 0; i < argc - 1; i++)
	{
		printf("��%d���ļ����ݣ�",i+1);
		while ((ch = getc(fp[i])) != EOF)
			putchar(ch);

		putchar('\n');
	}

	printf("����������ļ�����ʾ\n");

	for (int i = 0; i < argc - 1; i++)
	fclose(fp[i]);
	
	return 0;
}
//�����У�Project1.exe 13.11.4(1).txt 13.11.4(2).txt 13.11.4(3).txt
#endif


//5.
#if 0
#define BUFSIZE 4096//��������С
#define LEN 81//�ļ�����󳤶�

void appendix(FILE* source, FILE* destination);//���ݸ��Ӻ���

int main(int argc,char **argv)
{
	FILE* fptarget;//ָ��Ŀ���ļ�
	FILE* fpsource[6];//6������ָ��Դ�ļ���ָ�� 
	int files = 0;//�����ļ���������
	int ch;//����ַ���ʾ

	if (argc < 3)//ֻ����0��1��2��ʱ����
	{
		printf("������������\n");
		exit(EXIT_FAILURE);
	}

	if ((fptarget = fopen(argv[1], "a+")) == NULL)//����дĿ���ļ�
	{
		fprintf(stderr, "δ�ܴ�Ŀ���ļ���%s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	if (setvbuf(fptarget, NULL, _IOFBF, BUFSIZE) != 0)//����һ�����������
	{
		fprintf(stderr, "δ�ܴ���%s�����������\n", argv[1]);
		exit(EXIT_FAILURE);
	}


	int i = 0;
	while (i<argc-2)//����3����������ֻ��1��Դ�ļ�
	{
		if (strcmp(argv[1], argv[i+2]) == 0)//����Ŀ���ļ��Ƿ��Դ�ļ���һ��
			fputs("���ܿ����ļ��������䱾��\n", stderr);
		else if ((fpsource[i] = fopen(argv[i + 2], "r")) == NULL)//��Դ�ļ�
			fprintf(stderr, "δ�ܴ�Դ�ļ���%s\n", argv[i + 2]);
		else
		{
			appendix(fptarget, fpsource[i]);
		
			if (ferror(fptarget) != 0)
				fprintf(stderr, "д�ļ�%s����\n", fptarget);
			if (ferror(fpsource[i]) != 0)
				fprintf(stderr, "��Դ�ļ�%s����\n", fpsource[i]);
			fclose(fpsource[i]);
			files++;
		}	
		i++;																						//ע�����˴���дi++������ĳ�while (i++<argc-2)����i����1��ֵ����ѭ����
	}																								//����޷��������ݵĺ����
	printf("������ɣ�%d���ļ��������Ѹ��ӵ�%s\n", files, argv[1]);

	rewind(fptarget);
	printf("%s�������ǣ�\n", argv[1]);
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
		//����ȡ�ļ����ݿ������ڴ��еĵ�ַ���������ݿ�Ĵ�С���������ݿ�����������ȡ���ļ�
		fwrite(temp, sizeof(char), bytes, target);
	//��д����ļ��������ڵ��ڴ��еĵ�ַ����д���ݿ�Ĵ�С����д���ݿ���������д����ļ�
}
//�����У�Project1.exe 13.11.5(1).txt 13.11.5(2).txt 13.11.5(3).txt
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
	puts("������Ҫ�򿪵��ļ�����");
	char wenjianmin[80];
	s_gets(wenjianmin, 80);

	if ((in = fopen(wenjianmin, "r")) == NULL)
	{
		printf("��%s�ļ�ʧ��\n", wenjianmin);
		exit(EXIT_FAILURE);
	}

	strncpy(name,wenjianmin, LEN - 5);
	name[LEN - 5] = '\0';
	strcat(name, "-reduced.txt");//ע���ڶ����ַ�������ӵ�һ���ַ����ĵ�һ�����ַ�����ʼ���ǡ�    red��reduced

	if ((out = fopen(name, "w")) == NULL)//�򿪵ڶ����ļ�
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

	puts("ѹ����ɣ�");

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
//�����У�Project1.exe 
//13.11.6.txt
#endif


//7.a
#if 1
#define MAX 81
int main(void)
{
	char file1[MAX];
	char file2[MAX];
	FILE* fp1, * fp2;

	char ch;
	long count, last;

	puts("������Ҫ�򿪵ĵ�һ���ļ�����");
	scanf("%80s", file1);
	if ((fp1 = fopen(file1, "r")) == NULL)
	{
		fprintf(stderr, "Can't open %s file.\n", file1);
		exit(EXIT_FAILURE);
	}

	puts("������Ҫ�򿪵ĵڶ����ļ�����");
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
	//	if (fgets(temp, 80, fp2) != NULL);													//��覴ã�����һ���ļ��������ڵڶ�������ڶ����ļ����ݲ��ܴ�ӡ��
	//	fputs(temp, stdout);
	//}
		char temp1[80];
		char temp2[80];
		int a, b;
		a = b = 1;
	//while ((a=fgets(temp1, 80, fp1)) != NULL|| (b=fgets(temp2, 80, fp2) )!= NULL)//������ǰ��Ϊ�棬�򲻶Ժ��߽��м��㡣
	
	while (a||b)
	{		
			a = fgets(temp1, 80, fp1);
			if(a)//aΪEOFʱ����ִ�д�ӡ
			fputs(temp1, stdout);
			
		
			b = fgets(temp2, 80, fp2);
			if(b)////bΪEOFʱ����ִ�д�ӡ
			fputs(temp2, stdout);		
	}

	
	if (fclose(fp1) != 0 || fclose(fp2) != 0)
		fprintf(stderr, "Error in closing files\n");

	return 0;
}
//�����У�Project1.exe 
//13.11.7(1).txt
//13.11.7(2).txt
#endif
