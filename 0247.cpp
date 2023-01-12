#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a[10];
	int i, j;
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &a[i]);
	}
	int search, left, right, mid;
	printf("请输入要查找的数字:>");
	scanf("%d", &search);
	left = 0;
	right = sizeof(a) / sizeof(a[0]);

	while (left<=right)
	{	
		mid = (left + right) / 2;
		if (a[mid] < search)
			left = mid;
		else if (a[mid] > search)
			right = mid;
		else
		{
			printf("找到了，是第%d个数\n", mid + 1);
			break;
		}
	}
	if (left > right)
		printf("未找到\n");
	return 0;
}