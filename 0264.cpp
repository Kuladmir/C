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
void SeqListInit(SL* ps)//初始化
{
	ps->a = NULL;
	ps->size = 0;
	ps->capacity = 0;
}
void SeqListPushFront(SL* ps, SLDataType x)//头插函数实现
{
	int newcapacity;
	if (ps->size == ps->capacity)
	{
		if (ps->capacity == 0)
			newcapacity = 4;
		else
			newcapacity = ps->capacity * 2;//取2倍是为了扩容适当
		SLDataType* tmp = (SLDataType*)realloc(ps->a, newcapacity * sizeof(SLDataType));
		if (tmp == NULL)
		{
			printf("错误，realloc fail\n");
			exit(-1);
		}
		ps->a = tmp;
		ps->capacity = newcapacity;
	}
	//挪动数据
	int end = ps->size - 1;
	while (end >= 0)
	{
		ps->a[end + 1] = ps->a[end];
		end--;
	}
	ps->a[0] = x;
	ps->size++;
}
void SeqListPushBack(SL* ps, SLDataType x)//尾插函数
{
	int newcapacity;
	if (ps->size == ps->capacity)
	{
		if (ps->capacity == 0)
			newcapacity = 4;
		else
			newcapacity = ps->capacity * 2;//取2倍是为了扩容适当
		SLDataType* tmp = (SLDataType*)realloc(ps->a, newcapacity * sizeof(SLDataType));
		if (tmp == NULL)
		{
			printf("错误，realloc fail\n");
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
			newcapacity = ps->capacity * 2;//取2倍是为了扩容适当
		SLDataType* tmp = (SLDataType*)realloc(ps->a, newcapacity * sizeof(SLDataType));
		if (tmp == NULL)
		{
			printf("错误，realloc fail\n");
			exit(-1);
		}
		ps->a = tmp;
		ps->capacity = newcapacity;
	}
}
void SeqListPopFront(SL* ps)//头删数据
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
void SeqListDestory(SL* ps)//销毁空间
{
	free(ps->a);
	ps->a = NULL;
}
void SeqListPopBack(SL* ps)//尾删数据
{
	/* 方式一
	if (ps->size > 0)
		ps->size--;
	*/
	//方式二
	assert(ps->size > 0);
	ps->size--;
}
void SeqListFind(SL* ps, SLDataType x)//查找数据
{
	int i,pk=0;
	for (i = 0; i < ps->size; i++)
	{
		if (x == ps->a[i])
		{
			printf("已找到，最开始在第%d个出现\n", i + 1);
			pk = 1;
			break;
		}
	}
	if (pk == 0)
		printf("未找到这个数\n");
}
void SeqListInsert(SL* ps, SLDataType x, int i)//定向插入数据
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
void SeqListErase(SL* ps, int i)//定向删除数据
{
	if (ps->capacity < i)
	{
		printf("该表中没有该数据\n");
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