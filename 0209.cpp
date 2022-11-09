#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
#include<string.h>
void Des(char* a,int b)
{
	assert(a != NULL);
	if (b != 1)
	{
		printf("%c ", a[b - 1]);
		Des(a, b - 1);
		b--;
	}
	else
		printf("%c", a[0]);
}
int main()
{
	char a[20];
	int b;
	printf("ÇëÊä³öÒ»¸ö×Ö·û´®:>");
	scanf("%s", a);
	b = strlen(a);
	Des(a,b);
	return 0;
}