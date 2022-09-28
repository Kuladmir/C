#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
int my_strcmp(const char* a, const char* b)
{
	assert(a != NULL);
	assert(b != NULL);
	while (*a == *b)
	{
		if (*a == '\0')
			return 0;
		a++;
		b++;
	}
	if (*a > *b)
		return 1;
	else
		return -1;
}
int main()
{
	char a[20], b[20];
	gets_s(a);
	gets_s(b);
	int ret = my_strcmp(a, b);
	if (ret > 0)
		printf("a>b\n");
	else if (ret < 0)
		printf("a<b\n");
	else
		printf("a==b\n");
	return 0;
}