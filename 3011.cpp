#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>
void search(char* a, const char* b, int sz)
{
	assert(a != NULL);
	assert(b != NULL);
	strncat(a, a, sz);
	char* p = strstr(a, b);
	if (p == NULL)
		printf("No\n");
	else
		printf("Yes\n");
}
int main()
{
	char a[20], b[20];
	printf("请输入一个长度小于10的字符串:>");
	gets(a);
	printf("请输入一个长度小于10的字符串:>");
	gets(b);
	int len1 = strlen(a);
	int len2 = strlen(b);
	if(len1 != len2)
		printf("No\n");
	else
		search(a, b, len1);
	return 0;
}