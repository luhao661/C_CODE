#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//���ܲ��ߵĳ���
const int S_PER_M = 60;
const int S_PER_H = 3600;
const double M_PER_K = 0.62137;
int main(void)
{
	double distk, distm;
	double rate;
	int min,sec;
	int time;
	double mtime;
	int mmin, msec;

	printf("��������ܻ���Ӣ��͹������ÿӢ����ʱ���ٶȣ�Ӣ��/Сʱ��\n");
	printf("���������ܹ��Ĺ�������");
	scanf("%lf",&distk);
	printf("�����������ʱ\n");
	printf("�����������\n");
	scanf("%d",&min);
	printf("����������\n");
	scanf("%d", &sec);

	time = min * S_PER_M + sec;
	distm = M_PER_K * distk;
	rate = distm / ( (double)time / S_PER_H);//���ã�double���Ļ����ٶ���infinite
	mtime = time / distm;
	mmin = mtime / S_PER_M;
	msec =(int) mtime % S_PER_M;

	printf("����%1.2f km (%1.2f Ӣ��) Ҫ %d ��, %d �롣\n",distk,distm,min,sec);
	printf("���൱����һӢ����ʱ%d��%d�롣\n",mmin,msec);
	printf("���ƽ���ٶ���%1.2f(Ӣ��/Сʱ)��\n",rate);

	return 0;
}

