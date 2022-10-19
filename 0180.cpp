#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void manu()
{
	printf("猜数字游戏\n");
	printf("1.开始 0.退出\n");
}
void game()
{
	int a, b, c;
	manu();
	scanf("%d", &a);
	while (a)
	{
		b = rand() % 100;
		do
		{
			printf("请输入你猜的数字:>");
			scanf("%d", &c);
			if (c > b)
				printf("太大了\n");
			else if (c < b)
				printf("太小了\n");
			else
			{
				printf("猜对了\n");
				printf("--------------------\n");
			}
		} while (c != b);	
		manu();
		scanf("%d", &a);
	}
}
int main()
{	
	srand((unsigned int)time(NULL));
	game();
	return 0;
}