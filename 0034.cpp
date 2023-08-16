//���Ա�Ľ���
#include<stdio.h>
#include<assert.h>
#include<stdlib.h>
typedef int SLDataType;
//�ṹ�嶨��
typedef struct SeqList
{
	SLDataType* x;
	int size;
	int capacity;
}SL;
//��ʼ������
void seqlistinit(SL* ps)
{
	assert(ps);
	ps->x = NULL;
	ps->size = ps->capacity = 0;
}
//Review
void SeqListInit(SL* ps)
{
	assert(ps);
	ps->x = NULL;
	ps->size = ps->capacity = 0;
}

//β�庯��
void seqlistpushback(SL* ps, SLDataType x)
{
	assert(ps);
	int newcapacity = 0;
	if (ps->size == ps->capacity)
	{
		if (ps->capacity == 0)
			newcapacity = 4;
		else
			newcapacity = ps->capacity * 2;
		SLDataType* tmp = (SLDataType*)realloc(ps->x, sizeof(SLDataType) * newcapacity);
		assert(tmp);
		ps->x = tmp;
		ps->capacity = newcapacity;
	}
	ps->x[ps->size] = x;
	ps->size++;
}
//Review
void SeqListPushBack(SL* ps, SLDataType x)
{
	assert(ps);
	int newcapacity = 0;
	if (ps->size == ps->capacity)
	{
		if (ps->capacity == 0)
			newcapacity = 4;
		else
			newcapacity = ps->capacity * 2;
		SLDataType* tmp = (SLDataType*)realloc(ps->x, sizeof(SLDataType) * newcapacity);
		assert(tmp);
		ps->x = tmp;
		ps->capacity = newcapacity;
	}
	ps->x[ps->size] = x;
	ps->size++;
}

//βɾ����
void seqlistpopback(SL* ps)
{
	assert(ps->size != 0);
	ps->size--;
}
//Review
void SeqListPopBack(SL* ps)
{
	assert(ps);
	ps->size--;
}

//��������
void seqlistprint(SL* ps)
{
	assert(ps);
	int i;
	if (ps->size == 0)
		printf("˳�����û��Ԫ��\n");
	else
	{
		for (i = 0; i < ps->size; i++)
			if (i != (ps->size) - 1)
				printf("%d -> ", *((ps->x) + i));
			else
				printf("%d\n", *((ps->x) + ps->size - 1));
	}
}
//Review
void SeqListPrint(SL* ps)
{
	assert(ps);
	int i;
	if (ps->size == 0)
		printf("���Ա���û��Ԫ��\n");
	else
	{
		for (i = 0; i < ps->size; i++)
		{
			if (i != ps->size - 1)
				printf("%d -> ", ps->x[i]);
			if (i == ps->size - 1)
				printf("%d\n", ps->x[i]);
		}
	}
}

//ͷ�庯��
void seqlistpushfront(SL* ps, SLDataType x)
{
	assert(ps);
	int newcapacity;
	if (ps->size == ps->capacity)
	{
		if (ps->capacity == 0)
			newcapacity = 4;
		else
			newcapacity = ps->capacity * 2;
		SLDataType* tmp = (SLDataType*)realloc(ps->x, sizeof(SLDataType) * newcapacity);
		assert(tmp);
		ps->x = tmp;
		ps->capacity = newcapacity;
	}
	int end = ps->size - 1;
	while (end >= 0)
	{
		ps->x[end + 1] = ps->x[end];
		end--;
	}
	ps->x[0] = x;
	ps->size++;
}
//Review
void SeqListPushFront(SL* ps, SLDataType x)
{
	assert(ps);
	int newcapacity, end = ps->size;
	if (ps->capacity = ps->size)
	{
		if (ps->capacity)
			newcapacity = 4;
		else
			newcapacity = ps->capacity * 2;
		SLDataType* tmp = (SLDataType*)realloc(ps->x, sizeof(SLDataType) * newcapacity);
		assert(tmp);
		ps->x = tmp;
		ps->capacity = newcapacity;
	}
	while (end)
	{
		ps->x[end] = ps->x[end - 1];
		end--;
	}
	ps->x[end] = x;
	ps->size++;
}

//ͷɾ����
void seqlistpopfront(SL* ps)
{
	assert(ps->x);
	int i;
	for (i = 0; i < ps->size - 1; i++)
		ps->x[i] = ps->x[i + 1];
	ps->size--;
}
//Review
void SeqListPopFront(SL* ps)
{
	assert(ps);
	int size;
	for (size = 0; size < ps->size - 1; size++)
		ps->x[size] = ps->x[size + 1];
	ps->size--;
}

//���ֲ���
void SeqListSearch(SL* ps, SLDataType x)
{
	int i, j = 0;
	for (i = 0; i < ps->size; i++)
		if (ps->x[i] == x)
		{
			j = 1;
			printf("��%dλ�鵽�˸���%d ", i + 1, x);
		}
	if (j == 0)
		printf("δ�鵽����");
	printf("\n");
}

int main()
{
	SL a;
	seqlistinit(&a);//��ʼ��
	SeqListPushBack(&a, 5);//�������-β
	SeqListPushBack(&a, 6);//�������-β
	SeqListPushBack(&a, 7);//�������-β
	seqlistpushback(&a, 8);//�������-β
	SeqListPushFront(&a, 1);//�������-��
	SeqListPushFront(&a, 2);//�������-��
	seqlistpushfront(&a, 3);//�������-��
	seqlistpopback(&a);//ɾ������-β
	SeqListPopFront(&a);//ɾ������-��
	SeqListPushBack(&a, 5);//�������-β
	SeqListPushBack(&a, 5);//�������-β
	SeqListPrint(&a);
	SeqListSearch(&a, 5);
	return 0;
}
