#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//10.
//int jisuan(int x, int y);
//int main(void)
//{
//	int a, b;
//	
//	printf("Enter lower and upper integer limits:");
//	scanf("%d%d",&a,&b);
//	while (a < b)
//	{
//		printf("The sums of the squares from %d to %d is %d\n", a * a, b * b, jisuan(a , b ));
//		printf("Enter next set of limits:");
//		scanf("%d%d", &a, &b);
//	}
//	printf("Done\n");
//	return 0;
//}
//int jisuan(int x, int y)
//{
//	int i;
//	int sum=x*x;
//	for (i = x+1 ; i <= y; i++)
//		sum += i*i;
//	return sum;
//}


//11.
//int main(void)
//{
//	int shuzu[8];
//	int last;
//	int i;
//	printf("������˸�������");
//	scanf("%s",shuzu);                            //���ܴ�����ַ���������123��һ������1 2 3 ���м��ÿո����������3����
//	last=strlen(shuzu)-1;
//	for (i = last; i >= 0; i--)
//		printf("%d",shuzu[i]);
//	return 0;
//}

//int main(void)
//{
//	int shuzu[8];
//	int last;
//	int i;
//	printf("������˸�������");
//	for (i = 0; i <= 7; i++)
//		scanf("%d", &shuzu[i]);
////	last = strlen(shuzu) - 1;
//	for (i = 7; i >= 0; i--)
//		printf("%d", shuzu[i]);
//
//	printf("\n\nDone !");
//
//	return 0;
//}


//12.1
//int main(void)
//{
//	int number;
//	float i, j;
//	int k;
//	float sum;
//
//	printf("�����������");
//
//	while (scanf("%d", &number) == 1)
//	{
//		for (i = 1.0, j = 1.0, sum = 0, k = 1; k <= number; j += 1.0, k++)
//		{
//			sum += i / j;
//		}
//		printf("1.0+1.0/2.0+1.0/3.0+....(�ӵ���%d��)", number);
//		printf("��Ϊ%f", sum);
//		printf("\n\n���������(����q���˳�)��");
//	}
//
//	return 0;
//}
//12.2
//int main(void)
//{
//	int number;
//	float i, j;
//	int k;
//	float sum;
//
//	printf("�����������");
//
//	while (scanf("%d", &number) == 1)
//	{
//		for (i = 1.0, j = 1.0, sum = 0, k = 1; k <= number; j += 1.0, k++)
//		{
//			sum = sum+ (     zhengfuhao(k)    )* i / j;
//		}
//		printf("1.0-1.0/2.0+1.0/3.0-....(����%d��)", number);
//		printf("��Ϊ%f", sum);
//		printf("\n\n���������(����q���˳�)��");
//	}
//
//	return 0;
//}
//int zhengfuhao(int a)
//{
//	int l,m;
//	for (l =-1,m=1; m <= a; m++)
//		l *= (-1);
//
//	return l;
//}
//12.3�������е��ܺ�
//int main(void)
//{
//	int number;
//	float i, j;
//	int k;
//	float sum=2.0;
//
//	printf("������������>=3����");
//
//	while (scanf("%d", &number) == 1)
//	{
//		for (i = 2.0, j = 1.0, k = 3;			k <= number;			j += 1.0, k++)
//		{
//			sum += i / (2*j+1.0);
//		}
//		printf("1.0+1.0+2.0/3.0+2.0/5.0+2.0/7.0+....(�ӵ���%d��)", number);
//		printf("��Ϊ%f", sum);
//		printf("\n\n���������(����q���˳�)��");
//	}
//
//	return 0;
//}


//13.
//int main(void)
//{
//	int shuzu[8];
//	int i,index;
//	for (i = 1, index = 0;		 index <= 7;			index++)
//	{
//		i = i * 2;
//		shuzu[index] = i;
//	}
//
//	/*int a;
//	do
//	{
//		for (index = 0; index <= 7; index++)
//		printf("%5d",shuzu[index]);
//		printf("\n����q�Խ�������\n");
//
//	} while (scanf("%d",&a)  ==1);*/
//	//����
//	index = 0;
//	do
//	{
//		printf("%5d",shuzu[index++]);
//	} while (index<8);
//
//	printf("\nDone!");
//
//	return 0;
//}


//14.
//int main(void)
//{
//	double shuzu1[8], shuzu2[8];
//	int index;
//
//	printf("������8��ֵ��");
//	for(index=0;index<=7;index++)
//		scanf("%lf",&shuzu1[index]);//��д����%f����������д���Ҫע����������ƥ��
//	
//	shuzu2[0] = shuzu1[0];
//	for (index = 1; index <= 7; index++)
//		shuzu2[index] = shuzu1[index] + shuzu2[index - 1];               //������P80 Ƕ��ѭ��
//	
//	for (index = 0; index <= 7; index++)
//		printf("%6.2lf",shuzu1[index]);
//	printf("\n");
//	
//	for (index = 0; index <= 7; index++)
//		printf("%6.2lf", shuzu2[index]);
//	printf("\n");
//
//	return 0;
//}


//15.
//int main(void)
//{
//	char ch[256];
//	int index;
//
//	printf("���������ݣ�");
//	do
//	{
//		for (index = 0; index <= 255; index++)
//		scanf("%c", &ch[index]);								//������һֱ��forѭ���У�ֱ���������������
//	} while (ch[index] != '\n');
//
//	for (index = strlen(ch); index >= 0; index--)
//		printf("%c", ch[index]);
//
//	return 0;
//}
//int main(void)
//{
//	char ch[255];
//	int index;
//
//	printf("���������ݣ�");
//
//	for (index = 0; index <= 255; index++)
//	{
//		
//		
//			scanf("%c", &ch[index]);//�����do while ���'\n'
//		
//	}
//
//	for (index = strlen(ch); index >= 0; index--)
//		printf("%c", ch[index]);
//
//	return 0;
//}
//
//15.����
//#include <string.h>
//int main(void)
//{
//	char ch[256];
//	int index=-1;
//
//	printf("���������ݣ�");
//	/*do
//	{
//	  scanf("%c", &ch[index]);								
//	} while (++index, ch[index-1] != '\n');
//	  */
//	do
//	{
//		index++;
//		scanf("%c", &ch[index]);
//	} while (ch[index] != '\n');
//
//	/*do
//	{
//		scanf("%c", &ch[index]);
//		index++;
//	} while (ch[index] != '\n' );*/  //������ⲻ��'\n'����Ϊindex������ƶ���һλ
//
//	printf("���ݵ�����ǣ�");
//	for (index--; index >= 0; index--)					//��д��index=strlen(ch)-1,������ĵ�һ����������ƫ�Ƶ�ַΪ255
//		printf("%c", ch[index]);								//�ĵ�Ԫ�洢�����ݡ�
//
//	return 0;
//}


//16.
//int main(void)
//{
//	float Da=100.0, De=100.0;
//	int n,i;
//	/*printf("����������");
//	scanf("%d",&n);
//
//	printf("Da:\n");
//	for (i = 1; i <= n; i++)
//	{
//		Da += 10;
//		printf("��%d����%8.2f\n", i,Da);
//	}
//
//	printf("De:\n");
//	for (i = 1; i <= n; i++)
//	{
//		De += De*0.05;
//		printf("��%d����%8.2f\n", i, De);
//	}*/
//	n = 0;
//	do
//	{
//		Da += 10;
//		De += De * 0.05;
//		n++;
//	}while(Da > De);
//	printf("��%d��De��DaͶ�ʶ���࣬Da��%8.2f De��%8.2f",n,Da,De);
//
//	return 0;
//}


//17.
//int main(void)
//{
//	float money=1000000.0;
//	int i,n;
//	printf("����������");
//	scanf("%d",&n);
//
//	for (i = 1; i <= n; i++)
//	{
//		money += money * 0.08;
//		money -= 100000;
//		printf("%d���ʣ��%.2f\n",i,money);
//	}
//
//	return 0;
//}
//������do whileѭ��


//18.
//int main(void)
//{
//	int friends;
//	int n,i;
//
//	printf("������������");
//	scanf("%d",&n);
//
//	for (i = 1, friends = 5; friends <= 150&&i<=n; i++)
//	{
//		friends -= i;
//		friends *= 2;
//		printf("��%d����%d������\n",i,friends);
//	}
//
//	return 0;
//}
// 
//int main(void)
//{
//	int friends;
//	int i;
//
//	for (i = 1, friends = 5; friends <= 150; i++)
//	{
//		friends -= i;
//		friends *= 2;
//		printf("��%d����%d������\n",i,friends);
//	}
//
//	return 0;
//}


