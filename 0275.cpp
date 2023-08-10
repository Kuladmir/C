//猜数字游戏-练习
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
void game()
{
	int ret, i, count, gus;
	ret = rand() % 100 + 1;
	count = 0;
	do
	{
		printf("请输入一个数(0结束):>");
		scanf("%d", &i);
		if (i != 0)
		{
			printf("游戏开始，该数字在1-100之间\n");
			do
			{
				printf("请猜数字:>");
				scanf("%d", &gus);
				if (gus > ret)
				{
					printf("太大了\n");
					count++;
				}
				if (gus < ret)
				{
					printf("太小了\n");
					count++;
				}
				if (gus == ret)
					printf("猜对了，一共猜了%d次\n", ++count);
			} while (gus != ret);
		}
	} while (i);
}
int main()
{
	srand((size_t)time(NULL));
	game();
	return 0;
}