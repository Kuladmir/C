#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
int main()
{
	int a;
	scanf("%d", &a);
	int i;
	for (i = 2; i <= sqrt(a); i++)
	{
		if (a % i == 0)
		{
			printf("No\n");
			break;
		}
	}
	if (i > sqrt(a))
		printf("Yes\n");
	return 0;
}