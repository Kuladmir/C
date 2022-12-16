#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
int isprime(int a)
{
	int i;
	for (i = 2; i <a; i++)
	{
		if (a % i == 0)
			break;
	}
	if (i >= a)
		return 1;
}
int main()
{
	int i, j, k;
	printf("可以证明，除了2以外的偶数都能被拆成两个素数的和\n");	
	printf("请输入一个偶数(>2):>");
	scanf("%d", &i);
	for (j = 2; j < i/2+1; j++)
	{
		if(isprime(j)==1)
			if (isprime(i - j) == 1)
			{
				printf("%d = %d + %d\n", i, j, i - j);
				break;
			}
	}
	return 0;
}