#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


//�����ϰ
//1.
#if 0
int critic(int num);
int main(void)
{
	int units;
	printf("How many pounds to a firkin of butter?\n");
	scanf("%d",&units);

	while (units != 56)
	{
		units=critic(units);
	}
	printf("You must have looked it up!\n");

	return 0;
}
int critic(int num)//units��num�ĵ�ַ����ͬ��
{
	printf("No luck, my friend. Try again.\n");
	scanf("%d",&num);

	return num;
}
#endif


//2.																						//��pe12-2a.c, pe12-2a.hһ�����
#if 0
#include "pe12-2a.h"
int main(void)
{
	int mode;

	printf("Enter 0 for metric mode, 1 for US mode :");
	scanf("%d",&mode);
	while (mode >= 0)
	{
		set_mode(mode);
		get_info();
		show_info();
		printf("Enter 0 for metric mode, 1 for US mode ");
		printf("(-1 to quit) :");
		scanf("%d", &mode);
	}
	printf("Done.\n");

	return 0;
}
#endif


//3.																						//��pe12-3a.c, pe12-3a.hһ�����
#if 0
#include "pe12-3a.h"
int main(void)
{
	int mode,mode1;

	printf("Enter 0 for metric mode, 1 for US mode :");
	scanf("%d", &mode);
	while (mode >= 0)
	{
		if (mode == 0 || mode == 1)
			mode1 = mode;//����0��1�����mode1��ֵ��

		if (mode != 0 && mode != 1)//���벻��0�Ҳ���1������ԭ��mode1��ֵ����mode��
		{
			char xianshi1[7] = "US";
			char xianshi2[7] = "metric";
			if (mode1 == 0)
			{
				printf("Invalid mode specified. Mode %d(%s) used.\n", mode1, xianshi2);
				mode = mode1;
			}
			if (mode1 == 1)
			{
				printf("Invalid mode specified. Mode %d(%s) used.\n", mode1, xianshi1);
				mode = mode1;
			}
		}		

		mode=set_mode(mode);
		get_info(mode);

		printf("Enter 0 for metric mode, 1 for US mode ");
		printf("(-1 to quit) :");
		scanf("%d", &mode);
	}
	printf("Done.\n");

	return 0;
}
#endif


//4.
#if 1
int count;
int ceshi(void);
int main(void)
{
	int num;
	int cishu;
	puts("Ҫ���ü��Σ�");
	scanf("%d",&num);
	for (int i = 0; i < num; i++)
	{
		cishu = ceshi();
		printf("��������%d��\n",cishu);
	}

	return 0;
}
int ceshi(void)
{
	count++;
	return count;
}
#endif
