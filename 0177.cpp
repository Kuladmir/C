#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
char* my_strcpy(char* a, const char* b)
{
	char* p = a;
	assert(a != NULL);
	assert(b != NULL);
	while (*a = *b)
	{ 
		a++;
		b++;
	}
	return p;
}
int main()
{
	char a[20], b[20];
	printf("ÇëÊäÈë:>");
	gets_s(a);	
	printf("ÇëÊäÈë:>");
	gets_s(b);
	my_strcpy(a, b);
	printf("%s\n", a);
	return 0;
}