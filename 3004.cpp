#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define ROW 3
#define COL 3
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

void player(char a[ROW][COL],int row,int col)//�������
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

void computer(char a[ROW][COL],int row,int col)//��������
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
	int i,j,count=0;
	static int d=0;
	char e='A';
	for(i=0;i<row;i++)//�жϺ���
	{
		if(i==0)
			d++;
		for(j=0,count=0;j<col-1;j++)
		{
			if(a[i][j] == a[i][j+1] && a[i][j] != '\0')
				count++;
		}
		if(count == row-1)
		{
			printf("ʤ������1�����ᡣ",i+1);
			return a[i][0];
		}
	}
	for(j=0;j<col;j++)//�ж�����
	{
		if(j==0)
			d++;
		for(i=0,count=0;i<row-1;i++)
		{
			if(a[i][j] == a[i+1][j] && a[i][j] != '\0')
				count++;
		}
		if(count == col-1)
		{
			printf("ʤ������2�����ݡ�",j+1);
			return a[0][j];
		}
	}
	for(i=0,j=0,count=0;i<row && j<col;i++,j++)//�ж���б
	{
		if(i==0)
			d++;
		if(a[i][j] == a[i+1][j+1] && a[i][j] != '\0')
			count++;
		if(count == row-1)
		{
			printf("ʤ������3����ɡ�");
			return a[i][j];
		}
	}
	for(i=row-1,j=col-1,count=0;i>0 && j>0;i--,j--)//�ж�Ʋб
	{
		if(i==row-1)
			d++;
		if(a[i][j] == a[i-1][j-1] && a[i][j] != '\0')
			count++;
		if(count == row-1)
		{
			printf("ʤ������4���ҳɡ�");
			return a[i][j];
		}
	}
	if(d == 4*ROW*COL)
	{
		e='#';
		return e;
	}
	else 
		return e;
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

