#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
char* my_strcat(char* a, const char* b)
{
	assert(a != NULL);
	assert(b != NULL);
	while (*a != '\0')
		a++;
	while (*a = *b)
	{
		a++;
		b++;
	}
	return a;
}
int main()
{
	char a[20], b[20];
	printf("ÇëÊäÈë:>");
	gets_s(a);
	printf("ÇëÊäÈë:>");
	gets_s(b);
	my_strcat(a,b);
	printf("%s\n", a);
	return 0;
}