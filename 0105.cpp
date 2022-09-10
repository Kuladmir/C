#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int my_strlen(char* a)
{
	char* b = a;
	while (*b != '\0')
		b++;
	return b - a;
}
int main()
{
	char a[20];
	printf("请输入一个长度小于20的字符串:>");
	gets_s(a);
	int ret = my_strlen(a);
	printf("len = %d\n", ret);
	return 0;
}
