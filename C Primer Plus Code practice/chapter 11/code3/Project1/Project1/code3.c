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
		if (*string == '\n')																							//覴ã��޷���������\n
			*string = '\0';
		else//*string == '\0'ʱ
			while (getchar() != '\n')
				continue;
	}
	return fanhui;
}
#endif
//1.��				//˼·����getchar()�Զ���һ����ȡ���ݲ������������еĺ�����
#if 0
#define LENGTH 10
void get_char(char* ar, char* end);
int main(void)
{
	char arr[LENGTH];
	char* p;

	printf("Please enter %d characters.\n", LENGTH);
	get_char(arr, arr + LENGTH);
	printf("\ncharacter array:\n");
	for (p = arr; p < arr + LENGTH; p++)
		putchar(*p);

	//puts(arr);//������puts()����Ϊû��\0���룬������ܷɡ�

	return 0;
}
//void get_char(char* ar, char* end)
//{
//	for (; ar < end; ar++)
//		*ar = getchar();
//}
//��
void get_char(char* ar, char* end)
{
	int i = 0;

	while (ar+i < end)
	{
		*(ar + i )= getchar();
		i++;
	}
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
//������getchar(),putchar();
#if 0		
int get_char(char *string,int n);
int main(void)
{
	char cunchu[10];
	puts("������10���ַ�:������ո��Ʊ�����з�ʱֹͣ���룩");
	int length=get_char(cunchu,10);

	puts("�������������:");
	for (int i=0; i <= length; i++)
		putchar(cunchu[i]);

	return 0;
}
int get_char(char* string, int n)//n��Ԫ�ظ���
{
	int i = 0;
	while (i < n)//i������
	{
		*(string+i )= getchar();//������abc\n    ʱi=3
	

		if (*(string + i) == ' ' || *(string + i) == '\t' || *(string + i) == '\n')
			break;
			
		i++;
	}
	return i;
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
																																	//覴ã�����\n�����뵥�ʵ������δ�����
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
// ���ϵĳ�������'\n'ʱ����Ҫ����ת��Ϊ'\0'�����Դ�������\n�����뵥�ʵ�������ô���
//3.��
#if 0
#include <ctype.h>
#include <string.h>
#define SIZE 20
void duqv(char* string, int n);//��ȡ
int main(void)
{
	char cunchu[SIZE];
	puts("�������ַ�:(����Enter����)");

	duqv(cunchu, SIZE);

	puts("������ĵ�����:");
	//puts(cunchu);
	printf("%s",cunchu);

	return 0;
}
void duqv(char* string, int n)
{
	char temp[SIZE];
	char* temp_p = temp;

	fgets(temp,SIZE,stdin);																						//�л������룬����\nʱ��temp�������������롣
																																//�޷�ʵ����������\n�����뵥�ʵ������
	while (isalpha(*temp_p) == 0)
	{	
		if (temp_p >= temp+ strlen(temp))//����\nʱ����ѭ��
			break;

		temp_p++;
	}
	while (isalpha(*temp_p))
		*string++ = *temp_p++;

	*string = '\0';
}
#endif
//ʹ��getchar()������ʵ����������\n�����뵥�ʵ������
#if 0
#include<ctype.h>
#define SIZE 20
int get_word(char* ar);
int main(void)
{
	char cunchu[SIZE];
	char* cunchu_p;

	printf("Please enter some text.\n");
	int leng = get_word(cunchu);
	printf("\nWord:\n");
	for (cunchu_p = cunchu;                      cunchu_p < cunchu + leng;                cunchu_p++)
		putchar(*cunchu_p);
	
	putchar('\n');

	return 0;
}
int get_word(char* string)//�������ĵ�һ������
{
	int length = 0;//��ʾԪ�ظ���
	_Bool inword = 0;

	while (*string = getchar())
	{
		if (isspace(*string) && !inword)                               //������          �ո� (SPC)
																							//'\t'	    0x09	ˮƽ�Ʊ��(TAB)
																							//'\n'	0x0a	���з�(LF)
																							//'\v'	0x0b	��ֱ�Ʊ��(VT)
																							//'\f' 	0x0c    ��ҳ(FF)
																							//'\r'	    0x0d    �س�(CR)
			continue;																	//������ȡ����
		else if (!isspace(*string) && !inword)//��������ĸ
			inword = 1;
		else if (isspace(*string) && inword)//���ٴ�����հ��ַ�
			break;

		length++;//���ʳ��ȼ�һ		
		string++;//ָ���������Ԫ�ص�λ��

		if (length == SIZE)
			break;
	}

	return length;
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
//4.��
#if 0
#include<ctype.h>
#define SIZE 20
int get_word(char* string,int n);
int main(void)
{
	char cunchu[SIZE];
	char* cunchu_p;

	printf("Please enter some text.\n");
	int leng = get_word(cunchu,SIZE);
	printf("\nWord:\n");
	for (cunchu_p = cunchu; cunchu_p < cunchu + leng; cunchu_p++)
		putchar(*cunchu_p);

	putchar('\n');

	return 0;
}
int get_word(char* string, int n)
{
	int length = 0;//��ʾԪ�ظ���
	_Bool inword = 0;

	//while (*string = getchar())
	//{
	//	if (isspace(*string) && !inword)                               //������          �ո� (SPC)
	//																						//'\t'	    0x09	ˮƽ�Ʊ��(TAB)
	//																						//'\n'	0x0a	���з�(LF)
	//																						//'\v'	0x0b	��ֱ�Ʊ��(VT)
	//																						//'\f' 	0x0c    ��ҳ(FF)
	//																						//'\r'	    0x0d    �س�(CR)
	//		continue;																	//������ȡ����
	//	else if (!isspace(*string) && !inword)//��������ĸ
	//		inword = 1;
	//	else if (isspace(*string) && inword)//���ٴ�����հ��ַ�
	//		break;

	//	length++;
	//	string++;//ָ���������Ԫ�ص�λ��

	//	if (length == n)
	//		break;
	//}
	//��
	char* temp = string;

		while (temp<string+n)
		{
			*temp = getchar();
			if (isspace(*temp) && !inword)                               //������          �ո� (SPC)
																								//'\t'	    0x09	ˮƽ�Ʊ��(TAB)
																								//'\n'	0x0a	���з�(LF)
																								//'\v'	0x0b	��ֱ�Ʊ��(VT)
																								//'\f' 	0x0c    ��ҳ(FF)
																								//'\r'	    0x0d    �س�(CR)
				continue;																	//������ȡ����
			else if (!isspace(*temp) && !inword)//��������ĸ
				inword = 1;
			else if (isspace(*temp) && inword)//���ٴ�����հ��ַ�
				break;

			length++;
			temp++;//ָ���������Ԫ�ص�λ��		
		}

	return length;
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
		{																	//������if(find=='\0')
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

	//��
	//while (*xunzhao != '\0')
	//{
	//	if (*xunzhao == ch)
	//		return 1;
	//	else
	//		xunzhao++;
	//}
	//return 0;

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
	
	while (duqv(temp, 80) && temp[0] != '\0')//����^Z����У�ֹͣ����
	{
	 fanhui=mystrncpy(cunchu, temp, SIZE);
	 *(cunchu + SIZE-1) = '\0';//��10��Ԫ�ظ�'\0'

	 puts("�������������:");
	 puts(cunchu);
	 puts(fanhui);

	 puts("��������������ַ���:");
	}
	puts("�ټ���");

	return 0;
}
char* mystrncpy(char* string1, char* string2, int n)//n=10��n��Ԫ�ظ���					//ע��Դ�ַ����ȴ���n��strncpy�����Զ����\0
{
	char* fanhui=string1;
	int i;

	for ( i = 0; i < n-1; i++)
	{
		*(string1+i) = *(string2+i);//��������9��Ԫ��Ϊֹ
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
//8.����																//8.ԭ˼·����������ǣ�ÿ�����һ���ַ�ƥ�䣬����ֻ��֧�������ַ���⡣
#if 0																//��˼·����Ǹ�Ϊ������count��ֻ��count��ֵ���ڼ���ַ����ĳ��ȣ��ŷ����ַ����׵�ַ
#include<string.h>
char* string_in(char* string1, char* string2);
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
			puts("���������Ӵ�����Ԫ�ؿ�ͷ���ַ���Ϊ:");
			puts(fanhui);
		}
		else
			puts("δ�ҵ���");

		puts("����������ҵ��ַ���:");
	}
	puts("�ټ���");

	return 0;
}
char* string_in(char* string1, char* string2)																                       
{
	
	int count = 0;//ƥ��ȼ���
	int length = strlen(string2);

	while (count < length&&*string1!='\0')//��ƥ��δ��ɣ���û���ֵ�string1��ĩβ�ַ���ĵ�һ��λ�á�
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
#endif//��һ��ʹ����ʱ�ַ����洢ɾ���ո����ַ��������ҵ�\0��ƴ�������ַ���
//10.������ʹ�ö��ָ�룬����ԭ�ַ���
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
	char* finish = string;//����һ������ú���ַ�����ָ��finish
	int count = 0;//��¼ɾ���Ŀո���

	while (*string != '\0')//��ָ��ԭ�ַ�����ָ��û��������Ԫ�غ�ĵ�һ��λ��
	{
		if (*string != ' ')
			*finish++ = *string++;
		else
		{
			string++;//����⵽�ո��ַ�����ԭ�ַ���ָ�����һλ��
			count++;
		}
	}

	/*while (count--)
		*finish++ = '\0';*/   //����ڴ���ú���ַ�������\0����д�Ļ�����Ϊ��Ȼָ��ԭ�ַ�����ָ��û����finish��\0������
										//ԭ�ַ������\0����Ȼ���ڡ����ǣ��������ɾ���ո���ַ���:
																								 //a b c d e f
																								//	����ú���ַ��� :
																								//abcdefd e f
																								//	�������ɾ���ո���ַ��� :
										//���ִ������ԭ��string�Ѿ�ָ����ԭ�ַ�����\0��������ֹ�ˡ������d e f��ԭ�ַ����Ĳ�������

	while (count--)
		*finish++ = '\0';//�����ʣ���ַ���

	return ;
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
#include<ctype.h>

#define SIZE 81
#define LIM 10
void showmenu(void);
void yuanzifuchuan(char*string[], int n);
void ASCII_paixu(char*string[],int n);
void length_paixu(char*string[],int n);
void first_word_length_paixu(char* string[], int n);
int get_word_length(char* string);

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

	//��һ��
	//for (int i = 0; i < n; i++)
	//{
	//	for (int j=0; string1[i][j] != ' '; j++)
	//		dancichangdu[i]++;
	//}

	//������
	for (int i = 0; i < n; i++)
	{
		dancichangdu[i] = get_word_length(string1[i]);
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
int get_word_length(char* string)//���㵥�ʳ��ȵĺ���
{
	char* find = string;
	int length = 0;
	while (isalpha(*find) == 0)
		find++;
	while (isalpha(*find) != 0)
	{
		find++;
		length++;
	}
	return length;
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
			count++;// ͳ�Ƶ��ʸ���
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
#if 0
#include <stdlib.h>
#include <string.h>
int main(int argc,char**argv)
{	
	int i;
	
	char cunchu[20] = "a";
	char* cunchudezhizhen=cunchu;//ָ��cunchu

	int length = strlen(argv[1]);
	for(int i=0;i<length;i++)
	*(cunchudezhizhen+i)= *(argv[1]+i);			//argv[1]�����ַ������������Ҳ���ַ��������ָ�롣

	puts(cunchu);
	puts(argv[1]);//���������ʾЧ����ͬ
	putchar('\n');

	//for (i = argc-1; i - 1 >= 1; i--)//4���ַ�������һ����Ϊ��������ʵ����ֻ��3���ַ�����argc=4��
	//strcat(argv[i],argv[i-1]);
	// 

	//strcat(argv[3],argv[2]);
	//strcat(argv[3],argv[1]);

	//puts(argv[3]);																															 //Ч�����ã��ҳ����ӡ�������

	//putchar('\n');

	for (int i = argc - 1; i > 0; i--)
		printf("%s ",argv[i]);

	return 0;
}
#endif


//14.
#if 0
#include <stdlib.h>
#include <string.h>
int main(int argc, char* argv[])
{

	double dishu;//����
	int zhishu;//ָ��
	double jieguo=1.0;

	dishu = atof(argv[1]);
	zhishu = atoi(argv[2]);

	for (int i = 1; i <= zhishu; i++)
		jieguo *= dishu;

	printf("%.2lf��%d�η�����%.2lf",dishu,zhishu,jieguo);

	return 0;
}
#endif


//15.
#if 0
#include <string.h>
#include <ctype.h>
int atoi(char * string);
char* duqv(char* string, int n);
int main(void)
{

	char cunchu[80];
	puts("�������ַ�:");
	duqv(cunchu,80);

	int fanhui;
	fanhui = atoi(cunchu);
	printf("atoi()����ú������е��ַ�Ϊ:%s\n",cunchu);
	printf("atoi()�ķ���ֵ��%d\n",fanhui);

	return 0;
}
int atoi(char* string)
{
	int fanhui;
	char* find=string;
	char* temp[80];
	int i=0;

	for (; find < string + strlen(string); find++)
	{
		if (isdigit(*find) == 0)
		{
			fanhui = 0;
			break;
		}
		else
			fanhui = 1;

		if (*find != '\0')
		{
			temp[i] = *find;																			//������Ȼtemp�е��ַ���������ַ�������������ֵ��
			i++;
		}
	}

	*(temp + 79) = '\0';
	puts(temp);

	return fanhui;
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
//15.����
#if 0
#include <string.h>
#include <ctype.h>
int atoi(char* string);
char* duqv(char* string, int n);
int main(void)
{

	char cunchu[80];
	puts("�������ַ�:");
	duqv(cunchu, 80);//��scanf()Ч����ͬ

	printf("atoi()����ú����������Ϊ%d\n",  atoi(cunchu));

	return 0;
}
int atoi(char* string)
{
	int result = 0;
	int weiquan = 1;//��λ��Ȩ��1��ʮλ��Ȩ��10
	int length = strlen(string);

	for (int i = length; i > 0; i--)
	{
		if (isdigit(*(string + i - 1)) == 0)//���ж�ĩλ�Ƿ�Ϊ�����ַ�
		{
			printf("���ڷ������ַ���");
			return 0;
		}
		result += (*(string + i - 1)- '0') * weiquan;//�����ַ���ASCII��������ܵõ����֣�

		weiquan *= 10;
	}

	return result;
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



//16.
#if 1
#include<ctype.h>
#include<string.h>
void print(void);
void to_up(void);
void to_low(void);
int main(int argc, char* argv[])
{
	if (argc > 2)
		printf("The parameter is incorrect.\n");
	else if (argc == 1 || !strcmp(argv[1], "-p"))//û����ڶ����ַ��������������˵ڶ����ַ�����Ϊ-Pʱ��
		print();
	else if (!strcmp(argv[1], "-u"))//�ȽϺ���ͬ���򷵻�0��ȡ�Ǻ�Ϊ1��
		to_up();
	else if (!strcmp(argv[1], "-l"))
		to_low();
	putchar('\n');

	return 0;
}
void print(void)
{
	char ch;

	while ((ch = getchar()) != EOF)   //�ļ�����
		putchar(ch);
}
void to_up(void)
{
	char ch;

	while ((ch = getchar()) != EOF)
	{
		ch = toupper(ch);
		putchar(ch);
	}
}
void to_low(void)
{
	char ch;

	while ((ch = getchar()) != EOF)
	{
		ch = tolower(ch);
		putchar(ch);
	}
}
#endif