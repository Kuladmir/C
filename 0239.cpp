#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
#include<string.h>
void My_strcat(char* a, char* b)
{
	char c[50];
	assert(a != NULL);
	assert(b != NULL);
	strcpy(c, a);
	int len = strlen(a),i;
	for (i = len; *b != '\0'; i++)
	{
		c[i] = *b;
		b++;
	}
	printf("%s\n", c);
}
int main()
{
	char a[20], b[20];
	printf("ÇëÊäÈëÒ»¸ö×Ö·û´®:>");
	scanf("%s", a);
	getchar();
	printf("ÇëÊäÈëÒ»¸ö×Ö·û´®:>");
	scanf("%s", b);
	My_strcat(a, b);
	return 0;
}