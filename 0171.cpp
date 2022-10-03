#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
int my_strlen(const char* a)
{
	assert(a != NULL);
	int count = 0;
	while (*a != '\0')
	{
		a++;
		count++;
	}
	return count;
}
int main()
{
	char a[30];
	gets_s(a);
	int ret = my_strlen(a);
	printf("len = %d\n", ret);
	return 0;
}