#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//��һ���ӡ����
/*int main(void)
{
	printf("��·�");
	printf("��\n");
	printf("·�");
	printf("��");
	printf("·�");
}*/
#define �� "��"
#define ��  "·�"
int main (void)
{

printf("%s%s",��,��);
return 0;
}


//��ӡ����ת��Ϊ����
//int main(void)
//{
//	int a, b;//���������
//	a = 23;
//	printf("�ҵ�������%d��, �����൱��%d�졣",a , b=a*365);
//}

//��4��
//void jolly(void);
//void deny(void);
//int main(void)
//{
//	//��while              
//	int i = 1;
//	while(i < 4)
//	{
//		i++;
//		jolly();
//	}
//	deny();
//
//	/*��if */
//	/*int i = 1;
//	if (i < 4)
//	{
//		i++;
//		jolly();
//		goto start ;
//
//	}
//	else  
//		deny();*/                        //if���жϣ�while����ѭ��
//
//
//	return 0;
//}       
//
//void jolly(void)
//{
//	printf("For he's a jolly good fellow!\n");
//}
//void deny(void)
//{
//	printf("which nobody can deny!");
//}


//������
//void br();
//void ic();
//int main(void)
//{
//	br();
//	printf(", ");
//	ic();
//	printf("\n");
//	ic();
//	printf("\n");
//	br();
//}
//void br()
//{
//	printf("Brazil, Russia");
//}
//void ic()
//{
//	printf("India, China");
//}

//������
//int main(void)
//{
//	int toes = 10;
//	int erbei, pinfang;
//	printf("toes=%d, ����Ϊ%d, ƽ��Ϊ%d��", toes, erbei=2*toes, pinfang=toes*toes);
//
//}

//������
//void smile(void);
//int main(void)
//{
//	smile(); smile(); smile();
//	printf("\n");
//	smile(); smile();
//	printf("\n");
//	smile();
//}
//void smile (void)
//{
//	printf("Smile!");
//}

//�ڰ���
//void one_three(void);
//void two(void);
//int main(void)
//{
//	printf("starting now:\n");
//	one_three();
//	printf("done!");
//}
//void one_three(void)
//{
//	printf("one\n");
//	two();
//	printf("three\n");
//}
//void two(void)
//{
//	printf("two\n");
//}