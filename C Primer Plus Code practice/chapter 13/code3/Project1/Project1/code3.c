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
#if 1
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
