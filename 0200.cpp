#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int i, j, a,k;
	int sum = 0;
	printf("��������㵥λ��������:>");
	printf("���磺����2+22+222������2��3\n");
	scanf("%d%d", &i, &a);
	k = i;
	for (j = 0; j < a; j++)
	{
		sum = sum + i;
		i = i * 10 + k;
	}
	printf("�����%d\n", sum);
	return 0;
}