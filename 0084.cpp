#define _CRT_SECURE_NO_WARNINGS 1
//ÆæÊýÅ¼Êý»¥»»²¢ÅÅÐò
#include<stdio.h>
int main()
{
	int a[10];
	int i,t;
	int* left, *right;
	left = a;
	right = a+9;
	for (i = 0; i < 10; i++)
		scanf("%d", &a[i]);
	while (left<right)
	{
		while ((left < right) && (*left % 2 == 0))
			left++;
		while ((left < right) && (*right % 2 == 1))
			right--;
		if (left < right)
		{
			t = *left;
			*left = *right;
			*right = t;
		}
	}
	for (i = 0; i < 10; i++)
		printf("%d ", a[i]);
	return 0;
}