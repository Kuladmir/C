#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void count(int a)
{
	if (a != 0)
	{
		count(a / 10);
		printf("%d ", a % 10);
		a /= 10;
	}
}
int main()
{
	int a;
	printf("������һ����λ�������µ���:>");
	scanf("%d", &a);
	count(a);
	printf("\n");
	return 0;
}