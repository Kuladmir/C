#define _CRT_SECURE_NO_WARNINGS 1//�ж�һ���ַ����Ƿ�����һ����ת����
#include<stdio.h>
#include<string.h>
int main()
{
	char a[20],b[20];
	printf("������һ������С��10���ַ���:>");
	gets_s(a);
	printf("������һ������С��10���ַ���:>");
	gets_s(b);
	int len1 = strlen(a);
	int len2 = strlen(b);
	if (len1 == len2)
	{
		int sz = strlen(a);
		strncat(a, a, sz);
		char* p = strstr(a, b);
		if (p == NULL)
			printf("No\n");
		else
			printf("Yes\n");
	}
	else
		printf("No\n");
	return 0;
}