#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	char a[40];
	int i = 0,sum = 0;
	printf("������һ���ַ���:>");
	scanf("%s", a);
	while (a[i] != '\0')
	{
		if ((a[i] >= 'a' && a[i] <= 'z') || (a[i] >= 'A' && a[i] <= 'Z'))
			sum++;
		i++;
	}
	printf("����ַ�������%d����ĸ\n", sum);
	return 0;
}