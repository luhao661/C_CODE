//P472
//验证：如果在一个模块内x未被初始化
//那么链接器会选择另一个模块中定义的强符号
//链接mokuai1.c
#if 0
#include <stdio.h>

void f(void);

int x=15213;

int main(void)
{
	f();

	printf("x=%d\n",x);

	return 0;
}
#endif


//P473
//验证：如果在两个模块内x都未被初始化
//那么链接器会任意选择一个弱符号
//链接mokuai1.c
#if 0
#include <stdio.h>

void f(void);

int x;

int main(void)
{
	f();

	printf("x=%d\n", x);

	return 0;
}
#endif


//P473 重复的符号定义还有不同的类型
//链接mokuai2.c
#if 1
#include <stdio.h>

void f(void);

int y = 15212;
int x = 15213;

int main(void)
{
	f();

	printf("x=0x%x    y=0x%x \n",x,y);

	return 0;
}
#endif