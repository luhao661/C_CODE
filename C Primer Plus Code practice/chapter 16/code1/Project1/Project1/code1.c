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
	DAYIN(66,"x=%g\n",x);
	DAYIN(67, "y=%.2lf\n", y);

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
#if 0
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


//��ֱ������ת���ɼ����꣨���ݲ����ؽṹ����
#if 0
#include <math.h>
#define RAD_TO_DEG				(180/(4*atan(1)))				//����ת���ɽǶȵĹ�ʽ
typedef struct 
{
	double jijin;					//����
	double jijiao;					//����(�Ƕ���)
}JIZUOBIAO;
typedef struct
{
	double x;
	double y;
}ZHIJIAOZUOBIAO;

JIZUOBIAO zhuanhuan(ZHIJIAOZUOBIAO zhijiaozuobiao);

int main(void)
{
	ZHIJIAOZUOBIAO input;																	//�ṹ1
	JIZUOBIAO result;																				//�ṹ2

	puts("������ֱ��������x��y��ֵ(����q���˳�)��");
	while (scanf("%lf%lf", &input.x, &input.y) == 2)
	{
		result = zhuanhuan(input);
		printf("������%.2lf		���ǣ�%.2lf\n",result.jijin,result.jijiao);
		puts("������ֱ��������x��y��ֵ(����q���˳�)��");
	}

	return 0;
}
JIZUOBIAO zhuanhuan(ZHIJIAOZUOBIAO zhijiaozuobiao)				//�ṹ3
{
	JIZUOBIAO temp;																				//�ṹ4
	temp.jijin = sqrt(zhijiaozuobiao.x* zhijiaozuobiao.x+ zhijiaozuobiao.y * zhijiaozuobiao.y);
	//temp.jijiao = RAD_TO_DEG * atan2(zhijiaozuobiao.x,zhijiaozuobiao.y);  //����Ӧ��Ϊy���ֵ����x���ֵ
	temp.jijiao = RAD_TO_DEG * atan2(zhijiaozuobiao.y,zhijiaozuobiao.x);  

	return temp;
}
#endif


//��ֱ������ת���ɼ����꣨���ݽṹ��ַ����
#if 0
#include <math.h>
#define RAD_TO_DEG				(180/(4*atan(1)))				//����ת���ɽǶȵĹ�ʽ
typedef struct
{
	double jijin;					//����
	double jijiao;					//����(�Ƕ���)
}JIZUOBIAO;
typedef struct
{
	double x;
	double y;
}ZHIJIAOZUOBIAO;

void zhuanhuan(ZHIJIAOZUOBIAO * zhijiaozuobiao,JIZUOBIAO * jizuobiao);

int main(void)
{
	ZHIJIAOZUOBIAO input;																	
	JIZUOBIAO result;																			

	puts("������ֱ��������x��y��ֵ(����q���˳�)��");
	while (scanf("%lf%lf", &input.x, &input.y) == 2)
	{
		zhuanhuan(&input,&result);
		printf("������%.2lf		���ǣ�%.2lf\n", result.jijin, result.jijiao);
		puts("������ֱ��������x��y��ֵ(����q���˳�)��");
	}

	return 0;
}
void zhuanhuan(ZHIJIAOZUOBIAO * zhijiaozuobiao,JIZUOBIAO * jizuobiao)			
{
	jizuobiao->jijin = sqrt(zhijiaozuobiao->x * zhijiaozuobiao->x + zhijiaozuobiao->y * zhijiaozuobiao->y);
	jizuobiao->jijiao = RAD_TO_DEG * atan2(zhijiaozuobiao->y, zhijiaozuobiao->x);

	return ;
}
#endif


//���÷���ѡ����ʽ�����巺���ຯ����
#if 0
#define RAD_TO_DEG				(180/(4*atan(1)))
#define SQRT(X)				_Generic((X),\
					long double :sqrtl,\
					default:sqrt,\
					float:sqrtf)(X)

#define SIN(X)				_Generic((X),\
					long double :sinl((X)/RAD_TO_DEG),\
					default:sin((X)/RAD_TO_DEG),\
					float:sinf((X)/RAD_TO_DEG))
#endif


//ʹ��atexit()
#if 0
#include <stdlib.h>

void sign_off(void);
void too_bad(void);

int main(void)
{
	int n;

	atexit(sign_off);//ע��sign_off()������sign_off�Ǻ���ָ��
	puts("������һ��������");
	if (scanf("%d", &n) != 1)
	{
		puts("�ⲻ��������");
		atexit(too_bad);//ע��too_bad()����
		exit(EXIT_FAILURE);//ִ�е��˴�ʱ����Ϊ�Ѿ�ע����sign_off��too_bad������exit()����µ���(�����ȳ�)��ִ����Щ����
	}
	printf("%d��%s\n",n,(n%2)==0?("ż��"):("����"));

	return 0;						//	������ִ��������ʽ����exit()
}
void sign_off(void)
{
	puts("�����˳�");
}
void too_bad(void)
{
	puts("������;�˳�");
}
#endif


//ʹ��qsort()��������һ������
#if 0
#include <stdlib.h>
#include <time.h>

#define SIZE 40
void fill_array(double *p,int n);
void show_array(const double *p,int n);
int mycompare(const void *p1,const void *p2);
int main(void)
{
	double shuzu[SIZE];
	srand((unsigned int)time(0));			/* ������� */
	fill_array(shuzu,SIZE);

	puts("�����е����������");
	show_array(shuzu,SIZE);

	qsort(shuzu,SIZE,sizeof(double),mycompare);

	puts("�����е������������ɺ�����");
	show_array(shuzu, SIZE);

	return 0;
}
void fill_array(double* p, int n)
{
	for (int index = 0; index < n; index++)
	{
		*(p + index) = (double)rand() / ((double)rand()+0.1);
	}
}
void show_array(const double* p, int n)
{
	int index;
	for ( index = 0; index < n; index++)
	{
		printf("%6.2lf", *(p + index));

		if (index % 6 == 5)
			putchar('\n');
	}
	if (index % 6 !=0)
		putchar('\n');
}
int mycompare(const void* p1, const void* p2)
{
//��һ��
	//if (*((const double*)p1) < *((const double*)p2))
	//	return -1;
	//else if (*((const double*)p1) == *((const double*)p2))
	//	return 0;
	//else
	//	return 1;

//������
	const double* a1 = (const double*)p1;
	const double* a2 = (const double*)p2;
	if (*a1 < *a2)
		return -1;
	else if (*a1 == *a2)
		return 0;
	else
		return 1;
}
#endif


//ʹ��assert()
#if 0
#include <math.h>
#include <assert.h>
//#define NDEBUG

int main(void)
{
	double x, y, z;

	puts("������һ������(����0 0���˳�����)��");
	while (scanf("%lf%lf", &x, &y) == 2 && (x != 0 || y != 0))
	{
		z = x * x - y * y;
		assert(z>=0);//�Ա��ʽ��ֵ����Ϊ�٣�����ֹ���򣬲���ʾ��������к�
		printf("���ǣ�%.2lf\n",sqrt(z));
	}

	return 0;
}
#endif


//ʹ��_Static_assert()   (��IDE��֧��)
#if 0
#include <math.h>
#include <limits.h>
_Static_assert(CHAR_BIT == 16,"�����һ�ֽڵ�λ��");

int main(void)
{
	double x, y, z;

	puts("������һ������(����0 0���˳�����)��");
	while (scanf("%lf%lf", &x, &y) == 2 && (x != 0 || y != 0))
	{
		z = x * x - y * y;
		printf("���ǣ�%.2lf\n", sqrt(z));
	}

	return 0;
}
#endif


//ʹ��memcpy()��memmove()
#if 0
#include <string.h>
#define SIZE 10

void show_array(const int *p,int n);

int main(void)
{
	int source[SIZE] = {1,2,3,4,5,6,7,8,9,10};
	int target[SIZE];

	double ceshi[SIZE / 2] = {1.0,2.0,3.0,4.0,5.0};

	puts("ʹ��memcpy()��");
	puts("Դ�ַ��������ݣ�");
	show_array(source,SIZE);

	memcpy(target,source,SIZE*sizeof(int));
	puts("Ŀ���ַ��������ݣ�");
	show_array(target, SIZE);

	puts("\nʹ��memmove()�������ڴ��������ص����������");
	memmove(target+2, target, 5 * sizeof(int));
	puts("Ŀ���ַ�����ĵ�1��5��Ԫ�ؿ�����Ŀ������ĵ�3��7��Ԫ�أ�");
	show_array(target, SIZE);

	return 0;
}
void show_array(const int* p, int n)
{
	for (int index = 0; index < n; index++)
	{
		printf("%5d",*(p+index));
	}
	putchar('\n');
}
#endif


//��κ���
#if 0
#include <stdarg.h>
double sum(int lim,...);							//1.����ԭ������һ���βκ�һ��ʡ�Ժ�

int main(void)
{
	double result1, result2;

	result1 = sum(3,1.1,2.5,13.3333333);
	result2 = sum(6, 1.1, 2.1, 13.1,4.1,5.1,6.1);

	printf("sum(3,1.1,2.5,13.3)=				%g\n",result1);
	printf("sum(6, 1.1, 2.1, 13.1,4.1,5.1,6.1)=		%g\n", result2);

	return 0;
}
double sum(int lim, ...)							//lim��parmN�βΣ���ֵΪ�����ʵ�ε�����
{
	va_list ap;											//2.����һ���洢ʡ�ԺŲ��ֵ����ݶ���ap
	va_start(ap,lim);									//3.ʵ�ε����ݿ�����ap(��ap��ʼ��Ϊ�����б�)

	double total = 0;
	for (int i = 0; i < lim; i++)
		total += va_arg(ap,double);			//4.���ʲ����б������

	va_end(ap);											//5.�ú����������(�ͷŶ�̬��������ڴ洢�������ڴ�)

	return total;
}
#endif
