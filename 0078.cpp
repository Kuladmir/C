#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main()
{
	char a[20];
	printf("������һ��20�ַ��ڵ�����:>");
	scanf("%s", a);
	int sz = strlen(a);
	int i;
	for (i = 0; i < sz; i++)
	{
		if (a[i] >= 97 && a[i] <= 122)
			a[i] = a[i] - 32;
	}
	printf("%s\n", a);
	return 0;
}