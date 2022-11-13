#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main()
{
	char a[30];
	int b,i;
	char c;
	scanf("%s", a);
	b = strlen(a);
	for (i = 0; i < b/2; i++)
	{
		c = a[b-1-i];
		a[b - 1 - i] = a[i];
		a[i] = c;
	}
	printf("%s\n", a);
	return 0;
}