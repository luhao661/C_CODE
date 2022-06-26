#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
//
#if 1
#endif


//复习题
//3-5.
#if 0
typedef struct //月份					//声明一个省略了标记的结构，并用YUEFEN类型名来命名该结构类型
{
	char yuefen_min[10];
	char min_suoxie[4];
	int yuefen_tianshu;
	int yuefen_hao;//月份号
} YUEFEN;

YUEFEN yinian[12] =			  //声明一个使用YUEFEN结构布局的结构数组yinian[12]
{
	{
		"January",
		"Jan",//一月写为January，可缩写为Jan。二月写为February，可缩写为Feb。三月写为March，可缩写为Mar。四月写为April，可缩写为Apr。五月写为May，没有缩略形式。六月写为June，可缩写为Jun。
		31,	////七月写为July，可缩写为Jul。八月写为August，可缩写为Aug。九月写为September，可缩写为Sept。十月写为October，可缩写为Oct。十一月写为November，可缩写为Nov。12月写为December，可缩写为Dec。
		1			
	},
	{
		"February",
		"Feb",
		29,
		2
	},
	{
		"March",
		"Mar",
		31,
		3
	},
	{
		"April",
		"Apr",
		30,
		4
	},
	{
		"May",
		"May",
		31,
		5
	},
	{
		"June",
		"Jun",
		30,
		6
	},
	{
		"July",
		"Jul",
		31,
		7
	},
	{
		"August",
		"Aug",
		31,
		8
	},
	{
		"September",
		"Sept",
		30,
		9
	},
	{
		"October",
		"Oct",
		31,
		10
	},
	{
		"November",
		"Nov",
		30,
		11
	},
	{
		"December",
		"Dec",
		31,
		12
	},
};
int jisuantianshu(YUEFEN * yuefen,int yuefenhao);//计算一年中到该月的天数

int main(void)
{
	int yuefenhao;
	puts("请输入您选择的月份号：");

	scanf("%d",&yuefenhao);
	int tianshu=jisuantianshu(yinian, yuefenhao);
	printf("一年中到该月的天数是：%d\n",tianshu);

	return 0;
}
int jisuantianshu(YUEFEN * yuefen, int yuefenhao)
{
	int sum = 0;

	for (int i = 0; i < yuefenhao - 1; i++)
	{
		sum += (yuefen+i)->yuefen_tianshu;
	}

	return sum;
}
#endif


//6.
#if 0
typedef struct lens
{
	float foclen;
	float fstop;
	char brand[30];
}LENS;

int main(void)
{
	//6.a.
#if 0
	LENS lens_shuzu[10] =
	{
		{},
		{},
		{
			500,
			2.0,
			"Remarkata"
		},
	};
#endif

	//lens_shuzu[2] =					//这样不行，P243：除初始化外，不允许使用花括号的形式给数组赋值
	//{
	//500,
	//2.0,
	//"Remarkata"
	//};

		//6.b.
#if 1
	LENS lens_shuzu[10] =
	{			
		lens_shuzu[2].foclen=500,
			2.0,
			"Remarkata"		
	};
#endif

	return 0;
}
#endif


//7.
#if 0
#include "starfolk.h"
void show(struct bem *p);
int main(void)
{
	struct bem *p;
	p = &deb;

	show(p);

	printf("\n完成！\n");

	return 0;
}
void show(struct bem* p)
{
	printf("%s %s is a %d-limbed %s",p->title.first,p->title.last,p->limbs,p->type);
}
#endif


//8.
#if 0
struct fullname
{
	char fname[20];
	char lname[20];
};
struct bard
{
	struct fullname name;
	int born;
	int died;
};
struct bard willie;
struct bard* pt=&willie;

int main(void)
{
	int born;
	scanf("%d",&willie.born);
	scanf("%d",&pt->born);
	scanf("%s", &willie.name.lname);
	scanf("%s", &pt->name.lname);
	scanf("%s", &pt->name.fname);


	char ch;
	ch = willie.name.fname[2];

	int count = 0;
	char* p1 = pt->name.fname;//赋值为数组首元素的地址
	char* p2 = pt->name.lname;

	while ( *p1!= '\0')
	{
		if(isalpha(*p1))
		count++;

		p1++;
	}
	while (*p2 != '\0')
	{
		if (isalpha(*p2))
		count++;

		p2++;
	}
	printf("名和姓共有字母%d个\n",count);

	return 0;
}
#endif


//9.
#if 0
struct car
{
	char qichemin[30];
	float mali;
	float mpg;
	float zhouju;
	int chuchang;
};
#endif


//10.
#if 0
struct gas
{
	float distance;
	float gals;
	float mpg;
};

void jisuan_mpg1(struct gas* distance, struct gas* gals, struct gas* mpg);
float jisuan_mpg2(struct gas *distance, struct gas* gals);


void jisuan_mpg1(struct gas* distance, struct gas* gals, struct gas* mpg)
{
	*mpg = *distance / (*gals);
}
float jisuan_mpg2(struct gas* distance, struct gas* gals)
{
	float mpg;
	mpg = ( * distance )/ (*gals);
	return mpg;
}
#endif


//11.
#if 1
enum choices  {no,yes,maybe};   //中间不用'='号
#endif


//12.
#if 1
char* (*function_p)(char *p,char ch);
#endif