#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
int My_strlen(const char* a)
{
	int count = 0;
	while (*a != '\0')
	{
		count++;
		a++;
	}
	return count;
}
int main()
{
	char a[20];
	scanf("%s", a);
	int b = My_strlen(a);
	printf("len = %d\n", b);
	return 0;
}