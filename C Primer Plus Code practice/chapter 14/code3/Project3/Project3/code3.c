#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>//malloc(), free()
#include <ctype.h>
#include <stdlib.h>//atoi()
#include <math.h>
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
void shumin_paixu(struct book *,int num);//书名排序
void jiage_paixu(struct book*, int num);//价格排序

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
#if 0
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
		printf("学生姓名：%s %s\n",(xueshen+i)->xinmin.min, (xueshen + i)->xinmin.xin);
		printf("三项分数：%.2f %.2f %.2f\n", (xueshen + i)->grade[0],(xueshen + i)->grade[1], (xueshen + i)->grade[2]);
		printf("平均分：%.2f\n", (xueshen + i)->average);
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


//6.
#if 0
#define SIZE 19
typedef struct
{
	char min[20];
	char xin[20];
	int shangchang;
	int jizhong;
	int zoulei;
	int dadian;
	float anda;
}QIUYUAN;//球员
void jisuan_andalv(QIUYUAN *qiuyuan,int num);

int main(void)
{
	QIUYUAN qiuyuan[SIZE];
	QIUYUAN temp[SIZE];

	FILE* fp;
	if ((fp = fopen("qiuyuanxinxi_data.txt", "a+")) == NULL)
	{
		fputs("打开文件失败！", stderr);
		exit(EXIT_FAILURE);
	}

	rewind(fp);

	int count = 0;							//第count个结构的地址
	while (count < SIZE && fread(&temp[count], sizeof(QIUYUAN), 1, fp) == 1)
	{
		if (count == 0)
			puts("当前文件中含有的球员信息如下：");

		printf("%d %s %s %d %d %d %d\n", count,temp[count].min,temp[count].xin,temp[count].shangchang\
			, temp[count].jizhong,temp[count].zoulei, temp[count].dadian);
		count++;
	}


	return 0;
}
void jisuan_andalv(QIUYUAN* qiuyuan, int num)
{

}
//命令行：D:\CODE\C_CODE\C Primer Plus Code practice\chapter 14\code3\Project3\x64\Debug
//Project3.exe
#endif
//以上程序思路错误：
// 从文件中读取内容用fread()的话读的是文件中的结构，而结构内容存入文本中用文件编辑器看是乱码，手动输入没法输入乱码让程序去读取。
// 所以文件中的内容是不能用fread()读结构的。
// 正确思路：用文本模式的fscanf()函数读文件内容。
//6.
#if 0
#define SIZE 19
typedef struct
{
	int haoma;
	char min[20];
	char xin[20];
	int shangchang;//上场次数
	int jizhong;		   //击中数
	int zoulei;		   //走垒数
	int dadian;		   //打点
	float anda;		   //安打率
}QIUYUAN;//球员

void addmessage(FILE *fp,QIUYUAN* qiuyuan, int num);
void jisuan_andalv(QIUYUAN* qiuyuan, int num);
void show(QIUYUAN* qiuyuan, int num);

int main(void)
{
	QIUYUAN qiuyuan[SIZE] = { {0} };						//初始化成员为0，防止球员数少于19时结构中的成员信息不全，导致乱码刷屏

	FILE* fp;
	if ((fp = fopen("qiuyuanxinxi_data.txt", "a+")) == NULL)
	{
		fputs("打开文件失败！", stderr);
		exit(EXIT_FAILURE);
	}

	rewind(fp);

	addmessage(fp,qiuyuan,SIZE);
	fclose(fp);

	jisuan_andalv(qiuyuan,SIZE);
	show(qiuyuan,SIZE);

	return 0;
}
void addmessage(FILE* fp,QIUYUAN* qiuyuan, int num)
{
	int haoma;
	char min[20];
	char xin[20];
	int shangchang;
	int jizhong;
	int zoulei;
	int dadian;

	int i=0;
	while (fscanf(fp, "%d%s%s%d%d%d%d", &haoma,min, xin, &shangchang, &jizhong, &zoulei, &dadian)==7)
	{
		(qiuyuan + haoma)->haoma = haoma;
		strcpy((qiuyuan+haoma)->min, min);
		strcpy((qiuyuan+haoma)->xin, xin);
		(qiuyuan + haoma)->shangchang += shangchang;
		(qiuyuan + haoma)->jizhong += jizhong;
		qiuyuan[haoma].zoulei += zoulei;
		qiuyuan[haoma].dadian += dadian;
	}
}
void jisuan_andalv(QIUYUAN* qiuyuan, int num)
{
	float anda=0.0;

	for (int i = 0; i < num; i++)
	{
		anda=(float)(qiuyuan + i)->jizhong / (float)(qiuyuan + i)->shangchang;
		(qiuyuan + i)->anda = anda;
		anda = 0.0;
	}
}
void show(QIUYUAN* qiuyuan, int num)
{
	printf("球员号  名     姓  上场次数  击中数  走垒数  打点  安打率\n");
	for(int i=0;i<num;i++)
	printf("%5d    %s  %s   %d          %d     %d      %d      %.2f\n",(qiuyuan+i)->haoma, (qiuyuan + i)->min, (qiuyuan + i) ->xin,\
		(qiuyuan + i) ->shangchang, (qiuyuan + i) ->jizhong, (qiuyuan + i) ->zoulei, (qiuyuan + i) ->dadian, (qiuyuan + i) ->anda);
}
//命令行：D:\CODE\C_CODE\C Primer Plus Code practice\chapter 14\code3\Project3\x64\Debug
//Project3.exe
#endif


//7.
#if 0
#define MAX_SHUMING 41 //最大书名长度
#define MAX_ZUOZHE 41 //最大作者姓名长度
#define MAX_SHULIANG 100//最大书籍数量

char* s_gets(char* string, int n);
void eatline(void);

struct book												//声明一个标记为book的结构
{
	char shuming[MAX_SHUMING];
	char zuozhe[MAX_ZUOZHE];
	float value;
	int delete_biaoji;
};

int main(void)
{
	struct book library[MAX_SHULIANG];//声明一个使用book结构布局的结构变量数组library[100]
	int count = 0;

	//打开文件，并计算文件中原有的图书数量
	FILE* fp;
	if ((fp = fopen("book_data.txt", "r+b")) == NULL)//二进制模式下
	{
		fputs("打开文件失败！", stderr);
		exit(EXIT_FAILURE);
	}
	
	rewind(fp);											//待读取文件数据拷贝进内存中的地址，待读数据块的大小，待读数据块数量，待读取的文件
	while (count < MAX_SHULIANG && fread(&library[count], sizeof(struct book), 1, fp) == 1)
	{
		if (count == 0)
			puts("当前文件中含有的图书信息如下：");

		printf("%s:《%s》（￥%.2f）\n", library[count].zuozhe, library[count].shuming, library[count].value);
		count++;
	}

	//保存文件中图书数量的值        (注：此处count的值是文件中图书数量的值，因为count从0开始递增)
	int filecount = count;				//      (count值能赋给filecount，两者都能在后面程序中成为索引值)

	//判断文件中图书数量是否大于了100本
	if (filecount == MAX_SHULIANG)
	{
		fprintf(stderr, "book_data.txt已满！");
		exit(EXIT_FAILURE);
	}

	//文件中图书数量没到100本
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

		if (count < MAX_SHULIANG)
			printf("请输入书名(在新行输入^Z或在新行输入[Enter]以结束)：\n");
	}

	//显示添加的图书，并把新加的图书也保存在文件中
	printf("以下是图书目录：\n");
	for (int index = 0; index < count; index++)
	{
		printf("%s:《%s》（￥%.2f）\n", library[index].zuozhe, library[index].shuming, library[index].value);
	}
	//待写入的文件数据所在的内存中的地址，待写数据块的大小，待写数据块数量，待写入的文件
	fwrite(&library[filecount], sizeof(struct book), count - filecount, fp);
	//count-filecount得出新添加的图书数量
	puts("存入文件已完成！");
                                                    //************************注意*************************************
																		   //若写成fclose("fp");则程序不会把数据存入文件，还难以排查错误！！！

	char ch;
	printf("您想要修改记录的内容吗？(输入y或n)");
	scanf("%c",&ch);
	eatline();

	if (ch == 'y')
	{
		printf("请输入您要修改的记录的行号(输入q以退出)：");
		int line;
		while (scanf("%d", &line) == 1)
		{
			eatline();
			printf("是这行吗(输入y或n)：%s:《%s》（￥%.2f）", library[line].zuozhe, library[line].shuming, library[line].value);
			scanf("%c", &ch);
			eatline();
			if (ch == 'y')
			{
				library[line].delete_biaoji = 1;
				puts("此行内容已删除！");
				printf("请输入您要修改的记录的行号(输入q以退出)：");
			}
			else
				continue;
		}

		eatline();
		printf("要在已有记录后继续写入内容吗？(输入y或n)");								//瑕疵：若仅删除但不添加内容，则文件中仍会留有部分原记录
		scanf("%c", &ch);																						//应该可以由fopen()的w模式解决
		eatline();

		if (ch == 'y')
		{
			printf("请输入书名(在新行输入^Z或在新行输入[Enter]以结束)：\n");
			while (count < MAX_SHULIANG && s_gets(library[count].shuming, MAX_SHUMING) != NULL && library[count].shuming[0] != '\0')
			{
				puts("请输入作者姓名：");
				s_gets(library[count].zuozhe, MAX_ZUOZHE);

				puts("请输入售价：");
				scanf("%f", &library[count].value);
				eatline();

				library[count].delete_biaoji = 0;

				count++;

				if (count < MAX_SHULIANG)
					printf("请输入书名(在新行输入^Z或在新行输入[Enter]以结束)：\n");
			}
		}

	}
	rewind(fp);
	printf("以下是图书目录：\n");
	for (int index = 0; index < count; index++)
	{
		if (library[index].delete_biaoji != 1)
		{
			printf("%s:《%s》（￥%.2f）\n", library[index].zuozhe, library[index].shuming, library[index].value);
			fwrite(&library[index], sizeof(struct book), 1, fp);
		}
	}
	
	puts("存入文件已完成！");

	fclose(fp);

	return 0;
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
//命令行运行程序：D:\CODE\C_CODE\C Primer Plus Code practice\chapter 14\code1\Project1\x64\Debug
//Project3.exe

//*****注*******此程序的操作的文件不管fopen()是文本模式还是二进制模式，用文件编辑器看是乱码
#endif


//8.
#if 0
typedef struct
{
	int zuoweibianhao;//座位编号
	int yuding_biaoji;//座位被预订的标记
	char name_min[20];
	char name_xin[20];
}XINXI;
#define SIZE 12
void showmenu(void);
char get_choice(void);
void eatline(void);

void show_empty_seats(XINXI *xinxi,int num);
void show_list_of_empty_seats(XINXI* xinxi, int num);
void show_chengke_paixu(XINXI* xinxi, int num);
int fenpeizuowei(XINXI* xinxi, int num);
int quxiaozuowei(XINXI* xinxi, int num);

int main(void)
{
	XINXI xinxi[SIZE] = { {0} };//初始化结构的成员值为0

	int j = -1;//表示预订的座位编号所在的第x个结构
	while (1)
	{
		showmenu();
		char choice = get_choice();

		switch (choice)
		{
		case 'a':
			show_empty_seats(xinxi, SIZE);
			break;
		case 'b':
			show_list_of_empty_seats(xinxi, SIZE);
			break;
		case 'c':
			show_chengke_paixu(xinxi, SIZE);
			break;
		case 'd':
			j = fenpeizuowei(xinxi, SIZE);
			break;
		case 'e':
			j=quxiaozuowei(xinxi, j);
			break;
		case 'f':
		default:
			printf("程序已退出！");
			exit(1);
		}
	}
	return 0;
}
void showmenu(void)
{
	puts("请从如下选项中选择一项功能：");
	puts("a)显示空余的座位数量");
	puts("b)显示空余的座位列表");
	puts("c)按字母表顺序显示座位上的乘客列表");
	puts("d)为您分配座位");
	puts("e)清除您的座位记录");
	puts("f)退出");
}
char get_choice(void)
{
	char choice;

	choice = getchar();
	choice = tolower(choice);//使用C库的tolower()

	eatline();
	while (strchr("abcdef", choice) == NULL)
	{
		puts("请输入a、b、c、d、e或f");
		choice = tolower(getchar());
		eatline();
	}

	return choice;
}
void eatline(void)
{
	while (getchar() != '\n')
		continue;
}
void show_empty_seats(XINXI* xinxi, int num)
{
	int count = 0;
	for (int i = 0; i < num; i++)
	{
		if ((xinxi + i)->yuding_biaoji == 0)
			count++;
	}

	printf("共有%d个空座位\n",count);
}
void show_list_of_empty_seats(XINXI* xinxi, int num)
{
	int i;
	for ( i = 0; i < num; i++)
	{
		if ((xinxi + i)->yuding_biaoji == 0)
			printf("座位编号:%3d    ",(xinxi+i)->zuoweibianhao);

		if (i % 6 == 5)
			putchar('\n');
	}
	if (i % 6!=0)
		putchar('\n');
}
void show_chengke_paixu(XINXI* xinxi, int num)
{
	XINXI xinxi_kaobei[SIZE];
	for (int index = 0; index < num; index++)
	{
		xinxi_kaobei[index] = xinxi_kaobei[index];//拷贝结构数组的每个元素
	}

	XINXI  temp;
	int seek1, seek2;

	for (seek1 = 0; seek1 < num - 1; seek1++)//外层循环指明正在处理的元素
	{
		for (seek2 = seek1 + 1; seek2 < num; seek2++)//内层循环找出应存储在该元素的值
		{
			if (strcmp((xinxi_kaobei + seek1)->name_min, (xinxi_kaobei + seek2)->name_min) > 0)//若前一串字符串的首字母排序序列位于后一串字符串的首字母后面
			{
				temp = *(xinxi_kaobei + seek1);
				xinxi_kaobei[seek1] = xinxi_kaobei[seek2];//*******************************两种写法**********************************
				xinxi_kaobei[seek2] = temp;
			}
		}
	}

	printf("以下是按乘客字母排序的乘客列表：\n");
	for (int index = 0; index < num; index++)
	{
		if ((xinxi + index)->yuding_biaoji != 0)
		printf("乘客名：%s 座位号：%d \n",(xinxi_kaobei+index)->name_min,(xinxi_kaobei)->zuoweibianhao );
	}
}
int fenpeizuowei(XINXI* xinxi, int num)
{
	int zuoweibianhao;
	printf("请输入您要预订的座位编号(输入q以退出)：");

	int j = -1;
	while (scanf("%d", &zuoweibianhao))
	{	
		eatline();
		for (int index = 0; index < num; index++)
		{
			if ((xinxi + index)->zuoweibianhao == zuoweibianhao)
			{
				j = index;
				break;
			}

			j = -1;
		}
		if (j == -1)
		{
			printf("未找到该座位编号，请重新输入！");
			continue;
		}

		if((xinxi+j)->yuding_biaoji==1)
		{
			printf("该座位编号已被预订，请重新输入！");
			continue;
		}

		break;
	}
	
	if(j==-1)//输入q时
		eatline();

	if (j != -1)
	{
		char name_min[20];
		char name_xin[20];

		printf("请输入您的名和姓：");
		scanf("%s%s", name_min, name_xin);
		eatline();

		(xinxi + j)->yuding_biaoji = 1;
		strcpy((xinxi + j)->name_min, name_min);
		strcpy((xinxi + j)->name_xin, name_xin);

		printf("座位编号：%d   %s %s\n", (xinxi + j)->zuoweibianhao, (xinxi + j)->name_min, (xinxi + j)->name_xin);
		puts("写入完成！");
	}

	return j;
}
int quxiaozuowei(XINXI* xinxi, int num)
{
	if (num == -1)
	{
		printf("您还未订座位！");
	}
	else
	{
		printf("确定取消座位编号%d的预订吗？（输入y或n）");
		char choice;

		choice = getchar();
		choice = tolower(choice);//使用C库的tolower()

		eatline();
		while (strchr("yn", choice) == NULL)
		{
			puts("请输入y或n");
			choice = tolower(getchar());
			eatline();
		}
		if (choice == 'y')
		{
			char name_min = { '0' };
			char name_xin = { '0' };

			strcpy((xinxi + num)->name_min, name_min);
			strcpy((xinxi + num)->name_xin, name_xin);
			(* (xinxi + num)).yuding_biaoji = 0;

			puts("已删除预订信息！");
			num=-1;
		}
	}
	return num;
}
#endif


//9.
#if 0
typedef struct
{
	int zuoweibianhao;//座位编号
	int yuding_biaoji;//座位被预订的标记
	char name_min[20];
	char name_xin[20];
}XINXI;

#define SIZE 12
void showmenu(void);
char get_choice(void);
void eatline(void);

void show_empty_seats(XINXI* xinxi, int num);
void show_list_of_empty_seats(XINXI* xinxi, int num);
void show_chengke_paixu(XINXI* xinxi, int num);
int fenpeizuowei(XINXI* xinxi, int num);
int quxiaozuowei(XINXI* xinxi, int num);

int main(void)
{
	XINXI xinxi[4][SIZE] = { {0} };//四个航班，每个航班都是个XINXI布局的结构

	printf("请选择航班号：102	311	444	519	（输入0以退出）:");
	while (1)
	{
		int hangbanhao;
		int x;
		while (scanf("%d", &hangbanhao))
		{
			eatline();

			switch (hangbanhao)
			{
			case 102:
				x = 0;
				puts("正在处理航班102");
				break;
			case 311:
				x = 1;
				puts("正在处理航班311");
				break;
			case 444:
				x = 2;
				puts("正在处理航班444");
				break;
			case 519:
				x = 3;
				puts("正在处理航班519");
				break;
			default:
				if (hangbanhao == 0)
					exit(1);
				else
				{
					puts("输入有误，请重新输入！");
					continue;
				}
			}
			break;
		}

		showmenu();
		char choice='0';
		int j = -1;//表示预订的座位编号所在的第x个结构
		while ((choice= get_choice())&&choice!='f')					//*******************************注*********************************************************
		{																							//错误写法：while (		choice= get_choice()&&choice!='f'     )	若输入a，则choice=1
			switch (choice)																//优先级：算数，关系，逻辑，赋值
			{
			case 'a':
				show_empty_seats(*(xinxi + x), SIZE);
				break;
			case 'b':
				show_list_of_empty_seats(xinxi[x], SIZE);
				break;
			case 'c':
				show_chengke_paixu(xinxi[x], SIZE);
				break;
			case 'd':
				j = fenpeizuowei(xinxi[x], SIZE);
				break;
			case 'e':
				j = quxiaozuowei(xinxi[x], j);
				break;
			case 'f':
			default:
				printf("已退出！\n");				
			}
			showmenu();
		}

		printf("请选择航班号：102	311	444	519	（输入0以退出）:");
	}
	return 0;
}
void showmenu(void)
{
	puts("请从如下选项中选择一项功能：");
	puts("a)显示空余的座位数量");
	puts("b)显示空余的座位列表");
	puts("c)按字母表顺序显示座位上的乘客列表");
	puts("d)为您分配座位");
	puts("e)清除您的座位记录");
	puts("f)退出");
}
char get_choice(void)
{
	char choice;

	choice = getchar();
	choice = tolower(choice);//使用C库的tolower()

	eatline();
	while (strchr("abcdef", choice) == NULL)
	{
		puts("请输入a、b、c、d、e或f");
		choice = tolower(getchar());
		eatline();
	}

	return choice;
}
void eatline(void)
{
	while (getchar() != '\n')
		continue;
}
void show_empty_seats(XINXI* xinxi, int num)
{
	int count = 0;
	for (int i = 0; i < num; i++)
	{
		if ((xinxi + i)->yuding_biaoji == 0)
			count++;
	}

	printf("共有%d个空座位\n", count);
}
void show_list_of_empty_seats(XINXI* xinxi, int num)
{
	int i;
	for (i = 0; i < num; i++)
	{
		if ((xinxi + i)->yuding_biaoji == 0)
			printf("座位编号:%3d    ", (xinxi + i)->zuoweibianhao);

		if (i % 6 == 5)
			putchar('\n');
	}
	if (i % 6 != 0)
		putchar('\n');
}
void show_chengke_paixu(XINXI* xinxi, int num)
{
	XINXI xinxi_kaobei[SIZE];
	for (int index = 0; index < num; index++)
	{
		xinxi_kaobei[index] = xinxi_kaobei[index];//拷贝结构数组的每个元素
	}

	XINXI  temp;
	int seek1, seek2;

	for (seek1 = 0; seek1 < num - 1; seek1++)//外层循环指明正在处理的元素
	{
		for (seek2 = seek1 + 1; seek2 < num; seek2++)//内层循环找出应存储在该元素的值
		{
			if (strcmp((xinxi_kaobei + seek1)->name_min, (xinxi_kaobei + seek2)->name_min) > 0)//若前一串字符串的首字母排序序列位于后一串字符串的首字母后面
			{
				temp = *(xinxi_kaobei + seek1);
				xinxi_kaobei[seek1] = xinxi_kaobei[seek2];//*******************************两种写法**********************************
				xinxi_kaobei[seek2] = temp;
			}
		}
	}

	printf("以下是按乘客字母排序的乘客列表：\n");
	for (int index = 0; index < num; index++)
	{
		if ((xinxi + index)->yuding_biaoji != 0)
			printf("乘客名：%s 座位号：%d \n", (xinxi_kaobei + index)->name_min, (xinxi_kaobei)->zuoweibianhao);
	}
}
int fenpeizuowei(XINXI* xinxi, int num)
{
	int zuoweibianhao;
	printf("请输入您要预订的座位编号(输入q以退出)：");

	int j = -1;
	while (scanf("%d", &zuoweibianhao))
	{
		eatline();
		for (int index = 0; index < num; index++)
		{
			if ((xinxi + index)->zuoweibianhao == zuoweibianhao)
			{
				j = index;
				break;
			}

			j = -1;
		}
		if (j == -1)
		{
			printf("未找到该座位编号，请重新输入！");
			continue;
		}

		if ((xinxi + j)->yuding_biaoji == 1)
		{
			printf("该座位编号已被预订，请重新输入！");
			continue;
		}

		break;
	}

	if (j == -1)//输入q时
		eatline();

	if (j != -1)
	{
		char name_min[20];
		char name_xin[20];

		printf("请输入您的名和姓：");
		scanf("%s%s", name_min, name_xin);
		eatline();

		(xinxi + j)->yuding_biaoji = 1;
		strcpy((xinxi + j)->name_min, name_min);
		strcpy((xinxi + j)->name_xin, name_xin);

		printf("座位编号：%d   %s %s\n", (xinxi + j)->zuoweibianhao, (xinxi + j)->name_min, (xinxi + j)->name_xin);
		puts("写入完成！");
	}

	return j;
}
int quxiaozuowei(XINXI* xinxi, int num)
{
	if (num == -1)
	{
		printf("您还未订座位！");
	}
	else
	{
		printf("确定取消座位编号%d的预订吗？（输入y或n）");
		char choice;

		choice = getchar();
		choice = tolower(choice);//使用C库的tolower()

		eatline();
		while (strchr("yn", choice) == NULL)
		{
			puts("请输入y或n");
			choice = tolower(getchar());
			eatline();
		}
		if (choice == 'y')
		{
			char name_min = { '0' };
			char name_xin = { '0' };

			strcpy((xinxi + num)->name_min, name_min);
			strcpy((xinxi + num)->name_xin, name_xin);
			(*(xinxi + num)).yuding_biaoji = 0;

			puts("已删除预订信息！");
			num = -1;
		}
	}
	return num;
}
#endif


//10.
#if 0
void showmenu1(void);
void showmenu2(void);
void showmenu3(void);
void eatline(void);

int main(void)
{
	char choice;

	void (*function_p[3])(void) = {showmenu1,showmenu2,showmenu3};//声明一个函数指针数组。

	puts("请选择菜单前的字母(输入a、b或c)：");

	choice = getchar();
	choice = tolower(choice);//使用C库的tolower()

	eatline();
	while (strchr("abc", choice) == NULL)
	{
		puts("请输入a、b或c");
		choice = tolower(getchar());
		eatline();
	}

	switch (choice)
	{
	case 'a':
		function_p[0] = showmenu1;//可以之前不初始化，到这里对函数指针赋值
		(*function_p[0])();
		break;
	case 'b':
		( * function_p[1])();
		break;
	case 'c':
		(*function_p[2])();
		break;
	default:
		exit(1);
	}
	return 0;
}
void showmenu1(void)
{
	puts("这是一个菜单a！");
}
void showmenu2(void)
{
	puts("这是一个菜单b！");
}
void showmenu3(void)
{
	puts("这是一个菜单c！");
}
void eatline(void)
{
	while (getchar() != '\n')
		continue;
}
#endif


//11.
#if 1
double transform(double *source,double *target, int num,double(*p)(double));
int main(void)
{
	double source[100] = {1.0,2.0,3.0,4.0};
	double target[100] = {0.0};
	int num = 100;

	double(*p)(double);
	p = sin;

	for(int i=0;i<4;i++)
	*(target+i)=transform(source, target, num, p);

	for (int i = 0; i < 4; i++)
		printf("%-5.2lf", *(target + i));

	//printf("%lf",sin(1.0));

	return 0;
}
double transform(double* source, double* target, int num, double(*p)(double))
{
	static int i = 0;//只在编译transform()时被初始化一次

	double jieguo[100] = { 0 };

	*(jieguo + i) = p(*(source+i));

	i++;

	return (*(jieguo + i-1));//********注：-1必须要写***************************
}
#endif