#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main()
{
	char a[20], b[20];
	printf("请输入一个字符串:>");
	scanf("%s", a);
	printf("请输入一个要查找的子串:>");
	scanf("%s", b);
	char* f = strstr(a, b);
	if (f == NULL)
		printf("未找到\n");
	else
		printf("找到\n");
	return 0;
}