#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
#include<string.h>
void judge(char* a,char* b)
{
	assert(a != NULL);
	assert(b != NULL);
	int sz = strlen(a);
	strncat(a, a, sz);
	char* p = strstr(a, b);
	if (p == NULL)
		printf("δ�ҵ�\n");
	else
		printf("���ҵ�\n");
}
int main()
{
	char a[20], b[20];
	printf("������һ���ַ���:>");
	scanf("%s", a);
	printf("��������ҵ��ַ���:>");
	scanf("%s", b);
	judge(a,b);
	return 0;
}