#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int str(char* a, char* b)
{
	int len1 = strlen(a);
	int len2 = strlen(b);
	if (len1 != len2)
		return 0;
	strncat(a, a, len1);
	char* p = strstr(a, b);
	if (p == NULL)
		return 0;
	else
		return 1;
}
int main()
{
	char a[20];
	char b[20];
	printf("请输入一个小于10长度的字符串\n");
	gets_s(a);
	printf("请输入一个小于10长度的字符串\n");
	gets_s(b);
	int ret = str(a, b);
	if (ret == 1)
		printf("Yes\n");
	else
		printf("No\n");
	return 0;
}