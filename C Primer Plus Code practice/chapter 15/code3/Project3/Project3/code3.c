#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <limits.h>//�ṩ��ʾ����(Ҳ�з��ų���)CHAR_BIT ��char���͵�λ��
#include <stdlib.h>//exit()
#include <string.h>//strchr()
#include <ctype.h>//tolower()
//
#if 1
#endif


//�����ϰ
//1.
#if 0
int b_to_i(const char *string);
int main(void)
{
	char* pbin = "01001001";

	int num=b_to_i(pbin);

	printf("%d",num);

	return 0;
}
//��һ���ӵ�λ����λ�ۼ�
int b_to_i(const char* string)
{
	int num=0;
	int length = strlen(string);
	int weiquan = 1;									 //���������ݵ�0��λ��λȨ

	for (int index = length - 1; index >= 0; index--)
	{
		int temp = *(string + index) - '0';  //�õ�ÿλ��0����1

		num += temp * weiquan;

		weiquan *= 2;
	}

	return num;
}
//�������Ӹ�λ����λ�ۼ�
# if 0
int b_to_i(const char* string)
{
	int num = 0;

	while (*string != '\0')				//������110�������λ1����ѭ����num=1����1��λ����ѭ����num=3����0��λ����ѭ����num=6
	{												//ͨ��ѭ��ʹÿһλ�ϵ�ֵ����������2
		num *= 2;
		num += *string - '0';
		string++;
	}

	return num;
}
#endif
#endif


//2.
#if 0
int b_to_i(const char* string);
char* i_to_bs(int zhengshu, char* string);//��ʵzhengshu�����д�ľ��Ƕ������������ں���Ҫ���������������ʾ����
void show(char* string);

int main(int argc,char **argv)
{
	if (argc != 3)
	{
		puts("Erroe !");
		exit(EXIT_FAILURE);
	}

	int shuju1, shuju2;

	shuju1 = b_to_i(argv[1]);//�ַ�����ʾ�Ķ���������ת��Ϊ�����ϴ�Ķ���������
	shuju2 = b_to_i(argv[2]);

	int temp1,temp2;
	temp1 = ~shuju1;
	temp2 = ~shuju2;

	char erjinzhi1[33];
	char erjinzhi2[33];

	i_to_bs(temp1,erjinzhi1);//�����ϴ�Ķ�����ת�����ַ�����ʾ���������ݣ��Դ�����ӡ����ʾ����
	i_to_bs(temp2, erjinzhi2);

	printf("��һ����������ȡ����");
	show(erjinzhi1);
	printf("�ڶ�����������ȡ����");
	show(erjinzhi2);

	temp1 = shuju1 & shuju2;
	i_to_bs(temp1,erjinzhi1);
	printf("��һ������������ڶ��������ƽ���&�����");
	show(erjinzhi1);

	temp1 = shuju1 | shuju2;
	i_to_bs(temp1, erjinzhi1);
	printf("��һ������������ڶ��������ƽ���|�����");
	show(erjinzhi1);

	temp1 = shuju1 ^ shuju2;
	i_to_bs(temp1, erjinzhi1);
	printf("��һ������������ڶ��������ƽ���^�����");
	show(erjinzhi1);

	return 0;
}
int b_to_i(const char* string)
{
	int num = 0;
	int length = strlen(string);
	int weiquan = 1;									 //λȨ

	for (int index = length - 1; index >= 0; index--)
	{
		int temp = *(string + index) - '0';  //�õ�ÿλ��0����1

		num += temp * weiquan;

		weiquan *= 2;
	}

	return num;
}
char* i_to_bs(int zhengshu, char* string)//��ʵzhengshu�����д�ľ��Ƕ������������ں���Ҫ���������������ʾ����
{
	const static int size = CHAR_BIT * sizeof(int);

	for (int i = size - 1; i >= 0; i--, zhengshu >>= 1)
	{
		*(string + i) = (0x1 & zhengshu) + '0';//����������һ��Ԫ�ؿ�ʼ��ֵ		1 & zhengshu�����������һλ����������ֵ		+ '0'������ת�����ַ����ݺô����ַ�������
	}
	*(string + size) = '\0';//��ϵͳ��erjinzhi[32]='\0'

	return string;
}
void show(char* string)
{
	int i = 0;

	while (string[i])
	{
		putchar(string[i]);

		i++;
		if (i % 4 == 0)
			putchar(' ');
	}

	putchar('\n');
}
//���������У�D:\CODE\C_CODE\C Primer Plus Code practice\chapter 15\code3\Project3\x64\Debug
//Project3.exe 01001001 00000001
#endif


//3.
#if 0
int dakaiwei_shuliang(int);
int main(void)
{
	int num;
	int fanhuizhi;

	printf("������һ��������");
	scanf("%d",&num);

	fanhuizhi = dakaiwei_shuliang(num);
	printf("��%dλ",fanhuizhi);

	return 0;
}
int dakaiwei_shuliang(int num)
{
	int count = 0;

	for (int i = 0;		 i <32;		 i++,num>>=1)							//i��ʾ���ڴ�����ǵ�x��λ
	{
		if (num & 0x1 == 1)
			count++;
	}

	return count;
}
#endif


//4.
#if 0
int panduanwei(int,int);
int main(void)
{
	int num;
	int position;
	int fanhuizhi;

	printf("������һ��������");
	scanf("%d", &num);
	printf("������һ��ָ����λ��λ�ţ�");
	scanf("%d", &position);

	fanhuizhi = panduanwei(num,position);
	printf("%s", fanhuizhi==1?"��λΪ1":"��λΪ0");

	return 0;
}
int panduanwei(int num,int position)
{
	int fanhui = 0;

	num >>= position;

	if ((num & 0x1) == 1)
		fanhui = 1;
	
	return fanhui;
}
//�������ȸ���λ��λ�ã����ú����룬������λ�߼�������ļ��λֵ�Ĺ��ܣ��Ը�λ�õ�ֵ���м��
#endif


//5.
#if 0
unsigned int rotate_l(unsigned int x,int zuoyi);
char* i_to_bs(int zhengshu, char* string);
void show(char* string);

int main(void)
{
	unsigned int num;
	char erjinzhi[33];

	printf("������һ���Ǹ�������");
	scanf("%d", &num);
	i_to_bs(num,erjinzhi);
	printf("��������Ӧ�Ķ����������ǣ�\n");
	show(erjinzhi);

	printf("������Ҫѭ�����Ƶ�λ��������");
	int zuoyi;
	scanf("%d",&zuoyi);

	unsigned int fanhui=rotate_l(num,zuoyi);
	i_to_bs(fanhui, erjinzhi);
	printf("������ѭ������%dλ���Ӧ�Ķ����������ǣ�\n",zuoyi);
	show(erjinzhi);

	return 0;
}
//��һ��Ҫ�ƶ���λ���Ͱ������ļ�λ��ֵ��������int���͵ı������У����ԭ�����ƶ��ú�����������а�λ�����㡣
unsigned int rotate_l(unsigned int x, int zuoyi)
{
	//int temp[zuoyi+1];//��Ч
	//int* temp =(int *) malloc(zuoyi*sizeof());//�޷�����һ��ָ��ָ��λ���ͣ����Բ���malloc()
		
	unsigned int y,temp1,temp2;
	y = x;														//x��ֵ�ȿ���һ�ݸ�y
	temp2 = 0;

	for (int i = 0;			i < zuoyi;			i++,y<<=1)
	{
		temp1 = y ;
		temp1 &= 0x80000000;					//1000 0000 0000 0000 0000 0000 0000 0000
		//temp2 |= temp1 >> (31 - i);			//���������������1000��Ҫ�ƶ�4λ����temp2�Ҳ���0001
		
		temp1 >>= 31;									//�Ȱ����λ��ֵ�Ƶ����λ
		temp2 |= temp1<<(zuoyi-i-1);			//*********************ע*************************************************************************
	}																//���ƶ�2λ����������1λ��������0λ�������������1000��Ҫ�ƶ�4λ����temp2�Ҳ���1000

	x <<= zuoyi;
	x |= temp2;

	return x;
}
//�����������Ƴ������λ��ֵ��1����0����ת����ͬ�ķ�֧��䡣
#if 0
unsigned int rotate_l(unsigned int x, int zuoyi)
{
	for (int i = 0; i < zuoyi; i++)
	{
		if (x & 0x80000000)//���ж����λ��ֵ		��дΪ��if(x&(1<<31))
		{
			x <<= 1;
			x |= 1;
		}
		else
			x <<= 1;
	}

	return x;
}
#endif
char* i_to_bs(int zhengshu, char* string)
{
	const static int size = CHAR_BIT * sizeof(int);

	for (int i = size - 1; i >= 0; i--, zhengshu >>= 1)
	{
		*(string + i) = (0x1 & zhengshu) + '0';//����������һ��Ԫ�ؿ�ʼ��ֵ		1 & zhengshu�����������һλ����������ֵ		+ '0'������ת�����ַ����ݺô����ַ�������
	}
	*(string + size) = '\0';//��ϵͳ��erjinzhi[32]='\0'

	return string;
}
void show(char* string)
{
	int i = 0;

	while (string[i])
	{
		putchar(string[i]);

		i++;
		if (i % 4 == 0)
			putchar(' ');
	}

	putchar('\n');
}
//unsigned int ��ϵͳ��32λ�洢����Χ��0~4294967295�����Գ�������ֿ�����2294967295
#endif


//6.
#if 0
struct ziticanshu								//�������
{
	unsigned int ziti_id: 8;				//0~7��λ����Χ0~255
	unsigned int ziti_daxiao : 7;		//8~14��λ����Χ0~127
	unsigned int : 1;							//15��λ(����16λ)��δ�����ֶ����϶
	unsigned int duiqi : 2;				//16~17��λ����Χ0~3
	unsigned int jiacu : 1;				//18��λ����Χ0~1
	unsigned int xieti : 1;					//19��λ����Χ0~1
	unsigned int xiahuaxian : 1;		//20��λ����Χ0~1
};

const char* duiqi[3] = {"left","center","right"};
void show_attribute(struct ziticanshu *xinxi);
char get_choice(void);
void change_size(struct ziticanshu* xinxi);
void change_alignment(struct ziticanshu* xinxi);
void change_font(struct ziticanshu* xinxi);

int main(void)
{
	struct ziticanshu attribute = {1,12,0,0,0,0};
	show_attribute(&attribute);
	char choice=get_choice();

	int count = 0;//�����������д�������ֵ����ż�Կ��������л�����״̬
	while (choice != 'q')
	{
		switch (choice)
		{
		case 's':
			change_size(&attribute);
			break;
		case 'a':
			change_alignment(&attribute);
			break;
		case 'b':
			count % 2 == 0 ? (attribute.jiacu = 1 ): (attribute.jiacu = 0);//*****ע*****���ű���Ҫ��
			
			//������**********һλ���ݿ���ֱ��ʹ�÷��߼������************
			/*attribute.jiacu = !attribute.jiacu;*/
			break;
		case 'i':
			count % 2 == 0 ? (attribute.xieti = 1) : (attribute.xieti = 0);//*****ע*****���ű���Ҫ��
			break;
		case 'u':
			count % 2 == 0 ? (attribute.xiahuaxian = 1) : (attribute.xiahuaxian = 0);//*****ע*****���ű���Ҫ��
			break;
		case 'f':
			change_font(&attribute);
			break;
		}
		count++;

		show_attribute(&attribute);
		choice = get_choice();
	}
	return 0;
}
void show_attribute(struct ziticanshu *xinxi)
{
	puts("ID   SIZE   ALIGNMENT     B     I     U");
	printf("%d      %d   %s         %s   %s   %s\n\n",xinxi->ziti_id,xinxi->ziti_daxiao,duiqi[xinxi->duiqi],
		xinxi->jiacu==0?"off":"on",xinxi->xieti==0?"off":"on",xinxi->xiahuaxian==0?"off":"on");

	puts("f)change font  s)change size    a)change alignment ");
	puts("b)toggle bold  i)toggle italic  u)toggle underline ");
	puts("q)quit ");
}
char get_choice(void)
{
	char choice;
	scanf("%c",&choice);
	while (getchar() != '\n')
		continue;

	while (strchr("abfiqsuABFIQSU", choice) == NULL)
	{
		printf("�����������������룡");
		scanf("%c", &choice);
		while (getchar() != '\n')
			continue;
	}

	return tolower(choice);
}
void change_size(struct ziticanshu* xinxi)
{
	int num;

	printf("Enter font size (0-127) :");
	scanf("%d",&num);
	while (getchar() != '\n')
		continue;

	num = num & 0x7f;							//����ֵ���޸�Ϊ1��7λ����
	xinxi->ziti_daxiao = num;
}
void change_alignment(struct ziticanshu* xinxi)
{
	char choice;
	printf("Select alignment :");
	printf("l)left  c)center  r)right\n");

	scanf("%c", &choice);
	while (getchar() != '\n')
		continue;

	while (strchr("lcr", choice) == NULL)
	{
		printf("�����������������룡");
		scanf("%c", &choice);
		while (getchar() != '\n')
			continue;
	}
	choice = tolower(choice);

	switch (choice)
	{
	case 'l':
		xinxi->duiqi = 0;
		break;
	case 'c':
		xinxi->duiqi = 1;
		break;
	case 'r':
		xinxi->duiqi = 2;
		break;
	default:
		printf("Error !");
		exit(1);
	}
}
void change_font(struct ziticanshu* xinxi)
{
	int num;

	printf("Enter font ID (0-255) :");
	scanf("%d", &num);
	while (getchar() != '\n')
		continue;

	num = num & 0xff;							//����ֵ���޸�Ϊ1��8λ����
	xinxi->ziti_id = num;
}
#endif


//7.
#if 0
const char* duiqi[3] = { "left","center","right" };
void show_attribute(unsigned long *xinxi);
char get_choice(void);
void change_size(unsigned long* xinxi);
void change_alignment(unsigned long* xinxi);
void change_font(unsigned long* xinxi);

int main(void)
{
	unsigned long attribute=0;
	attribute |= 0x1;													 //[0000 0000]			ID
	attribute |= 0xc00;						     // 0[000 1100] 0000 0000			SIZE
	attribute |= 0x00000;				//[00] 0000 0000 0000 0000			����
	attribute |= 0x000000;			  //[0]00 0000 0000 0000 0000			�Ӵ�
												    //[0]000 0000 0000 0000 0000			б��
											     //[0] 0000 0000 0000 0000 0000			�»���
	show_attribute(&attribute);
	char choice = get_choice();

	while (choice != 'q')
	{
		switch (choice)
		{
		case 's':
			change_size(&attribute);
			break;
		case 'a':
			change_alignment(&attribute);
			break;
		case 'b':
			attribute^= 0x40000;//�л�λ
			break;
		case 'i':
			attribute^= 0x80000;
			break;
		case 'u':
			attribute^= 0x100000;
			break;
		case 'f':
			change_font(&attribute);
			break;
		}

		show_attribute(&attribute);
		choice = get_choice();
	}
	return 0;
}
void show_attribute(unsigned long* xinxi)
{
	puts("ID   SIZE   ALIGNMENT     B     I     U");
	printf("%d      %d   %s         %s   %s   %s\n\n", *xinxi&0xff, ( * xinxi & 0x7f00)>>8, duiqi[( * xinxi&0x3ffff)>>16],
	(*xinxi&0x4ffff)>>18== 0 ? "off" : "on", (*xinxi & 0x8ffff) >> 19 == 0 ? "off" : "on", (*xinxi & 0x1fffff) >> 20 == 0 ? "off" : "on");

	puts("f)change font  s)change size    a)change alignment ");
	puts("b)toggle bold  i)toggle italic  u)toggle underline ");
	puts("q)quit ");
}
char get_choice(void)
{
	char choice;
	scanf("%c", &choice);
	while (getchar() != '\n')
		continue;

	while (strchr("abfiqsuABFIQSU", choice) == NULL)
	{
		printf("�����������������룡");
		scanf("%c", &choice);
		while (getchar() != '\n')
			continue;
	}

	return tolower(choice);
}
void change_size(unsigned long* xinxi)
{
	int num;

	printf("Enter font size (0-127) :");
	scanf("%d", &num);
	while (getchar() != '\n')
		continue;

	num = num & 0x7f;							//����ֵ���޸�Ϊ1��7λ����
															   
	num <<= 8;

	* xinxi &= ~(0x7f00);							//������
	*xinxi |= num;										//����λ
}
void change_alignment(unsigned long* xinxi)
{
	char choice;
	printf("Select alignment :");
	printf("l)left  c)center  r)right\n");

	scanf("%c", &choice);
	while (getchar() != '\n')
		continue;

	while (strchr("lcr", choice) == NULL)
	{
		printf("�����������������룡");
		scanf("%c", &choice);
		while (getchar() != '\n')
			continue;
	}
	choice = tolower(choice);

	switch (choice)
	{
	case 'l':
		*xinxi &= ~(0x30000);
		break;
	case 'c':
		*xinxi &= ~(0x30000);					//������
		*xinxi |= 0x10000;							//����λ
		break;
	case 'r':
		*xinxi &= ~(0x30000);
		*xinxi |= 0x20000;
		break;
	default:
		printf("Error !");
		exit(1);
	}
}
void change_font(unsigned long* xinxi)
{
	int num;

	printf("Enter font ID (0-255) :");
	scanf("%d", &num);
	while (getchar() != '\n')
		continue;

	num = num & 0xff;							//����ֵ���޸�Ϊ1��8λ����
	
	*xinxi &= ~(0xff);
	*xinxi |= num;
}
#endif