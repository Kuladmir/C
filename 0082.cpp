#define _CRT_SECURE_NO_WARNINGS 1
//���100-1000�ڵ�ˮ�ɻ���
#include<stdio.h>
int main()
{
	int i, sum, a,b,tmp;
	for (i = 100; i < 1001; i++)
	{
		tmp = i;
		b = 0;
		while (tmp)
		{
			a = tmp % 10;	
			tmp = tmp / 10;
			b = a * a * a + b;
		}
		if (b == i)
			printf("%d  ", i);
	}
	return 0;

}