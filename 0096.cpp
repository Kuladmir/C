#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
void math_pri(int a)//����˷����Զ�����ֵ
{
	int i, j;
	for (i = 1; i <= a; i++)
	{
		for (j = 1; j <= i; j++)
			printf("%d * %d = %-2d  ", i, j, i * j);
		printf("\n");
	}
}
void math_kul(int a)//�ж��Ƿ�Ϊ��������Yes����No
{
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
}
int  main()
{
	int a;
	printf("�����������:>");
	scanf("%d", &a);
	math_pri(a);
	math_kul(a);
	return 0;
}