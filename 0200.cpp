#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int i, j, a,k;
	int sum = 0;
	printf("请输入计算单位数和数量:>");
	printf("例如：计算2+22+222，输入2，3\n");
	scanf("%d%d", &i, &a);
	k = i;
	for (j = 0; j < a; j++)
	{
		sum = sum + i;
		i = i * 10 + k;
	}
	printf("结果是%d\n", sum);
	return 0;
}