#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int  main()
{
	char a[20];
	printf("ÇëÊäÈëÒ»¸ö×Ö·û´®:>");//请输入一个长度小于20的字符串
	gets_s(a);
	memset(a, '*', 3);
	printf("%s\n", a);
	return 0;
}
