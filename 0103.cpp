#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
char* my_strcpy(char* a, const char* b)
{
	assert(a != NULL);
	assert(b != NULL);
	while (*a++ = *b++)
		;
	return a;
}
int main()
{
	char a[20], b[20];
	printf("������һ������С��20���ַ���:>");
	gets_s(a);
	my_strcpy(b, a);
	printf("%s   %s\n", b,a);
	return 0;
}