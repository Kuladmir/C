#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a,count,i;
	printf("请输入一个数字:>");
	scanf("%d", &a);
	for (i = 0,count=0; i < 32; i++)
	{
		if ((a>>i) & 1 == 1)
			count++;
	}
	printf("%d的二进制位中有%d个1\n", a, count);
	return 0;
}