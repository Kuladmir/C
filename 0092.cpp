#define _CRT_SECURE_NO_WARNINGS 1//ʵ��strcat����
#include<stdio.h>
#include<assert.h>
char* my_strcat(char* a, const char* b)
{
	assert(a != NULL);
	assert(b != NULL);
	char* p = a;
	while (*a != '\0')
		a++;
	while (*a++ = *b++)
		;
	return p;
}
int  main()
{
	char a[20], b[20];
	printf("������һ������С��10���ַ���:>");
	gets_s(a);
	printf("������һ������С��10���ַ���:>");
	gets_s(b);
	my_strcat(a, b);
	printf("%s\n", a);
	return 0;
}