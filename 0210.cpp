#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	printf("��5��������һ���ʵ�����˶����ꣿ��˵�ȵ�4���˴�2�ꡣ�ʵ�4����������"
		"��˵�ȵ�3���˴�2�ꡣ�ʵ������ˣ���˵�ȵ�2�˴����ꡣ�ʵ�2���ˣ�"
		"˵�ȵ�һ���˴����ꡣ����ʵ�һ���ˣ���˵��10�ꡣ���ʵ�����˶��\n");
	int a, b, c, d, e;
	a = 10;
	b = a + 2;
	c = b + 2;
	d = c + 2;
	e = d + 2;
	printf("�������������%d��\n", e);
	return 0;
}