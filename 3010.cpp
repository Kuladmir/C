#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>
void move(char* a, int b)
{
	assert(a != NULL);
	int i, j, sz;
	char m;
	sz = strlen(a);
	if (b > sz)
		printf("Error\n");
	else
	{
		for (i = 0; i < b; i++)
		{
			m = *a;
			for (j = 0; j < sz; j++)
				*(a + j) = *(a + j + 1);
			*(a + sz - 1) = m;
		}
		printf("%s\n", a);
	}
}
int main()
{
	int a;
	char b[20];
	printf("������һ������С��20���ַ���:>");
	gets_s(b);
	printf("��������������:>");
	scanf("%d", &a);
	move(b,a);
	return 0;
}