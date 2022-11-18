#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//用顺序存储结构实现循环队列
//链接4.12.c
#if 0
#include "4.12.h"

int main()
{
	Status status;
	int num = 0, i;

	QElemType data;
	SqQueue Q;
	InitQueue(&Q);
	printf("初始化队列后，队列空否？%u(1:空 0:否)\n",
		QueueEmpty(Q));

	printf("请输入整型队列元素(不超过%d个),-1为提前结束符: \n",
		MAXSIZE - 1);
	//***注***队列满时，数组中还有一个空闲单元

	do
	{
		/* scanf("%data",&data); */
		data = num + 101;
		if (data == -1)
			break;
		EnQueue(&Q, data);//data从101到119(num从0到18)
		num++;
	} while (num < MAXSIZE-1 );//入队19个元素(num从0到19，num最后为19)

	printf("队列长度为: %d\n", QueueLength(Q));
	printf("现在队列空否？%u(1:空 0:否)\n", QueueEmpty(Q));
	printf("连续%d次由队头删除元素,队尾插入元素:\n", MAXSIZE-1);
	for (i = 1; i <= MAXSIZE-1; i++)
	{
		DeQueue(&Q, &data);
		printf("删除的元素是%d,插入的元素:%d\n", data, i + 1000);
		/* scanf("%data",&data); */
		data = i + 1000;
		EnQueue(&Q, data);
	}

	i= QueueLength(Q);

	printf("现在队列中的元素为: \n");
	QueueTraverse(Q);
	printf("共向队尾插入了%d个元素\n", num + MAXSIZE-1);

	if (i - 2 > 0)
		printf("现在由队头删除%d个元素:\n", i - 2);
	
	while (QueueLength(Q) > 2)
	{
		DeQueue(&Q, &data);
		printf("删除的元素值为%d\n", data);
	}

	status = GetHead(Q, &data);
	if (status)
		printf("现在队头元素为: %d\n", data);

	ClearQueue(&Q);
	printf("清空队列后, 队列空否？%u(1:空 0:否)\n", QueueEmpty(Q));

	return 0;
}
#endif