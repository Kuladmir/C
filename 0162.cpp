#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>
void my_strcmp(char* a, char* b)
{
	assert(a != NULL);
	assert(b != NULL);
	while (*a==*b)
	{
		if (*a == '\0')
			printf("a==b\n");
		a++;
		b++;
	}
	if (*a > *b)
		printf("a>b\n");
	else
		printf("a<b\n");
}
int main()
{
	char a[20], b[20];
	printf("请输入一个长度小于20的字符串:>");
	gets_s(a);
	printf("请输入一个长度小于20的字符串:>");
	gets_s(b);
	int len1 = strlen(a);
	int len2 = strlen(b);
	my_strcmp(a, b);
	return 0;
}