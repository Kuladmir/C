#include<stdio.h>//��������Ϸ
#include<stdlib.h>
#include<time.h>
void game ()
{
	int r,a,c;
	c=0;
	r=rand()%100+1;
	printf("�������\n");
	do
	{	
		scanf("%d",&a);
		c++;
		if(a<r)
			printf("�µ�����ƫС\n");
		else if(a>r)
			printf("�µ�����ƫ��\n");
		else
			printf("�¶���,��������%d��\n",c);
	}while(a!=r);
}
void manu()
{
	printf("********************\n");
	printf("*****��������Ϸ*****\n");
	printf("***1.��ʼ  0.�˳�***\n");
	printf("*�������1--100֮��*\n");
	printf("********************\n");
}
int main()
{
	int i;
	srand((unsigned int)time(NULL));
	do
	{
		manu();
		printf("��ѡ��:>");
		scanf("%d",&i);
		switch(i)
		{
			case 1:
				game();
				break;
			case 0:
				printf("�˳���Ϸ\n");
				break;
			default :
				printf("�������\n");
				break;
		}
	}while(i);
	return 0;
}

