#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
int My_strlen(const char* a)
{
	assert(a != NULL);
	if (*a != '\0')
		return 1 + My_strlen(a + 1);
	else
		return 0;
}
int main()
{
	char a[20];
	int b;
	scanf("%s", a);
	b=My_strlen(a);
	printf("%d\n", b);
	return 0;
}