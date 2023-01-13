#include<stdio.h>//猜数字游戏
#include<stdlib.h>
#include<time.h>
void game ()
{
	int r,a,c;
	c=0;
	r=rand()%100+1;
	printf("请猜数字\n");
	do
	{	
		scanf("%d",&a);
		c++;
		if(a<r)
			printf("猜的数字偏小\n");
		else if(a>r)
			printf("猜的数字偏大\n");
		else
			printf("猜对了,共进行了%d次\n",c);
	}while(a!=r);
}
void manu()
{
	printf("********************\n");
	printf("*****猜数字游戏*****\n");
	printf("***1.开始  0.退出***\n");
	printf("*随机数在1--100之间*\n");
	printf("********************\n");
}
int main()
{
	int i;
	srand((unsigned int)time(NULL));
	do
	{
		manu();
		printf("请选择:>");
		scanf("%d",&i);
		switch(i)
		{
			case 1:
				game();
				break;
			case 0:
				printf("退出游戏\n");
				break;
			default :
				printf("输入错误\n");
				break;
		}
	}while(i);
	return 0;
}

