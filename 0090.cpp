#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
char*  my_strcpy(char* a, char* b)
{
	assert(a != NULL);//���Ժ�������Ч��
	assert(b != NULL);
	char* p = a;
	while (*a++ = *b++)//����
		;
	return p;
}
int main()
{
	char a[20],b[20];
	printf("������һ���ַ���:>");
	gets_s(a);
	printf("������һ���ַ���:>");
	gets_s(b);
	my_strcpy(a, b);//�Զ��忽������
	printf("%s\n", a);
	return 0;
}