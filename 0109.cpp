#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a, b, c, d, e;
	printf("�����������:>");
	scanf("%d", &a);
	if (a == 1 || a == 2)
		printf("��%d��������1\n", a);
	else
	{
		for (e = 2,b = 1,c = 1; e < a; e++)
		{
			d = b + c;
			b = c;
			c = d;
		}
		printf("��%d��������%d", a, d);
	}
	return 0;
}