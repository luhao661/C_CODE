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


//5.打印语句
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

//4.8编程练习
//1.
//int main(void)
//{
//	char name1[10];
//	char name2[10];
//
//	printf("请输入你的名：\n");
//	scanf("%s",name2);
//	printf("请输入你的姓：\n");
//	scanf("%s",name1);
//	printf("所以你叫(名+姓)：%s,%s",name2,name1);
//
//	return 0;
//}



//2.
//int main(void)
//{
//	char name[30];
//	printf("请输入你的名字：");
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
//	printf("请输入一个浮点值：");
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
//	printf("请输入身高(cm)和你的姓名：");
//	scanf("%f  %s",&a,name);
//	printf("%s, you are %.3f (m) tall",name,a/100.0);
//
//	return 0;
//}


//5.
//int main(void)
//{
//	float speed, size;
//	printf("请输入下载速度(Mb/S),和文件大小(MB)：_____\b\b\b\b\b");
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
//	printf("请输入用户的名：");
//	scanf("%s",name2);
//	printf("请输入用户的姓：");
//	scanf("%s",name1);
//	printf("%s %s\n",name2,name1);
//	printf("%*zd %*zd\n\n",strlen(name2),strlen(name2),strlen(name1),strlen(name1));  // 若没有写头文件，则%zd输出会有错误。
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
//	printf("显示小数点后6位：%.6f\n",a);
//	printf("显示小数点后12位：%.12f\n", a);
//	printf("显示小数点后16位：%.16f\n\n\n", a);
//	printf("显示小数点后6位：%.6f\n", b);
//	printf("显示小数点后12位：%.12f\n", b);
//	printf("显示小数点后16位：%.16f\n", b);
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

	printf("请输入旅行的里程(英里)和消耗的汽油量(加仑)：");
	scanf("%f %f",&mileage,&jialun);
	printf("消耗每加仑汽油行驶的英里数为：");
	printf("%.1f英里/加仑,",mileage/jialun);
	qianmi = mileage * YINLI_TO_QIANMI;
	sheng = jialun * JIALUN_TO_SHENG;
	consume = sheng/qianmi * 100;
	printf("相当于每百公里消耗汽油量为：");
	printf("%.1f升/100公里\n\n\n",consume);
	return 0;
}