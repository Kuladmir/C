#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
int main()
{
	int a,i,p;
	printf("������һ����:>");
	scanf("%d", &a);
	p = a;
	for (i = 2; i <= sqrt(p); i++)
	{
		if (p % i == 0)
		{
			printf("%d�Ǻ������ܱ�%d����\n", a,i);
			break;
		}
	}
	if (i > sqrt(p))
		printf("%d������\n",a);
	return 0;
}