#define _CRT_SECURE_NO_WARNINGS 1
#if 0
#include  "pe12-3a.h"//�������ͷ�ļ����������ᱨ��ĳ�����ض��塣
int set_mode(int a)
{
	int mode;

	if (a == 0 || a == 1)
		mode = a;
	
	return mode;
}
void get_info(int b)
{
	double distance, consume;

	if (b == 0)
	{
		printf("Enter distance traveled in kilometers :");
		scanf("%lf", &distance);
		printf("Enter fuel consumed in liters :");
		scanf("%lf", &consume);
	}
	if (b == 1)
	{
		printf("Enter distance traveled in miles :");
		scanf("%lf", &distance);
		printf("Enter fuel consumed in gallons :");
		scanf("%lf", &consume);
	}
	show_info(b,distance,consume);//ע���˴�distance,consume������show_info()���ɼ�������ֵ������show_info()�������βΡ�
}
void show_info(int mode, double distance,double consume)
{
	if (mode == 0)//��/100����
	{
		printf("Fuel consumption is %.2lf liters per 100 km.\n", consume / distance * 100);
	}
	if (mode == 1)//Ӣ��/����
	{
		printf("Fuel consumption is %.2lf miles per gallon.\n", distance / consume);
	}
}
#endif