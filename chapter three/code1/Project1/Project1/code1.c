#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main (void)
//{
//	float weight;
//	float value;
//	printf("Are you worth your weight in platinum?\n");
//	printf("Let's check it out.\n");
//	printf("Please enter your weight in pounds:");
//	scanf("%f", &weight);
//
//	value = 1700.0 * weight * 14.5833;
//	printf("Your weight in platinum is worth $%.2f.\n",value);
//	return 0;
//}


//int main()
//{
//	int ten = 10;
//	int two = 2;
//	printf("%d��%d��%d\n",ten, two, ten-two);
//	printf("%d��%d��%d\n",ten);/*����д��*/
//	printf("%d��%d��%d\n", ten , two, 8);//��Ҳ��
//	return 0;
//
//}
//
//


//��ʮ���ƣ��˽��ƣ�ʮ�����ƴ�ӡʮ������100
//int main(void)
//{
//	short x=100;
//	printf("dec=%d octal=%o hex=%x\n",x,x,x);
//	printf("dec=%#d octal=%#o hex=%#x\n", x, x, x);
//	return 0;
//}

//����int��ϵͳ�������ֵ
//int main(void)
//{
//	int i = 2147483647;
//	long int   j = 4294967295;
//	printf("%d,%d,%d\n",i,i+1,i+2);
//	printf("%d,%d,%d",j,j+1,j+2);
//	return 0;
//}


//����printf()������
//int main(void)
//{
//	unsigned int un = 3000000000;
//	short end = 200;
//	long big = 65537;
//	long long  verybig = 12345678908642;
//	printf("un=%u and not %d\n",un,un);
//	printf("end=%hd and %d\n",end,end);
//	printf("big=%ld and not %hd\n",big,big);
//	printf("very big =%lld and not %ld\n\a",verybig, verybig);
//	printf("�˸�\b\b\b");
//	printf(" ˫����\"");
//	printf("�ʺ�\?\n");
//	printf("�ʺţ�");
//	printf("123");
//	printf("���Իس�����    \r");
//	//����д��      printf("��˵,��a \ is a backslash."\n") ;     
//	printf("��˵,\" a \\ is a backslash.\"\n");
//	return 0;
//	
//}


int main(void)
{
	char a = '\a';
	printf("\a");
	return 0;
}
