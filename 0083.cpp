#define _CRT_SECURE_NO_WARNINGS 1
//����ˮ���⣺1ƿ1Ԫ��2ƿ�ǻ�һ����20Ԫ�ȼ�ƿ
#include<stdio.h>
int main()
{
	int a, b, c;
	printf("���������Ǯ��:>");
	scanf("%d", &a);
	b = c = a;
	while(c>1)
	{
		b = b + c / 2;
		c = c / 2 + c % 2;
	}
	printf("�ܹ����ˣ�%d\n", b);
	return 0;
}