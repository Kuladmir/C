#define _CRT_SECURE_NO_WARNINGS 1
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>
void move(char* a, int x)
{
	assert(b != NULL);
	char b;
	int len = strlen(a), i, j;
	for (i = 0; i < x; i++)
	{			
		b = *a;
		for (j = 0; j < len - 1; j++)
		{
			*(a + j) = *(a + j + 1);
		}
		*(a + len - 1) = b;
	}
	printf("转化后的字符串为；%s", a);
}
int main()
{
	char a[20];
	int i;
	printf("请输入一个字符串:>");
	scanf("%s", a);
	printf("请输入要左移的位数:>");
	scanf("%d", &i);
	move(a, i);
	return 0;
}