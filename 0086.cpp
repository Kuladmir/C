#define _CRT_SECURE_NO_WARNINGS 1
//判断一个字符串是否为另一个字符串旋转得来
#include<stdio.h>
#include<string.h>
int cmp(char *a, char *b)
{
	int len1 = strlen(a);
	int len2 = strlen(b);
	if (len1 == len2)
	{
		strncat(a, a, len1);//追加字符串函数
		char* k = strstr(a, b);//检索子串函数
		if (k == NULL)//未找到返回一个空指针
			return 0;
		else
			return 1;
	}
	else
		return 0;
}
int main()
{
	char a[20];
	char b[20];
	int sz;
	printf("输入一个长度小于10的字符串\n");
	scanf("%s",a);
	printf("输入一个长度小于10的字符串\n");
	scanf("%s", b);
	int ret = cmp(a, b);
	if (ret == 1)
		printf("Yes\n");
	else
		printf("No\n");
	return 0;
}