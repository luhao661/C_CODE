#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//#define praise "�����"
//int main(void)
//{
//	char name[60];
//
//	printf("���������ʲô��");
//	scanf("%s",name);
//	printf("Hello,%s.       %s\n\n",name,praise);
//
//	return 0;
//}


//sizeof �� strlen ������
//#include <string.h>
//#define praise "�����"
//int main(void)
//{
//	char name[40];
//
//	printf("��������ǣ�");
//	scanf("%s",name);
//	printf("������%s��%s",name,praise);
//	printf("���������%zd���ַ����ȣ�����ռ%zd���ֽڴ�С",strlen(name),sizeof (name));
//
//	return 0;
//}	


//ʹ���Ѷ���ĳ��������ų�������ʾ������
#define PI 3.14159
int main(void)
{
	float area, circum, radius;
	printf("����������İ뾶�ǣ�\n");
	scanf("%f",&radius);
	area = PI * radius * radius;
	circum = 2 * PI * radius;
	printf("����������ܳ���%8.2f,�����%8.2f",circum,area);
	return 0;
}