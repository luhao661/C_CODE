#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main(void)
//{
//	char a[30];
//	int b;
//	scanf("%s",&a);
//	printf("%s\n",a);
//	scanf("%d",&b);
//	printf("%d",b);
//
//	return 0;
//}

//
//int main(void)
//{
//	printf("%c%c%c",'H',105,'\41');
//	return 0;
//}


//#define Q "abc"
//int main(void)
//{
//	printf("\"%s\"",Q);
//
//	return 0;
//}


//5.��ӡ���
//#define BOOK "War and Peace"
//int main(void)
//{
//	float cost = 12.99;
//	float percent = 80.0;
//
//	printf("This copy of \"%s\" sells for $%.2f.\n",BOOK,cost);
//	printf("That is %.0f%% of list.", percent);
//
//	return 0;
//}
//



//int main(void)
//{
//	int n;
//	scanf("%*s%d",&n);
//	printf("%d",n);
//
//	return 0;
//}
//

//4.8�����ϰ
//1.
//int main(void)
//{
//	char name1[10];
//	char name2[10];
//
//	printf("�������������\n");
//	scanf("%s",name2);
//	printf("����������գ�\n");
//	scanf("%s",name1);
//	printf("�������(��+��)��%s,%s",name2,name1);
//
//	return 0;
//}



//2.
//int main(void)
//{
//	char name[30];
//	printf("������������֣�");
//	scanf("%s",name);
//	printf("\"%s\"\n",name);
//	printf("\"%20s\"\n",name);
//	printf("\"%-20s\"\n",name);
//	printf("%*s\n",strlen(name)+3, name);
//
//	return 0;
//}


//3.
//int main(void)
//{
//	float a;
//	printf("������һ������ֵ��");
//	scanf("%f",&a);
//	printf("The input is %.1f or %.1e\n",a,a);
//	printf("The input is %+.3f or %.3E\n",a,a);
//
//	return 0;
//}


//4.
//int main(void)
//{
//	float a;
//	char name[20];
//	printf("���������(cm)�����������");
//	scanf("%f  %s",&a,name);
//	printf("%s, you are %.3f (m) tall",name,a/100.0);
//
//	return 0;
//}


//5.
//int main(void)
//{
//	float speed, size;
//	printf("�����������ٶ�(Mb/S),���ļ���С(MB)��_____\b\b\b\b\b");
//	scanf("%f%f",&speed,&size);
//	printf("At %.2f megabits per sencond, a file of %.2f megabytes\n",speed,size);
//	printf("downloads in %.2f seconds.\n",size/(speed/8));
//	return 0;
//}


//6.
//#include <string.h>
//int main(void)
//{
//	char name1[20];
//	char name2[20];
//	
//	printf("�������û�������");
//	scanf("%s",name2);
//	printf("�������û����գ�");
//	scanf("%s",name1);
//	printf("%s %s\n",name2,name1);
//	printf("%*zd %*zd\n\n",strlen(name2),strlen(name2),strlen(name1),strlen(name1));  // ��û��дͷ�ļ�����%zd������д���
//	printf("%-s %-s\n", name2, name1);
//	printf("%-*zd %-*zd\n\n",strlen(name2),strlen(name2),strlen(name1),strlen(name1));
//
//	return 0;
//}


//7.
//#include <float.h>
//int main(void)
//{
//	float a = 1.0 / 3.0;
//	double b = 1.0 / 3.0;
//	printf("��ʾС�����6λ��%.6f\n",a);
//	printf("��ʾС�����12λ��%.12f\n", a);
//	printf("��ʾС�����16λ��%.16f\n\n\n", a);
//	printf("��ʾС�����6λ��%.6f\n", b);
//	printf("��ʾС�����12λ��%.12f\n", b);
//	printf("��ʾС�����16λ��%.16f\n", b);
//	printf("float precision = %d digits\n",FLT_DIG);
//	printf("double preision = %d digits\n",DBL_DIG);
//
//	return 0;
//}


//8.
#define YINLI_TO_QIANMI    1.609
#define JIALUN_TO_SHENG 3.785
int main(void)
{
	float mileage, jialun;
	float qianmi, sheng,consume;

	printf("���������е����(Ӣ��)�����ĵ�������(����)��");
	scanf("%f %f",&mileage,&jialun);
	printf("����ÿ����������ʻ��Ӣ����Ϊ��");
	printf("%.1fӢ��/����,",mileage/jialun);
	qianmi = mileage * YINLI_TO_QIANMI;
	sheng = jialun * JIALUN_TO_SHENG;
	consume = sheng/qianmi * 100;
	printf("�൱��ÿ�ٹ�������������Ϊ��");
	printf("%.1f��/100����\n\n\n",consume);
	return 0;
}