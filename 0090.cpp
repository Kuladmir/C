#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
char*  my_strcpy(char* a, char* b)
{
	assert(a != NULL);//断言函数的有效性
	assert(b != NULL);
	char* p = a;
	while (*a++ = *b++)//拷贝
		;
	return p;
}
int main()
{
	char a[20],b[20];
	printf("请输入一个字符串:>");
	gets_s(a);
	printf("请输入一个字符串:>");
	gets_s(b);
	my_strcpy(a, b);//自定义拷贝函数
	printf("%s\n", a);
	return 0;
}