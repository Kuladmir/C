#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a,count,i;
	printf("������һ������:>");
	scanf("%d", &a);
	for (i = 0,count=0; i < 32; i++)
	{
		if ((a>>i) & 1 == 1)
			count++;
	}
	printf("%d�Ķ�����λ����%d��1\n", a, count);
	return 0;
}