#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main()
{
	char a[20], b[20];
	printf("������һ���ַ���:>");
	scanf("%s", a);
	printf("������һ��Ҫ���ҵ��Ӵ�:>");
	scanf("%s", b);
	char* f = strstr(a, b);
	if (f == NULL)
		printf("δ�ҵ�\n");
	else
		printf("�ҵ�\n");
	return 0;
}