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
//尾插函数
void seqlistpushback(SL* ps, SLDataType x)
{
	assert(ps);
	int newcapacity=0;
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
				printf("%d\n", *((ps->x) + ps->size-1));
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
	int end=ps->size-1;
	while (end >= 0)
	{
		ps->x[end + 1] = ps->x[end];
		end--;
	}
	ps->x[0] = x;
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
int main()
{
	SL a;
	seqlistinit(&a);//初始化
	seqlistpushback(&a, 5);//添加数据-尾
	seqlistpushback(&a, 6);//添加数据-尾
	seqlistpushback(&a, 7);//添加数据-尾
	seqlistpushback(&a, 8);//添加数据-尾
	seqlistpushfront(&a, 1);//添加数据-首
	seqlistpushfront(&a, 2);//添加数据-首
	seqlistpushfront(&a, 3);//添加数据-首
	seqlistpopback(&a);//删除数据-尾
	seqlistpopfront(&a);//删除数据-首
	seqlistprint(&a);
	return 0;
}
