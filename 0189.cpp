#define _CRT_SECURE_NO_WARNINGS 1
/*
һ��������������100����һ����ȫƽ�������ټ���168����һ����ȫƽ���������ʸ����Ƕ��٣�*/
#include<stdio.h>
#include<math.h>
int main()
{
	int i;
	double a = 0, b = 0;
	int a1, b1;
	for (i = 1;; i++)
	{
		a = sqrt(i + 100);
		b = sqrt(i + 268);
		a1 = (int)a;
		b1 = (int)b;
		if (i + 100 == a1 * a1 && i + 268 == b1 * b1)
		{
			printf("�������%d\n", i);
			break;
		}
	}
	return 0;
}