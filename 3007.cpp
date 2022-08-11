#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define ROW 15
#define COL 15
void manu()//菜单函数
{
		printf("五子棋游戏\n");
		printf("开始1，退出0\n");
}

void Initboard(char a[ROW][COL],int row,int col)//初始化棋盘函数
{
	int i,j;
	for(i=0;i<row;i++)
		for(j=0;j<col;j++)
			a[row][col]=' ';
}

void Disboard(char a[ROW][COL],int row,int col)//打印棋盘函数
{
	int i,j;
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf(" %c ",a[i][j]);
			if(j<col-1)
				printf("|");
			if(j==col-1)
				printf("\n");
		}
		for(j=0;j<col;j++)
		{
			if(i<row-1)
				printf("---");
			if(j<col-1 && i<row-1)
				printf("|");
			if(j==col-1)
				printf("\n");
		}
	}

}

void player(char a[ROW][COL],int row,int col)//玩家1下棋
{
	int x,y;
	while(1)
	{
	printf("玩家1开始下棋,请输入坐标(x:1~%d,y:1~%d):>",row,col); 
	scanf("%d%d",&x,&y);
	if(x>=1 && x<= row && y>=1 && y<=col)
	{
		if(a[x-1][y-1] ==  '\0')
		{
			a[x-1][y-1] = '*';
			break;
		}
		else
			printf("已占用，请重新输入\n");  
	}
	else
		printf("输入错误,请重新输入\n");
	}
}

void computer(char a[ROW][COL],int row,int col)//玩家2下棋
{
	int x,y;
	while(1)
	{
	printf("玩家2开始下棋,请输入坐标(x:1~%d,y:1~%d):>",row,col); 
	scanf("%d%d",&x,&y);
	if(x>=1 && x<= row && y>=1 && y<=col)
	{
		if(a[x-1][y-1] ==  '\0')
		{
			a[x-1][y-1] = '/';
			break;
		}
		else
			printf("已占用，请重新输入\n");  
	}
	else
		printf("输入错误,请重新输入\n");
	}
}

char Iswin(char a[ROW][COL],int row,int col)//判断输赢
{
	int i,j,x,y,c,count,n;
	static int m;
	for(i=0;i<row;i++)//判断连横
	{
		if(i==0)
			m++;
		for(j=0;j<col-1;j++)
		{
			if(a[i][j] == a[i][j+1] && a[i][j]!='\0')
				count++;
			if(count == 4 && c==0)
			{
				x=j;
				c++;
			}
		}
		if(count == 4)
		{
			printf("胜利条件1：连横  ");
			return a[i][x];
		}
	}
	for(j=0;j<col;j++)//判断合纵
	{
		if(j==0)
			m++;
		for(i=0;i<row-1;i++)
		{
			if(a[i][j] == a[i+1][j] && a[i][j]!='\0')
				count++;
			if(count == 4 && c==0)
			{
				y=i;
				c++;
			}
		}
		if(count == 4)
		{
			printf("胜利条件2：合纵  ");
			return a[y][j];
		}
	}
	for(n=0;n<row-4;n++)//判断捺斜
	{
		if(n==0)
			m++;
		for(i=n,j=0,count=0,c=0;i<row-1 && j<col-c-1;i++,j++)
		{
			if(a[i][j] == a[i+1][j+1] && a[i][j]!='\0')
				count++;
			if(count == 4 && c==0)
			{
				x=i;
				y=j;
				c++;
			}
		}
		if(count == 4)
		{
			printf("胜利条件3：左成  ");
			return a[x][y];
		}
		for(i=0,j=n,count=0,c=0;i<row-c-1 && j<col-1;i++,j++)
		{
			if(a[i][j] == a[i+1][j+1] && a[i][j]!='\0')
				count++;
			if(count == 4 && c==0)
			{
				x=i;
				y=j;
				c++;
			}
		}
		if(count == 4)
		{
			printf("胜利条件3：左成  ");
			return a[x][y];
		}
	}
	for(n=0;n<row-4;n++)//判断撇斜
	{
		if(n==0)
			m++;
		for(i=n,j=col-1,count=0,c=0;i<row-1 && j>n;i++,j--)
		{
			if(a[i][j] == a[i+1][j-1] && a[i][j]!='\0')
				count ++;
			if(count == 4 && c==0)
			{
				x=i;
				y=j;
				c++;
			}
		}
		if(count == 4)
		{
			printf("胜利条件4：右成  ");
			return a[x][y];
		}
		for(i=0,j=col-n,count=0,c=0;i<row-1-c && j>0;i++,j--)
		{
			if(a[i][j] == a[i+1][j-1] && a[i][j]!='\0')
				count ++;
			if(count == 4 && c==0)
			{
				x=i;
				y=j;
				c++;
			}
		}
		if(count == 4)
		{
			printf("胜利条件4：右成  ");
			return a[x][y];
		}
	}
	if(m == 4*row*col)
		return '#';
}

void game()//游戏实体函数
{
	char is;
	char a[ROW][COL]={0};//将棋盘内容初始化为\0
	Initboard(a,ROW,COL);//初始化棋盘
	Disboard(a,ROW,COL);//打印棋盘
	while(1)//开始下棋
	{         
		//玩家1下棋
		player(a,ROW,COL);
		Disboard(a,ROW,COL);
		//判断玩家是否胜利
		is = Iswin(a,ROW,COL);
		if(is == '*')
		{
			printf("玩家1胜利,游戏结束\n");
			break;
		}
		else if(is == '#')
		{
			printf("游戏平局\n"); 
			break;
		} 
		//玩家2下棋
		computer(a,ROW,COL);
		Disboard(a,ROW,COL);
		//判断电脑是否胜利
		is = Iswin(a,ROW,COL);
		if(is == '/')
		{
			printf("玩家2胜利,游戏结束\n");
			break;
		}
		else if(is == '#')
		{
			printf("游戏平局\n"); 
			break;
		} 
	}
}

void test()//面板函数
{
	int a;
	do
	{
		manu();
		scanf("%d",&a);
		switch(a)
		{
		case 1:
			printf("游戏开始:>\n");
			game();
			break;
		case 0:
			printf("退出游戏\n");
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

