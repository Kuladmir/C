#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main()
{
	printf("������һ���ַ���:>");
	char a[100], b;
	scanf("%s", a);
	getchar();
	printf("������Ҫȥ�����ַ�:>");
	scanf("%c", &b);
	int c = strlen(a),i,j;
	for (i = 0; i < c; i++)
	{
		if (a[i] == b)
		{
			for (j = i; j < c-1; j++)
				a[j] = a[j + 1];
			a[j] =0;
		}
	}
	printf("%s\n", a);
	return 0;
}