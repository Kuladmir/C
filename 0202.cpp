#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	printf("һ���100�׸߶��������£�ÿ����غ�����ԭ�߶ȵ�һ�룻"
		"�����£������ڵ�10�����ʱ�������������ף���10�η�����ߣ�\n");
	double a = 100;
	int i;
	double sum = 100;
	for (i = 1; i < 10; i++)
	{
		a /= 2;
		sum += a*2;
	}
	printf("\nС��10����غ��˶�����Ϊ%lf�������߶�Ϊ%lf", sum,a);
	return 0;
}