#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a, b, i;
	printf("������һ�����:>");
	scanf("%d", &a);
	if ((a % 4 == 0 && a % 100 != 0) || a % 400 == 0)
		i = 1;
	else
		i = 0;
	printf("������һ���·�:>");
	scanf("%d", &b);
	if (i == 1)
	{
		if (i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12)
			printf("����31��\n");
		else if (i == 2)
			printf("����29��\n");
		else
			printf("����30��\n");
	}
	else
	{
		if (i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12)
			printf("����31��\n");
		else if (i == 2)
			printf("����28��\n");
		else
			printf("����30��\n");
	}
	return 0;
}