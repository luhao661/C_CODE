#define _CRT_SECURE_NO_WARNINGS 1
#include "touwenjian.h"
//
#if 1
#endif


//编程练习
//1.
#if 0
int main(void)
{
	printf("touwenjian.h中包含了stdio.h头文件\n");

	return 0;
}
#endif


//2.
#if 0
#define TIAOHE_PINJUNSHU(X,Y)			(	2*(x)*(y)	)/(		 (x)+(y)	)
int main(void)
{
	double x, y,result;

	printf("请输入x和y的值(输入0 0以退出程序)：");
	while (scanf("%lf%lf", &x, &y) == 2 && (x != 0 || y != 0))
	{
		result = TIAOHE_PINJUNSHU(x,y);
		printf("%.2lf和%.2lf的调和平均数是%.2lf\n",x,y,result);
		printf("请输入x和y的值(输入0 0以退出程序)：");	
	}

	return 0;
}
#endif


//3.
#if 0
#include <math.h>
#define DEG_TO_RAD				((4*atan(1))/180)				//角度转化成弧度的公式
typedef struct
{
	double jijin;					//极径
	double jijiao;					//极角(角度制)
}JIZUOBIAO;
typedef struct
{
	double x;
	double y;
}ZHIJIAOZUOBIAO;

ZHIJIAOZUOBIAO zhuanhuan(JIZUOBIAO jizuobiao);

int main(void)
{
	JIZUOBIAO input;																							//结构1
	ZHIJIAOZUOBIAO result;																				//结构2

	puts("请输入极坐标下向量的模和角度(单位：度)的值(输入q以退出)：");
	while (scanf("%lf%lf", &input.jijin, &input.jijiao) == 2)
	{
		result = zhuanhuan(input);
		printf("x坐标：%.2lf		y坐标：%.2lf\n", result.x, result.y);
		puts("请输入极坐标下向量的模和角度(单位：度)的值(输入q以退出)：");
	}

	return 0;
}
ZHIJIAOZUOBIAO zhuanhuan(JIZUOBIAO jizuobiao)									//结构3
{
	ZHIJIAOZUOBIAO temp;																				//结构4
	temp.x = jizuobiao.jijin * cos(jizuobiao.jijiao*DEG_TO_RAD);
	temp.y = jizuobiao.jijin * sin(jizuobiao.jijiao * DEG_TO_RAD);

	return temp;
}
#endif


//4.
#if 0
#include <time.h>
void delay(double time);
int main(void)
{
	double time;
	printf("请输入要延时的时间(单位：秒)：");
	scanf("%lf",&time);
	delay(time);
	printf("\n延时已完成！\n");

	return 0;
}
void delay(double time)
{
	double tick1 =(double) clock();
	int i;

	while (((double)clock() - tick1)/ CLOCKS_PER_SEC <time)//CLOCKS_PER_SEC：每秒钟处理器时钟滴答次数(每秒钟处理器的时钟数量)
	{
		for (i = 0; i < 0xfff; i++)
			continue;
	}
}
//法二：
#if 0
void delay(double a)
{
	double s = (double)clock();
	double f = 0;
	while ((a - f) > 0.00000001)
	{
		f = ((double)clock() - s) / CLOCKS_PER_SEC;
	}
	printf("%.10lf s have passed\n", f);
}
//https ://blog.csdn.net/asdgyy/article/details/82973533
#endif
#endif


//5.
#if 1
#include <stdlib.h>//srand(),qsort() 
#include <time.h>	  //time()
#include <stdlib.h>//malloc()
#define SIZE 6
void dayin(int* p, int num, int cishu);
int main(void)
{
	int shuzu[SIZE] = {5,10,15,20,25,30};

	int cishu;
	printf("请输入选取次数(1~6)：");
	while (scanf("%d", &cishu)==1 )
	{
		if (cishu < 1 || cishu>6)
		{
			printf("错误！请输入选取次数(1~6)：");
			continue;
		}
		srand((int)time(0));
		dayin(shuzu, SIZE, cishu);
	}

	return 0;
}
void dayin(int* p, int num, int cishu)
{
	int* temp = (int*)malloc(cishu * sizeof(int));		//用动态内存分配，创建temp[cishu]

step1:	for (int index = 0; index < cishu; index++)
	{
		*(temp + index) =( (int)rand() % num );//索引值控制在1至5
		printf("%3d", *(temp + index));
	}

	putchar('\n');

	int index1,index2,biaoji=0;
	for ( index1 = 0; index1 < cishu; index1++)					//遍历数组中的元素，若有重复值，标记置1
	{
		for ( index2 = index1+1; index2 < cishu; index2++)
			if (*(temp + index1) == *(temp + index2))
				biaoji=1;
	}

	if (biaoji)
		goto step1;

	printf("索引值的最终结果：\n");
	for (int index = 0; index < cishu; index++)
	{
		printf("%3d", *(temp + index));
	}
	putchar('\n');

	printf("从数组中选择的数值为：\n");
	for (int index = 0; index < cishu; index++)
	{
		printf("%3d", *(p+ * (temp + index)));
	}
	putchar('\n');

	free(temp);
}
#endif