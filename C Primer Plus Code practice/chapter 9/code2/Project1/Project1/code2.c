#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include "hotel.h"
int main(void)
{
	int nights;
	double fangjia;
	int xuanze;

	while ((xuanze = menu()) != QUIT)
	{
		switch (xuanze)
		{
		case 1:
			fangjia = HOTEL1;
			break;
		case 2:
			fangjia = HOTEL2;
			break;
		case 3:
			fangjia = HOTEL3;
			break;
		case 4:
			fangjia = HOTEL4;
			break;
		default:
			printf("出现未知错误！");
			break;
		}
		nights = getnights();
		showprice(fangjia,nights);
	}
	printf("再见！\n\n\n");

	return 0;
}