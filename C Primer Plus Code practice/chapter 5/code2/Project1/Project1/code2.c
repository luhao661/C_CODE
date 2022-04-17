#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//++的前缀和后缀的区别
//int main(void)
//{
//	int a, b;
//	a = b = 1;
//	int a_post, pre_b;
//
//	a_post = a++;
//	pre_b = ++b;
//	printf("a   a_post   b    pre_b\n");
//	printf("%1d%5d%8d%5d\n",a,a_post,b,pre_b);
//
//	return 0;
//}


//递减运算符
int main(void)
{
	int count = 101;
	while (--count > 0)
	{
		printf("现在有%d个\n",count);
		printf("拿走1个,\n");
		printf("还剩%d个\n\n",count-1);
			
	}

		return 0;
}