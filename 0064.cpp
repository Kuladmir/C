#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void arr(int* p)//һ��ָ��ʱ�Ĵ�������
{
	printf("%d\n", *p);
}
void arr2(int** p)//����ָ��ʱ�Ĵ�������
{
	printf("%d\n", **p);
}
int main()
{
	int a = 5;
	int* p = &a;
	arr(p);//һ�� - һ��ָ�����
	arr(&a);//һ�� - һ����ַ
	int* b[10] = { &a };
	int** pp = &p;
	arr2(&p);//���� - һ��һ��ָ��ĵ�ַ
	arr2(pp);//���� - һ������ָ��
	arr2(b);//���� - һ��ָ���������Ԫ�ص�ַ
	return 0;
}