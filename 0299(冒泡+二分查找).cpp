//冒泡排序后进行二分查找
#define N 10
#include<stdio.h>
int main()
{
	printf("目前数列为%d个:>", N);
	int i, j, search, mid, left, right, arr[N],log;
	for (i = 0; i < N; i++)
		scanf("%d", &arr[i]);
	printf("要查找的数search:>");
	scanf("%d", &log);
	printf("<------begin to sort------>\n");
	for (i = 0; i < N - 1; i++)
	{
		for (j = 0; j < N - 1 - i; j++)
		{
			if(arr[j]>arr[j+1])
			{
				search = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = search;
			}
		}
	}
	printf("New arr is :>");
	for (i = 0; i < N; i++)
	{
		if (i < N - 1)
			printf("%d ", arr[i]);
		else
			printf("%d\n", arr[i]);
	}
	printf("<------begin to search------>\n");
	left = 0;
	right = N - 1;
	do
	{
		mid = (left + right) / 2;
		if (arr[mid] < log)
			left = mid;
		else if (arr[mid] > log)
			right = mid;
		else
			printf("We find the number! It is %d th.\n",mid+1);
	} while (left >= right);
	if (left > right)
		printf("We do not find the number.\n");
	return 0;
}