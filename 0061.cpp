#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int (*p)[10]=&a;//����ָ��Ķ���
	char* b[5];
	int i;
	char* (*pa)[5]=&b;//����ָ��Ķ��壬�������ڶ���ָ��
	//��⣺*pa˵��pa�Ǹ�ָ�룬[5]˵��paָ��һ�����飬char* ˵��paָ�������Ԫ������
	//����ָ��ļ��÷�
	for (i = 0; i < 10; i++)
	{
		printf("a[%d] = %d	", i,(*p)[i]);
		printf("a[%d] = %d\n", i,*(*p + i));
	}
	return 0;
}