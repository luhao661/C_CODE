#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//
#if 1
#endif


//编程练习
//1.
#if 0
#define LIMT 20
#define SIZE 20
char* duqv(char* string, int n);
int main(void)
{
	char cunchu[LIMT][SIZE];
	puts("请输入字符:(输入空行以结束)");

	int count=0;
	while (count < LIMT && duqv(cunchu[count], SIZE) != NULL && cunchu[count][0] != '\0')
	{
		count++;
	}

	puts("您输入的内容是:");
	for (int i=0; i < count; i++)
		puts(cunchu[i]);

	return 0;
}
char* duqv(char* string, int n)
{
	char* fanhui;

	fanhui = fgets(string,n,stdin);
	
	if (fanhui)//输入不为^Z
	{
		while (*string != '\n' && *string != '\0')
			string++;
		if (*string == '\n')
			*string = '\0';
		else//*string == '\0'时
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
	puts("请输入字符:(输入^Z以结束)");

	int count = 0;
	while (count < LIMT && duqv(cunchu[count], SIZE) != NULL )
	{
		count++;
	}

	puts("您输入的内容是:");
	for (int i = 0; i < count; i++)
		puts(cunchu[i]);

	return 0;
}
char* duqv(char* string, int n)
{
	char* fanhui;

	fanhui = fgets(string, n, stdin);

	if (fanhui)//输入不为^Z
	{
		while (*string != '\n' && *string != '\0'&&*string!=' '&&*string!='\t')
			string++;
		if (*string == '\n' || *string != ' '|| *string != '\t')
			*string = '\0';
		else//*string == '\0'时
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
char* duqv(char* string, int n);//读取
int main(void)
{
	char cunchu[SIZE];
	puts("请输入字符:(输入Enter结束)");

	char * find;
	find=duqv(cunchu, SIZE);

	puts("您输入的单词是:");
	puts(find);
		
	return 0;
}
char* duqv(char* string, int n)
{
	char* fanhui;

	fanhui = fgets(string, n, stdin);

	char* start=fanhui;// start 必须赋一个初始值

	for (; isalpha(*fanhui) == NULL&&fanhui<(string+strlen(string)); fanhui++)//当输入空格、制表符、换行符后再输入单词                    
		start=fanhui;																										//strlen()不记录\n	,用来处理只输入换行符的情况								
																																	//瑕疵：输入\n的情况仍未处理好
	start = fanhui;//start指向第一个非空白字符

	while (*fanhui != ' ' &&*fanhui != '\t' && *fanhui != '\n'&&*fanhui!='\0')//第一个非空白字符串其后若还有空白字符，则用\0截断
			fanhui++;

		if (*fanhui == ' ' || *fanhui == '\t'|| *fanhui == '\n')
		{
			*fanhui = '\0';
		}
		else //*fanhui=='\0时
			while (getchar() != '\n')
				continue;

	return start;
}
#endif


//4.
#if 0
#include <string.h>
#define SIZE 10
char* duqv(char* string, int n);//读取
int main(void)
{
	char cunchu[SIZE];
	puts("请输入字符:(输入Enter结束)");

	char* find;
	find = duqv(cunchu, SIZE);

	puts("您输入的单词是:");
	puts(find);

	return 0;
}
char* duqv(char* string, int n)
{
	char* fanhui;

	fanhui = fgets(string, n, stdin);

	char* start = fanhui;// start 必须赋一个初始值

	for (; isalpha(*fanhui) == NULL && fanhui < (string + strlen(string)); fanhui++)//当输入空格、制表符、换行符后再输入单词                    
		start = fanhui;																										//strlen()不记录\n	,用来处理只输入换行符的情况								
																																	//瑕疵：只输入\n的情况仍未处理好
	start = fanhui;//start指向第一个非空白字符

	while (*fanhui != ' ' && *fanhui != '\t' && *fanhui != '\n' && *fanhui != '\0')//第一个非空白字符串其后若还有空白字符，则用\0截断
		fanhui++;

	if (*fanhui == ' ' || *fanhui == '\t' || *fanhui == '\n')
	{
		*fanhui = '\0';
	}
	else //*fanhui=='\0时
		while (getchar() != '\n')
			continue;

	return start;
}
#endif


//5.
#if 0
#include <string.h>
#define SIZE 50
char* duqv(char* string, int n);//读取
char* find(char* string, char ch);
int main(void)
{

	while (1)
	{
		char cunchu[SIZE];
		puts("请输入字符:(输入Enter结束)");

		duqv(cunchu, SIZE);

		puts("您输入的内容是:");
		puts(cunchu);

		char ch;
		puts("请输入要查找的字符:");
		scanf("%c", &ch);
		while (getchar() != '\n')
			continue;

		char* Find;
		Find = find(cunchu, ch);
		if (Find)
		{
			printf("该字母及其后的内容为:");
			puts(Find);
		}
		else
			puts("未找到该字符！");
	}
	return 0;
}
char* find(char* string, char ch)
{
	char* find = string;
	while (*find != ch)
	{
		find++;
	
		if (find == string+strlen(string))//若输入两个字符，则strlen（）=2，string+2指向数组最后一个元素的后面第一个位置
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

	if (fanhui)//输入不为^Z
	{
		while (*string != '\n' && *string != '\0')
			string++;
		if (*string == '\n')
			*string = '\0';
		else//*string == '\0'时
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
		puts("请输入字符串:");
		duqv(cunchu, 50);

		puts("请输入要寻找的字符:");
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

		if (xunzhao == string + strlen(string))//若指针xunzhao 指向了数组后的第一个位置，则弹出。
			break;
	}

	find = (*xunzhao == ch) ? 1 : 0;

	return find;
}
char* duqv(char* string, int n)
{
	char* fanhui;

	fanhui = fgets(string, n, stdin);

	if (fanhui)//输入不为^Z
	{
		while (*string != '\n' && *string != '\0')
			string++;
		if (*string == '\n')
			*string = '\0';
		else//*string == '\0'时
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

	puts("请输入待拷贝的字符串:");
	
	while (duqv(temp, 80) && temp[0] != '\0')
	{
	 fanhui=mystrncpy(cunchu, temp, SIZE-1);
	 cunchu[SIZE - 1] = '\0';//第10个元素赋为\0

	 puts("您输入的内容是:");
	 puts(cunchu);
	 puts(fanhui);

	 puts("请输入待拷贝的字符串:");
	}
	puts("再见！");

	return 0;
}
char* mystrncpy(char* string1, char* string2, int n)//n=9
{
	char* fanhui=string1;

	for (int i = 0; i <= n; i++)
	{
		*(string1+i) = *(string2+i);//拷贝到第10个元素为止
	}

	return fanhui;
}
char* duqv(char* string, int n)
{
	char* fanhui;

	fanhui = fgets(string, n, stdin);

	if (fanhui)//输入不为^Z
	{
		while (*string != '\n' && *string != '\0')
			string++;
		if (*string == '\n')
			*string = '\0';
		else//*string == '\0'时
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

	puts("请输入待查找的字符串:");

	while (duqv(cunchu1, 80) && cunchu1[0] != '\0')
	{
		puts("请输入要查找的字符串:");
		duqv(cunchu2, 80);

		fanhui = string_in(cunchu1, cunchu2);
			
		if (fanhui)
		{
			puts("待查找的字符串含有:");
			puts(fanhui);
		}
		else
			puts("未找到！");

		puts("请输入待查找的字符串:");
	}
	puts("再见！");

	return 0;
}
char* string_in(char* string1, char* string2)																                                    //瑕疵：只支持找两个字符
{
	char* fanhui=NULL;//必须先初始化

	int biaoji1=0,biaoji2=0;
	char* xunzhao = string1;
	char* temp=NULL;//必须先初始化

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

	if (fanhui)//输入不为^Z
	{
		while (*string != '\n' && *string != '\0')
			string++;
		if (*string == '\n')
			*string = '\0';
		else//*string == '\0'时
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

	puts("请输入待反序的字符串:");

	while (duqv(cunchu, 80) && cunchu[0] != '\0')
	{
		fanxu(cunchu);
		puts("反序后的字符串:");
		puts(cunchu);

		puts("请输入待反序的字符串:");
	}
	puts("再见！");

	return 0;
}
void fanxu(char* string)
{
	int size = strlen(string);

	char* temp1=string+size-1;//创建一个指针，指向数组最后一个元素

	char temp2[80];//创建一个暂存反序后的数据的数组
	
	for (int i = 0; i < size; i++)
		*(temp2 + i )=* (temp1-i);

	 temp1 = string;//让temp1指向数组首元素

	for (int i = 0; i < size; i++)
		*(temp1 + i) = *(temp2 + i);

	temp1[size] = '\0';

	return;
}
char* duqv(char* string, int n)
{
	char* fanhui;

	fanhui = fgets(string, n, stdin);

	if (fanhui)//输入不为^Z
	{
		while (*string != '\n' && *string != '\0')
			string++;
		if (*string == '\n')
			*string = '\0';
		else//*string == '\0'时
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

	puts("请输入待删除空格的字符串:");

	while (duqv(cunchu, 80) && cunchu[0] != '\0')
	{
		delete_space(cunchu);
		puts("处理好后的字符串:");
		puts(cunchu);

		puts("请输入待删除空格的字符串:");
	}
	puts("再见！");

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
		//*fanhui = *(fanhui+1);//string数组中的存储空格的位置被其后一个字符覆盖							//错误，应该被空格后的字符串覆盖
		*fanhui = '\0';//把temp1内容在空格处截断
		
		strcpy(temp2, fanhui+1);//空格后内容拷贝给temp2

		strcat(temp1,temp2);//temp1和temp2拼接

		fanhui = strchr(temp1, ' ');
	}
																																//上面的操作处理的都不是string数组本身
	//string = temp1;  //temp1地址赋给string											
	//puts(string);																										 //确实删除了空格	     为什么没有改变cunchu数组的内容？
	strcpy(string,temp1);																						//因为主函数的puts(cunchu);cunchu指针没有指向temp1数组。 
																															
	return;
}
char* duqv(char* string, int n)
{
	char* fanhui;

	fanhui = fgets(string, n, stdin);

	if (fanhui)//输入不为^Z
	{
		while (*string != '\n' && *string != '\0')
			string++;
		if (*string == '\n')
			*string = '\0';
		else//*string == '\0'时
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
	char* chuli[LIM];//创建内含指针变量的数组
	int shuru_jishu = 0;
	int shuchu_jishu;

	puts("请输入至多10行字符串:");
	while (shuru_jishu < LIM && duqv(input[shuru_jishu], SIZE) != NULL )
	{
		chuli[shuru_jishu] = input[shuru_jishu];//给每个指针赋值
		shuru_jishu++;
	}
	
	int choice;
	showmenu();
	scanf("%d",&choice);
	while (choice!=5)
	{
		switch (choice)
		{ 
		case 1:yuanzifuchuan(chuli, shuru_jishu);//第一个实参：内含指针变量的数组，最多包含10个指针
					break;													//注意：shuru_jishu量上等于元素个数，而不是最大索引值，因为++过了
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
	puts("再见！");

	return 0;
}
void showmenu(void)
{
	puts("*******************************************************************************");
	printf("请输入您选择的功能:(输入功能前对应的数字即可)\n");
	printf("1)打印源字符串列表		2)以ASCII中的顺序打印字符串\n");
	printf("3)按长度递增顺序打印字符串	4)按字符串中第1个单词的长度打印字符串\n");
	puts("5)退出");
	puts("*******************************************************************************");
}
void yuanzifuchuan(char* string[], int n)
{
	puts("源字符串列表:");
	for (int i = 0; i <n; i++)
		puts(string[i]);
}
void ASCII_paixu(char* string[], int n)//n是元素个数
{
	char* string1[LIM];
	for (int i = 0; i < n; i++)
		string1[i] = string[i];//原指针数组拷贝到string1

	char* temp;
	int top, seek;
	for(top=0;top<n-1;top++)//最多指向倒数第二个元素
		for(seek=top+1;seek<n;seek++)
			if (strcmp(string1[top], string1[seek]) > 0)
			{
				temp = string1[top];
				string1[top] = string1[seek];
				string1[seek] = temp;
			}

	puts("处理后字符串列表:");
	for (int i = 0; i < n; i++)
		puts(string1[i]);
}
void length_paixu(char* string[], int n)
{
	char* string1[LIM];
	for (int i = 0; i < n; i++)
		string1[i] = string[i];//原指针数组拷贝到string1

	char* temp;
	int top, seek;
	for (top = 0; top < n - 1; top++)//最多指向倒数第二个元素
		for (seek = top + 1; seek < n; seek++)
			if (strlen(string1[top])> strlen(string1[seek]))
			{
				temp = string1[top];
				string1[top] = string1[seek];
				string1[seek] = temp;
			}

	puts("处理后字符串列表:");
	for (int i = 0; i < n; i++)
		puts(string1[i]);
}
void first_word_length_paixu(char* string[], int n)
{
	char* string1[LIM];
	for (int i = 0; i < n; i++)
		string1[i] = string[i];//原指针数组拷贝到string1

	char* temp;
	int top, seek;

	int dancichangdu[LIM] = {0,0,0};//部分赋初值

	for (int i = 0; i < n; i++)
	{
		for (int j=0; string1[i][j] != ' '; j++)
			dancichangdu[i]++;
	}

	for (top = 0; top < n - 1; top++)//最多指向倒数第二个元素
		for (seek = top + 1; seek < n; seek++)
			//if (strchr(string1[top],' ') > strchr(string1[seek],' '))//失败
			if (dancichangdu[top]>dancichangdu[seek])
			{
				temp = string1[top];
				string1[top] = string1[seek];
				string1[seek] = temp;
			}

	puts("处理后字符串列表:");
	for (int i = 0; i < n; i++)
		puts(string1[i]);
}
char* duqv(char* string, int n)
{
	char* fanhui;

	fanhui = fgets(string, n, stdin);

	if (fanhui)//输入不为^Z
	{
		while (*string != '\n' && *string != '\0')
			string++;
		if (*string == '\n')
			*string = '\0';
		else//*string == '\0'时
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
	
	puts("请输入字符:");		//测试输入：danci1 danci2 DAXIE xiaoxie, haha.       en?   123456
	duqv(input, SIZE);

	printf("读入的单词数:%d\n",dancishu(input)); 
	printf("读入的大写字母数:%d\n", daxiezimushu(input));
	printf("读入的小写字母数:%d\n", xiaoxiezimushu(input));
	printf("读入的标点符号数:%d\n", biaodianfuhaoshu(input));
	printf("读入的数字字符数:%d\n\n", shuzizifushu(input));

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
			count++;// 统计单词
		}
		if (!isalpha(*find) && biaoji)
			biaoji = 0;// 已到单词的末尾
			
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

	if (fanhui)//输入不为^Z（即EOF）
	{
		while (*string != '\n' && *string != '\0')
			string++;
		if (*string == '\n')
			*string = '\0';
		else//*string == '\0'时
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