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

	/*words = "abc";    //words �������޸�
	puts(words);*/

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

	printf("%p\n", s_gets(flower, SIZE));																			//�������������^Z��˾����0000000000000000
	printf("%p\n",flower);								//��һ������£�������ͬ
	printf("%p\n", &flower[0]);					    //˵��fgets()�ķ���ֵ��flower������Ԫ�صĵ�ַ
	printf("%d\n", s_gets(flower,SIZE));//��ַ������%d���ʱ���޷���ʾ����

	return 0;								
}
char* s_gets(char* string, int n)
{
	char *fanhui;
	int i = 0;
	fanhui = fgets(string, n, stdin);//nΪ80��fgets()ֻ�����79���ַ������Զ�������\0
	
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
#if 0
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


//����strcat()��ʹ��strncat()��ƴ�������ַ���
#if 0
#include <string.h>
#define SIZE 30
#define BUGSIZE 13
char* s_gets(char* string, int n);
int main(void)
{
	char flower[SIZE];
	char add[] = "s smell like old shoes.";
	char bug[BUGSIZE];
	int available;

	puts("What is your favorite flower ?");
	s_gets(flower, SIZE);
	printf("flower����Ĵ�С��%zd\n",strlen(flower));//������^Z��flower����Ĵ�С��87

	if (strlen(flower)+strlen(add)+1<=SIZE)
	{
		strcat(flower, add);
		puts(flower);
	}
	

	puts("What is your favorite bug ?");
	s_gets(bug, BUGSIZE);

	available = BUGSIZE - strlen(bug) - 1;//��ֹ��������ַ���������ڴ洢��Ԫ
	strncat(bug,add,available);
	puts(bug);

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


//ʹ��strcmp()�����Ƚ������ַ���
#if 0
#include <string.h>
#define ANSWER "Grant"
#define SIZE 40
char* s_gets(char* string, int n);
int main(void)
{
	char try[SIZE];
	puts("Who is buried in Grant's tomb ?");
	s_gets(try,SIZE);
	while (strcmp(try, ANSWER) != 0)
	{
		puts("No, that's wrong. Try again.");
		s_gets(try, SIZE);
	}
	puts("That's right !\n");

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


//strcmp()�ķ���ֵ
#if 0
#include<string.h>
int main(void)
{
	printf("strcmp(\"A\",\"A\") is ");
	printf("%d\n",strcmp("A","A"));

	printf("strcmp(\"A\",\"B\") is ");
	printf("%d\n", strcmp("A", "B"));

	printf("strcmp(\"B\",\"A\") is ");
	printf("%d\n", strcmp("B", "A"));

	printf("strcmp(\"C\",\"A\") is ");
	printf("%d\n", strcmp("C", "A"));

	printf("strcmp(\"Z\",\"a\") is ");
	printf("%d\n", strcmp("Z", "a"));

	printf("strcmp(\"apples\",\"apple\") is ");
	printf("%d\n", strcmp("apples", "apple"));

	return 0;
}
#endif


//�޶���������������ü�⵽EOF��quit��ﵽ�����������ʱ�˳���
#if 0
#include <string.h>
#define SIZE 80
#define LIM 10
#define STOP "quit"
char* s_gets(char* string, int n);
int main(void)
{
	char input[LIM][SIZE];
	int count = 0;
	printf("���������%d�����ݣ�����quit���˳�����\n",LIM);

	while (count < LIM && s_gets(input[count], SIZE) != NULL && strcmp(input[count], STOP) != 0)
	{																								//��Ϊ&&input[count][0]!='\0'ʵ��������о��˳��Ĺ���
		count++;
	}
	printf("%d��������\n",count);

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


//ʹ��strncmp()�Ƚ������ַ�����ָ��λ�õ���ͬ��
#if 0
#include <string.h>
#define LISTSIZE 6
int main(void)
{
	const char* list[LISTSIZE] = {																												//	һ�����飬�ں�6��ָ��
	"astronomy","astounding","astrophysics","ostracize","asterism","astrophobia"
	};
	int count = 0;
	int i;

	for(i=0;i<LISTSIZE;i++)
		if(strncmp(list[i],"astronomy",5)==0)
		{
			printf("Found %s\n",list[i]);
			count++;
		}
	printf("The list contained %d words begining with astro.\n",count);

	return 0;
}
#endif


//��strcpy()���������ַ��������ǿ����ַ����ĵ�ַ��
#if 0
#include <string.h>
#define SIZE 40
#define LIM 5

char* s_gets(char* string, int n);
int main(void)
{
	char qwords[LIM][SIZE];
	char temp[SIZE];
	int i = 0;

	printf("��������q��ͷ��%d�е��ʣ�\n",LIM);
	while (i < LIM && s_gets(temp, SIZE))
	{
		if (temp[0] != 'q')
			printf("%sû����q��ͷ��\n",temp);
		else
		{
			strcpy(qwords[i], temp);
			i++;
		}
	}
	puts("�������ѿ������ַ�����");
	for (i = 0; i < LIM; i++)
		puts(qwords[i]);

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


//strcpy()�ķ���ֵ
#if 0
#include <string.h>
#define WORDS "beast"
#define SIZE 40
int main(void)
{
	const char* source = WORDS;
	char target[SIZE] = "Be the best that you can be.";
	char* fanhui;

	puts(source);
	puts(target);

	fanhui = strcpy(target+7,source);

	puts(target);
	puts(fanhui);//strcpy()������һ��ָ�룬��ʱָ��ָ��target�ĵ�8���ַ���puts��target�ĵ�8���ַ���ʼ��ӡ����beast\0  ֹͣ

	return 0;
}
#endif


//��strncpy()���������ַ��������ǿ����ַ����ĵ�ַ��
#if 0
#include <string.h>
#define SIZE 40
#define LIM 5
#define TARGET_SIZE 7

char* s_gets(char* string, int n);
int main(void)
{
	char qwords[LIM][TARGET_SIZE];
	char temp[SIZE];
	int i = 0;

	printf("��������q��ͷ��%d�е��ʣ�\n", LIM);
	while (i < LIM && s_gets(temp, SIZE))
	{
		if (temp[0] != 'q')
			printf("%sû����q��ͷ��\n", temp);
		else
		{
			strncpy(qwords[i], temp,TARGET_SIZE-1);
			qwords[i][TARGET_SIZE - 1] = '\0';
			i++;
		}
	}
	puts("�������ѿ������ַ�����");
	for (i = 0; i < LIM; i++)
		puts(qwords[i]);

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


//��sprintf()��3����ϳ�Ϊһ���ַ���
#if 0
#include <string.h>
#define  MAX 20

char* s_gets(char* string, int n);
int main(void)
{
	char first[MAX];
	char last[MAX];
	char formal[2*MAX];
	double prize;

	puts("����������գ�");
	s_gets(first,MAX);
	puts("�������������");
	s_gets(last, MAX);
	puts("��������Ľ����");
	scanf("%lf",&prize);

	sprintf(formal,"%s, %-19s : $%6.2lf", first,last,prize);
	
	puts(formal);

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


//�����ַ������������ַ���
#if 0
#include <string.h>
#define  SIZE 81//�����ַ�������
#define LIM 20  //�����ַ�������

void sort_str(char* strings[], int num);
char* s_gets(char* string, int n);
int main(void)
{
	char input[SIZE][LIM];		//����char�Ͷ�ά����
	char* p[LIM];						//�ں�ָ�����������
	int in_count = 0;					//�������������
	int out_count = 0;				//�������������

	printf("���������%d���ַ�����Ȼ���һ��������\n",LIM);
	printf("��Ҫֹͣ������������С�\n");

	while (in_count < LIM && s_gets(input[in_count], SIZE) != NULL && input[in_count][0] != '\0')//s_gets()���\n�滻��\0��������!='\0'
	{
		p[in_count] = input[in_count];//����ָ��ָ���ַ���   �����ڵ�10�µ�       ����char *p��  
																										//						 p=input[in_count]; ��p�����&input[in_count][0]
		in_count++;
	}
	sort_str(p, in_count);
	puts("\n����������õ��ַ�����\n");
	for (out_count = 0; out_count < in_count; out_count++)
		puts(p[out_count]);

	return 0;
}
void sort_str(char* strings[], int num)
{
	char* temp;
	int seek1, seek2;

	for (seek1 = 0; seek1 < num - 1; seek1++)//���ѭ��ָ�����ڴ����Ԫ��
	{
		for (seek2 = seek1 + 1; seek2 < num; seek2++)//�ڲ�ѭ���ҳ�Ӧ�洢�ڸ�Ԫ�ص�ֵ
		{
			if (strcmp(strings[seek1], strings[seek2]) > 0)//��ǰһ���ַ���������ĸ��������λ�ں�һ���ַ���������ĸ����
			{
				temp = strings[seek1];
				strings[seek1] = strings[seek2];
				strings[seek2] = temp;
			}
		}
	}
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


//��strchr()ʵ��s_gets()���滻\nΪ\0���ܣ���toupper()ʵ���ַ�����Сд��ĸ��Ϊ��д��ĸ����ispunct()ͳ�Ʊ����Ÿ���
#if 1
#include <string.h>
#include<ctype.h>
#define  LIMIT 81
void ToUpper(char* string);
char* s_gets(char* string, int n);
int main(void)
{
	char line[LIMIT];
	char* find;

	puts("������һ���ַ���");
	fgets(line,LIMIT,stdin);



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