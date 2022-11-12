#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
int main()
{
	int a,i,p;
	printf("请输入一个数:>");
	scanf("%d", &a);
	p = a;
	for (i = 2; i <= sqrt(p); i++)
	{
		if (p % i == 0)
		{
			printf("%d是合数，能被%d整除\n", a,i);
			break;
		}
	}
	if (i > sqrt(p))
		printf("%d是素数\n",a);
	return 0;
}