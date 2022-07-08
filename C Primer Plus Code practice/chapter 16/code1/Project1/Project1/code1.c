#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//
#if 1
#endif


//编译器的作用——在预处理之前对程序进行翻译，即1.字符映射到源字符集2.删除反斜杠+[Enter]的实例3.把文本划分成三类序列
#if 0
int/*这看起来不是一个空格*/ceshi;
int main(void)
{
	printf("这是一个\
长文本");

	return 0;
}
#endif


//#define预处理指令的用法
#if 1
#define TWO 2
#define FOUR TWO*TWO
#define DAYIN1 printf("X的值为%d\n",X)
#define DAYIN2 "X的值是%d\n"
#define MINYAN "consistency is the last refuge of the unimag\
native"																													//反斜杠+[Enter]把该定义延伸到下一行


int main(void)
{
	int X = TWO;
	DAYIN1;

	X = FOUR;
	printf(DAYIN2,X);

	printf("%s\n",MINYAN);
	printf("TWO:MINYAN\n");

	return 0;
}
#endif
