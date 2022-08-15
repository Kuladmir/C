#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define ROWs 11
#define COLs 11
#define mine 10
void manu()
{
	printf("		ɨ��  ��Ϸ		\n");
	printf("		1.��Ϸ��ʼ		\n");
	printf("		0.�˳���Ϸ		\n");
}

void Initboard(char a[ROWs][COLs],int rows,int cols,char set)//��ʼ������
{
	int i,j;
	for(i=0;i<rows;i++)
	{
		for(j=0;j<cols;j++)
			a[i][j]=set;
	}
}

void Display(char a[ROWs][COLs],int rows,int cols)//��ӡ����
{
	int i,j;	
	printf("�� \\ ��      ");
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

void Setmine(char a[ROWs][COLs],int rows,int cols)//���õ���
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

int get(char a[ROWs][COLs],int x,int y)//Ѱ����Χ�׵ĸ���
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
		printf("�������볢�Ե�����;>");
		scanf("%d%d",&x,&y);
		if(x>=1 && x<=rows-2 && y>=1 && y<=cols-2)
		{
			if(a[x][y] == '1')
			{
				printf("�����ף���Ϸʧ��\n");
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
					printf("��Ӯ��\n");
					break;
				}
			}
		}
		else
			printf("�������");
	}
	}

void game()
{
	printf("		   ɨ��\n");
	printf("����ģʽ��9*9��Χ����%d�����ף������е��׷������Ϊʤ��\n",mine);
	char a[ROWs][COLs]={0};//���׵���Ϣ
	char show[ROWs][COLs]={0};//�Ų���Ϣ
	Initboard(a,ROWs,COLs,'0');//��ʼ����ͼ 
	Initboard(show,ROWs,COLs,'*');//��ʼ����ͼ
	// Display(a,ROWs,COLs);
	Display(show,ROWs,COLs);
	Setmine(a,ROWs,COLs);//��������
	//Display(a,ROWs,COLs);//��ӡ���úõ���ͼ
	findmine(a,show,ROWs,COLs);
}

void test()
{
	int a;
	do	
	{	
	manu();
	printf("      ��ѡ��:>");
	scanf("%d",&a);
	switch(a)
	{
	case 1:
		game();
		break;
	case 2:
		printf("��Ϸ���˳�\n");
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
