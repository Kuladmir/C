#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void manu()
{
	printf("��������Ϸ\n");
	printf("1.��ʼ 0.�˳�\n");
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
			printf("��������µ�����:>");
			scanf("%d", &c);
			if (c > b)
				printf("̫����\n");
			else if (c < b)
				printf("̫С��\n");
			else
			{
				printf("�¶���\n");
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