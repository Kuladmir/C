#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define ROWs 11
#define COLs 11
#define mine 10
void manu()
{
	printf("		扫雷  游戏		\n");
	printf("		1.游戏开始		\n");
	printf("		0.退出游戏		\n");
}

void Initboard(char a[ROWs][COLs],int rows,int cols,char set)//初始化棋盘
{
	int i,j;
	for(i=0;i<rows;i++)
	{
		for(j=0;j<cols;j++)
			a[i][j]=set;
	}
}

void Display(char a[ROWs][COLs],int rows,int cols)//打印内容
{
	int i,j;	
	printf("列 \\ 行      ");
	for(i=1;i<=cols-2;i++)
		printf("%d ",i);
	printf("\n");
	for(i=1;i<=rows-2;i++)
	{
		printf("%d ",i); 
		printf("	     ");
		for(j=1;j<=cols-2;j++)
			printf("%c ",a[i][j]);
		printf("\n");
	}
}

void Setmine(char a[ROWs][COLs],int rows,int cols)//设置地雷
{
	int count=mine;
	while(count)
	{
		int x=rand()%(rows-2)+1;
		int y=rand()%(cols-2)+1;
		if(a[x][y] == '0')
		{
			a[x][y] = '1';
			count--;
		}
	}
}

int get(char a[ROWs][COLs],int x,int y)//寻找周围雷的个数
{
	return a[x-1][y]+
	a[x+1][y]+
	a[x][y-1]+
	a[x][y+1]+
	a[x-1][y-1]+
	a[x-1][y+1]+
	a[x+1][y-1]+
	a[x+1][y+1]-8*'0';
}

void findmine(char a[ROWs][COLs],char show[ROWs][COLs],int rows,int cols)
{
	int x,y,c,win=0;
	while(1)
	{	
		printf("请输入想尝试的坐标;>");
		scanf("%d%d",&x,&y);
		if(x>=1 && x<=rows-2 && y>=1 && y<=cols-2)
		{
			if(a[x][y] == '1')
			{
				printf("踩中雷，游戏失败\n");
				Display(a,ROWs,COLs);
				break;
			}
			else
			{
				c=get(a,x,y);
				show[x][y]=c+'0';
				Display(show,ROWs,COLs);
				win++;
				if(win == (ROWs-2)*(COLs-2)-mine)
				{
					printf("你赢了\n");
					break;
				}
			}
		}
		else
			printf("输入错误。");
	}
	}

void game()
{
	printf("		   扫雷\n");
	printf("初级模式，9*9范围内有%d个地雷，将所有地雷分离出即为胜利\n",mine);
	char a[ROWs][COLs]={0};//地雷的信息
	char show[ROWs][COLs]={0};//排查信息
	Initboard(a,ROWs,COLs,'0');//初始化地图 
	Initboard(show,ROWs,COLs,'*');//初始化地图
	// Display(a,ROWs,COLs);
	Display(show,ROWs,COLs);
	Setmine(a,ROWs,COLs);//布置雷区
	//Display(a,ROWs,COLs);//打印布置好的雷图
	findmine(a,show,ROWs,COLs);
}

void test()
{
	int a;
	do	
	{	
	manu();
	printf("      请选择:>");
	scanf("%d",&a);
	switch(a)
	{
	case 1:
		game();
		break;
	case 2:
		printf("游戏已退出\n");
		break;
	default:
		printf("输入错误\n");
		break;
	}
	}while(a);
}

int main()
{
	srand((unsigned int)time(NULL));
	test();
	return 0;
}
