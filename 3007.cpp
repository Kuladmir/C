#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define ROW 15
#define COL 15
void manu()//�˵�����
{
		printf("��������Ϸ\n");
		printf("��ʼ1���˳�0\n");
}

void Initboard(char a[ROW][COL],int row,int col)//��ʼ�����̺���
{
	int i,j;
	for(i=0;i<row;i++)
		for(j=0;j<col;j++)
			a[row][col]=' ';
}

void Disboard(char a[ROW][COL],int row,int col)//��ӡ���̺���
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

void player(char a[ROW][COL],int row,int col)//���1����
{
	int x,y;
	while(1)
	{
	printf("���1��ʼ����,����������(x:1~%d,y:1~%d):>",row,col); 
	scanf("%d%d",&x,&y);
	if(x>=1 && x<= row && y>=1 && y<=col)
	{
		if(a[x-1][y-1] ==  '\0')
		{
			a[x-1][y-1] = '*';
			break;
		}
		else
			printf("��ռ�ã�����������\n");  
	}
	else
		printf("�������,����������\n");
	}
}

void computer(char a[ROW][COL],int row,int col)//���2����
{
	int x,y;
	while(1)
	{
	printf("���2��ʼ����,����������(x:1~%d,y:1~%d):>",row,col); 
	scanf("%d%d",&x,&y);
	if(x>=1 && x<= row && y>=1 && y<=col)
	{
		if(a[x-1][y-1] ==  '\0')
		{
			a[x-1][y-1] = '/';
			break;
		}
		else
			printf("��ռ�ã�����������\n");  
	}
	else
		printf("�������,����������\n");
	}
}

char Iswin(char a[ROW][COL],int row,int col)//�ж���Ӯ
{
	int i,j,x,y,c,count,n;
	static int m;
	for(i=0;i<row;i++)//�ж�����
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
			printf("ʤ������1������  ");
			return a[i][x];
		}
	}
	for(j=0;j<col;j++)//�жϺ���
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
			printf("ʤ������2������  ");
			return a[y][j];
		}
	}
	for(n=0;n<row-4;n++)//�ж���б
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
			printf("ʤ������3�����  ");
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
			printf("ʤ������3�����  ");
			return a[x][y];
		}
	}
	for(n=0;n<row-4;n++)//�ж�Ʋб
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
			printf("ʤ������4���ҳ�  ");
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
			printf("ʤ������4���ҳ�  ");
			return a[x][y];
		}
	}
	if(m == 4*row*col)
		return '#';
}

void game()//��Ϸʵ�庯��
{
	char is;
	char a[ROW][COL]={0};//���������ݳ�ʼ��Ϊ\0
	Initboard(a,ROW,COL);//��ʼ������
	Disboard(a,ROW,COL);//��ӡ����
	while(1)//��ʼ����
	{         
		//���1����
		player(a,ROW,COL);
		Disboard(a,ROW,COL);
		//�ж�����Ƿ�ʤ��
		is = Iswin(a,ROW,COL);
		if(is == '*')
		{
			printf("���1ʤ��,��Ϸ����\n");
			break;
		}
		else if(is == '#')
		{
			printf("��Ϸƽ��\n"); 
			break;
		} 
		//���2����
		computer(a,ROW,COL);
		Disboard(a,ROW,COL);
		//�жϵ����Ƿ�ʤ��
		is = Iswin(a,ROW,COL);
		if(is == '/')
		{
			printf("���2ʤ��,��Ϸ����\n");
			break;
		}
		else if(is == '#')
		{
			printf("��Ϸƽ��\n"); 
			break;
		} 
	}
}

void test()//��庯��
{
	int a;
	do
	{
		manu();
		scanf("%d",&a);
		switch(a)
		{
		case 1:
			printf("��Ϸ��ʼ:>\n");
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("�������\n");
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

