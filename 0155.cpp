#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
#include<string.h>
void move(char* a, int b)
{
	assert(a != NULL);
	int len = strlen(a),i,j;
	char m;
	for (i = 0; i < b; i++)
	{
		m = *a;
		for (j = 0; j < len - 1; j++)
			*(a + j) = *(a + j + 1);
		*(a + len - 1) = m;
	}
	printf("%s\n", a);
}
int main()
{
	int a;
	char b[20];
	printf("������һ��С��20���ַ���:>");
	gets_s(b);
	printf("�������ƶ�λ��:>");
	scanf("%d", &a);
	move(b, a);
	return 0;
}