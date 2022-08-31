#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a[10];
	int  i, j, left, mid, right, ser;
	printf("请输入这组从小到大数字:>");
	for (i = 0; i < 10; i++)
		scanf("%d", &a[i]);
	printf("请输入要查找的数字:>");
	scanf("%d", &ser);
	left = 0;
	right = 9;
	do
	{
		mid = (left + right) / 2;
		if (a[mid] > ser)
			left = mid + 1;
		else if (a[mid] < ser)
			right = mid - 1;
		else
		{
			printf("找到了，是%d个数字\n", mid + 1);
			break;
		}
	} while (left <= right);
	if (left > right)
		printf("未找到\n");
	return 0;
}