//顺序表二分查找-练习
#include<stdio.h>
#define N 10 // 可调整
int main()
{
	int a[N];
	int i, con, k;
	do
	{		
		k = 1;	
		printf("请输入任意数字(0表示结束):>");
		scanf("%d", &con);
		printf("请输入一个含有%d个数字的顺序(从小到大)表:>",N);
		for (i = 0; i < N; i++)
			scanf("%d", &a[i]);
		if (k == 1)
		{
			int left = 0, right = sizeof(a) / sizeof(a[0]) - 1, mid, ser;
			printf("请输入需要查找的数:>");
			scanf("%d", &ser);
			do
			{
				mid = (left + right) / 2;
				if (a[mid] > ser)
					right = mid - 1;
				if (a[mid] < ser)
					left = mid + 1;
				if (a[mid] == ser)
				{
					printf("找到了，是第%d个\n", mid + 1);
					break;
				}
			} while (left <= right);
			if (left > right)
				printf("未找到\n");
		}
	} while (con);
	return 0;
}
