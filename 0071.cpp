#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
int main()
{
	int a,b;
	do
	{
		printf("1.���� 0.�˳�\n");
		scanf("%d", &b);
		if (b == 0)
		{
			printf("�˳�");
			break;
		}
		printf("������Ҫ�жϵ�����:>");
		scanf("%d", &a);
		for (b = 2; b <= sqrt(a); b++)
		{
			if (a % b == 0)
			{
				printf("Yes\n");
				break;
			}
		}
		if (b > sqrt(a))
			printf("No\n");
	} while (b);
	return 0;
}