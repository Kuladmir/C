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
	strncpy(a, b, 6);
	printf("%s\n", a);
	return 0;
}