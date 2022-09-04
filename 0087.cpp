#define _CRT_SECURE_NO_WARNINGS 1
//左旋一个字符串
#include<stdio.h>
#include<string.h>
void move(char* a, int b)
{
	int i, j, k;
	char m;
	k = strlen(a);
	for (i = 0; i < b; i++)
	{
		m = *a;
		for (j = 0; j < k - 1; j++)
			*(a + j) = *(a + j + 1);
		*(a + k - 1) = m;
	}
	puts(a);
}
int main()
{
	char a[10];
	int e,b;
	printf("请输入一个10长度内的字符串\n");
	gets_s(a);
	b = strlen(a);
	printf("请输入要左旋的位数:>");
	scanf("%d", &e);
	if (e > b)
		printf("Error input\n");
	else
		move(a, e);
	return 0;
}