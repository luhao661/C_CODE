#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//
#if 1
#endif


//�����ϰ
//1.
#if 0
#define LIMT 20
#define SIZE 20
char* duqv(char* string, int n);
int main(void)
{
	char cunchu[LIMT][SIZE];
	puts("�������ַ�:(��������Խ���)");

	int count=0;
	while (count < LIMT && duqv(cunchu[count], SIZE) != NULL && cunchu[count][0] != '\0')
	{
		count++;
	}

	puts("�������������:");
	for (int i=0; i < count; i++)
		puts(cunchu[i]);

	return 0;
}
char* duqv(char* string, int n)
{
	char* fanhui;

	fanhui = fgets(string,n,stdin);
	
	if (fanhui)//���벻Ϊ^Z
	{
		while (*string != '\n' && *string != '\0')
			string++;
		if (*string == '\n')
			*string = '\0';
		else//*string == '\0'ʱ
			while (getchar() != '\n')
				continue;
	}
	return fanhui;
}
#endif


//2.
#if 0
#include<string.h>
#define LIMT 20
#define SIZE 20
char* duqv(char* string, int n);
int main(void)
{
	char cunchu[LIMT][SIZE];
	puts("�������ַ�:(����^Z�Խ���)");

	int count = 0;
	while (count < LIMT && duqv(cunchu[count], SIZE) != NULL )
	{
		count++;
	}

	puts("�������������:");
	for (int i = 0; i < count; i++)
		puts(cunchu[i]);

	return 0;
}
char* duqv(char* string, int n)
{
	char* fanhui;

	fanhui = fgets(string, n, stdin);

	if (fanhui)//���벻Ϊ^Z
	{
		while (*string != '\n' && *string != '\0'&&*string!=' '&&*string!='\t')
			string++;
		if (*string == '\n' || *string != ' '|| *string != '\t')
			*string = '\0';
		else//*string == '\0'ʱ
			while (getchar() != '\n')
				continue;
	}
	return fanhui;
}
#endif


//3.
#if 0
#include <string.h>
#define SIZE 20
char* duqv(char* string, int n);//��ȡ
int main(void)
{
	char cunchu[SIZE];
	puts("�������ַ�:(����Enter����)");

	char * find;
	find=duqv(cunchu, SIZE);

	puts("������ĵ�����:");
	puts(find);
		
	return 0;
}
char* duqv(char* string, int n)
{
	char* fanhui;

	fanhui = fgets(string, n, stdin);

	char* start=fanhui;// start ���븳һ����ʼֵ

	for (; isalpha(*fanhui) == NULL&&fanhui<(string+strlen(string)); fanhui++)//������ո��Ʊ�������з��������뵥��                    
		start=fanhui;																										//strlen()����¼\n	,��������ֻ���뻻�з������								
																																	//覴ã�����\n�������δ�����
	start = fanhui;//startָ���һ���ǿհ��ַ�

	while (*fanhui != ' ' &&*fanhui != '\t' && *fanhui != '\n'&&*fanhui!='\0')//��һ���ǿհ��ַ�����������пհ��ַ�������\0�ض�
			fanhui++;

		if (*fanhui == ' ' || *fanhui == '\t'|| *fanhui == '\n')
		{
			*fanhui = '\0';
		}
		else //*fanhui=='\0ʱ
			while (getchar() != '\n')
				continue;

	return start;
}
#endif


//4.
#if 0
#include <string.h>
#define SIZE 10
char* duqv(char* string, int n);//��ȡ
int main(void)
{
	char cunchu[SIZE];
	puts("�������ַ�:(����Enter����)");

	char* find;
	find = duqv(cunchu, SIZE);

	puts("������ĵ�����:");
	puts(find);

	return 0;
}
char* duqv(char* string, int n)
{
	char* fanhui;

	fanhui = fgets(string, n, stdin);

	char* start = fanhui;// start ���븳һ����ʼֵ

	for (; isalpha(*fanhui) == NULL && fanhui < (string + strlen(string)); fanhui++)//������ո��Ʊ�������з��������뵥��                    
		start = fanhui;																										//strlen()����¼\n	,��������ֻ���뻻�з������								
																																	//覴ã�ֻ����\n�������δ�����
	start = fanhui;//startָ���һ���ǿհ��ַ�

	while (*fanhui != ' ' && *fanhui != '\t' && *fanhui != '\n' && *fanhui != '\0')//��һ���ǿհ��ַ�����������пհ��ַ�������\0�ض�
		fanhui++;

	if (*fanhui == ' ' || *fanhui == '\t' || *fanhui == '\n')
	{
		*fanhui = '\0';
	}
	else //*fanhui=='\0ʱ
		while (getchar() != '\n')
			continue;

	return start;
}
#endif


//5.
#if 0
#include <string.h>
#define SIZE 50
char* duqv(char* string, int n);//��ȡ
char* find(char* string, char ch);
int main(void)
{

	while (1)
	{
		char cunchu[SIZE];
		puts("�������ַ�:(����Enter����)");

		duqv(cunchu, SIZE);

		puts("�������������:");
		puts(cunchu);

		char ch;
		puts("������Ҫ���ҵ��ַ�:");
		scanf("%c", &ch);
		while (getchar() != '\n')
			continue;

		char* Find;
		Find = find(cunchu, ch);
		if (Find)
		{
			printf("����ĸ����������Ϊ:");
			puts(Find);
		}
		else
			puts("δ�ҵ����ַ���");
	}
	return 0;
}
char* find(char* string, char ch)
{
	char* find = string;
	while (*find != ch)
	{
		find++;
	
		if (find == string+strlen(string))//�����������ַ�����strlen����=2��string+2ָ���������һ��Ԫ�صĺ����һ��λ��
		{
			find = NULL;
			break;
		}
	}

	return find;
}
char* duqv(char* string, int n)
{
	char* fanhui;

	fanhui = fgets(string, n, stdin);

	if (fanhui)//���벻Ϊ^Z
	{
		while (*string != '\n' && *string != '\0')
			string++;
		if (*string == '\n')
			*string = '\0';
		else//*string == '\0'ʱ
			while (getchar() != '\n')
				continue;
	}
	return fanhui;
}
#endif


//6.
#if 0
#include<string.h>
int is_within(char ch,char *string);
char* duqv(char* string, int n);

int main(void)
{
	while (1)
	{
		char cunchu[50];
		puts("�������ַ���:");
		duqv(cunchu, 50);

		puts("������ҪѰ�ҵ��ַ�:");
		char ch;
		scanf("%c", &ch);

		int find;
		find = is_within(ch, cunchu);

		printf("find=%d", find);
	}
	return 0;
}
int is_within(char ch, char* string)
{
	int find;

	char* xunzhao;
	xunzhao = string;

	while (*xunzhao != ch)
	{
		xunzhao++;

		if (xunzhao == string + strlen(string))//��ָ��xunzhao ָ���������ĵ�һ��λ�ã��򵯳���
			break;
	}

	find = (*xunzhao == ch) ? 1 : 0;

	return find;
}
char* duqv(char* string, int n)
{
	char* fanhui;

	fanhui = fgets(string, n, stdin);

	if (fanhui)//���벻Ϊ^Z
	{
		while (*string != '\n' && *string != '\0')
			string++;
		if (*string == '\n')
			*string = '\0';
		else//*string == '\0'ʱ
			while (getchar() != '\n')
				continue;
	}
	return fanhui;
}
#endif


//7.
#if 0
char* mystrncpy(char *string1,char *string2,int n);
char* duqv(char* string, int n);
#define SIZE 10
int main(void)
{
	char cunchu[80];
	char temp[80];
	char* fanhui;

	puts("��������������ַ���:");
	
	while (duqv(temp, 80) && temp[0] != '\0')
	{
	 fanhui=mystrncpy(cunchu, temp, SIZE-1);
	 cunchu[SIZE - 1] = '\0';//��10��Ԫ�ظ�Ϊ\0

	 puts("�������������:");
	 puts(cunchu);
	 puts(fanhui);

	 puts("��������������ַ���:");
	}
	puts("�ټ���");

	return 0;
}
char* mystrncpy(char* string1, char* string2, int n)//n=9
{
	char* fanhui=string1;

	for (int i = 0; i <= n; i++)
	{
		*(string1+i) = *(string2+i);//��������10��Ԫ��Ϊֹ
	}

	return fanhui;
}
char* duqv(char* string, int n)
{
	char* fanhui;

	fanhui = fgets(string, n, stdin);

	if (fanhui)//���벻Ϊ^Z
	{
		while (*string != '\n' && *string != '\0')
			string++;
		if (*string == '\n')
			*string = '\0';
		else//*string == '\0'ʱ
			while (getchar() != '\n')
				continue;
	}
	return fanhui;
}
#endif


//8.
#if 0
#include<string.h>
char* string_in (char* string1, char* string2);
char* duqv(char* string, int n);
int main(void)
{
	char cunchu1[80];
	char cunchu2[80];
	char* fanhui;

	puts("����������ҵ��ַ���:");

	while (duqv(cunchu1, 80) && cunchu1[0] != '\0')
	{
		puts("������Ҫ���ҵ��ַ���:");
		duqv(cunchu2, 80);

		fanhui = string_in(cunchu1, cunchu2);
			
		if (fanhui)
		{
			puts("�����ҵ��ַ�������:");
			puts(fanhui);
		}
		else
			puts("δ�ҵ���");

		puts("����������ҵ��ַ���:");
	}
	puts("�ټ���");

	return 0;
}
char* string_in(char* string1, char* string2)																                                    //覴ã�ֻ֧���������ַ�
{
	char* fanhui=NULL;//�����ȳ�ʼ��

	int biaoji1=0,biaoji2=0;
	char* xunzhao = string1;
	char* temp=NULL;//�����ȳ�ʼ��

	for (          ; xunzhao < string1 + strlen(string1); xunzhao++)
	{
		if (*xunzhao == *string2)
		{
			biaoji1 = 1;
			temp = xunzhao;
			break;
		}
	}

	if (biaoji1 == 1)
	{
		xunzhao += 1;
			if (*xunzhao == *(string2 + 1))
			{
				biaoji2 = 1;
			}
	}

	if (biaoji1 == 1&&biaoji2 == 1)
	{
		fanhui = temp;
	}
	else
		fanhui = NULL;

	return fanhui;
}
char* duqv(char* string, int n)
{
	char* fanhui;

	fanhui = fgets(string, n, stdin);

	if (fanhui)//���벻Ϊ^Z
	{
		while (*string != '\n' && *string != '\0')
			string++;
		if (*string == '\n')
			*string = '\0';
		else//*string == '\0'ʱ
			while (getchar() != '\n')
				continue;
	}
	return fanhui;
}
#endif


//9.
#if 0
#include<string.h>
void fanxu(char* string);
char* duqv(char* string, int n);
int main(void)
{
	char cunchu[80];
	char* fanhui;

	puts("�������������ַ���:");

	while (duqv(cunchu, 80) && cunchu[0] != '\0')
	{
		fanxu(cunchu);
		puts("�������ַ���:");
		puts(cunchu);

		puts("�������������ַ���:");
	}
	puts("�ټ���");

	return 0;
}
void fanxu(char* string)
{
	int size = strlen(string);

	char* temp1=string+size-1;//����һ��ָ�룬ָ���������һ��Ԫ��

	char temp2[80];//����һ���ݴ淴�������ݵ�����
	
	for (int i = 0; i < size; i++)
		*(temp2 + i )=* (temp1-i);

	 temp1 = string;//��temp1ָ��������Ԫ��

	for (int i = 0; i < size; i++)
		*(temp1 + i) = *(temp2 + i);

	temp1[size] = '\0';

	return;
}
char* duqv(char* string, int n)
{
	char* fanhui;

	fanhui = fgets(string, n, stdin);

	if (fanhui)//���벻Ϊ^Z
	{
		while (*string != '\n' && *string != '\0')
			string++;
		if (*string == '\n')
			*string = '\0';
		else//*string == '\0'ʱ
			while (getchar() != '\n')
				continue;
	}
	return fanhui;
}
#endif


//10.
#if 0
#include<string.h>
void delete_space(char* string);
char* duqv(char* string, int n);
int main(void)
{
	char cunchu[80];

	puts("�������ɾ���ո���ַ���:");

	while (duqv(cunchu, 80) && cunchu[0] != '\0')
	{
		delete_space(cunchu);
		puts("����ú���ַ���:");
		puts(cunchu);

		puts("�������ɾ���ո���ַ���:");
	}
	puts("�ټ���");

	return 0;
}
void delete_space(char* string)
{
	char temp1[80];
	strcpy(temp1,string);

	char temp2[80];

	char* fanhui;
	fanhui = strchr(temp1,' ');
	
	while (fanhui)
	{
		//*fanhui = *(fanhui+1);//string�����еĴ洢�ո��λ�ñ����һ���ַ�����							//����Ӧ�ñ��ո����ַ�������
		*fanhui = '\0';//��temp1�����ڿո񴦽ض�
		
		strcpy(temp2, fanhui+1);//�ո�����ݿ�����temp2

		strcat(temp1,temp2);//temp1��temp2ƴ��

		fanhui = strchr(temp1, ' ');
	}
																																//����Ĳ�������Ķ�����string���鱾��
	//string = temp1;  //temp1��ַ����string											
	//puts(string);																										 //ȷʵɾ���˿ո�	     Ϊʲôû�иı�cunchu��������ݣ�
	strcpy(string,temp1);																						//��Ϊ��������puts(cunchu);cunchuָ��û��ָ��temp1���顣 
																															
	return;
}
char* duqv(char* string, int n)
{
	char* fanhui;

	fanhui = fgets(string, n, stdin);

	if (fanhui)//���벻Ϊ^Z
	{
		while (*string != '\n' && *string != '\0')
			string++;
		if (*string == '\n')
			*string = '\0';
		else//*string == '\0'ʱ
			while (getchar() != '\n')
				continue;
	}
	return fanhui;
}
#endif


//11.
#if 0
#include<string.h>
#define SIZE 81
#define LIM 10
void showmenu(void);
void yuanzifuchuan(char*string[], int n);
void ASCII_paixu(char*string[],int n);
void length_paixu(char*string[],int n);
void first_word_length_paixu(char* string[], int n);

char* duqv(char* string, int n);
int main(void)
{
	char input[LIM][SIZE];
	char* chuli[LIM];//�����ں�ָ�����������
	int shuru_jishu = 0;
	int shuchu_jishu;

	puts("����������10���ַ���:");
	while (shuru_jishu < LIM && duqv(input[shuru_jishu], SIZE) != NULL )
	{
		chuli[shuru_jishu] = input[shuru_jishu];//��ÿ��ָ�븳ֵ
		shuru_jishu++;
	}
	
	int choice;
	showmenu();
	scanf("%d",&choice);
	while (choice!=5)
	{
		switch (choice)
		{ 
		case 1:yuanzifuchuan(chuli, shuru_jishu);//��һ��ʵ�Σ��ں�ָ����������飬������10��ָ��
					break;													//ע�⣺shuru_jishu���ϵ���Ԫ�ظ������������������ֵ����Ϊ++����
		case 2:ASCII_paixu(chuli, shuru_jishu);
			break;
		case 3:length_paixu(chuli, shuru_jishu);
			break;
		case 4:first_word_length_paixu(chuli, shuru_jishu);
			break;
		}

		putchar('\n');
		showmenu();
		scanf("%d", &choice);
	}
	putchar('\n');
	puts("�ټ���");

	return 0;
}
void showmenu(void)
{
	puts("*******************************************************************************");
	printf("��������ѡ��Ĺ���:(���빦��ǰ��Ӧ�����ּ���)\n");
	printf("1)��ӡԴ�ַ����б�		2)��ASCII�е�˳���ӡ�ַ���\n");
	printf("3)�����ȵ���˳���ӡ�ַ���	4)���ַ����е�1�����ʵĳ��ȴ�ӡ�ַ���\n");
	puts("5)�˳�");
	puts("*******************************************************************************");
}
void yuanzifuchuan(char* string[], int n)
{
	puts("Դ�ַ����б�:");
	for (int i = 0; i <n; i++)
		puts(string[i]);
}
void ASCII_paixu(char* string[], int n)//n��Ԫ�ظ���
{
	char* string1[LIM];
	for (int i = 0; i < n; i++)
		string1[i] = string[i];//ԭָ�����鿽����string1

	char* temp;
	int top, seek;
	for(top=0;top<n-1;top++)//���ָ�����ڶ���Ԫ��
		for(seek=top+1;seek<n;seek++)
			if (strcmp(string1[top], string1[seek]) > 0)
			{
				temp = string1[top];
				string1[top] = string1[seek];
				string1[seek] = temp;
			}

	puts("������ַ����б�:");
	for (int i = 0; i < n; i++)
		puts(string1[i]);
}
void length_paixu(char* string[], int n)
{
	char* string1[LIM];
	for (int i = 0; i < n; i++)
		string1[i] = string[i];//ԭָ�����鿽����string1

	char* temp;
	int top, seek;
	for (top = 0; top < n - 1; top++)//���ָ�����ڶ���Ԫ��
		for (seek = top + 1; seek < n; seek++)
			if (strlen(string1[top])> strlen(string1[seek]))
			{
				temp = string1[top];
				string1[top] = string1[seek];
				string1[seek] = temp;
			}

	puts("������ַ����б�:");
	for (int i = 0; i < n; i++)
		puts(string1[i]);
}
void first_word_length_paixu(char* string[], int n)
{
	char* string1[LIM];
	for (int i = 0; i < n; i++)
		string1[i] = string[i];//ԭָ�����鿽����string1

	char* temp;
	int top, seek;

	int dancichangdu[LIM] = {0,0,0};//���ָ���ֵ

	for (int i = 0; i < n; i++)
	{
		for (int j=0; string1[i][j] != ' '; j++)
			dancichangdu[i]++;
	}

	for (top = 0; top < n - 1; top++)//���ָ�����ڶ���Ԫ��
		for (seek = top + 1; seek < n; seek++)
			//if (strchr(string1[top],' ') > strchr(string1[seek],' '))//ʧ��
			if (dancichangdu[top]>dancichangdu[seek])
			{
				temp = string1[top];
				string1[top] = string1[seek];
				string1[seek] = temp;
			}

	puts("������ַ����б�:");
	for (int i = 0; i < n; i++)
		puts(string1[i]);
}
char* duqv(char* string, int n)
{
	char* fanhui;

	fanhui = fgets(string, n, stdin);

	if (fanhui)//���벻Ϊ^Z
	{
		while (*string != '\n' && *string != '\0')
			string++;
		if (*string == '\n')
			*string = '\0';
		else//*string == '\0'ʱ
			while (getchar() != '\n')
				continue;
	}
	return fanhui;
}
#endif


//12.
#if 0
#include<string.h>
#include <ctype.h>
#define SIZE 81
int dancishu(char* string);
int daxiezimushu(char* string);
int xiaoxiezimushu(char* string);
int biaodianfuhaoshu(char* string);
int shuzizifushu(char* string);
char* duqv(char* string, int n);
int main(void)
{
	char input[SIZE];
	
	puts("�������ַ�:");		//�������룺danci1 danci2 DAXIE xiaoxie, haha.       en?   123456
	duqv(input, SIZE);

	printf("����ĵ�����:%d\n",dancishu(input)); 
	printf("����Ĵ�д��ĸ��:%d\n", daxiezimushu(input));
	printf("�����Сд��ĸ��:%d\n", xiaoxiezimushu(input));
	printf("����ı�������:%d\n", biaodianfuhaoshu(input));
	printf("����������ַ���:%d\n\n", shuzizifushu(input));

	return 0;
}
int dancishu(char* string)
{
	char* find = string;
	int biaoji = 0;
	int count = 0;
		
	while(find<string+strlen(string))
	{
		if (isalpha(*find) && !biaoji)
		{
			biaoji = 1;
			count++;// ͳ�Ƶ���
		}
		if (!isalpha(*find) && biaoji)
			biaoji = 0;// �ѵ����ʵ�ĩβ
			
			find++;
	}
	return count;
}
int daxiezimushu(char* string)
{
	char* find = string;
	int count = 0;

	while (find < string + strlen(string))
	{
		if (isupper(*find))
			count++;	
		find++;
	}
	return count;
}
int xiaoxiezimushu(char* string)
{
	char* find = string;
	int count = 0;

	while (find < string + strlen(string))
	{
		if (islower(*find))
			count++;
		find++;
	}
	return count;
}
int biaodianfuhaoshu(char* string)
{
	char* find = string;
	int count = 0;

	while (find < string + strlen(string))
	{
		if (ispunct(*find))
			count++;
		find++;
	}
	return count;
}
int shuzizifushu(char* string)
{
	char* find = string;
	int count = 0;

	while (find < string + strlen(string))
	{
		if (isdigit(*find))
			count++;
		find++;
	}
	return count;
}
char* duqv(char* string, int n)
{
	char* fanhui;

	fanhui = fgets(string, n, stdin);

	if (fanhui)//���벻Ϊ^Z����EOF��
	{
		while (*string != '\n' && *string != '\0')
			string++;
		if (*string == '\n')
			*string = '\0';
		else//*string == '\0'ʱ
			while (getchar() != '\n')
				continue;
	}
	return fanhui;
}
#endif


//13.
#if 1
void fanxu_words(char* string);
int main(void)
{


	return 0;
}
void fanxu_words(char* string)
{

}
#endif