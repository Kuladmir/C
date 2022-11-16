#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main()
{
	int a[10];
	int b[10];
	int i, j, k;
	int si = sizeof(a);
	for (i = 0; i < 10; i++)
		scanf("%d", &a[i]);
	memcpy(b, a, si);
	for (i = 0; i < 9; i++)
	{
		for (j = 0; j < 9 - i; j++)
		{
			if (a[j] < a[j + 1])
			{
				k = a[j];
				a[j] = a[j + 1];
				a[j + 1] = k;
			}
		}
	}
	for (i = 0; i < 10; i++)
	{
		if (b[i] == a[9])
			break;
	}
	k = b[i];
	b[i] = b[9];
	b[9] = k;
	for (i = 0; i < 10; i++)
	{
		if (b[i] = a[0])
			break;
	}
	k = b[i];
	b[i] = b[0];
	b[0] = k;
	for (i = 0; i < 10; i++)
		printf("%d ", b[i]);
	return 0;
}