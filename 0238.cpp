#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int i, j, k;
	printf("一个质数能除以几个9组成的数\n");
	printf("如果结果不全为9，则说明不能被整除\n");
	printf("请输入一个素数:>");
	scanf("%d", &j);
	for (i = 9;; i = i * 10 + 9)
	{
		if (i % j == 0)
		{
			printf("%d能被%d整除\n", j, i);
			break;
		}
	}
	return 0;
}