#include<stdio.h>
#include<time.h>
#include<stdlib.h>
void manu()
{
	printf("��������Ϸ\n");
	printf("1��ʼ 0�˳�\n");
	printf("***********\n");
}
void game()
{
	int a,b,c;
	c=0;
	b=0;
	a=rand()%100+1;
	printf("�������\n");
	while(1)
	{	
		b++;
		scanf("%d",&c);
		if(a<c)
			printf("�´���\n");
		else if(a>c)
			printf("��С��\n");
		else
		{
			printf("�¶���,��������%d��\n",b);
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
		printf("��ѡ��:>");
		scanf("%d",&a);
		switch(a)
		{
		case 1:
			game();
			break;
		case 0:
			break;
		default:
			printf("�������\n");
			break;
		}
	}while(a);
	return 0;
}




