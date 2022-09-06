#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int my_strcmp(const char* a, const char* b)
{
	while (*a == *b)
	{
		if (*a == '\0')
			return 0;
		a++;
		b++;
	}
	if (*a > *b)
		return 1;
	else
		return -1;
}
int main()
{
	char a[20], b[20];
	printf("请输入一个长度小于10的字符串:>");
	gets_s(a); 
	printf("请输入一个长度小于10的字符串:>");
	gets_s(b);
	int ret = my_strcmp(a, b);
	if (ret > 0)
		printf("a>b\n");
	else if (ret < 0)
		printf("a<b\n");
	else
		printf("a==b\n");
	return 0;
}