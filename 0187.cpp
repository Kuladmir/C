#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>//1 2 3 4 5���ظ�����ɶ��ٸ���λ��
int main()
{
	int i, j, k;
	int count = 0;
	int o = 5;
	for (i = 1; i < o; i++)
	{
		for (j = 1; j < o; j++)
		{
			for (k = 1; k < o; k++)
			{
				if (i == j || i == k || j == k)
					;
				else
				{
					printf("%d%d%d ", i, j, k);
					count++;
				}
			}
		}
	}
	printf("\n");
	printf("����%d������\n", count);
	return 0;
}