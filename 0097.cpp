#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main()
{
	char a[20], b[20];
	printf("请输入一个长度小于20的字符串:>");
	gets_s(a);
	printf("请输入一个长度小于20的字符串:>");
	gets_s(b);
	char* p = strstr(a, b);
	if (p == NULL)
		printf("未找到\n");
	else
	{
		printf("找到了  %s\n",p);
	}
	return 0;
}