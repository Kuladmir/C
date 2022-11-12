#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main()
{
	printf("请输入一个字符串:>");
	char a[100], b;
	scanf("%s", a);
	getchar();
	printf("请输入要去掉的字符:>");
	scanf("%c", &b);
	int c = strlen(a),i,j;
	for (i = 0; i < c; i++)
	{
		if (a[i] == b)
		{
			for (j = i; j < c-1; j++)
				a[j] = a[j + 1];
			a[j] =0;
		}
	}
	printf("%s\n", a);
	return 0;
}