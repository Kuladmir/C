#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
int main()
{
	int a, i;
	scanf("%d", &a);
	if (a == 1)
		printf("��������Ҳ���Ǻ���\n");
	else
	{
		if (a == 2)
			printf("������\n"); 
		for (i = 2; i <= sqrt(a); i++)
		{
			if (a % i == 0)
			{
				printf("�Ǻ���\n");
				break;
			}
		}
	}
	if (i > sqrt(a))
		printf("������\n");
	return 0;
}