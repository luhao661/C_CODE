#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//
#if 1
#endif


//�����б�ʾ�ַ��ļ��ַ�ʽ
#if 0
#define MSG "I am a symbolic string constant"//����һ�������ַ�������
#define LENGTH 81
int main (void)
{
	char words[LENGTH] = "I am a string in an array.";
	const char* p1 = "Something is pointing at me.";
	puts("Here are some strings:");
	puts(MSG);//��һ���ַ���������
	puts(words);//������char�������鷨
	puts(p1);     //������ָ��char��ָ�뷨
	words[8] = 'p';
	puts(words);

	puts("a");//�˴���a���Ǹ��ַ�����
	puts('a');//������ʾ

	return 0;
}
#endif


//���ַ�������ָ��
#if 0
int main(void)
{
	printf("%s, %p, %c\n","We","are",*"space farers");

	return 0;
}
#endif


//�Ƚ�������ʽ��ʾ����ָ����ʽ��ʾ�������ַ����Ĳ�֮ͬ��
#if 0
#define MSG "I'm special"
int main(void)
{
	char ar[] = MSG;
	const char* p = MSG;

	printf("I'm special�ĵ�ַ�ǣ�%p\n","I'm special");
	printf("ar�ĵ�ַ�ǣ�%p\n",ar);
	printf("p�ĵ�ַ�ǣ�%p\n", p);
	printf("MSG�ĵ�ַ�ǣ�%p\n",MSG);
	printf("�ٴ�ӡһ��I'm special��\"I'm special\"�ĵ�ַ�ǣ�%p\n", "I'm special");

	return 0;
}
#endif


//�����ָ�������
#if 0
int main(void)
{
	char heart[] = "I love shuzu";
	const char* head = "I love zhizhen";

	//ֻ��ָ�������++����
	while (*(head) != '\0')
		putchar(*head++);//	putchar(*(head)++); Ҳ��

	putchar('\n');

	//�������޸��ַ���
	char shuzu[] = "frame";
	shuzu[0] = 'l';
	printf("%s",shuzu);

	//�ܷ�ʹ��ָ���޸��ַ�����
	char* word = "frame";
	word[0] = 'l';
	printf("frame");//δ��ӡ��˵�������쳣�жϡ�

	return 0;
}
#endif


//ָ�����飬�ַ�������
#if 0
#define zifushu 40
#define hangshu 5
int main(void)
{
	const char* mytalents[hangshu] = {
	"Adding numbers swiftly",
	"Multiplying accurately",
	"Stashing data",
	"Following instructions to the letter",
	"Understanding the C language"
	};

	char yourtalents[hangshu][zifushu] = {
	"Walking in a straight line",
	"Sleeping",
	"Watching television",
	"Mailing letters",
	"Reading email"
	};
	int i;

	puts("���������ȽϱȽϣ�");
	printf("%-36s %-25s\n","My Talents","Your Talents");
	for (i = 0; i < hangshu; i++)
		printf("%-36s %-25s\n",mytalents[i],yourtalents[i]);

	printf("\nsizeof mytalents: %zd, sizeof yourtalents: %zd\n",sizeof(mytalents),sizeof(yourtalents));

	return 0;
}
#endif


//ʹ��ָ�뿽���ַ���--->ʵ���Ͽ�������ָ���ֵ
#if 0
int main(void)
{
	const char* mesg = "Don't be a fool!";
	const char* copy;

	copy = mesg;
	printf("%s\n",copy);
	printf("mesg=%s; &mesg=%p; vaule=%p\n",mesg,&mesg,mesg);//&mesg:��ʾָ�뱻��ŵĵ�ַ��value:��ʾָ���ֵ
	printf("copy=%s; &copy=%p; vaule=%p\n", copy, &copy, copy);

	return 0;
}
#endif


//ʹ��gets(), puts()
#if 0
int main(void)
{
	char words[81];
	gets(words);

	printf("%s\n",words);
	puts(words);

	return 0;
}
#endif


//ʹ��fgets()��fputs()
#if 0
int main(void)
{
	char words[14];
	puts("�������ַ�����");
	fgets(words,14,stdin);
	printf("��������ǣ�\n");

	puts(words);
	fputs(words,stdout);

	return 0;
}
#endif
#if 0
int main(void)
{
	char words[10];
	puts("�������ַ�����");
	while (fgets(words, 10, stdin) != NULL && words[0] != '\n')
		fputs(words,stdout);//�ܴ������������

	puts("Done !\n");
	return 0;
}
#endif


//��ȡ�У��滻�洢���ַ����еĻ��з�Ϊ���ַ�����û�л��з����򵱳��ֿ��ַ����Ͷ�������װ���µ��ַ�
#if 0
int main(void)
{
	char words[10];
	puts("�������ַ�����");
	while (fgets(words, 10, stdin) != NULL && words[0] != '\n')//���벻Ϊ^Z ��  '\n'
	{
	    int i=0;
		while (words[i] != '\n' && words[i] != '\0')
			i++;//�����ַ�����ֱ���������з�����ַ�
		
		if (words[i] == '\n')
			words[i] = '\0';//���������з����ͻ��ɿ��ַ�
		else
			while (getchar() != '\n')
				continue;//���������ַ������������е�ʣ���ַ�

		puts(words);
	}

	puts("Done !\n");
	return 0;
}
#endif


//ʹ��scanf()
#if 0
int main(void)
{
	char name1[11], name2[11];
	int count;

	printf("�������������֣�\n");
	count = scanf("%5s %10s",name1,name2);
	printf("�Ҷ��뵽%d�����֣��ֱ�Ϊ%s��%s",count,name1,name2);

	return 0;
}
#endif


//ʹ��puts()
#if 0
#define DEF "I am a #define string."
int main(void)
{
	char string1[80] = "An array was initialized to me.";
	const char* string2 = "A pointer was initialized to me.";

	puts(DEF);
	puts(string1);
	puts(string2);
	putchar('\n');

	puts(&string1);
	puts(&string1[0]);
	puts(&string1[5]);

	puts(&string2);//���������
	puts(string2+4);

	return 0;
}
#endif


//���puts()û�������ַ�
#if 0
int main(void)
{
	char a[] = "a";
	char dont[] = {'W','O','W','!'};
	puts(dont);

	return 0;
}
#endif


//�Զ����������
#if 0
void put1(const char* string1);//��ӡ�ַ����������\n
int  put2(const char* string2);//��ӡ�ַ�����ͳ�ƴ�ӡ���ַ���
int main(void)
{
	put1("abcdefg");
	put1("hijklmn");
	putchar('\n');

	printf("I count %d characters.\n", put2("opqrst"));//
	
	return 0;
}
void put1(const char* string1)
{
	while (*string1 != '\0')//��while(*string)
		putchar(*string1++);
}
int  put2(const char* string2)
{
	int count = 0;
	while (*string2)
	{
		putchar(*string2++);
		count++;
	}
	putchar('\n');

	return count;
}
#endif


//ʹ��strlen()���������ַ�������
#if 0
#include <string.h>
void fit(char* string, unsigned int size);
int main(void)
{
	char message[] = "Things should be as simple as possible,"" but not simpler.";//��������Ӧ�ü򻯶����Ǹ���

	puts(message);
	fit(message,38);
	puts(message);
	puts(message+39);//��ӡ��message[39]��ʼ�ĵ�ַ�ϵ�����

	return 0;
}
void fit(char* string, unsigned int size)
{
	if (strlen(string) > size)
		string[size] = '\0';//������size=38,���������Ϊ0��37���ַ�
}
#endif


//s_gets()�����ķ���ֵ
#if 0
#include <string.h>
#define SIZE 80
char* s_gets(char* string, int n);
int main(void)
{
	char flower[SIZE];

	printf("%p\n", s_gets(flower, SIZE));
	printf("%p\n",flower);								//������ͬ
	printf("%p\n", &flower[0]);
	return 0;													    //˵��fgets()�ķ���ֵ��flower������Ԫ�صĵ�ַ
}
char* s_gets(char* string, int n)
{
	char *fanhui;
	int i = 0;
	fanhui = fgets(string, n, stdin);
	
	if (fanhui)
	{
		while (string[i] != '\n' && string[i] != '\0')
			i++;

		if (string[i] == '\n')
			string[i] = '\0';
		else
			while (getchar() != '\n')
				continue;
	}

	return fanhui;
}
#endif


//ʹ��strcat()������s_gets()����ƴ�������ַ���
#if 1
#include <string.h>
#define SIZE 80
char* s_gets(char* string, int n);
int main(void)
{
	char flower[SIZE];
	char add[] = "s smell like old shoes.";

	puts("What is your favorite flower ?");
	if (s_gets(flower, SIZE))//��û����^Z��ִ��if����
	{
		strcat(flower, add);
		puts(flower);
		puts(add);
	}
	else
		puts("End of file encountered !");

	puts("Bye !");
	
	return 0;													
}
char* s_gets(char* string, int n)
{
	char* fanhui;
	int i = 0;
	fanhui = fgets(string, n, stdin);

	if (fanhui)
	{
		while (string[i] != '\n' && string[i] != '\0')
			i++;

		if (string[i] == '\n')
			string[i] = '\0';
		else
			while (getchar() != '\n')
				continue;
	}

	return fanhui;
}
#endif


//
#if 1
#endif