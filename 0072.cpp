#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a[10];
	int  i, j, left, mid, right, ser;
	printf("�����������С��������:>");
	for (i = 0; i < 10; i++)
		scanf("%d", &a[i]);
	printf("������Ҫ���ҵ�����:>");
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
			printf("�ҵ��ˣ���%d������\n", mid + 1);
			break;
		}
	} while (left <= right);
	if (left > right)
		printf("δ�ҵ�\n");
	return 0;
}