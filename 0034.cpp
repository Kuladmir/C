//线性表的建立
#include<stdio.h>
#include<assert.h>
#include<stdlib.h>
typedef int SLDataType;
//结构体定义
typedef struct SeqList
{
	SLDataType* x;
	int size;
	int capacity;
}SL;
//初始化函数
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

//尾插函数
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

//尾删函数
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

//遍历函数
void seqlistprint(SL* ps)
{
	assert(ps);
	int i;
	if (ps->size == 0)
		printf("顺序表中没有元素\n");
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
		printf("线性表中没有元素\n");
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

//头插函数
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

//头删函数
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

//数字查找
void SeqListSearch(SL* ps, SLDataType x)
{
	int i, j = 0;
	for (i = 0; i < ps->size; i++)
		if (ps->x[i] == x)
		{
			j = 1;
			printf("第%d位查到了该数%d ", i + 1, x);
		}
	if (j == 0)
		printf("未查到该数");
	printf("\n");
}

int main()
{
	SL a;
	seqlistinit(&a);//初始化
	SeqListPushBack(&a, 5);//添加数据-尾
	SeqListPushBack(&a, 6);//添加数据-尾
	SeqListPushBack(&a, 7);//添加数据-尾
	seqlistpushback(&a, 8);//添加数据-尾
	SeqListPushFront(&a, 1);//添加数据-首
	SeqListPushFront(&a, 2);//添加数据-首
	seqlistpushfront(&a, 3);//添加数据-首
	seqlistpopback(&a);//删除数据-尾
	SeqListPopFront(&a);//删除数据-首
	SeqListPushBack(&a, 5);//添加数据-尾
	SeqListPushBack(&a, 5);//添加数据-尾
	SeqListPrint(&a);
	SeqListSearch(&a, 5);
	return 0;
}
