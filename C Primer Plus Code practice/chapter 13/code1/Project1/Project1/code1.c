#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>//�ṩexit()ԭ��
//
#if 1
#endif


//ʹ�ñ�׼I/O
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


//��д�ļ�ѹ������
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
	if ((in = fopen(argv[1], "r")) == NULL)//�򿪵�һ���ļ�
	{
		fprintf(stderr,"Can't open %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	strncpy(name,argv[1],LEN-5);
	name[LEN - 5] = '\0';
	strcat(name,".red");//ע���ڶ����ַ�������ӵ�һ���ַ����ĵ�һ�����ַ�����ʼ���ǡ�    red��reduced

	if ((out = fopen(name, "w")) == NULL)//�򿪵ڶ����ļ�
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


//ʹ��fprintf()��fscanf()��rewind()
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
	puts("������Ҫ�����ļ������ݣ�(�����а�#�Խ�������)");
	while ((fscanf(stdin, "%40s", words) == 1) && (words[0] != '#'))
		fprintf(fp,"%s\n",words);

	puts("�ļ��������ǣ�");
	rewind(fp);
	while (fscanf(fp, "%s", words) == 1)
		puts(words);
	puts("Done !");

	if (fclose(fp) != 0)
		fprintf(stderr,"�ر��ļ�ʧ�ܣ�\n");

	return 0;
}
#endif


//ʹ��fseek()��ftell()�����ӡָ���ļ����ַ�
#if 0
#define MAX 81
int main(void)
{
	char file[MAX];
	char ch;

	FILE* fp;
	long count, last;

	puts("������Ҫ�򿪵��ļ�����");
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


//���ļ������ݸ��ӵ���һ���ļ���ĩβ
#if 0
#include<string.h>//�ṩstrchr()ԭ��
#define BUFSIZE 4096//��������С
#define LEN 81//�ļ�����󳤶�

void appendix(FILE *source,FILE *destination);//���ݸ��Ӻ���
char* s_gets(char* string, int n);//���뺯��

int main(void)
{
	FILE* fpsource, * fptarget;//ָ��Դ�ļ�  ָ��Ŀ���ļ�
	int files = 0;//�����ļ���������

	char file_target[LEN];
	char file_source[LEN];
	int ch;//����ַ���ʾ

	puts("������������Ŀ���ļ�����");
	s_gets(file_target,LEN);
	if ((fptarget = fopen(file_target, "a+")) == NULL)//����дĿ���ļ�
	{
		fprintf(stderr,"δ�ܴ�Ŀ���ļ���%s\n",file_target);
		exit(EXIT_FAILURE);
	}
	//if (setvbuf(fptarget, NULL, _IOFBF, BUFSIZE) != 0)//����һ�����������
	//{
	//	fprintf(stderr, "δ�ܴ���%s�����������\n", file_target);
	//	exit(EXIT_FAILURE);
	//}

	puts("������Ҫ���������ݵĵ�һ��Դ�ļ�����(��������Խ���)");
	while (s_gets(file_source, LEN) && file_source[0] != '\0')//������У�s_gets()���\nת����\0
	{
		if (strcmp(file_source, file_target) == 0)
			fputs("���ܿ����ļ��������䱾��\n", stderr);
		else if ((fpsource = fopen(file_source, "r")) == NULL)//��Դ�ļ�
			fprintf(stderr,"δ�ܴ�Դ�ļ���%s\n",file_source);
		else
		{
			//if (setvbuf(fpsource, NULL, _IOFBF, BUFSIZE) != 0)//����һ�����뻺����
			//{
			//	fprintf(stderr, "δ�ܴ���%s�����뻺����\n", file_source);
			//	continue;
			//}

			appendix(fptarget, fpsource);

			if (ferror(fptarget) != 0)
				fprintf(stderr,"д�ļ�%s����\n", fptarget);
			if (ferror(fpsource) != 0)
				fprintf(stderr, "��Դ�ļ�%s����\n", fpsource);
			fclose(fpsource);
			files++;
			printf("�ļ�%s�����Ѹ��ӵ�%s\n",file_source,file_target);

			puts("������Ҫ���������ݵ���һ��Դ�ļ�����(��������Խ���)");
		}
	}
	printf("������ɣ�%d���ļ��������Ѹ��ӵ�%s",files,file_target);

	rewind(fptarget);
	printf("%s�������ǣ�",file_target);
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
		//����ȡ�ļ��������ڴ��еĵ�ַ���������ݿ�Ĵ�С���������ݿ�����������ȡ���ļ�
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


//���ļ��ж�ȡѡ��������
#if 1
#define SIZE 1000
int main(void)
{
	double numbers[SIZE];

	const char* file = "numbers.data";
	FILE* iofile;

	for (int i = 0; i < SIZE; i++)
		numbers[i] = 100.0 * i + 1.0 / (i+1);//����һ��double���͵�ֵ

	if ((iofile = fopen(file, "wb")) == NULL)//дģʽ
	{
		fprintf(stderr, "δ�ܴ��ļ�(���ļ����ڴ洢���������)��%s\n", file);
		exit(EXIT_FAILURE);
	}
	
	fwrite(numbers,sizeof(double),SIZE,iofile);
//��д���ļ��������ڴ��еĵ�ַ����д���ݿ�Ĵ�С����д���ݿ���������д���ļ�
	fclose(iofile);

	if ((iofile = fopen(file, "rb")) == NULL)//��ģʽ
	{
		fprintf(stderr, "δ�ܴ��ļ�(���ļ����ڶ�������)��%s\n", file);
		exit(EXIT_FAILURE);
	}


	printf("������һ������ֵ��0~999����\n");
	int index;
	double value;
	while (scanf("%d", &index) == 1 && index >= 0 && index <= 999)
	{
		long pos = (long)index * sizeof(double);//ȷ��ָ��ָ��double����ֵ��λ��
		fseek(iofile,pos,SEEK_SET);//�ҵ��洢double������ֵ���ļ���ĳ����ֵ��λ��
		fread(&value,sizeof(double),1,iofile);
//����ȡ�ļ��������ڴ��еĵ�ַ���������ݿ�Ĵ�С���������ݿ�����������ȡ���ļ�
		printf("�˴���ֵΪ%f\n",value);

		printf("��������һ������ֵ��0~999����\n");
	}
	fclose(iofile);

	return 0;
}
#endif
