#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//
#if 1
#endif


//�����������á�����Ԥ����֮ǰ�Գ�����з��룬��1.�ַ�ӳ�䵽Դ�ַ���2.ɾ����б��+[Enter]��ʵ��3.���ı����ֳ���������
#if 0
int/*�⿴��������һ���ո�*/ceshi;
int main(void)
{
	printf("����һ��\
���ı�");

	return 0;
}
#endif


//#defineԤ����ָ����÷�
#if 0
#define TWO 2
#define FOUR TWO*TWO
#define DAYIN1 printf("X��ֵΪ%d\n",X)
#define DAYIN2 "X��ֵ��%d\n"
const char* p = "X��ֵ��%d\n";
#define MINYAN "consistency is the last refuge of the unimag\
native"																													//��б��+[Enter]�Ѹö������쵽��һ��

int main(void)
{
	int X = TWO;
	DAYIN1;

	X = FOUR;
	printf(DAYIN2,X);			//��һ
	printf(p, X);						//����


	printf("%s\n",MINYAN);
	printf("TWO:MINYAN\n");

	return 0;
}
#endif


//ʹ�ô������ĺ�
#if 0
#define SQUARE(X)				X*X
#define DAYIN(X)					printf("����ǣ�%d\n",X)

int main(void)
{
	int x = 5;
	int z;

	printf("x=%d\n",x);
	z = SQUARE(x);
	printf("SQUARE(x) :");
	DAYIN(z);

	z = SQUARE(2);
	printf("SQUARE(2) :");
	DAYIN(z);


	printf("SQUARE(x+2) :");
	DAYIN(SQUARE(x + 2));				//��չ����x+2*x+2=17

	printf("100/SQUARE(2) :");
	DAYIN(100/SQUARE(2));			//��չ����100/2*2=100

	printf("x=%d\n", x);
	printf("SQUARE(++x) :");				
	DAYIN(SQUARE(++x));				//��չ����++x  *  ++x   ��ֵ��δ������Ϊ

	printf("������x=%d\n", x);

	return 0;
}
#endif


//��#������Ѻ��β��滻Ϊʵ���ַ���������ַ������
#if 0
#define DAYIN(x)			printf("����"#x"��ƽ���ǣ�%d\n",((x)*(x)))
#define DAYIN1(x)			printf("����#x��ƽ���ǣ�%d\n",((x)*(x)))				//******ע******   #x����Ϊ��ͨ�ı��������Ǹ����滻�ļǺ�

int main(void)
{
	int y = 5;

	DAYIN(y);
	DAYIN(2+4);

	DAYIN1(y);

	return 0;
}
#endif


//��##������Ѻ��β��滻Ϊʵ�κ���мǺ����
#if 0
#define X(n)							x##n
#define DAYIN_X(n)				printf("x"#n"=%d\n",x##n)

int main(void)
{
	int X(1) = 1;							//��int x1=1;
	int X(2) = 2;

	DAYIN_X(1);						//��printf("x1=%d\n",x1);
	DAYIN_X(2);

	return 0;
}
#endif


//ʹ�ñ�κ�
#if 0
#include <math.h>
#define 	DAYIN(X,...)				printf("Message "#X": "__VA_ARGS__)

int main(void)
{
	double x = 8;
	double y;

	y = sqrt(x);
	DAYIN(1,"x=%g\n",x);
	DAYIN(2, "y=%.2lf\n", y);

	return 0;
}
#endif


//ʹ���������������C����
#if 0
#define JUST_CHECKING
#define LIMIT   4

int main(void)
{
	int total = 0;

	for (int i = 0; i < LIMIT; i++)
	{
		total += 2 * i;
#ifdef JUST_CHECKING
		printf("i=%d, total=%d\n", i, total);
#endif
	}
	
	printf("total=%d\n",total);
	
	return 0;
}
#endif


//Ԥ������Ԥ�����ʶ��__func__
#if 0
#line 1																//��������Ϣ������һ���к�Ϊ1
void function(void);

int main(void)
{
	//printf("C��׼��%ld\n", __STDC_VERSION__);

	printf("�ļ���Ϊ%s\n",__FILE__);

	printf("������%s\n",__DATE__);
	printf("ʱ����%s\n", __TIME__);

	printf("���е��к���%d\n",__LINE__ );
	printf("����ִ�еĺ�����%s\n", __func__);
	function();

	return 0;
}
void function(void)
{
	printf("���е��к���%d\n", __LINE__);
	printf("����ִ�еĺ�����%s\n", __func__);
}
#endif


//����ѡ����ʽ(��IDE��֧��)
#if 0
#define GENERIC(X)			_Generic((X),\
			int:"int",\
			float:"float",\
			double:"double",\
			default:"other"\
)

int main(void)
{
	int num = 5;

	printf("%s\n",GENERIC(num));
	printf("%s\n", GENERIC(2.0*num));
	printf("%s\n", GENERIC((long)num));		
	printf("%s\n", GENERIC(&num));				//&num������int*

	return 0;
}
#endif


//ʹ����������
#if 1
inline static double square(double x);

int main(void)
{
	double num = 5.0;
	printf("%.2lf",square(num));

	return 0;
}
double square(double x)
{
	return (x*x);
}
#endif