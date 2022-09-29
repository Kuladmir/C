#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
#include<string.h>
#define Pr(a) printf(#a" string len is %d\n",strlen(a))
char* my_strcat(char* a, const char* b, int c)
{
	assert(a != NULL);
	assert(b != NULL);
	char* p = a;
	int i;
	while (*a != '\0')
		a++;
	for (i = 0; i < c; i++)
		*a++ = *b++;
	*a = '\0';
	return p;
}
int main()
{
	char a[20], b[20];
	int n;
	printf("请输入:>");
	gets_s(a);
	printf("请输入:>");
	gets_s(b);
	Pr(a);
	Pr(b);
	printf("请输入你希望的补充数（a为被补充的数组）:>");
	scanf("%d", &n);
	if (n > strlen(a))
		printf("Error\n");
	else
	{
		my_strcat(a, b, n);
		printf("%s\n", a);
	}
	return 0;
}