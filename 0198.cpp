#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	printf("������������:>");
	int a, b, c,d,e;
	scanf("%d%d", &a, &b);
	d = a;
	e = b;
	do
	{
		c = a % b;
		a = b;
		b = c;
	} while (c != 0);
	printf("���Լ��Ϊ%d,", a);
	printf("��С������Ϊ%d\n",d*e/a);
	return 0;
}