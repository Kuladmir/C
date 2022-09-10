#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
void game()
{
	int ret = rand() % 100 + 1;
	int a,count=0;
	do
	{
		printf("请猜一个数字:>");
		scanf("%d", &a);
		if (a < ret)
		{
			printf("偏小了\n");
			count++;
		}
		else if (a > ret)
		{
			printf("偏大了\n");
			count++;
		}
		else
		{
			count++;
			printf("猜对了，共猜对%d次\n",count);
			break;
		}
	} while (1);
}
int main()
{
	srand((size_t)time(NULL));
	game();
	return 0;
}