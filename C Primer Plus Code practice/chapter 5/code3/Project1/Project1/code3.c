#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//给跑步者的程序
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

	printf("这个程序能换算英里和公里，计算每英里用时和速度（英里/小时）\n");
	printf("请输入你跑过的公里数：");
	scanf("%lf",&distk);
	printf("请输入你的用时\n");
	printf("先输入分钟数\n");
	scanf("%d",&min);
	printf("再输入秒数\n");
	scanf("%d", &sec);

	time = min * S_PER_M + sec;
	distm = M_PER_K * distk;
	rate = distm / ( (double)time / S_PER_H);//不用（double）的话，速度是infinite
	mtime = time / distm;
	mmin = mtime / S_PER_M;
	msec =(int) mtime % S_PER_M;

	printf("你跑%1.2f km (%1.2f 英里) 要 %d 分, %d 秒。\n",distk,distm,min,sec);
	printf("这相当于跑一英里用时%d分%d秒。\n",mmin,msec);
	printf("你的平均速度是%1.2f(英里/小时)。\n",rate);

	return 0;
}

