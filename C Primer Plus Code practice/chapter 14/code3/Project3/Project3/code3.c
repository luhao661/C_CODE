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
void shumin_paixu(struct book *,int num);//��������
void jiage_paixu(struct book*, int num);//�۸�����

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
		printf("ѧ��������%s %s\n",(xueshen+i)->xinmin.min, (xueshen + i)->xinmin.xin);
		printf("���������%.2f %.2f %.2f\n", (xueshen + i)->grade[0],(xueshen + i)->grade[1], (xueshen + i)->grade[2]);
		printf("ƽ���֣�%.2f\n", (xueshen + i)->average);
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
}QIUYUAN;//��Ա
void jisuan_andalv(QIUYUAN *qiuyuan,int num);

int main(void)
{
	QIUYUAN qiuyuan[SIZE];
	QIUYUAN temp[SIZE];

	FILE* fp;
	if ((fp = fopen("qiuyuanxinxi_data.txt", "a+")) == NULL)
	{
		fputs("���ļ�ʧ�ܣ�", stderr);
		exit(EXIT_FAILURE);
	}

	rewind(fp);

	int count = 0;							//��count���ṹ�ĵ�ַ
	while (count < SIZE && fread(&temp[count], sizeof(QIUYUAN), 1, fp) == 1)
	{
		if (count == 0)
			puts("��ǰ�ļ��к��е���Ա��Ϣ���£�");

		printf("%d %s %s %d %d %d %d\n", count,temp[count].min,temp[count].xin,temp[count].shangchang\
			, temp[count].jizhong,temp[count].zoulei, temp[count].dadian);
		count++;
	}


	return 0;
}
void jisuan_andalv(QIUYUAN* qiuyuan, int num)
{

}
//�����У�D:\CODE\C_CODE\C Primer Plus Code practice\chapter 14\code3\Project3\x64\Debug
//Project3.exe
#endif
//���ϳ���˼·����
// ���ļ��ж�ȡ������fread()�Ļ��������ļ��еĽṹ�����ṹ���ݴ����ı������ļ��༭���������룬�ֶ�����û�����������ó���ȥ��ȡ��
// �����ļ��е������ǲ�����fread()���ṹ�ġ�
// ��ȷ˼·�����ı�ģʽ��fscanf()�������ļ����ݡ�
//6.
#if 0
#define SIZE 19
typedef struct
{
	int haoma;
	char min[20];
	char xin[20];
	int shangchang;//�ϳ�����
	int jizhong;		   //������
	int zoulei;		   //������
	int dadian;		   //���
	float anda;		   //������
}QIUYUAN;//��Ա

void addmessage(FILE *fp,QIUYUAN* qiuyuan, int num);
void jisuan_andalv(QIUYUAN* qiuyuan, int num);
void show(QIUYUAN* qiuyuan, int num);

int main(void)
{
	QIUYUAN qiuyuan[SIZE] = { {0} };						//��ʼ����ԱΪ0����ֹ��Ա������19ʱ�ṹ�еĳ�Ա��Ϣ��ȫ����������ˢ��

	FILE* fp;
	if ((fp = fopen("qiuyuanxinxi_data.txt", "a+")) == NULL)
	{
		fputs("���ļ�ʧ�ܣ�", stderr);
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
	printf("��Ա��  ��     ��  �ϳ�����  ������  ������  ���  ������\n");
	for(int i=0;i<num;i++)
	printf("%5d    %s  %s   %d          %d     %d      %d      %.2f\n",(qiuyuan+i)->haoma, (qiuyuan + i)->min, (qiuyuan + i) ->xin,\
		(qiuyuan + i) ->shangchang, (qiuyuan + i) ->jizhong, (qiuyuan + i) ->zoulei, (qiuyuan + i) ->dadian, (qiuyuan + i) ->anda);
}
//�����У�D:\CODE\C_CODE\C Primer Plus Code practice\chapter 14\code3\Project3\x64\Debug
//Project3.exe
#endif


//7.
#if 0
#define MAX_SHUMING 41 //�����������
#define MAX_ZUOZHE 41 //���������������
#define MAX_SHULIANG 100//����鼮����

char* s_gets(char* string, int n);
void eatline(void);

struct book												//����һ�����Ϊbook�Ľṹ
{
	char shuming[MAX_SHUMING];
	char zuozhe[MAX_ZUOZHE];
	float value;
	int delete_biaoji;
};

int main(void)
{
	struct book library[MAX_SHULIANG];//����һ��ʹ��book�ṹ���ֵĽṹ��������library[100]
	int count = 0;

	//���ļ����������ļ���ԭ�е�ͼ������
	FILE* fp;
	if ((fp = fopen("book_data.txt", "r+b")) == NULL)//������ģʽ��
	{
		fputs("���ļ�ʧ�ܣ�", stderr);
		exit(EXIT_FAILURE);
	}
	
	rewind(fp);											//����ȡ�ļ����ݿ������ڴ��еĵ�ַ���������ݿ�Ĵ�С���������ݿ�����������ȡ���ļ�
	while (count < MAX_SHULIANG && fread(&library[count], sizeof(struct book), 1, fp) == 1)
	{
		if (count == 0)
			puts("��ǰ�ļ��к��е�ͼ����Ϣ���£�");

		printf("%s:��%s������%.2f��\n", library[count].zuozhe, library[count].shuming, library[count].value);
		count++;
	}

	//�����ļ���ͼ��������ֵ        (ע���˴�count��ֵ���ļ���ͼ��������ֵ����Ϊcount��0��ʼ����)
	int filecount = count;				//      (countֵ�ܸ���filecount�����߶����ں�������г�Ϊ����ֵ)

	//�ж��ļ���ͼ�������Ƿ������100��
	if (filecount == MAX_SHULIANG)
	{
		fprintf(stderr, "book_data.txt������");
		exit(EXIT_FAILURE);
	}

	//�ļ���ͼ������û��100��
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

		if (count < MAX_SHULIANG)
			printf("����������(����������^Z������������[Enter]�Խ���)��\n");
	}

	//��ʾ��ӵ�ͼ�飬�����¼ӵ�ͼ��Ҳ�������ļ���
	printf("������ͼ��Ŀ¼��\n");
	for (int index = 0; index < count; index++)
	{
		printf("%s:��%s������%.2f��\n", library[index].zuozhe, library[index].shuming, library[index].value);
	}
	//��д����ļ��������ڵ��ڴ��еĵ�ַ����д���ݿ�Ĵ�С����д���ݿ���������д����ļ�
	fwrite(&library[filecount], sizeof(struct book), count - filecount, fp);
	//count-filecount�ó�����ӵ�ͼ������
	puts("�����ļ�����ɣ�");
                                                    //************************ע��*************************************
																		   //��д��fclose("fp");����򲻻�����ݴ����ļ����������Ų���󣡣���

	char ch;
	printf("����Ҫ�޸ļ�¼��������(����y��n)");
	scanf("%c",&ch);
	eatline();

	if (ch == 'y')
	{
		printf("��������Ҫ�޸ĵļ�¼���к�(����q���˳�)��");
		int line;
		while (scanf("%d", &line) == 1)
		{
			eatline();
			printf("��������(����y��n)��%s:��%s������%.2f��", library[line].zuozhe, library[line].shuming, library[line].value);
			scanf("%c", &ch);
			eatline();
			if (ch == 'y')
			{
				library[line].delete_biaoji = 1;
				puts("����������ɾ����");
				printf("��������Ҫ�޸ĵļ�¼���к�(����q���˳�)��");
			}
			else
				continue;
		}

		eatline();
		printf("Ҫ�����м�¼�����д��������(����y��n)");								//覴ã�����ɾ������������ݣ����ļ����Ի����в���ԭ��¼
		scanf("%c", &ch);																						//Ӧ�ÿ�����fopen()��wģʽ���
		eatline();

		if (ch == 'y')
		{
			printf("����������(����������^Z������������[Enter]�Խ���)��\n");
			while (count < MAX_SHULIANG && s_gets(library[count].shuming, MAX_SHUMING) != NULL && library[count].shuming[0] != '\0')
			{
				puts("����������������");
				s_gets(library[count].zuozhe, MAX_ZUOZHE);

				puts("�������ۼۣ�");
				scanf("%f", &library[count].value);
				eatline();

				library[count].delete_biaoji = 0;

				count++;

				if (count < MAX_SHULIANG)
					printf("����������(����������^Z������������[Enter]�Խ���)��\n");
			}
		}

	}
	rewind(fp);
	printf("������ͼ��Ŀ¼��\n");
	for (int index = 0; index < count; index++)
	{
		if (library[index].delete_biaoji != 1)
		{
			printf("%s:��%s������%.2f��\n", library[index].zuozhe, library[index].shuming, library[index].value);
			fwrite(&library[index], sizeof(struct book), 1, fp);
		}
	}
	
	puts("�����ļ�����ɣ�");

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
//���������г���D:\CODE\C_CODE\C Primer Plus Code practice\chapter 14\code1\Project1\x64\Debug
//Project3.exe

//*****ע*******�˳���Ĳ������ļ�����fopen()���ı�ģʽ���Ƕ�����ģʽ�����ļ��༭����������
#endif


//8.
#if 0
typedef struct
{
	int zuoweibianhao;//��λ���
	int yuding_biaoji;//��λ��Ԥ���ı��
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
	XINXI xinxi[SIZE] = { {0} };//��ʼ���ṹ�ĳ�ԱֵΪ0

	int j = -1;//��ʾԤ������λ������ڵĵ�x���ṹ
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
			printf("�������˳���");
			exit(1);
		}
	}
	return 0;
}
void showmenu(void)
{
	puts("�������ѡ����ѡ��һ��ܣ�");
	puts("a)��ʾ�������λ����");
	puts("b)��ʾ�������λ�б�");
	puts("c)����ĸ��˳����ʾ��λ�ϵĳ˿��б�");
	puts("d)Ϊ��������λ");
	puts("e)���������λ��¼");
	puts("f)�˳�");
}
char get_choice(void)
{
	char choice;

	choice = getchar();
	choice = tolower(choice);//ʹ��C���tolower()

	eatline();
	while (strchr("abcdef", choice) == NULL)
	{
		puts("������a��b��c��d��e��f");
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

	printf("����%d������λ\n",count);
}
void show_list_of_empty_seats(XINXI* xinxi, int num)
{
	int i;
	for ( i = 0; i < num; i++)
	{
		if ((xinxi + i)->yuding_biaoji == 0)
			printf("��λ���:%3d    ",(xinxi+i)->zuoweibianhao);

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
		xinxi_kaobei[index] = xinxi_kaobei[index];//�����ṹ�����ÿ��Ԫ��
	}

	XINXI  temp;
	int seek1, seek2;

	for (seek1 = 0; seek1 < num - 1; seek1++)//���ѭ��ָ�����ڴ����Ԫ��
	{
		for (seek2 = seek1 + 1; seek2 < num; seek2++)//�ڲ�ѭ���ҳ�Ӧ�洢�ڸ�Ԫ�ص�ֵ
		{
			if (strcmp((xinxi_kaobei + seek1)->name_min, (xinxi_kaobei + seek2)->name_min) > 0)//��ǰһ���ַ���������ĸ��������λ�ں�һ���ַ���������ĸ����
			{
				temp = *(xinxi_kaobei + seek1);
				xinxi_kaobei[seek1] = xinxi_kaobei[seek2];//*******************************����д��**********************************
				xinxi_kaobei[seek2] = temp;
			}
		}
	}

	printf("�����ǰ��˿���ĸ����ĳ˿��б�\n");
	for (int index = 0; index < num; index++)
	{
		if ((xinxi + index)->yuding_biaoji != 0)
		printf("�˿�����%s ��λ�ţ�%d \n",(xinxi_kaobei+index)->name_min,(xinxi_kaobei)->zuoweibianhao );
	}
}
int fenpeizuowei(XINXI* xinxi, int num)
{
	int zuoweibianhao;
	printf("��������ҪԤ������λ���(����q���˳�)��");

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
			printf("δ�ҵ�����λ��ţ����������룡");
			continue;
		}

		if((xinxi+j)->yuding_biaoji==1)
		{
			printf("����λ����ѱ�Ԥ�������������룡");
			continue;
		}

		break;
	}
	
	if(j==-1)//����qʱ
		eatline();

	if (j != -1)
	{
		char name_min[20];
		char name_xin[20];

		printf("���������������գ�");
		scanf("%s%s", name_min, name_xin);
		eatline();

		(xinxi + j)->yuding_biaoji = 1;
		strcpy((xinxi + j)->name_min, name_min);
		strcpy((xinxi + j)->name_xin, name_xin);

		printf("��λ��ţ�%d   %s %s\n", (xinxi + j)->zuoweibianhao, (xinxi + j)->name_min, (xinxi + j)->name_xin);
		puts("д����ɣ�");
	}

	return j;
}
int quxiaozuowei(XINXI* xinxi, int num)
{
	if (num == -1)
	{
		printf("����δ����λ��");
	}
	else
	{
		printf("ȷ��ȡ����λ���%d��Ԥ���𣿣�����y��n��");
		char choice;

		choice = getchar();
		choice = tolower(choice);//ʹ��C���tolower()

		eatline();
		while (strchr("yn", choice) == NULL)
		{
			puts("������y��n");
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

			puts("��ɾ��Ԥ����Ϣ��");
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
	int zuoweibianhao;//��λ���
	int yuding_biaoji;//��λ��Ԥ���ı��
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
	XINXI xinxi[4][SIZE] = { {0} };//�ĸ����࣬ÿ�����඼�Ǹ�XINXI���ֵĽṹ

	printf("��ѡ�񺽰�ţ�102	311	444	519	������0���˳���:");
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
				puts("���ڴ�����102");
				break;
			case 311:
				x = 1;
				puts("���ڴ�����311");
				break;
			case 444:
				x = 2;
				puts("���ڴ�����444");
				break;
			case 519:
				x = 3;
				puts("���ڴ�����519");
				break;
			default:
				if (hangbanhao == 0)
					exit(1);
				else
				{
					puts("�����������������룡");
					continue;
				}
			}
			break;
		}

		showmenu();
		char choice='0';
		int j = -1;//��ʾԤ������λ������ڵĵ�x���ṹ
		while ((choice= get_choice())&&choice!='f')					//*******************************ע*********************************************************
		{																							//����д����while (		choice= get_choice()&&choice!='f'     )	������a����choice=1
			switch (choice)																//���ȼ�����������ϵ���߼�����ֵ
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
				printf("���˳���\n");				
			}
			showmenu();
		}

		printf("��ѡ�񺽰�ţ�102	311	444	519	������0���˳���:");
	}
	return 0;
}
void showmenu(void)
{
	puts("�������ѡ����ѡ��һ��ܣ�");
	puts("a)��ʾ�������λ����");
	puts("b)��ʾ�������λ�б�");
	puts("c)����ĸ��˳����ʾ��λ�ϵĳ˿��б�");
	puts("d)Ϊ��������λ");
	puts("e)���������λ��¼");
	puts("f)�˳�");
}
char get_choice(void)
{
	char choice;

	choice = getchar();
	choice = tolower(choice);//ʹ��C���tolower()

	eatline();
	while (strchr("abcdef", choice) == NULL)
	{
		puts("������a��b��c��d��e��f");
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

	printf("����%d������λ\n", count);
}
void show_list_of_empty_seats(XINXI* xinxi, int num)
{
	int i;
	for (i = 0; i < num; i++)
	{
		if ((xinxi + i)->yuding_biaoji == 0)
			printf("��λ���:%3d    ", (xinxi + i)->zuoweibianhao);

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
		xinxi_kaobei[index] = xinxi_kaobei[index];//�����ṹ�����ÿ��Ԫ��
	}

	XINXI  temp;
	int seek1, seek2;

	for (seek1 = 0; seek1 < num - 1; seek1++)//���ѭ��ָ�����ڴ����Ԫ��
	{
		for (seek2 = seek1 + 1; seek2 < num; seek2++)//�ڲ�ѭ���ҳ�Ӧ�洢�ڸ�Ԫ�ص�ֵ
		{
			if (strcmp((xinxi_kaobei + seek1)->name_min, (xinxi_kaobei + seek2)->name_min) > 0)//��ǰһ���ַ���������ĸ��������λ�ں�һ���ַ���������ĸ����
			{
				temp = *(xinxi_kaobei + seek1);
				xinxi_kaobei[seek1] = xinxi_kaobei[seek2];//*******************************����д��**********************************
				xinxi_kaobei[seek2] = temp;
			}
		}
	}

	printf("�����ǰ��˿���ĸ����ĳ˿��б�\n");
	for (int index = 0; index < num; index++)
	{
		if ((xinxi + index)->yuding_biaoji != 0)
			printf("�˿�����%s ��λ�ţ�%d \n", (xinxi_kaobei + index)->name_min, (xinxi_kaobei)->zuoweibianhao);
	}
}
int fenpeizuowei(XINXI* xinxi, int num)
{
	int zuoweibianhao;
	printf("��������ҪԤ������λ���(����q���˳�)��");

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
			printf("δ�ҵ�����λ��ţ����������룡");
			continue;
		}

		if ((xinxi + j)->yuding_biaoji == 1)
		{
			printf("����λ����ѱ�Ԥ�������������룡");
			continue;
		}

		break;
	}

	if (j == -1)//����qʱ
		eatline();

	if (j != -1)
	{
		char name_min[20];
		char name_xin[20];

		printf("���������������գ�");
		scanf("%s%s", name_min, name_xin);
		eatline();

		(xinxi + j)->yuding_biaoji = 1;
		strcpy((xinxi + j)->name_min, name_min);
		strcpy((xinxi + j)->name_xin, name_xin);

		printf("��λ��ţ�%d   %s %s\n", (xinxi + j)->zuoweibianhao, (xinxi + j)->name_min, (xinxi + j)->name_xin);
		puts("д����ɣ�");
	}

	return j;
}
int quxiaozuowei(XINXI* xinxi, int num)
{
	if (num == -1)
	{
		printf("����δ����λ��");
	}
	else
	{
		printf("ȷ��ȡ����λ���%d��Ԥ���𣿣�����y��n��");
		char choice;

		choice = getchar();
		choice = tolower(choice);//ʹ��C���tolower()

		eatline();
		while (strchr("yn", choice) == NULL)
		{
			puts("������y��n");
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

			puts("��ɾ��Ԥ����Ϣ��");
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

	void (*function_p[3])(void) = {showmenu1,showmenu2,showmenu3};//����һ������ָ�����顣

	puts("��ѡ��˵�ǰ����ĸ(����a��b��c)��");

	choice = getchar();
	choice = tolower(choice);//ʹ��C���tolower()

	eatline();
	while (strchr("abc", choice) == NULL)
	{
		puts("������a��b��c");
		choice = tolower(getchar());
		eatline();
	}

	switch (choice)
	{
	case 'a':
		function_p[0] = showmenu1;//����֮ǰ����ʼ����������Ժ���ָ�븳ֵ
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
	puts("����һ���˵�a��");
}
void showmenu2(void)
{
	puts("����һ���˵�b��");
}
void showmenu3(void)
{
	puts("����һ���˵�c��");
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
	static int i = 0;//ֻ�ڱ���transform()ʱ����ʼ��һ��

	double jieguo[100] = { 0 };

	*(jieguo + i) = p(*(source+i));

	i++;

	return (*(jieguo + i-1));//********ע��-1����Ҫд***************************
}
#endif