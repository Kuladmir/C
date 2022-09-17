#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
#include<string.h>
void rela(char* a, char* b)
{
	assert(a != NULL);
	assert(b != NULL);
	char tmp;
	while (a <= b)
	{
		tmp = *a;
		*a = *b;
		*b = tmp;
		a++;
		b--;
	}
}
void move(char* a, int b)
{
	assert(a != NULL);
	int sz = strlen(a);
	rela(a, a + b-1);
	rela(a + b, a + sz - 1);
	rela(a, a + sz - 1);
	printf("%s\n", a);
}
int main()
{
	int a;
	char b[20];
	printf("请输入一个长度小于20的字符串:>");
	gets_s(b);
	printf("请输入左旋次数:>");
	scanf("%d", &a);
	move(b, a);
	return 0;
}