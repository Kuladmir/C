#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a;
	printf("������Ҫ�жϵ�����:>");
	scanf("%d", &a);
	if ((a % 4 == 0 && a % 100 != 0) || a % 400 == 0)
		printf("Yes\n");
	else
		printf("No\n");
	return 0;
}