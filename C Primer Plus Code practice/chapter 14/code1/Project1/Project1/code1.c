#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
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
		{//��fellow[1]��ʼ��
		{"Ewen","Villard"},//**************��ʼ��Ƕ�׽ṹ�ĳ�Ա��ʹ�����λ����ţ�***************
		"personality coach",
		"grilled salmon",
		68112.00
		},

		{//��fellow[2]��ʼ��
		{"Rodney", "Swillbelly"},//**************��ʼ��Ƕ�׽ṹ�ĳ�Ա��ʹ�����λ����ţ�***************
		"editor",
		"tripe",
		432400.00
		}
	};

	struct guy* him;//����һ��ָ��guy�ṹ���ֵĽṹ��ָ��him

	printf("�ṹ����fellow[0]�ĵ�ַ��%p\n�ṹ����fellow[1]�ĵ�ַ��%p\n\n",&fellow[0],&fellow[1]);

	him = &fellow[0];
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
#if 1
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
