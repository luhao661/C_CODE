#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>//malloc(), free()
#include <ctype.h>
//
#if 1
#endif


//���ýṹ������һ�����ͼ��Ŀ¼
#if 0
#define MAX_SHUMING 41 //�����������
#define MAX_ZUOZHE 41 //���������������

char* s_gets(char* string, int n);

struct book											//�ṹ������Ҳ�д���һ���ṹģ�壩	//book�Ǹ��ṹ�ı�ǣ�����������ʹ��book���ô˽ṹ
{															//����һ�����Ϊbook�Ľṹ
	char shuming[MAX_SHUMING];
	char zuozhe[MAX_ZUOZHE];
	float value;
};

int main(void)
{
	struct book library;						//����һ��ʹ��book�ṹ���ֵĽṹ����library����library����Ϊһ��book���͵ı�����
	printf("������������\n");
	s_gets(library.shuming,MAX_SHUMING);//����shuming����

	puts("����������������");
	s_gets(library.zuozhe, MAX_ZUOZHE);//����zuozhe����

	puts("�������ۼۣ�");
	scanf("%f",&library.value);

	printf("%s:��%s������%.2f��",library.zuozhe,library.shuming,library.value);

	return 0;
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


//���ýṹ�������౾���ͼ��Ŀ¼
#if 0
#define MAX_SHUMING 41 //�����������
#define MAX_ZUOZHE 41 //���������������
#define MAX_SHULIANG 100//����鼮����

char* s_gets(char* string, int n);

struct book												//����һ�����Ϊbook�Ľṹ
{
	char shuming[MAX_SHUMING];
	char zuozhe[MAX_ZUOZHE];
	float value;
};

int main(void)
{
	struct book library[MAX_SHULIANG];//����һ��ʹ��book�ṹ���ֵĽṹ��������library[100]
	int count = 0;
	int index;

	printf("����������(����������^Z������������[Enter]�Խ���)��\n");
	while (count < MAX_SHULIANG && s_gets(library[count].shuming, MAX_SHUMING) != NULL && library[count].shuming[0] != '\0')
	{
		puts("����������������");
		s_gets(library[count].zuozhe, MAX_ZUOZHE);

		puts("�������ۼۣ�");
		scanf("%f", &library[count].value);		
		while (getchar() != '\n')//����scanf()ִ�к󻺳������µ�\n
			continue;

		count++;

		printf("����������(����������^Z������������[Enter]�Խ���)��\n");
	}

	printf("������ͼ��Ŀ¼��\n");
	for (index = 0; index < count; index++)
	{
	printf("%s:��%s������%.2f��\n", library[index].zuozhe, library[index].shuming, library[index].value);
	}

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


//ʹ��Ƕ�׽ṹ����ʾ����
#if 0
#define LEN 20
const char* message[5] = {
"  Thank you for the wonderful evening, ",
"You certainly prove that a ",
"is a special kind of guy. We must get together",
"over a delicious ",
" and have a few laughs"
};
struct names
{
	char first[LEN];
	char last[LEN];
};
struct guy
{
	struct names handle;//Ƕ�׽ṹ������һ��ʹ��name�ṹ���ֵĽṹ����handle
	char job[LEN];
	char favoriate_food[LEN];
	float income;
};
int main(void)
{
	struct guy fellow =//����һ��ʹ��guy�ṹ���ֵĽṹ����fellow���������ʼ��
	{
		{"Ewen","Villard"},//**************��ʼ��Ƕ�׽ṹ�ĳ�Ա��ʹ�����λ����ţ�***************
		"personality coach",
		"grilled salmon",
		68112.00
	};

	printf("Dear %s,\n\n",fellow.handle.first);//******����Ƕ�׽ṹ�ĳ�Ա��ʹ�����ε��������***********
	printf("%s%s.\n",message[0],fellow.handle.first);//  Thank you for the wonderful evening, 
	printf("%s%s.\n", message[1], fellow.job);//You certainly prove that a 
	printf("%s\n",message[2]);//is a special kind of guy. We must get together
	printf("%s%s%s",message[3],fellow.favoriate_food,message[4]);// over a delicious        and have a few laughs

	if (fellow.income > 15000.0)
		puts("!!");
	else if (fellow.income > 75000.0)
		puts("!");
	else
		puts(".");

	printf("\n%40s%s\n",         " ",             "See you soon, ");
	printf("%40s%s\n",             " ",             "Luhao");

	return 0;
}
#endif


//ʹ��ָ��ṹ��ָ���Ƕ�׽ṹ����ʾ����
#if 0
#define LEN 20
struct names					//����һ�����Ϊnames�Ľṹ
{
	char first[LEN];
	char last[LEN];
};
struct guy
{
	struct names handle;//Ƕ�׽ṹ������һ��ʹ��names�ṹ���ֵĽṹ����handle
	char job[LEN];
	char favoriate_food[LEN];
	float income;
};
int main(void)
{
	struct guy fellow[2] =//����һ��ʹ��guy�ṹ���ֵĽṹ��������fellow[2]���������ʼ��
	{
		{//��fellow[0]��ʼ��
		{"Ewen","Villard"},//**************��ʼ��Ƕ�׽ṹ�ĳ�Ա��ʹ�����λ����ţ�***************
		"personality coach",
		"grilled salmon",
		68112.00
		},

		{//��fellow[1]��ʼ��
		{"Rodney", "Swillbelly"},//**************��ʼ��Ƕ�׽ṹ�ĳ�Ա��ʹ�����λ����ţ�***************
		"editor",
		"tripe",
		432400.00
		}
	};

	struct guy* him;//����һ��ָ��guy�ṹ���ֵĽṹ��ָ��him

	printf("�ṹ����fellow[0]�ĵ�ַ��%p\n�ṹ����fellow[1]�ĵ�ַ��%p\n\n",&fellow[0],&fellow[1]);

	him = &fellow[0];//�ṹָ��ָ��fellow[0]�ṹ
	printf("�ṹָ��him�ĵ�ַ��%p\n      him+1�ĵ�ַ��%p\n", him, him+1);
	printf("him->income��%.2f\n(*him).income:%.2f\n\n",him->income,(*him).income);

	him++;
	printf("�ṹָ��him++�ĵ�ַ��%p\n", him);
	printf("him->favoriate_food��%s\nhim->handle.last:%s\n\n", him->favoriate_food, him->handle.last);

	return 0;
}
#endif


//�ѽṹ��Ա��Ϊʵ�δ��ݣ�Ҳ���԰ѽṹ��Ա�ĵ�ַ��Ϊʵ�δ��ݣ�
#if 0
#define FUNDLEN 50

struct funds//	//����һ�����Ϊfunds�Ľṹ
{
	char bank[FUNDLEN];
	double bankfund;
	char save[FUNDLEN];
	double savefund;
};
double sum(double x,double y);//����һ������

int main(void)
{
	struct funds zhangsan =//����һ��ʹ��funds�ṹ���ֵĽṹ����zhangsan���������ʼ��
	{
	"Bank of China",
	4023.27,
	"Luck's Savings",
	8543.94
	};

	printf("�����ܹ���%.2f��Ǯ\n",sum(zhangsan.bankfund,zhangsan.savefund));

	return 0;
}
double sum(double x, double y)
{
	return (x+y);
}
#endif


//�ѽṹ�ĵ�ַ��Ϊʵ�δ���
#if 0
#define FUNDLEN 50

struct funds//	//����һ�����Ϊfunds�Ľṹ
{
	char bank[FUNDLEN];
	double bankfund;
	char save[FUNDLEN];
	double savefund;
};
double sum(const struct funds * money);//����һ���������β���һ��ָ��funds�ṹ���ֵĽṹ��ָ��money

int main(void)
{
	struct funds zhangsan =//����һ��ʹ��funds�ṹ���ֵĽṹ����zhangsan���������ʼ��
	{
	"Bank of China",
	4023.27,
	"Luck's Savings",
	8543.94
	};

	printf("�����ܹ���%.2f��Ǯ\n", sum(&zhangsan));

	return 0;
}
double sum(const struct funds* money)
{
	return (              money->bankfund         +         (*money).savefund         );
}
#endif


//�ѽṹ��Ϊʵ�δ���
#if 0
#define FUNDLEN 50

struct funds//	//����һ�����Ϊfunds�Ľṹ
{
	char bank[FUNDLEN];
	double bankfund;
	char save[FUNDLEN];
	double savefund;
};
double sum(const struct funds money);//����һ���������β���һ��ʹ��funds�ṹ���ֵĽṹ����money

int main(void)
{
	struct funds zhangsan =//����һ��ʹ��funds�ṹ���ֵĽṹ����zhangsan���������ʼ��
	{
	"Bank of China",
	4023.27,
	"Luck's Savings",
	8543.94
	};

	printf("�����ܹ���%.2f��Ǯ\n", sum(zhangsan));//��money�ṹ�����ĳ�Ա����zhangsan�ṹ�����ĳ�Ա��ֵ

	return 0;
}
double sum(const struct funds money)
{
	return (money.bankfund + money.savefund);
}
#endif


//ʹ�ýṹָ����к�����˫��ͨ��
#if 0
#define LEN 30
struct names					//����һ�����Ϊnames�Ľṹ
{
	char first[LEN];
	char last[LEN];
	int letters;
};

void getinfo(struct names *);//����һ���������β���һ��ָ��names�ṹ���ֵĽṹָ��
void makeinfo(struct names*);
void showinfo(const struct names*);
char* s_gets(char* string, int n);

int main(void)
{
	struct names person;//����һ��ʹ��names�ṹ���ֵĽṹ����person
	
	getinfo(&person);//�Խṹ����person�ĳ�Ա��ֵ
	makeinfo(&person);
	showinfo(&person);

	return 0;
}
void getinfo(struct names* p)
{
	puts("�����������");
	s_gets(p->first,LEN);
	puts("�����������");
	s_gets(p->last, LEN);
}
void makeinfo(struct names*p)
{
	p->letters = strlen(p->first) + strlen(p->last);
}
void showinfo(const struct names*p)
{
	printf("%s %s,�������ռ%d���ֽ�\n",p->first,p->last,p->letters);
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


//ʹ�ýṹ�����ͷ���ֵ���к�����˫��ͨ��
#if 0
#define LEN 30
struct names					//����һ�����Ϊnames�Ľṹ
{
	char first[LEN];
	char last[LEN];
	int letters;
};

struct names getinfo(void);//����һ������������ֵ��ʹ��names�ṹ���ֵĽṹ�������β���
struct names makeinfo(struct names);
void showinfo( struct names);
char* s_gets(char* string, int n);

int main(void)
{
	struct names person;//����һ��ʹ��names�ṹ���ֵĽṹ����person

	person=getinfo();//��һ���ṹ��ֵ����һ���ṹ
	person=makeinfo(person);
	showinfo(person);

	return 0;
}
struct names getinfo(void)
{
	struct names temp;
	puts("�����������");
	s_gets(temp.first, LEN);
	puts("�����������");
	s_gets(temp.last, LEN);

	return temp;
}
struct names makeinfo(struct names p)
{
	p.letters = strlen(p.first) + strlen(p.last);

	return p;
}
void showinfo(const struct names p)
{
	printf("%s %s,�������ռ%d���ֽ�\n", p.first, p.last, p.letters);
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


//ʹ��ָ��char��ָ���������ַ�����
#if 0
#define LEN 30
struct names					//����һ�����Ϊnames�Ľṹ
{
	char *first;//ʹ��ָ���������ַ�����
	char *last;
	int letters;
};

void getinfo(struct names*);//����һ���������β���һ��ָ��names�ṹ���ֵĽṹָ��
void makeinfo(struct names*);
void showinfo(const struct names*);
void cleanup(struct names*);
char* s_gets(char* string, int n);

int main(void)
{
	struct names person;//����һ��ʹ��names�ṹ���ֵĽṹ����person

	getinfo(&person);//�Խṹ����person�ĳ�Ա��ֵ
	makeinfo(&person);
	showinfo(&person);
	cleanup(&person);

	return 0;
}
void getinfo(struct names* p)
{
	char temp[LEN];
	puts("�����������");
	s_gets(temp, LEN);//�����ݴ���temp����
	p->first = (char*)malloc(strlen(temp)+1);//firstָ��ָ����䵽���ڴ棬�����Ͳ������s_gets(p->first, LEN);
	strcpy(p->first,temp);																			//�������ݱ������κο�����ɳ�������ĵط���

	puts("�����������");
	s_gets(temp, LEN);
	p->last = (char*)malloc(strlen(temp) + 1);
	strcpy(p->last, temp);
}
void makeinfo(struct names* p)
{
	p->letters = strlen(p->first) + strlen(p->last);
}
void showinfo(const struct names* p)
{
	printf("%s %s,�������ռ%d���ֽ�\n", p->first, p->last, p->letters);
}
void cleanup(struct names*p)
{
	free(p->first);
	free(p->last);
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


//ʹ�ô���ṹ���ݵĸ���������
#if 0
#define MAX_SHUMING 41 //�����������
#define MAX_ZUOZHE 41 //���������������

char* s_gets(char* string, int n);

struct book											//�ṹ������Ҳ�д���һ���ṹģ�壩	//book�Ǹ��ṹ�ı�ǣ�����������ʹ��book���ô˽ṹ
{															//����һ�����Ϊbook�Ľṹ
	char shuming[MAX_SHUMING];
	char zuozhe[MAX_ZUOZHE];
	float value;
};

int main(void)
{
	struct book library;						//����һ��ʹ��book�ṹ���ֵĽṹ����library����library����Ϊһ��book���͵ı�����

	puts("�����뿼�Է�����");
	int score;

	scanf("%d",&score);

	if (score >= 84)
		library = (struct book){
	"shuming1",
	"zuozhe1",
	11.25
	};
	else 
		library = (struct book){
"shuming2",
"zuozhe2",
5.99
	};

	printf("��Ӧ�ö�������%s:��%s������%.2f��", library.zuozhe, library.shuming, library.value);

	return 0;
}
#endif


//ʹ�������������Ա
#if 0
struct flex
{
	size_t count;
	double average;
	double scores[];
};
void showflex(const struct flex *p);//�βΣ�һ��ָ��flex�ṹ���ֵĽṹ��ָ��p

int main(void)
{
	struct flex* p1;
	int n = 5;
	int i;
	int total = 0;

	p1 = malloc(sizeof(struct flex)+n*sizeof(double));//Ϊ�������ݺ������������Ա����������ڴ�ռ�

	p1->count = n;
	for (i = 0; i < n; i++)
	{
		p1->scores[i] = 20.0 - i;//Ϊ5������Ԫ�ظ�ֵ
		total += p1->scores[i];
	}
	p1->average = total / n;

	showflex(p1);

	free(p1);

	return 0;
}
void showflex(const struct flex* p)
{
	printf("scores:");
	for (int i = 0; i < p->count; i++)
		printf("%-8.2f",p->scores[i]);

	printf("\naverage:%.2f\n",p->average);
}
#endif


//ʹ�ýṹ������к�����˫��ͨ�ţ������ϻ��ǰѽṹ�ĵ�ַ��Ϊʵ�δ��ݣ�
#if 0
#define FUNDLEN 50

struct funds//	//����һ�����Ϊfunds�Ľṹ
{
	char bank[FUNDLEN];
	double bankfund;
	char save[FUNDLEN];
	double savefund;
};
double sum(const struct funds *money,int n);//����һ���������β���һ��ʹ��funds�ṹ���ֵĽṹ����money

int main(void)
{
	struct funds zhangsan[2] =//����һ��ʹ��funds�ṹ���ֵĽṹ����zhangsan���������ʼ��
	{
		{
		"Bank of China",
		4032.27,
		"Luck's Savings",
		8543.94
		},
		{
		"China Construction Bank",
		3620.88,
		"Party Time Savings",
		3802.91
	    }

	};
	printf("�����ܹ���%.2f��Ǯ\n", sum(zhangsan,2));//*******************��������������zhangsan����ṹ   �w    *******************
																					  //��ȷ��⣺���ݵ���zhangsan����ĵ�ַ������������Ԫ�صĵ�ַ&zhangsan[0]
	return 0;																	  //�Աȵ�320�С��ṹ���������ǽṹ�ĵ�ַ�����˴���zhangsan�Ǹ��ṹ���飬
}																					  //*********���zhangsan�������ַҲ�ǽṹ��ַ�����ݵ��ǽṹ��ַ**********
double sum(const struct funds *money,int n)
{												//moneyָ��zhangsan[0]���洢&zhangsan[0]
	double total;
	int i;
	for (i = 0, total = 0; i < n; i++)
	{
		total += money[i].bankfund + (   * (money + i)   ).savefund;//money[i]�൱��*(money+i)
	}																									    //money[0]����zhangsan[0]�ṹ����
	return total;																				    //money[1]����zhangsan[1]�ṹ����
}
#endif


//���ļ��б���ṹ�е�����
#if 0
#define MAX_SHUMING 41 //�����������
#define MAX_ZUOZHE 41 //���������������
#define MAX_SHULIANG 100//����鼮����

char* s_gets(char* string, int n);

struct book												//����һ�����Ϊbook�Ľṹ
{
	char shuming[MAX_SHUMING];
	char zuozhe[MAX_ZUOZHE];
	float value;
};

int main(void)
{
	struct book library[MAX_SHULIANG];//����һ��ʹ��book�ṹ���ֵĽṹ��������library[100]
	int count = 0;

	//���ļ����������ļ���ԭ�е�ͼ������
	FILE* fp;
	if ((fp = fopen("book_data.txt", "a+b")) == NULL)
	{
		fputs("���ļ�ʧ�ܣ�",stderr);
		exit(EXIT_FAILURE);
	}

	rewind(fp);											//����ȡ�ļ����ݿ������ڴ��еĵ�ַ���������ݿ�Ĵ�С���������ݿ�����������ȡ���ļ�
	while (count < MAX_SHULIANG && fread(&library[count], sizeof(struct book), 1, fp)==1)
	{
		if (count == 0)
			puts("��ǰ�ļ��к��е�ͼ����Ϣ���£�");

		printf("%s:��%s������%.2f��\n", library[count].zuozhe, library[count].shuming, library[count].value);
		count++;
	}

	//�����ļ���ͼ��������ֵ        (ע���˴�count��ֵ���ļ���ͼ��������ֵ����Ϊcount��0��ʼ����)
	int filecount = count;				//      (countֵ�ܸ���filecount�����߶����ں�������г�Ϊ����ֵ)

	//�ж��ļ���ͼ�������Ƿ������100��
	if (filecount == MAX_SHULIANG)
	{
		fprintf(stderr,"book_data.txt������");
		exit(EXIT_FAILURE);
	}

	//�ļ���ͼ������û��100��
	printf("����������(����������^Z������������[Enter]�Խ���)��\n");
	while (count < MAX_SHULIANG && s_gets(library[count].shuming, MAX_SHUMING) != NULL && library[count].shuming[0] != '\0')
	{
		puts("����������������");
		s_gets(library[count].zuozhe, MAX_ZUOZHE);

		puts("�������ۼۣ�");
		scanf("%f", &library[count].value);
		while (getchar() != '\n')//����scanf()ִ�к󻺳������µ�\n
			continue;

		count++;

		if(count<MAX_SHULIANG)
		printf("����������(����������^Z������������[Enter]�Խ���)��\n");
	}

	//��ʾ��ӵ�ͼ�飬�����¼ӵ�ͼ��Ҳ�������ļ���
	printf("������ͼ��Ŀ¼��\n");
	for (int index = 0; index < count; index++)
	{
		printf("%s:��%s������%.2f��\n", library[index].zuozhe, library[index].shuming, library[index].value);
	}
	//��д����ļ��������ڵ��ڴ��еĵ�ַ����д���ݿ�Ĵ�С����д���ݿ���������д����ļ�
	fwrite(&library[filecount], sizeof(struct book), count-filecount, fp);
																		  //count-filecount�ó�����ӵ�ͼ������
	puts("�����ļ�����ɣ�");
	fclose(fp);                                                      //************************ע��*************************************
																		   //��д��fclose("fp");����򲻻�����ݴ����ļ����������Ų���󣡣���
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
//���������г���D:\CODE\C_CODE\C Primer Plus Code practice\chapter 14\code1\Project1\x64\Debug
//Project1.exe
#endif


//ʹ��ö����������߳���Ŀɶ���
#if 0
#define LEN 30
char* s_gets(char* string, int n);

enum spectrum {red, orange, yellow, green, blue, violet};//����һ�����Ϊspectrum��ö������

//const char ** colors = { "red","orange","yellow","green","blue","violet" };												//����д����
const char* colors[6] = {"red","orange","yellow","green","blue","violet"};//���ں��������ݱȽ�

int main(void)
{
	enum spectrum color;//����һ��ʹ��spectrumö�ٲ��ֵ�ö�ٱ���color

	char choice[LEN];
	int biaoji=0;//������������Ƿ���������ַ���������ͬ
	puts("����Ӣ������һ����ɫ(�ڿ��а���[Enter]���˳�)��");
	while (s_gets(choice, LEN) != NULL && choice[0] != '\0')
	{
		for (color = red; color <= violet; color++)//for (color =0; color <= 5; color++)
		{
			if (strcmp(choice, colors[color]) == 0)
				biaoji = 1;
			break;
		}

		if (biaoji)//����������������ַ���������ͬ
		{
			switch (color)//ö�ٱ���color���˴��÷�������������ͬ
			{
			case red://ö�ٳ���(ö�ٷ�)��int���͵ĳ�����red����0
				puts("õ���Ǻ�ɫ��");
				break;
			case orange:
				puts("��ӧ���ǳ�ɫ��");
			case yellow:
				puts("�����ǻ�ɫ��");
			case green:
				puts("������ɫ��");
			case blue:
				puts("����������ɫ��");
			case violet:
				puts("����������ɫ��");
			}
		}
		else
			printf("�Ҳ�֪��ʲôֲ�����ɫ��%s\n", choice);

		biaoji = 0;
		puts("����Ӣ������һ����ɫ(�ڿ��а���[Enter]���˳�)��");
	}
	puts("�ټ���");

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


//ʹ��typedef��߳���Ŀɶ���
#if 0
typedef struct book											
{														
	char shuming[2];
	char zuozhe[3];
	float value;
} BOOK;

int main(void)
{
	BOOK library;

	library.value= 1.1;
	BOOK.shuming[0] = 'a';

	char shuming[2] = { "a" };
	return 0;
}
#endif


//ʹ�ú���ָ��
#if 0
#define LEN 81
char* s_gets(char *string, int n);
char showmenu(void);
void eatline(void);																		//�������뻺����
void show(        void (*function_p)(char *),            char *string          );//ѡ��ĺ����ʹ����������
void Toupper(char *);
void Tolower(char*);
void Transpose(char*);
void Original(char *);

int main(void)
{
	char yuanshuju[LEN];
	char daichuli[LEN];

	void (*function_p)(char *);//����һ������ָ�룬ָ��ĺ����β���char*������ֵ��void
	char choice;

	puts("������һ���ַ������ڿ�������[Enter]���˳����򣩣�");
	while (s_gets(yuanshuju, LEN) != NULL && yuanshuju[0] != '\0')
	{
		while ((choice = showmenu()) != 'n')
		{
			switch (choice)
			{
			case 'u':
				function_p = Toupper;
				break;
			case 'l':
				function_p = Tolower;
				break;
			case 't':
				function_p = Transpose;
				break;
			case 'o':
				function_p = Original;
				break;
			default:
				function_p = NULL;
				puts("���ִ���");
				exit(1);
			}
			strcpy(daichuli,yuanshuju);
			show(function_p, daichuli);
		}

		puts("������һ���ַ������ڿ�������[Enter]���˳����򣩣�");
	}
	puts("�ټ���");

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
char showmenu(void)
{
	char answer;
	puts("��������ѡ��Ĳ˵��ϵĹ��ܣ�");
	puts("u) ת���ɴ�д	l)ת����Сд");
	puts("t) ��Сдת��	o)ԭʼ�ַ���");
	puts("n)������һ���ַ���");

	answer = getchar();
	answer = tolower(answer);//ʹ��C���tolower()
	
	eatline();
	while (strchr("ulton", answer) == NULL)
	{
		puts("������u��l��t��o��n");
		answer = tolower(getchar());
		eatline();
	}

	return answer;
}
void eatline(void)
{
	while (getchar() != '\n')
		continue;
}
void Toupper(char*string)
{
	while (*string != '\0')
	{
		*string = toupper(*string);
		string++;
	}
}
void Tolower(char*string)
{
	while (*string != '\0')
	{
		*string = tolower(*string);
		string++;
	}
}
void Transpose(char*string)
{
	while (*string != '\0')
	{
		/*if(islower(*string))
		*string = toupper(*string);
		if (isupper(*string))
		*string = tolower(*string);*/  //����
		if(islower(*string))
		*string = toupper(*string);
		else
		*string = tolower(*string);		//��ѡһ��if...else
		string++;
	}
}
void Original(char*string)
{
}
void show(void (*function_p)(char*), char* string)
{
	(*function_p)(string);//���û�ѡ���ĺ����������ַ���
	puts(string);
}
#endif