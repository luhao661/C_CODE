#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//++��ǰ׺�ͺ�׺������
//int main(void)
//{
//	int a, b;
//	a = b = 1;
//	int a_post, pre_b;
//
//	a_post = a++;
//	pre_b = ++b;
//	printf("a   a_post   b    pre_b\n");
//	printf("%1d%5d%8d%5d\n",a,a_post,b,pre_b);
//
//	return 0;
//}


//�ݼ������
int main(void)
{
	int count = 101;
	while (--count > 0)
	{
		printf("������%d��\n",count);
		printf("����1��,\n");
		printf("��ʣ%d��\n\n",count-1);
			
	}

		return 0;
}