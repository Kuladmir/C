#define _CRT_SECURE_NO_WARNINGS 1
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>
void move(char* a, int x)
{
	assert(b != NULL);
	char b;
	int len = strlen(a), i, j;
	for (i = 0; i < x; i++)
	{			
		b = *a;
		for (j = 0; j < len - 1; j++)
		{
			*(a + j) = *(a + j + 1);
		}
		*(a + len - 1) = b;
	}
	printf("ת������ַ���Ϊ��%s", a);
}
int main()
{
	char a[20];
	int i;
	printf("������һ���ַ���:>");
	scanf("%s", a);
	printf("������Ҫ���Ƶ�λ��:>");
	scanf("%d", &i);
	move(a, i);
	return 0;
}