#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a[10];
	int i, left, right, mid, ser;
	for (i = 0; i < 10; i++)
		scanf("%d", &a[i]);
	scanf("%d", &ser);
	left = 0;
	right = 9;
	while (left <= right)
	{
		mid = (left + right) / 2;
		if (ser > a[mid])
			left = mid + 1;
		else if (ser < a[mid])
			right = mid - 1;
		else
		{
			printf("找到了，是%d个\n", mid+1);
			break;
		}
	}
	if (left > right)
		printf("未找到\n");
	return 0;
}
