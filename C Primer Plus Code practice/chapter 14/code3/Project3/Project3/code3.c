#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>//malloc(), free()
#include <ctype.h>
#include <stdlib.h>//atoi()
//
#if 1
#endif


//编程练习
//1.
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
char* s_gets(char* string, int n);
int jisuantianshu( YUEFEN * yinian,const char *yuefenmin);//计算一年中到该月的天数

int main(void)
{
	char yuefenmin[10];
	puts("请输入您选择的月份名(如January等)：");

	s_gets(yuefenmin,10);	
	
	int tianshu = jisuantianshu(yinian, yuefenmin);
	printf("一年中到该月的天数是：%d\n", tianshu);

	return 0;
}
int jisuantianshu(YUEFEN* yinian, const char* yuefenmin)//声明一个指向YUEFEN结构布局的结构指针yinian，指针指向yinian结构
{
	int j=-1;

	//for (int i = 0; i < 12; i++)
	//{

	//	if (		strcmp(	(yinian + i)->yuefen_min, yuefenmin	) == 0		)
	//	{
	//		j = i;//j存储的是遍历寻到的第x个结构
	//		break;
	//	}
	//}

	//或这样写：
	char* p;

	for (int i = 0; i < 12; i++)
	{
		p = (yinian + i)->yuefen_min;
		if (strcmp(p, yuefenmin) == 0)
		{
			j = i;//		j存储的是遍历寻到的第x个结构
			break;
		}
	}


	if (j== -1)
	{
		puts("未找到月份！");
		exit(1);
	}

	int sum = 0;
	for (int i = 0; i < j; i++)
	{
		sum += (yinian+ i)->yuefen_tianshu;
	}

	return sum;
}
char* s_gets(char* string, int n)
{
	char* fanhui;
	char* find;

	fanhui = fgets(string, n, stdin);
	if (fanhui)
	{
		find = strchr(string, '\n');
		if (find)
			*find = '\0';
		else
			while (getchar() != '\n')
				continue;
	}
	return fanhui;
}
#endif


//2.
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
int jisuantianshu(YUEFEN* yinian, const char* yuefen,int ri);//计算一年中到该月的天数
char* s_gets(char* string, int n);
void eatline(void);

int main(void)
{
	int nian;
	printf("请输入年分：");
	scanf("%d",&nian);
	eatline();

	char yuefen[20];
	printf("请输入月份（月份号、月份名或月份名缩写）：");
	s_gets(yuefen,20);
	//eatline();此处不需要

	int ri;
	printf("请输入日：");
	scanf("%d", &ri);

	int tianshu = jisuantianshu(yinian, yuefen,ri);
	printf("一年中到该月的天数是：%d\n", tianshu);

	return 0;
}
int jisuantianshu(YUEFEN* yinian, const char* yuefen,int ri)//声明一个指向YUEFEN结构布局的结构指针yinian，指针指向yinian结构
{
	int j = -1;

	char* p;

	for (int i = 0; i < 12; i++)
	{
		p = (yinian + i)->yuefen_min;
		if ( (yinian + i)->yuefen_hao==atoi(yuefen) ||strcmp(p, yuefen) == 0|| strcmp((yinian + i)->min_suoxie, yuefen) == 0)
		{
			j = i;//		j存储的是遍历寻到的第x个结构
			break;
		}
	}

	if (j == -1)
	{
		puts("未找到月份！");
		exit(1);
	}

	int sum = 0;
	for (int i = 0; i < j; i++)
	{
		sum += (yinian + i)->yuefen_tianshu;
	}

	return (sum+ri);
}
char* s_gets(char* string, int n)
{
	char* fanhui;
	char* find;

	fanhui = fgets(string, n, stdin);
	if (fanhui)
	{
		find = strchr(string, '\n');
		if (find)
			*find = '\0';
		else
			while (getchar() != '\n')
				continue;
	}
	return fanhui;
}
void eatline(void)
{
	while (getchar() != '\n')
		continue;
}
#endif


//3.
#if 0
#define MAX_SHUMING 41 //最大书名长度
#define MAX_ZUOZHE 41 //最大作者姓名长度
#define MAX_SHULIANG 100//最大书籍数量

struct book												//声明一个标记为book的结构
{
	char shuming[MAX_SHUMING];
	char zuozhe[MAX_ZUOZHE];
	float value;
};

char* s_gets(char* string, int n);
void shumin_paixu(struct book *,int num);
void jiage_paixu(struct book*, int num);

int main(void)
{
	struct book library[MAX_SHULIANG];//声明一个使用book结构布局的结构变量数组library[100]，其中的每个元素都是一个结构
	int count = 0;
	int index;

	printf("请输入书名(在新行输入^Z或在新行输入[Enter]以结束)：\n");
	while (count < MAX_SHULIANG && s_gets(library[count].shuming, MAX_SHUMING) != NULL && library[count].shuming[0] != '\0')
	{
		puts("请输入作者姓名：");
		s_gets(library[count].zuozhe, MAX_ZUOZHE);

		puts("请输入售价：");
		scanf("%f", &library[count].value);
		while (getchar() != '\n')//消除scanf()执行后缓冲区留下的\n
			continue;

		count++;

		printf("请输入书名(在新行输入^Z或在新行输入[Enter]以结束)：\n");
	}

	printf("以下是图书目录：\n");
	for (index = 0; index < count; index++)//count 在数值上等于书籍的数量
	{
		printf("%s:《%s》（￥%.2f）\n", library[index].zuozhe, library[index].shuming, library[index].value);
	}


	struct book library_kaobei[MAX_SHULIANG];
	for (index = 0; index < count; index++)
	{
		library_kaobei[index] = library[index];//拷贝结构数组的每个元素
	}
	shumin_paixu(library_kaobei,count);


	for (index = 0; index < count; index++)
	{
		library_kaobei[index] = library[index];
	}
	jiage_paixu(library_kaobei, count);

	return 0;
}																				//*****************************************注********************************************
void shumin_paixu(struct book *library_kaobei,int num)//结构可以作为实参传递，但是数组只能由指针传递。所以结构数组也只能由指针传递。
{
	struct book  temp;
	int seek1, seek2;

	for (seek1 = 0; seek1 < num - 1; seek1++)//外层循环指明正在处理的元素
	{
		for (seek2 = seek1 + 1; seek2 < num; seek2++)//内层循环找出应存储在该元素的值
		{
			if (strcmp(		(library_kaobei+seek1)->shuming, (library_kaobei + seek2)->shuming		) > 0)//若前一串字符串的首字母排序序列位于后一串字符串的首字母后面
			{
			/*	temp = (library_kaobei + seek1);														//前面改为	struct book * temp;	
				(library_kaobei + seek1) = (library_kaobei + seek2);						//此处拷贝地址失败，***地址不是个对象***
				(library_kaobei + seek1) = temp;*/

				temp = *(library_kaobei+seek1);						   //
				library_kaobei[ seek1] =library_kaobei[seek2];//*******************************两种写法**********************************
				library_kaobei[ seek2] = temp;

			}
		}
	}

	printf("以下是按书名的字母排序的图书目录：\n");
	for (int index = 0; index < num; index++)//num 在数值上等于书籍的数量
	{
		printf("%s:《%s》（￥%.2f）\n", (* (library_kaobei + index)).zuozhe, (library_kaobei+index)->shuming, library_kaobei[index].value);
	}															//*****************************************三种表示方法****************************************************
}
void jiage_paixu(struct book* library_kaobei, int num)
{
	struct book  temp;
	int seek1, seek2;

	for (seek1 = 0; seek1 < num - 1; seek1++)//外层循环指明正在处理的元素
	{
		for (seek2 = seek1 + 1; seek2 < num; seek2++)//内层循环找出应存储在该元素的值
		{
			if (		(library_kaobei + seek1)->value	-	 (library_kaobei + seek2)->value > 0			)
			{				
				temp = *(library_kaobei + seek1);
				library_kaobei[seek1] = library_kaobei[seek2];
				library_kaobei[seek2] = temp;
			}
		}
	}

	printf("以下是按价格排序的图书目录：\n");
	for (int index = 0; index < num; index++)//num 在数值上等于书籍的数量
	{
		printf("%s:《%s》（￥%.2f）\n", (*(library_kaobei + index)).zuozhe, (library_kaobei + index)->shuming, library_kaobei[index].value);
	}
}
char* s_gets(char* string, int n)
{
	char* fanhui;
	char* find;

	fanhui = fgets(string, n, stdin);
	if (fanhui)
	{
		find = strchr(string, '\n');
		if (find)
			*find = '\0';
		else
			while (getchar() != '\n')
				continue;
	}
	return fanhui;
}
#endif


//4.a
#if 0
typedef struct
{
	char min[20];
	char zhongjianmin[20];
	char xin[20];
}NAME;//名字										//**********注：此结构若置于XINXI结构之下，则后面函数访问不了name*************************
typedef struct
{
	long shebaohao;
	NAME name;
}XINXI;//信息

void dayin(XINXI * dayinxinxi);

int main(void)
{
	XINXI xinxi[5] =
	{
		{
		111111111,
		{"aaa", "aaa", "aaa"}
		},
		{
		222222222,
		{"bbb", "", "bbb"}//没有中间名
		},
		{
		333333333,
		{"ccc", "ccc", "ccc"}
		},
		{
		444444444,
		{"ddd", "", "ddd"}
		},
		{
		555555555,
		{"eee", "eee", "eee"}
		},
	};

	dayin(xinxi);//传递结构的地址，即&xinxi[0]

	return 0;
}
void dayin(XINXI* dayinxinxi)
{
	for (int i = 0; i < 5; i++)
	{
		if (strlen((dayinxinxi + i)->name.zhongjianmin) != 0)
		{
			printf("%s, %s %c.", (dayinxinxi + i)->name.min, (dayinxinxi + i)->name.xin, (dayinxinxi + i)->name.zhongjianmin[0]);
			printf("--%ld\n", dayinxinxi->shebaohao);
		}
		else
		{
			printf("%s, %s   ", (dayinxinxi + i)->name.min, (dayinxinxi + i)->name.xin);
			printf("--%ld\n", dayinxinxi->shebaohao);
		}
	}
}
#endif
//4.b
#if 0
typedef struct
{
	char min[20];
	char zhongjianmin[20];
	char xin[20];
}NAME;//名字										//**********注：此结构若置于XINXI结构之下，则后面函数访问不了name*************************
typedef struct
{
	long shebaohao;
	NAME name;
}XINXI;//信息

void dayin(XINXI dayinxinxi);

int main(void)
{
	XINXI xinxi[5] =
	{
		{
		111111111,
		{"aaa", "aaa", "aaa"}
		},
		{
		222222222,
		{"bbb", "", "bbb"}//没有中间名
		},
		{
		333333333,
		{"ccc", "ccc", "ccc"}
		},
		{
		444444444,
		{"ddd", "", "ddd"}
		},
		{
		555555555,
		{"eee", "eee", "eee"}
		},
	};

	for(int i=0;i<5;i++)
	dayin(xinxi[i]);//传递结构的值

	return 0;
}
void dayin(XINXI dayinxinxi)
{
	if (strlen(dayinxinxi.name.zhongjianmin) != 0)
	{
		printf("%s, %s %c.",dayinxinxi.name.min, dayinxinxi.name.xin, dayinxinxi.name.zhongjianmin[0]);
		printf("--%ld\n", dayinxinxi.shebaohao);
	}
	else
	{
		printf("%s, %s   ", dayinxinxi.name.min, dayinxinxi.name.xin);
		printf("--%ld\n", dayinxinxi.shebaohao);
	}
}
#endif


//5.
#if 1
struct name
{
	char min[20];
	char xin[20];
};
struct student
{
	struct name xinmin;
	float grade[20];
	float average;
};
#define CSIZE 4
void addmessage(struct student *xueshen, int num);
void average(struct student* xueshen, int num);
void dayinjiegou(struct student* xueshen, int num);
void banji_average(struct student* xueshen, int num);

int main(void)
{
	struct student students[CSIZE] =
	{
		{
		.xinmin = {"Aaa","aaa"},
		},
		{
		.xinmin.min="Bbb",//***********************************************三种初始化方法*******************************************
		"bbb"
		},
		{
			{"Ccc","ccc"},
		},
		{
			{"Ddd","ddd"},
		},	
	};
	//printf("%s %s ",students[2].xinmin.min, students[2].xinmin.xin);

	addmessage(students,CSIZE);
	average(students, CSIZE);
	dayinjiegou(students,CSIZE);
	banji_average(students, CSIZE);

	return 0;
}
void addmessage(struct student *xueshen, int num)
{
	char xin[20];
	char min[20];
	int count = 0;

	printf("请输入学生的姓名(名和姓之间用空格分开)(输入0 0以退出)：");
	//scanf("%s",xin);
	//scanf("%s", min);
	//或写成：
	//scanf("%s%s", min,xin);

	while (count<num&&scanf("%s%s", min, xin) == 2&&xin[0]!='0'&&min[0]!='0')
	{
		int j = -1;
		for (int i = 0; i < num; i++)
		{
			if (strcmp((xueshen + i)->xinmin.min, min) == 0 && strcmp((xueshen + i)->xinmin.xin, xin) == 0)
			{
				j = i;
				break;
			}
		}
		if (j == -1)
		{
			fprintf(stderr, "输入有误！请重新输入！");
			continue;
		}

		printf("请输入该学生的3个分数：");
		scanf("%f%f%f",&xueshen->grade[0],&xueshen->grade[1],&xueshen->grade[2]);

		count++;
		if (count == num)
			break;
		printf("请继续输入学生的姓名(名和姓之间用空格分开)(输入0 0以退出)：");
	}

	/*printf("%s%s",xin,min);
	printf("%f   %f    %f", xueshen->grade[0], xueshen->grade[1], xueshen->grade[2]);*/     //用于检测此函数的功能
}
void average(struct student* xueshen, int num)
{	
	float sum = 0.0;
	for (int i = 0; i < num; i++)
	{
		sum += (xueshen + i)->grade[0]+ (xueshen + i)->grade[1]+ (xueshen + i)->grade[2];
		(xueshen + i)->average = sum / 3.0;
		sum = 0;
	}
}
void dayinjiegou(struct student* xueshen, int num)
{
	for (int i = 0; i < num; i++)
	{
		printf("%s %s\n",(xueshen+i)->xinmin.min, (xueshen + i)->xinmin.xin);
		printf("%.2f %.2f %.2f\n", (xueshen + i)->grade[0],(xueshen + i)->grade[1], (xueshen + i)->grade[2]);
		printf("%.2f\n", (xueshen + i)->average);
	}
}
void banji_average(struct student* xueshen, int num)
{
	putchar('\n');
	putchar('\n');
	float sum = 0;
	for (int i = 0; i < num; i++)
	{
		sum += (xueshen + i)->average;
	}

	printf("班级平均分：%.2f\n\n",sum/CSIZE);
}
#endif