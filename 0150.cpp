#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
void move(char* a, int b)
{
	char* p = a;
	int len = strlen(a),i,j;
	char m;
	for (i = 0; i < b; i++)
	{
		m = *a;
		for (j = 0; j < len - 1; j++)
			*(a + j) = *(a + j + 1);
		*(a + len - 1) = m;
	}
	printf("%s\n", p);
}
int main()
{
	char a[20];
	printf("������һ������С��20���ַ���:>");
	gets_s(a);
	int b;
	printf("������Ҫ�����Ĵ���:>");
	scanf("%d", &b);
	move(a, b);
	return 0;
}