#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//��˳��洢�ṹʵ��ѭ������
//����4.12.c
#if 0
#include "4.12.h"

int main()
{
	Status status;
	int num = 0, i;

	QElemType data;
	SqQueue Q;
	InitQueue(&Q);
	printf("��ʼ�����к󣬶��пշ�%u(1:�� 0:��)\n",
		QueueEmpty(Q));

	printf("���������Ͷ���Ԫ��(������%d��),-1Ϊ��ǰ������: \n",
		MAXSIZE - 1);
	//***ע***������ʱ�������л���һ�����е�Ԫ

	do
	{
		/* scanf("%data",&data); */
		data = num + 101;
		if (data == -1)
			break;
		EnQueue(&Q, data);//data��101��119(num��0��18)
		num++;
	} while (num < MAXSIZE-1 );//���19��Ԫ��(num��0��19��num���Ϊ19)

	printf("���г���Ϊ: %d\n", QueueLength(Q));
	printf("���ڶ��пշ�%u(1:�� 0:��)\n", QueueEmpty(Q));
	printf("����%d���ɶ�ͷɾ��Ԫ��,��β����Ԫ��:\n", MAXSIZE-1);
	for (i = 1; i <= MAXSIZE-1; i++)
	{
		DeQueue(&Q, &data);
		printf("ɾ����Ԫ����%d,�����Ԫ��:%d\n", data, i + 1000);
		/* scanf("%data",&data); */
		data = i + 1000;
		EnQueue(&Q, data);
	}

	i= QueueLength(Q);

	printf("���ڶ����е�Ԫ��Ϊ: \n");
	QueueTraverse(Q);
	printf("�����β������%d��Ԫ��\n", num + MAXSIZE-1);

	if (i - 2 > 0)
		printf("�����ɶ�ͷɾ��%d��Ԫ��:\n", i - 2);
	
	while (QueueLength(Q) > 2)
	{
		DeQueue(&Q, &data);
		printf("ɾ����Ԫ��ֵΪ%d\n", data);
	}

	status = GetHead(Q, &data);
	if (status)
		printf("���ڶ�ͷԪ��Ϊ: %d\n", data);

	ClearQueue(&Q);
	printf("��ն��к�, ���пշ�%u(1:�� 0:��)\n", QueueEmpty(Q));

	return 0;
}
#endif