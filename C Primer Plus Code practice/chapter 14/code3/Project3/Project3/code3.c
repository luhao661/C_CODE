#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>//malloc(), free()
#include <ctype.h>
#include <stdlib.h>//atoi()
//
#if 1
#endif


//�����ϰ
//1.
#if 0
typedef struct //�·�					//����һ��ʡ���˱�ǵĽṹ������YUEFEN�������������ýṹ����
{
	char yuefen_min[10];
	char min_suoxie[4];
	int yuefen_tianshu;
	int yuefen_hao;//�·ݺ�
} YUEFEN;

YUEFEN yinian[12] =			  //����һ��ʹ��YUEFEN�ṹ���ֵĽṹ����yinian[12]
{
	{
		"January",
		"Jan",//һ��дΪJanuary������дΪJan������дΪFebruary������дΪFeb������дΪMarch������дΪMar������дΪApril������дΪApr������дΪMay��û��������ʽ������дΪJune������дΪJun��
		31,	////����дΪJuly������дΪJul������дΪAugust������дΪAug������дΪSeptember������дΪSept��ʮ��дΪOctober������дΪOct��ʮһ��дΪNovember������дΪNov��12��дΪDecember������дΪDec��
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
int jisuantianshu( YUEFEN * yinian,const char *yuefenmin);//����һ���е����µ�����

int main(void)
{
	char yuefenmin[10];
	puts("��������ѡ����·���(��January��)��");

	s_gets(yuefenmin,10);	
	
	int tianshu = jisuantianshu(yinian, yuefenmin);
	printf("һ���е����µ������ǣ�%d\n", tianshu);

	return 0;
}
int jisuantianshu(YUEFEN* yinian, const char* yuefenmin)//����һ��ָ��YUEFEN�ṹ���ֵĽṹָ��yinian��ָ��ָ��yinian�ṹ
{
	int j=-1;

	//for (int i = 0; i < 12; i++)
	//{

	//	if (		strcmp(	(yinian + i)->yuefen_min, yuefenmin	) == 0		)
	//	{
	//		j = i;//j�洢���Ǳ���Ѱ���ĵ�x���ṹ
	//		break;
	//	}
	//}

	//������д��
	char* p;

	for (int i = 0; i < 12; i++)
	{
		p = (yinian + i)->yuefen_min;
		if (strcmp(p, yuefenmin) == 0)
		{
			j = i;//		j�洢���Ǳ���Ѱ���ĵ�x���ṹ
			break;
		}
	}


	if (j== -1)
	{
		puts("δ�ҵ��·ݣ�");
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
typedef struct //�·�					//����һ��ʡ���˱�ǵĽṹ������YUEFEN�������������ýṹ����
{
	char yuefen_min[10];
	char min_suoxie[4];
	int yuefen_tianshu;
	int yuefen_hao;//�·ݺ�
} YUEFEN;

YUEFEN yinian[12] =			  //����һ��ʹ��YUEFEN�ṹ���ֵĽṹ����yinian[12]
{
	{
		"January",
		"Jan",//һ��дΪJanuary������дΪJan������дΪFebruary������дΪFeb������дΪMarch������дΪMar������дΪApril������дΪApr������дΪMay��û��������ʽ������дΪJune������дΪJun��
		31,	////����дΪJuly������дΪJul������дΪAugust������дΪAug������дΪSeptember������дΪSept��ʮ��дΪOctober������дΪOct��ʮһ��дΪNovember������дΪNov��12��дΪDecember������дΪDec��
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
int jisuantianshu(YUEFEN* yinian, const char* yuefen,int ri);//����һ���е����µ�����
char* s_gets(char* string, int n);
void eatline(void);

int main(void)
{
	int nian;
	printf("��������֣�");
	scanf("%d",&nian);
	eatline();

	char yuefen[20];
	printf("�������·ݣ��·ݺš��·������·�����д����");
	s_gets(yuefen,20);
	//eatline();�˴�����Ҫ

	int ri;
	printf("�������գ�");
	scanf("%d", &ri);

	int tianshu = jisuantianshu(yinian, yuefen,ri);
	printf("һ���е����µ������ǣ�%d\n", tianshu);

	return 0;
}
int jisuantianshu(YUEFEN* yinian, const char* yuefen,int ri)//����һ��ָ��YUEFEN�ṹ���ֵĽṹָ��yinian��ָ��ָ��yinian�ṹ
{
	int j = -1;

	char* p;

	for (int i = 0; i < 12; i++)
	{
		p = (yinian + i)->yuefen_min;
		if ( (yinian + i)->yuefen_hao==atoi(yuefen) ||strcmp(p, yuefen) == 0|| strcmp((yinian + i)->min_suoxie, yuefen) == 0)
		{
			j = i;//		j�洢���Ǳ���Ѱ���ĵ�x���ṹ
			break;
		}
	}

	if (j == -1)
	{
		puts("δ�ҵ��·ݣ�");
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
#define MAX_SHUMING 41 //�����������
#define MAX_ZUOZHE 41 //���������������
#define MAX_SHULIANG 100//����鼮����

struct book												//����һ�����Ϊbook�Ľṹ
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
	struct book library[MAX_SHULIANG];//����һ��ʹ��book�ṹ���ֵĽṹ��������library[100]�����е�ÿ��Ԫ�ض���һ���ṹ
	int count = 0;
	int index;

	printf("����������(����������^Z������������[Enter]�Խ���)��\n");
	while (count < MAX_SHULIANG && s_gets(library[count].shuming, MAX_SHUMING) != NULL && library[count].shuming[0] != '\0')
	{
		puts("����������������");
		s_gets(library[count].zuozhe, MAX_ZUOZHE);

		puts("�������ۼۣ�");
		scanf("%f", &library[count].value);
		while (getchar() != '\n')//����scanf()ִ�к󻺳������µ�\n
			continue;

		count++;

		printf("����������(����������^Z������������[Enter]�Խ���)��\n");
	}

	printf("������ͼ��Ŀ¼��\n");
	for (index = 0; index < count; index++)//count ����ֵ�ϵ����鼮������
	{
		printf("%s:��%s������%.2f��\n", library[index].zuozhe, library[index].shuming, library[index].value);
	}


	struct book library_kaobei[MAX_SHULIANG];
	for (index = 0; index < count; index++)
	{
		library_kaobei[index] = library[index];//�����ṹ�����ÿ��Ԫ��
	}
	shumin_paixu(library_kaobei,count);


	for (index = 0; index < count; index++)
	{
		library_kaobei[index] = library[index];
	}
	jiage_paixu(library_kaobei, count);

	return 0;
}																				//*****************************************ע********************************************
void shumin_paixu(struct book *library_kaobei,int num)//�ṹ������Ϊʵ�δ��ݣ���������ֻ����ָ�봫�ݡ����Խṹ����Ҳֻ����ָ�봫�ݡ�
{
	struct book  temp;
	int seek1, seek2;

	for (seek1 = 0; seek1 < num - 1; seek1++)//���ѭ��ָ�����ڴ����Ԫ��
	{
		for (seek2 = seek1 + 1; seek2 < num; seek2++)//�ڲ�ѭ���ҳ�Ӧ�洢�ڸ�Ԫ�ص�ֵ
		{
			if (strcmp(		(library_kaobei+seek1)->shuming, (library_kaobei + seek2)->shuming		) > 0)//��ǰһ���ַ���������ĸ��������λ�ں�һ���ַ���������ĸ����
			{
			/*	temp = (library_kaobei + seek1);														//ǰ���Ϊ	struct book * temp;	
				(library_kaobei + seek1) = (library_kaobei + seek2);						//�˴�������ַʧ�ܣ�***��ַ���Ǹ�����***
				(library_kaobei + seek1) = temp;*/

				temp = *(library_kaobei+seek1);						   //
				library_kaobei[ seek1] =library_kaobei[seek2];//*******************************����д��**********************************
				library_kaobei[ seek2] = temp;

			}
		}
	}

	printf("�����ǰ���������ĸ�����ͼ��Ŀ¼��\n");
	for (int index = 0; index < num; index++)//num ����ֵ�ϵ����鼮������
	{
		printf("%s:��%s������%.2f��\n", (* (library_kaobei + index)).zuozhe, (library_kaobei+index)->shuming, library_kaobei[index].value);
	}															//*****************************************���ֱ�ʾ����****************************************************
}
void jiage_paixu(struct book* library_kaobei, int num)
{
	struct book  temp;
	int seek1, seek2;

	for (seek1 = 0; seek1 < num - 1; seek1++)//���ѭ��ָ�����ڴ����Ԫ��
	{
		for (seek2 = seek1 + 1; seek2 < num; seek2++)//�ڲ�ѭ���ҳ�Ӧ�洢�ڸ�Ԫ�ص�ֵ
		{
			if (		(library_kaobei + seek1)->value	-	 (library_kaobei + seek2)->value > 0			)
			{				
				temp = *(library_kaobei + seek1);
				library_kaobei[seek1] = library_kaobei[seek2];
				library_kaobei[seek2] = temp;
			}
		}
	}

	printf("�����ǰ��۸������ͼ��Ŀ¼��\n");
	for (int index = 0; index < num; index++)//num ����ֵ�ϵ����鼮������
	{
		printf("%s:��%s������%.2f��\n", (*(library_kaobei + index)).zuozhe, (library_kaobei + index)->shuming, library_kaobei[index].value);
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
}NAME;//����										//**********ע���˽ṹ������XINXI�ṹ֮�£�����溯�����ʲ���name*************************
typedef struct
{
	long shebaohao;
	NAME name;
}XINXI;//��Ϣ

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
		{"bbb", "", "bbb"}//û���м���
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

	dayin(xinxi);//���ݽṹ�ĵ�ַ����&xinxi[0]

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
}NAME;//����										//**********ע���˽ṹ������XINXI�ṹ֮�£�����溯�����ʲ���name*************************
typedef struct
{
	long shebaohao;
	NAME name;
}XINXI;//��Ϣ

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
		{"bbb", "", "bbb"}//û���м���
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
	dayin(xinxi[i]);//���ݽṹ��ֵ

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
		.xinmin.min="Bbb",//***********************************************���ֳ�ʼ������*******************************************
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

	printf("������ѧ��������(������֮���ÿո�ֿ�)(����0 0���˳�)��");
	//scanf("%s",xin);
	//scanf("%s", min);
	//��д�ɣ�
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
			fprintf(stderr, "�����������������룡");
			continue;
		}

		printf("�������ѧ����3��������");
		scanf("%f%f%f",&xueshen->grade[0],&xueshen->grade[1],&xueshen->grade[2]);

		count++;
		if (count == num)
			break;
		printf("���������ѧ��������(������֮���ÿո�ֿ�)(����0 0���˳�)��");
	}

	/*printf("%s%s",xin,min);
	printf("%f   %f    %f", xueshen->grade[0], xueshen->grade[1], xueshen->grade[2]);*/     //���ڼ��˺����Ĺ���
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

	printf("�༶ƽ���֣�%.2f\n\n",sum/CSIZE);
}
#endif