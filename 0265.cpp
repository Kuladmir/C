#include<stdio.h>
#include<assert.h>
#include<stdlib.h>
int main()
{
	int a[6] = { 1,2,5,6,5,7 };//����Ϊ���Ա�
	int Val=5;//����Val
	printf("������ɸѡ����:>");
	scanf("%d", &Val);
	int i=3;//���巽��ѡ��ؼ�
	printf("��ѡ�񷽷�(1,2,3):>");
	scanf("%d", &i);
	if (i == 1)//����һ
	{
		int count = 0;
		int n;
		for (n = 0; n < 6; n++)
		{
			if (a[n] != Val)
				count++;
		}
		int* p = (int*)malloc(sizeof(int) * (count+1));
		assert(p != NULL);
		i = 0;
		for (n = 0; n < 6; n++)
		{
			if (a[n] != Val)
			{
				*(p+i) = a[n];
				i++;
			}
		}
		for (n = 0; n < i; n++)
		{
			printf("%d ", *(p+n));
		}
		printf("\n");
		free(p);
		p = NULL;
	}
	else if (i == 2)//������
	{
		int n, m, count = 0;
		for (n = 0; n < 6; n++)
		{
			if (a[n] == Val)
			{
				for (m = n; m < 5; m++)
				{
					a[m] = a[m + 1];
				}			
				count++;
			}
		}
		for (i = 0; i < 6 - count; i++)
		{
			printf("%d ", a[i]);
		}
		printf("\n");
	}
	else//����3
	{
		int* di = &a[0];
		int* pi = &a[0];
		int count = 0;
		while (pi <= (&a[5]))
		{
			if (*(pi) == Val)
			{
				pi++;
				count++;
			}
			else
			{
				*(di) = *(pi);
				if (pi == &a[5])
					break;
				pi++;
				di++;
			}

		}
		for (di = &a[0]; di < &a[6-count]; di++)
		{
			printf("%d ", *(di));
		}
		printf("\n");
	}
	return 0;
}