#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	printf("��0��7������ɵ���������,���㵽��λ\n");
	int i,j,k;
	int n;
	int count;
	for (i = 0; i < 4; i++)
	{
		for (j = 0,n=7; j < i; j++)
			n = n * 8;
		switch (n)
		{
		case 7:
		{
			for (k = 0, count = 0; k < 8; k++)
			{
				if (k % 2 == 1)
					count++;
			}
			printf("�����У���%d������\n", count);
		}break;
		case 56:
		{
			for (k = 10, count = 0; k < 78; k++)
			{
				if (k % 2 == 1)
					count++;
			}
			printf("˫���У���%d������\n", count);
		}break;
		case 448:
		{
			for (k = 100, count = 0; k < 778; k++)
			{
				if (k % 2 == 1)
					count++;
			}
			printf("��λ���У���%d������\n", count);
		}break;
		case 3584:
		{
			for (k = 1000, count = 0; k < 7778; k++)
			{
				if (k % 2 == 1)
					count++;
			}
			printf("��λ���У���%d������\n", count);
		}break;
		}
	}
	return 0;
}
