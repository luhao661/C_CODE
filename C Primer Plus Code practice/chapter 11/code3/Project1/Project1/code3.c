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
		if (*string == '\n')																							//瑕疵：无法体现输入\n
			*string = '\0';
		else//*string == '\0'时
			while (getchar() != '\n')
				continue;
	}
	return fanhui;
}
#endif
//1.改				//思路：用getchar()自定义一个读取数据并保存至数组中的函数。
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

	//puts(arr);//不能用puts()，因为没有\0输入，程序会跑飞。

	return 0;
}
//void get_char(char* ar, char* end)
//{
//	for (; ar < end; ar++)
//		*ar = getchar();
//}
//或
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
//法二：getchar(),putchar();
#if 0		
int get_char(char *string,int n);
int main(void)
{
	char cunchu[10];
	puts("请输入10个字符:（输入空格、制表符或换行符时停止输入）");
	int length=get_char(cunchu,10);

	puts("您输入的内容是:");
	for (int i=0; i <= length; i++)
		putchar(cunchu[i]);

	return 0;
}
int get_char(char* string, int n)//n是元素个数
{
	int i = 0;
	while (i < n)//i是索引
	{
		*(string+i )= getchar();//当输入abc\n    时i=3
	

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
																																	//瑕疵：输入\n再输入单词的情况仍未处理好
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
// 以上的程序当输入'\n'时必须要将其转化为'\0'，所以存在输入\n再输入单词的情况不好处理
//3.改
#if 0
#include <ctype.h>
#include <string.h>
#define SIZE 20
void duqv(char* string, int n);//读取
int main(void)
{
	char cunchu[SIZE];
	puts("请输入字符:(输入Enter结束)");

	duqv(cunchu, SIZE);

	puts("您输入的单词是:");
	//puts(cunchu);
	printf("%s",cunchu);

	return 0;
}
void duqv(char* string, int n)
{
	char temp[SIZE];
	char* temp_p = temp;

	fgets(temp,SIZE,stdin);																						//行缓冲输入，输入\n时，temp数组就完成了输入。
																																//无法实现连续输入\n再输入单词的情况。
	while (isalpha(*temp_p) == 0)
	{	
		if (temp_p >= temp+ strlen(temp))//输入\n时弹出循环
			break;

		temp_p++;
	}
	while (isalpha(*temp_p))
		*string++ = *temp_p++;

	*string = '\0';
}
#endif
//使用getchar()，可以实现连续输入\n再输入单词的情况。
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
int get_word(char* string)//检测输入的第一个单词
{
	int length = 0;//表示元素个数
	_Bool inword = 0;

	while (*string = getchar())
	{
		if (isspace(*string) && !inword)                               //若输入          空格 (SPC)
																							//'\t'	    0x09	水平制表符(TAB)
																							//'\n'	0x0a	换行符(LF)
																							//'\v'	0x0b	垂直制表符(VT)
																							//'\f' 	0x0c    换页(FF)
																							//'\r'	    0x0d    回车(CR)
			continue;																	//继续读取输入
		else if (!isspace(*string) && !inword)//当输入字母
			inword = 1;
		else if (isspace(*string) && inword)//当再次输入空白字符
			break;

		length++;//单词长度加一		
		string++;//指向数组后面元素的位置

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
//4.改
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
	int length = 0;//表示元素个数
	_Bool inword = 0;

	//while (*string = getchar())
	//{
	//	if (isspace(*string) && !inword)                               //若输入          空格 (SPC)
	//																						//'\t'	    0x09	水平制表符(TAB)
	//																						//'\n'	0x0a	换行符(LF)
	//																						//'\v'	0x0b	垂直制表符(VT)
	//																						//'\f' 	0x0c    换页(FF)
	//																						//'\r'	    0x0d    回车(CR)
	//		continue;																	//继续读取输入
	//	else if (!isspace(*string) && !inword)//当输入字母
	//		inword = 1;
	//	else if (isspace(*string) && inword)//当再次输入空白字符
	//		break;

	//	length++;
	//	string++;//指向数组后面元素的位置

	//	if (length == n)
	//		break;
	//}
	//或
	char* temp = string;

		while (temp<string+n)
		{
			*temp = getchar();
			if (isspace(*temp) && !inword)                               //若输入          空格 (SPC)
																								//'\t'	    0x09	水平制表符(TAB)
																								//'\n'	0x0a	换行符(LF)
																								//'\v'	0x0b	垂直制表符(VT)
																								//'\f' 	0x0c    换页(FF)
																								//'\r'	    0x0d    回车(CR)
				continue;																	//继续读取输入
			else if (!isspace(*temp) && !inword)//当输入字母
				inword = 1;
			else if (isspace(*temp) && inword)//当再次输入空白字符
				break;

			length++;
			temp++;//指向数组后面元素的位置		
		}

	return length;
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
		{																	//法二：if(find=='\0')
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

	//或
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
	
	while (duqv(temp, 80) && temp[0] != '\0')//输入^Z或空行，停止程序
	{
	 fanhui=mystrncpy(cunchu, temp, SIZE);
	 *(cunchu + SIZE-1) = '\0';//第10个元素赋'\0'

	 puts("您输入的内容是:");
	 puts(cunchu);
	 puts(fanhui);

	 puts("请输入待拷贝的字符串:");
	}
	puts("再见！");

	return 0;
}
char* mystrncpy(char* string1, char* string2, int n)//n=10，n是元素个数					//注：源字符长度大于n，strncpy不会自动添加\0
{
	char* fanhui=string1;
	int i;

	for ( i = 0; i < n-1; i++)
	{
		*(string1+i) = *(string2+i);//拷贝到第9个元素为止
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
//8.改正																//8.原思路：设两个标记，每个标记一个字符匹配，所以只能支持两个字符检测。
#if 0																//新思路：标记改为计数器count，只有count的值等于检测字符串的长度，才返回字符串首地址
#include<string.h>
char* string_in(char* string1, char* string2);
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
			puts("主串中以子串的首元素开头的字符串为:");
			puts(fanhui);
		}
		else
			puts("未找到！");

		puts("请输入待查找的字符串:");
	}
	puts("再见！");

	return 0;
}
char* string_in(char* string1, char* string2)																                       
{
	
	int count = 0;//匹配度计数
	int length = strlen(string2);

	while (count < length&&*string1!='\0')//若匹配未完成，且没有轮到string1的末尾字符后的第一个位置。
	{
		if (*(string1 + count) == *(string2 + count))//若s1和s2的第一个字符匹配，则计数值加一。
			count++;
		else
		{
			count = 0;
			string1++;//若不匹配，则轮到s1的第二个字符与s2的第一个字符检测。
		}
	}
	if (count == length)
		return string1;//返回主串中子串的首地址。

	else
	return NULL;
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
#endif//法一：使用临时字符串存储删除空格后的字符串，再找到\0，拼接两个字符串
//10.法二：使用多个指针，调整原字符串
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
	char* finish = string;//定义一个处理好后的字符串的指针finish
	int count = 0;//记录删除的空格数

	while (*string != '\0')//若指向原字符串的指针没处理到最后的元素后的第一个位置
	{
		if (*string != ' ')
			*finish++ = *string++;
		else
		{
			string++;//若检测到空格字符，则原字符串指针后移一位。
			count++;
		}
	}

	/*while (count--)
		*finish++ = '\0';*/   //最后，在处理好后的字符串后补上\0。不写的话，因为虽然指向原字符串的指针没有向finish赋\0，但是
										//原字符串后的\0，仍然存在。但是：请输入待删除空格的字符串:
																								 //a b c d e f
																								//	处理好后的字符串 :
																								//abcdefd e f
																								//	请输入待删除空格的字符串 :
										//出现此情况的原因：string已经指向了原字符串的\0，程序终止了。后面的d e f是原字符串的残留内容

	while (count--)
		*finish++ = '\0';//能清除剩余字符。

	return ;
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

	//法一：
	//for (int i = 0; i < n; i++)
	//{
	//	for (int j=0; string1[i][j] != ' '; j++)
	//		dancichangdu[i]++;
	//}

	//法二：
	for (int i = 0; i < n; i++)
	{
		dancichangdu[i] = get_word_length(string1[i]);
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
int get_word_length(char* string)//计算单词长度的函数
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
			count++;// 统计单词个数
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
#if 0
#include <stdlib.h>
#include <string.h>
int main(int argc,char**argv)
{	
	int i;
	
	char cunchu[20] = "a";
	char* cunchudezhizhen=cunchu;//指向cunchu

	int length = strlen(argv[1]);
	for(int i=0;i<length;i++)
	*(cunchudezhizhen+i)= *(argv[1]+i);			//argv[1]既是字符串数组的名字也是字符串数组的指针。

	puts(cunchu);
	puts(argv[1]);//两个输出显示效果相同
	putchar('\n');

	//for (i = argc-1; i - 1 >= 1; i--)//4个字符串，第一个作为程序名，实际上只有3个字符串，argc=4。
	//strcat(argv[i],argv[i-1]);
	// 

	//strcat(argv[3],argv[2]);
	//strcat(argv[3],argv[1]);

	//puts(argv[3]);																															 //效果不好，且程序打印完后会崩溃

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

	double dishu;//底数
	int zhishu;//指数
	double jieguo=1.0;

	dishu = atof(argv[1]);
	zhishu = atoi(argv[2]);

	for (int i = 1; i <= zhishu; i++)
		jieguo *= dishu;

	printf("%.2lf的%d次方等于%.2lf",dishu,zhishu,jieguo);

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
	puts("请输入字符:");
	duqv(cunchu,80);

	int fanhui;
	fanhui = atoi(cunchu);
	printf("atoi()处理好后，数组中的字符为:%s\n",cunchu);
	printf("atoi()的返回值是%d\n",fanhui);

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
			temp[i] = *find;																			//错误：虽然temp中的字符串变成了字符，但还不是数值。
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
//15.改正
#if 0
#include <string.h>
#include <ctype.h>
int atoi(char* string);
char* duqv(char* string, int n);
int main(void)
{

	char cunchu[80];
	puts("请输入字符:");
	duqv(cunchu, 80);//用scanf()效果相同

	printf("atoi()处理好后，输入的数字为%d\n",  atoi(cunchu));

	return 0;
}
int atoi(char* string)
{
	int result = 0;
	int weiquan = 1;//个位的权是1，十位的权是10
	int length = strlen(string);

	for (int i = length; i > 0; i--)
	{
		if (isdigit(*(string + i - 1)) == 0)//先判断末位是否为数字字符
		{
			printf("存在非数字字符！");
			return 0;
		}
		result += (*(string + i - 1)- '0') * weiquan;//两个字符的ASCII码相减，能得到数字！

		weiquan *= 10;
	}

	return result;
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
	else if (argc == 1 || !strcmp(argv[1], "-p"))//没输入第二个字符串，或者输入了第二个字符串且为-P时。
		print();
	else if (!strcmp(argv[1], "-u"))//比较后相同，则返回0，取非后为1。
		to_up();
	else if (!strcmp(argv[1], "-l"))
		to_low();
	putchar('\n');

	return 0;
}
void print(void)
{
	char ch;

	while ((ch = getchar()) != EOF)   //文件导入
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