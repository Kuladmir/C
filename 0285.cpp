//��������ַ���
#include<stdio.h>
#include<string.h>
int main()
{
	char a[100];
	printf("������һ���ַ���:>");
	gets_s(a);
	char* p=a;
	int i = strlen(a);
	for (p = p + i - 1; p >= a; p--)
		printf("%c", *p);
	return 0;
}