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
			printf("����δ֪����");
			break;
		}
		nights = getnights();
		showprice(fangjia,nights);
	}
	printf("�ټ���\n\n\n");

	return 0;
}