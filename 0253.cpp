#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a[10], b;
	int i, right, mid, left;
	for (i = 0; i < 10; i++)
		scanf("%d", &a[i]);
	left = 0;
	right = sizeof(a) / sizeof(a[0]);
	printf("������Ҫ���ҵ�����:>");
	scanf("%d", &b);
	while (left <= right)
	{
		mid = (left + right) / 2;
		if (a[mid] > b)
			right = mid-1;
		else if (a[mid] < b)
			left = mid+1;
		else
		{
			printf("�ҵ����ǵ�%d��\n", mid + 1);
			break;
		}
	}
	if (left>right)
		printf("δ�ҵ�\n");
	return 0;
}