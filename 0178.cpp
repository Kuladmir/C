#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
#include<string.h>
char* left(char* a, int b)
{
	assert(a != MULL);
	int i,j=strlen(a),k;
	char m;
	for (i = 0; i < b; i++)
	{
		m = *a;
		for (k = 0; k < j - 1; k++)
			*(a + k) = *(a + k + 1);
		*(a + j - 1) = m;
	}
	return a;
}
int main()
{
	char a[30];
	int b;
	printf("ÇëÊäÈë×Ö·û´®:>");
	gets_s(a);
	printf("ÇëÊäÈë×óÒÆµÄµ¥Î»:>");
	scanf("%d", &b);
	left(a, b);
	printf("%s\n", a);
	return 0;
}