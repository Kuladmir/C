#include<stdio.h>
#include<assert.h>
#include<stdlib.h>
int main()
{
	int a[6] = { 1,2,5,6,5,7 };//假设为线性表
	int Val=5;//定义Val
	printf("请输入筛选的数:>");
	scanf("%d", &Val);
	int i=3;//定义方法选择控件
	printf("请选择方法(1,2,3):>");
	scanf("%d", &i);
	if (i == 1)//方法一
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
	else if (i == 2)//方法二
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
	else//方法3
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