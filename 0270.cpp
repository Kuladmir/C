//乘法表-练习
#include<stdio.h>
int main()
{
	int i, j, con;
	do
	{
		printf("请输入控制数(输入0结束):>");
		scanf("%d", &con);
		for (i = 1; i < con + 1; i++)
		{
			for (j = 1; j < i + 1; j++)
				printf("%d * %d = %2d  ", i, j, i * j);
			printf("\n");
		}
	} while (con);
	if (con == 0)
		printf("程序结束\n");
	return 0;
}