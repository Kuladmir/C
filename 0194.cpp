#define _CRT_SECURE_NO_WARNINGS 1
//쳲���������
#include<stdio.h>
int main()
{
	int x, y, a, b, c;
	printf("�����������:>");
	scanf("%d", &a);
	if (a == 1 || a == 2)
		printf("��%d������%d\n", a, 1);
	else
	{
		for (b = 3,x = 1,y = 1; b < a + 1; b++)
		{
			c = x + y;
			y = x;
			x = c;
		}
		printf("��%d������%d\n", a, c);
	}
	return 0;
}