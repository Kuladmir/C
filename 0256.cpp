#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
int My_strlen(char* a)
{
	assert(a != NULL);
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
	printf("������һ������С��20���ַ���:>");
	scanf("%s", a);
	int len = My_strlen(a);
	printf("Len = %d\n", len);
	return 0;
}