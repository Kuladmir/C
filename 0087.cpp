#define _CRT_SECURE_NO_WARNINGS 1
//����һ���ַ���
#include<stdio.h>
#include<string.h>
void move(char* a, int b)
{
	int i, j, k;
	char m;
	k = strlen(a);
	for (i = 0; i < b; i++)
	{
		m = *a;
		for (j = 0; j < k - 1; j++)
			*(a + j) = *(a + j + 1);
		*(a + k - 1) = m;
	}
	puts(a);
}
int main()
{
	char a[10];
	int e,b;
	printf("������һ��10�����ڵ��ַ���\n");
	gets_s(a);
	b = strlen(a);
	printf("������Ҫ������λ��:>");
	scanf("%d", &e);
	if (e > b)
		printf("Error input\n");
	else
		move(a, e);
	return 0;
}