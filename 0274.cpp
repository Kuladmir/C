//计算最小公倍数和最大公约数-练习
#include<stdio.h>
int main()
{
	int i, j, k, con, a, b;
	do
	{
		printf("请输入一个数(0结束):>");
		scanf("%d", &con);
		if (con != 0)
		{
			printf("请输入要计算的两个数:>");
			scanf("%d%d", &i, &j);
			a = i;
			b = j;
			do
			{
				k = i % j;
				i = j;
				j = k;
			} while (j);
			printf("最大公约数是%d，最大公倍数是%d\n", i, a * b / i);
		}
	} while (con);
}