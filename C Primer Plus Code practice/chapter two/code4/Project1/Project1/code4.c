#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//第一题打印姓名
/*int main(void)
{
	printf("严路昊");
	printf("严\n");
	printf("路昊");
	printf("严");
	printf("路昊");
}*/
#define 姓 "严"
#define 名  "路昊"
int main (void)
{

printf("%s%s",姓,名);
return 0;
}


//打印年龄转化为天数
//int main(void)
//{
//	int a, b;//年龄和天数
//	a = 23;
//	printf("我的年龄是%d岁, 此数相当于%d天。",a , b=a*365);
//}

//第4题
//void jolly(void);
//void deny(void);
//int main(void)
//{
//	//用while              
//	int i = 1;
//	while(i < 4)
//	{
//		i++;
//		jolly();
//	}
//	deny();
//
//	/*用if */
//	/*int i = 1;
//	if (i < 4)
//	{
//		i++;
//		jolly();
//		goto start ;
//
//	}
//	else  
//		deny();*/                        //if是判断，while才是循环
//
//
//	return 0;
//}       
//
//void jolly(void)
//{
//	printf("For he's a jolly good fellow!\n");
//}
//void deny(void)
//{
//	printf("which nobody can deny!");
//}


//第五题
//void br();
//void ic();
//int main(void)
//{
//	br();
//	printf(", ");
//	ic();
//	printf("\n");
//	ic();
//	printf("\n");
//	br();
//}
//void br()
//{
//	printf("Brazil, Russia");
//}
//void ic()
//{
//	printf("India, China");
//}

//第六题
//int main(void)
//{
//	int toes = 10;
//	int erbei, pinfang;
//	printf("toes=%d, 二倍为%d, 平方为%d。", toes, erbei=2*toes, pinfang=toes*toes);
//
//}

//第七题
//void smile(void);
//int main(void)
//{
//	smile(); smile(); smile();
//	printf("\n");
//	smile(); smile();
//	printf("\n");
//	smile();
//}
//void smile (void)
//{
//	printf("Smile!");
//}

//第八题
//void one_three(void);
//void two(void);
//int main(void)
//{
//	printf("starting now:\n");
//	one_three();
//	printf("done!");
//}
//void one_three(void)
//{
//	printf("one\n");
//	two();
//	printf("three\n");
//}
//void two(void)
//{
//	printf("two\n");
//}