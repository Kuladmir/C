#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#define SLDataType int
typedef struct SeqList
{
	SLDataType* a;
	int size;
	int capacity;

}SL;
void SeqListInit(SL* ps)//��ʼ��
{
	ps->a = NULL;
	ps->size = 0;
	ps->capacity = 0;
}
void SeqListPushFront(SL* ps, SLDataType x)//ͷ�庯��ʵ��
{
	int newcapacity;
	if (ps->size == ps->capacity)
	{
		if (ps->capacity == 0)
			newcapacity = 4;
		else
			newcapacity = ps->capacity * 2;//ȡ2����Ϊ�������ʵ�
		SLDataType* tmp = (SLDataType*)realloc(ps->a, newcapacity * sizeof(SLDataType));
		if (tmp == NULL)
		{
			printf("����realloc fail\n");
			exit(-1);
		}
		ps->a = tmp;
		ps->capacity = newcapacity;
	}
	//Ų������
	int end = ps->size - 1;
	while (end >= 0)
	{
		ps->a[end + 1] = ps->a[end];
		end--;
	}
	ps->a[0] = x;
	ps->size++;
}
void SeqListPushBack(SL* ps, SLDataType x)//β�庯��
{
	int newcapacity;
	if (ps->size == ps->capacity)
	{
		if (ps->capacity == 0)
			newcapacity = 4;
		else
			newcapacity = ps->capacity * 2;//ȡ2����Ϊ�������ʵ�
		SLDataType* tmp = (SLDataType*)realloc(ps->a, newcapacity * sizeof(SLDataType));
		if (tmp == NULL)
		{
			printf("����realloc fail\n");
			exit(-1);
		}
		ps->a = tmp;
		ps->capacity = newcapacity;
	}
	ps->a[ps->size] = x;
	ps->size++;
}
void SeqListPrint(SL* ps)
{
	int i;
	for (i = 0; i < ps->size; i++)
	{
		printf("%d ", ps->a[i]);
	}
	printf("\n");
}
void SeqListCheckCapacity(SL* ps)
{
	int newcapacity;
	if (ps->size == ps->capacity)
	{
		if (ps->capacity == 0)
			newcapacity = 4;
		else
			newcapacity = ps->capacity * 2;//ȡ2����Ϊ�������ʵ�
		SLDataType* tmp = (SLDataType*)realloc(ps->a, newcapacity * sizeof(SLDataType));
		if (tmp == NULL)
		{
			printf("����realloc fail\n");
			exit(-1);
		}
		ps->a = tmp;
		ps->capacity = newcapacity;
	}
}
void SeqListPopFront(SL* ps)//ͷɾ����
{
	assert(ps->size > 0);
	int begin = 1;
	while (begin < ps->size)
	{
		ps->a[begin - 1] = ps->a[begin];
		begin++;
	}
	ps->size--;
}
void SeqListDestory(SL* ps)//���ٿռ�
{
	free(ps->a);
	ps->a = NULL;
}
void SeqListPopBack(SL* ps)//βɾ����
{
	/* ��ʽһ
	if (ps->size > 0)
		ps->size--;
	*/
	//��ʽ��
	assert(ps->size > 0);
	ps->size--;
}
void SeqListFind(SL* ps, SLDataType x)//��������
{
	int i,pk=0;
	for (i = 0; i < ps->size; i++)
	{
		if (x == ps->a[i])
		{
			printf("���ҵ����ʼ�ڵ�%d������\n", i + 1);
			pk = 1;
			break;
		}
	}
	if (pk == 0)
		printf("δ�ҵ������\n");
}
void SeqListInsert(SL* ps, SLDataType x, int i)//�����������
{
	int j, k;
	SeqListCheckCapacity(ps);
	printf("%d\n", ps->size);
	for (j = ps->size; j > i - 2; j--)
	{
		ps->a[j + 1] = ps->a[j];
	}
	ps->a[i - 1] = x;
	ps->size++;
	ps->capacity++;
}
void SeqListErase(SL* ps, int i)//����ɾ������
{
	if (ps->capacity < i)
	{
		printf("�ñ���û�и�����\n");
	}
	else
	{
		int j;
		for (j = i - 1; j < ps->size; j++)
		{
			ps->a[j - 1] = ps->a[j];
		}
	}
	ps->size--;
}
int main()
{
	SL s1;
	SeqListInit(&s1);
	SeqListPushBack(&s1, 5);
	SeqListPushBack(&s1, 8);
	SeqListPushBack(&s1, 9);
	SeqListPushBack(&s1, 4);
	SeqListPushBack(&s1, 10);
	SeqListPrint(&s1);
	//SeqListFind(&s1, 5);
	SeqListInsert(&s1, 152, 4);
	SeqListPrint(&s1);
	SeqListErase(&s1, 4);
	SeqListPrint(&s1);
	SeqListDestory(&s1);
}