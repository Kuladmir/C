#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main()
{
	char a[20], b[20];
	printf("������һ������С��20���ַ���:>");
	gets_s(a);
	printf("������һ������С��20���ַ���:>");
	gets_s(b);
	strncpy(a, b, 6);
	printf("%s\n", a);
	return 0;
}