#define _CRT_SECURE_NO_WARNINGS 1
//斐波那契数列
#include<stdio.h>
int main()
{
	int x, y, a, b, c;
	printf("请输入控制数:>");
	scanf("%d", &a);
	if (a == 1 || a == 2)
		printf("第%d个数是%d\n", a, 1);
	else
	{
		for (b = 3,x = 1,y = 1; b < a + 1; b++)
		{
			c = x + y;
			y = x;
			x = c;
		}
		printf("第%d个数是%d\n", a, c);
	}
	return 0;
}