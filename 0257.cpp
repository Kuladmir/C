#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
int cmp(char* a,char* b)
{
	assert(a != NULL);
	assert(b != NULL);
	while(*a++ == *b++)
	{
		if (*a == '\0')
			return 0;
	}
	if (*a > *b)
		return 5;
	else
		return -5;
}
int main()
{
	char a[20], b[20];
	printf("������һ��С��20���ȵ��ַ���:>");
	scanf("%s", a);
	printf("������һ��С��20���ȵ��ַ���:>");
	scanf("%s", b);
	int l = cmp(a, b);
	if (l > 0)
		printf("a>b\n");
	else if (l < 0)
		printf("a<b\n");
	else
		printf("a==b\n");
	return 0;
}