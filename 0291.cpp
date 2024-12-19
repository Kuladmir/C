//数列找数
#include<stdio.h>
int main()
{
	printf("请输入10个数:>");
	int arr[10], i, search=0, count=0;
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);
	}
	printf("\n");
	printf("请输入要查找的数:>");
	scanf("%d", &search);
	printf("\n");
	for (i = 0; i < 10; i++)
	{
		if (arr[i] == search)
		{
			count++;
			printf("找到，是第%d个数，目前已找到%d个;", (i + 1), count);
		}
	}
	printf("\n");
	printf("完成，最后找到了%d个。\n", count);
	return 0;
}