#define _CRT_SECURE_NO_WARNINGS 1
//������ת�� - �����ַ���
#include<stdio.h>
#include<string.h>
#include<assert.h>//����
void change(char* a, char* b)
{
	char t;
	while (a < b)
	{
		t = *a;
		*a = *b;
		*b = t;
		a++;
		b--;
	}
}
void move(char* a, int b)
{
	assert(a != NULL);//���Ժ������������Ϊ�٣�����ֹ�������
	int len = strlen(a),i;
	assert(b <= len);
	change(a, a + b - 1);
	change(a + b, a + len - 1);
	change(a, a + len - 1);
	printf("%s", a);
}
int main()
{
	char a[20];
	int b;
	printf("������һ������20���ڵ��ַ���\n");
	gets_s(a);
	printf("��������ת����:>");
	scanf("%d", &b);
	move(a, b);
	return 0;
}