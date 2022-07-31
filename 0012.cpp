#include<stdio.h>
#include<time.h>
#include<stdlib.h>
void manu()
{
	printf("猜数字游戏\n");
	printf("1开始 0退出\n");
	printf("***********\n");
}
void game()
{
	int a,b,c;
	c=0;
	b=0;
	a=rand()%100+1;
	printf("请猜数字\n");
	while(1)
	{	
		b++;
		scanf("%d",&c);
		if(a<c)
			printf("猜大了\n");
		else if(a>c)
			printf("猜小了\n");
		else
		{
			printf("猜对了,共进行了%d次\n",b);
			break;
		}
	}
}
int main()
{
	int a;
	srand((unsigned int)time(NULL));
	do
	{	
		manu();
		printf("请选择:>");
		scanf("%d",&a);
		switch(a)
		{
		case 1:
			game();
			break;
		case 0:
			break;
		default:
			printf("输入错误\n");
			break;
		}
	}while(a);
	return 0;
}




