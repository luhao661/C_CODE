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
	if ((fptarget = fopen(file_target, "w")) == NULL)//дĿ���ļ�
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
//3.��ĿҪ������ԭ�ļ�����ɶ����ݵ��޸ģ�����Ч��Ҫ������ԭ�ļ���
//��һ������ԭ�ļ�����ÿ���ַ����д���������һ����ʱ�ļ��У���������ݸ����ٸ��ǵ�ԭ�ļ���
#if 0
#include <ctype.h>
#define BUFSIZE 4096//��������С
#define LEN 81//�ļ�����󳤶�
void kaobei(FILE* source, FILE* destination);
char* s_gets(char* string, int n);//���뺯��

int main(void)
{
	FILE* fp1, * fp2;

	char file1[LEN];

	puts("������������Ŀ���ļ�����");
	s_gets(file1, LEN);

//��һ���򿪣��ر��ļ�����
#if 0
	if ((fp1 = fopen(file1, "r+")) == NULL)//����дĿ���ļ�
	{
		fprintf(stderr, "δ�ܴ�Ŀ���ļ���%s\n", file1);
		exit(EXIT_FAILURE);
	}

	if ((fp2 = fopen("13.11.3(2).txt", "r+")) == NULL)//����д��ʱ�ļ�
	{
		fprintf(stderr, "δ�ܴ���ʱ�ļ���%s\n", "13.11.3(2).txt");
		exit(EXIT_FAILURE);
	}
		
	kaobei(fp1, fp2);
	if (fclose(fp1) != 0 || fclose(fp2) != 0)
		fprintf(stderr, "Error in closing files\n");


	if ((fp1 = fopen(file1, "r+")) == NULL)//����дĿ���ļ�
	{
		fprintf(stderr, "δ�ܴ�Ŀ���ļ���%s\n", file1);
		exit(EXIT_FAILURE);
	}

	if ((fp2 = fopen("13.11.3(2).txt", "r+")) == NULL)//����д��ʱ�ļ�
	{
		fprintf(stderr, "δ�ܴ���ʱ�ļ���%s\n", "13.11.3(2).txt");
		exit(EXIT_FAILURE);
	}
	kaobei(fp2, fp1);
#endif

//������д���ļ�����rewind()
#if 1
	if ((fp1 = fopen(file1, "r+")) == NULL)//����дĿ���ļ�
	{
		fprintf(stderr, "δ�ܴ�Ŀ���ļ���%s\n", file1);
		exit(EXIT_FAILURE);
	}

	if ((fp2 = fopen("13.11.3(2).txt", "r+")) == NULL)//����д��ʱ�ļ�
	{
		fprintf(stderr, "δ�ܴ���ʱ�ļ���%s\n", "13.11.3(2).txt");
		exit(EXIT_FAILURE);
	}

	kaobei(fp1, fp2);
	rewind(fp1);
	rewind(fp2);
	kaobei(fp2, fp1);
#endif

	printf("������ɣ�\n");

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
//ʾ���ı���Take a leap. Take a chance.
//�����У�Project1.exe
//13.11.3(1).txt
#endif
//���������������д����fseek()��������дһ���ַ���Ȼ��ת���ַ������ļ�ָ�����һ���ַ����ٽ�ת������ַ�д���ļ���ÿ�θ���һ��ԭ�ַ�
#if 0
#include <ctype.h>
#define LEN 81//�ļ�����󳤶�
char* s_gets(char* string, int n);//���뺯��

int main(void)
{
	FILE* fp1;

	char file1[LEN];

	puts("������������Ŀ���ļ�����");
	s_gets(file1, LEN);

	if ((fp1 = fopen(file1, "r+")) == NULL)//����дĿ���ļ�
	{
		fprintf(stderr, "δ�ܴ�Ŀ���ļ���%s\n", file1);
		exit(EXIT_FAILURE);
	}


	char ch;
	while ((ch = getc(fp1)) != EOF)//��ȡ�ļ��е�ԭ�ַ�������ch��**�ļ��ڵĹ�����һλ�ַ�**
	{
						//ǿ������ת��
		fseek(fp1,-(long)sizeof(char),SEEK_CUR);//���ǰ��һλ�ַ�
		putc(toupper(ch),fp1);//����õ��ַ�������λ�ã�������ԭ�ַ���**�ļ��ڵĹ�����һλ�ַ�**

		//����ʹ�������д�ķ�ʽ����д�ļ�ʱ������˿���������д�ķ�ʽҪ�л������ķ�ʽ��
		//	�ͱ���ʹ�ö�λ�������¶�λ����Ҫ���ĵط�����Ȼ�͵ò������������������롣//https://blog.csdn.net/weixin_44603568/article/details/91349059
		fseek(fp1, 0L, SEEK_CUR);

		
		/*���������ѭ��������*/
		static int count=0;
		count++;
		if (count == 99)
			break;			
	}
	
		
	printf("������ɣ�\n");

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
//ʾ���ı���Take a leap. Take a chance.
//�����У�Project1.exe
//13.11.3(1).txt
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
		i++;																				//ע�����˴���дi++������ĳ�while (i++<argc-2)����i����1��ֵ����ѭ����
	}																						//����޷��������ݵĺ����
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
	name[LEN - 5] = '\0';//������������ַ���������LEN-5��������ַ����ļ����϶�ʱ��������LEN-5ǰ��Ҳ���п��ַ���
	strcat(name, "-reduced.txt");//ע��һ������µڶ����ַ�������ӵ�һ���ַ����ĵ�һ�����ַ�����ʼ���ǡ�    red��reduced

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
#if 0
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
			a = fgets(temp1, 80, fp1);//һ��һ�ж���
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
//������
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

	char temp1[80];
	char temp2[80];
	int a, b;
	a = b = 1;
	char* find;

	while (a || b)
	{
		a = fgets(temp1, 80, fp1);
		b = fgets(temp2, 80, fp2);
		
		if (a && b)//���ļ�1��2���ж��붼��ΪEOF
		{
			if(find=strchr(temp1,'\n'))//���ļ�1��ĳһ�к�Ļ��з�����ʹ���滻�ɿ��ַ�
			*find = '\0';

			strcat(temp1, temp2);
			fputs(temp1, stdout);
		}
		else if(a)//���ļ�1��ΪEOF
			fputs(temp1, stdout);
		else if (b)//���ļ�2��ΪEOF
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
//����
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
		fprintf(stderr,"����������");
		exit(EXIT_FAILURE);
	}
	if (strlen(argv[1]) != 1)
	{
		fprintf(stderr, "ֻ�ܲ���һ���ַ���");
		exit(EXIT_FAILURE);
	}

	char* find;
	int count = 0;

	if (argc == 2)
	{
		printf("�������ַ�����");
		char words[41];
		fscanf(stdin, "%40s", words);

		find = words;
	
		while (find < words + strlen(words))
		{
			if(*find == *argv[1])
				count++;
			find++;
		}
		fprintf(stdout,"�ַ�%s��������%d�Ρ�",argv[1],count);
	}

	if (argc > 2)
	{
		FILE* fp[5];//����5��ָ��FILE��ָ��

		for (int i = 0; i < argc - 2; i++)//������3�����һ���ļ���argc=3��ֻ��fp[0]����
			if ((fp[i] = fopen(argv[i + 2], "r")) == NULL)//fp[0]=argv[2]
			{
				fprintf(stderr, "δ�ܴ��ļ���%s\n", argv[i + 2]);
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
			printf("�ַ�%s���ļ�%s�й�������%d�Ρ�",argv[1], argv[i + 2],count);
			count = 0;
			putchar('\n');
		}
		for (int i = 0; i < argc - 2; i++)
			fclose(fp[i]);
	}

	return 0;
}
//�����У�Project1.exe 
//13.11.8(1).txt
//13.11.8(2).txt
#endif
//��ȡ��׼���룬���ж��ַ�������ַ���ͬ�Ĵ���
//��������һ��Ҫ������ά�������洢������ַ���ֱ��������ʱ����ַ��ж�Ҳ���С�
#if 0
printf("�������ַ�����");
while ((ch = getchar()) != EOF)
{
	if (ch == argv[1][0])
		count++;
}
#endif


//9.���ʱ��
#if 0
#define MAX 41
int main(void)
{
	FILE* fp;
	char temp[MAX];
	char words[MAX];

	if ((fp = fopen("13.11.9.txt", "a+")) == NULL)//����д
	{
		fprintf(stderr, "Can't open \"13.11.9.txt\" file.\n");
		exit(EXIT_FAILURE);
	}

	int count=0;

	rewind(fp);//���޴���䣬���������ʱЧ�����ѡ�		//*****************ע����fopenģʽΪr+������д����䡣*****************
	while ((fscanf(fp, "%40s", temp) == 1))//scanfִ���˼��Σ���֤���ļ������м������ʡ�
		count++;

	 
	puts("������Ҫ�����ļ������ݣ�(�����а�#�Խ�������)");
	while ((fscanf(stdin, "%40s", words) == 1) && (words[0] != '#'))
	{
		count++;
		fprintf(fp, "%d.", count);
		fprintf(fp, "%s\n", words);		
	}

	puts("�ļ��������ǣ�");
	rewind(fp);
	while (fscanf(fp, "%s", words) == 1)
		puts(words);
	puts("Done !");

	if (fclose(fp) != 0)
		fprintf(stderr, "�ر��ļ�ʧ�ܣ�\n");

	return 0;
}
//�����У�Project1.exe 
#endif
//������ʹ��fgets()��ȷ��ԭ�ļ��е�����
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

	printf("��������Ҫ�򿪵��ļ�����");
	scanf("%s",name);

	if ((fp = fopen(name, "rb")) == NULL)//���ļ�						//�˴����ı�ģʽ���Ƕ�����ģʽ���ļ����ݣ�
	{																									//�ı���һ�пɼ��ַ���������λ�ã���\r\n
		fprintf(stderr, "δ�ܴ�Ŀ���ļ���%s\n", name);
		exit(EXIT_FAILURE);
	}

	printf("������һ���ļ�λ�ã�");
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
		//while ((fgets(temp, 80, fp) != NULL))//������ļ�λ�����ڵ��У��л��塣�����޷���������\nֹͣ���롣
		//���ǿ��԰��Ͼ��Ϊif������ɳ�����
		/*if (fgets(temp, 80, fp) != NULL)
			printf("%s",temp);*/

		printf("\n������һ���ļ�λ��(���븺����������ַ����˳�����)��");
	}

	rewind(fp);
	fclose(fp);

	return 0;
}
//�����У�Project1.exe
//13.11.10.txt
#endif


//11.
#if 0
char* string_in(char* string1, char* string2);

int main(int argc,char **argv)
{
	if (argc != 3)//���������ַ������ļ���
	{
		printf("������������\n");
		exit(EXIT_FAILURE);
	}
	FILE* fp;
	if ((fp = fopen(argv[2], "r")) == NULL)
	{
		printf("��%s�ļ�ʧ��\n", argv[2]);
		exit(EXIT_FAILURE);
	}

	char temp[80];
	puts("�������ַ����У�");
	while ((fgets(temp, 80, fp) != NULL))//fgets()һ��һ�ж��룬��Ϊ���л��塣
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

	int count = 0;//ƥ��ȼ���
	int length = strlen(string2);

	while (count < length && *string1 != '\0')//��ƥ��δ��ɣ���û���ֵ�string1��ĩβ�ַ���ĵ�һ��λ�á�
	{
		if (*(string1 + count) == *(string2 + count))//��s1��s2�ĵ�һ���ַ�ƥ�䣬�����ֵ��һ��
			count++;
		else
		{
			count = 0;
			string1++;//����ƥ�䣬���ֵ�s1�ĵڶ����ַ���s2�ĵ�һ���ַ���⡣
		}
	}
	if (count == length)
		return string1;//�����������Ӵ����׵�ַ��

	else
		return NULL;
}
//�����У�Project1.exe a 13.11.11.txt
#endif
//������ʹ��strstr()
#if 0
int main(int argc, char** argv)
{
	if (argc != 3)//���������ַ������ļ���
	{
		printf("������������\n");
		exit(EXIT_FAILURE);
	}
	FILE* fp;
	if ((fp = fopen(argv[2], "r")) == NULL)
	{
		printf("��%s�ļ�ʧ��\n", argv[2]);
		exit(EXIT_FAILURE);
	}

	char temp[80];
	puts("�������ַ����У�");
	while ((fgets(temp, 80, fp) != NULL))//fgets()һ��һ�ж��룬��Ϊ���л��塣
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

	if ((fp = fopen("13.11.12(1).txt", "rb")) == NULL)//��ģʽ��������ģʽ���ļ���
	{
		fprintf(stderr, "δ�ܴ��ļ�(���ļ����ڶ�������)��%s\n", "13.11.12(1).txt");
		exit(EXIT_FAILURE);
	}

	//��fscanf()��ȡ�ַ�����Ϊ�������ݣ�����ȡ�ո�ͻ��з���
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLUMNS; j++)
			fscanf(fp,"%d", &number[i][j]);
	}

	puts("��ȡ���������ݣ�");
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLUMNS; j++)
			printf("%d", number[i][j]);
		putchar('\n');
	}

	fclose(fp);

	puts("������������ѡ���ض�������ַ�������������£�");

	//����һ����ʱ��ά�����ת���õ��ַ�����
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
																					//*************************************ע**********************************************
	//��																		//	char shuchu[ROWS][COLUMNS+1] ;����д��int shuchu[ROWS][COLUMNS+1] ;
	for (int i = 0; i < ROWS; i++)								//����ת��˵��%sֻ�ܴ�ӡ������׸�Ԫ�ء�					
		fprintf(stdout, "%s\n", shuchu[i]);


	FILE* out;
	if ((out = fopen("13.11.12(2).txt", "wb")) == NULL)//дģʽ��������ģʽ���ļ���
	{
		fprintf(stderr, "δ�ܴ��ļ���%s\n", "13.11.12(2).txt");
		exit(EXIT_FAILURE);
	}


	//for (int i = 0; i < ROWS; i++)
	//{
	//	for (int j = 0; j < COLUMNS + 1; j++)
	//		fprintf(out,"%c", shuchu[i][j]);
	//	putc('\n',out);
	//}
	//��
	for (int i = 0; i < ROWS; i++)															
		fprintf(out, "%s\n", shuchu[i]);


	puts("������������Ѵ���13.11.12(2).txt");

	fclose(out);

	return 0;
}
//�����У�Project1.exe 
#endif
//������ͨ������һά�ַ�������±��Ԫ��ֵ��ʵ�����������ŵ�ת��
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
//���������ú궨�������+ָ����ʵ��ת������
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
//���ģ���ʹ�ö�ά�����fscanf()������fgets()���ַ�ת���ɹ涨�����ݡ�
#if 0
char line[61];//����+�ո�+'\0'=61��char�δ洢�ռ�
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


//13.�ñ䳤����(VLA)�����׼����,�����������Ĺ���
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
	// ��ȡ�ļ��е����ݵ���������
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			//��������Ϊ��ȷ��fscanf()��ȷ����1����,�����ܿո�������ַ�Ӱ��
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


//14.ͼ�񶶶��Ż��㷨
#if 0
# include <stdio.h>
# include <stdlib.h>
# include <math.h>

# define ROWS 20
# define COLS 30
# define FNAME "no12.txt"
# define FARGS "no12.dat"
# define STR " .':~*=&%#"

void initialize_ar(FILE* fp, int n, int m, int ar[n][m]);//��ȡ�ļ��е�ԭʼ�ַ����ݲ�������ʱ��ά����ar�У����ͣ�int��
void reconstruction(int n, int m, int ar[n][m]);//�Ż��㷨�������ά����ar��ֵ
void set_st(int n, int m, char st[n][m + 1], int ar[n][m]);//��ʱ��ά����ar�е�ֵ����Ϊ�ַ��������ʱ��ά����st�У����ͣ�char��

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
	// ��ȡ�ļ��е����ݵ���������
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			//��������Ϊ��ȷ��fscanf()��ȷ����1����,�����ܿո�������ַ�Ӱ��
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
		for (int j = 0; j < m; j++)//��ar��ά����ĵ�һ�е�һ�п�ʼ����
		{
			l = r = u = d = 1;

			//������
			//left = right = up = down = -1 ;
			sum = 0;
			count = 0;

			if (j > 0)
			{
				//left = ar[i][m - 1] ;
				l = abs(ar[i][j] - ar[i][j - 1]) > 1 ? 1 : 0;//abs:����ֵ����
				sum += ar[i][j - 1];
				count++;
			}

			if (j < m - 1)
			{
				r = abs(ar[i][j] - ar[i][j + 1]) > 1 ? 1 : 0;//�Ե�һ�е�һ��Ϊ�����������Ҳ��������ж��Ƿ����1
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
				d = abs(ar[i][j] - ar[i + 1][j]) > 1 ? 1 : 0;//�Ե�һ�е�һ��Ϊ�����������²��������ж��Ƿ����1
				sum += ar[i + 1][j];
				count++;
				//down = ar[i + 1][m] ;
			}

			if (l && r && u && d)//��ĳ�������������ҵ����Ĳ����1����ĳ��Ҫ���Ż���4�����ϵ���ֵ���ᱻ�Ż���
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