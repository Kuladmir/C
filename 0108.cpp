#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
void game()
{
	int ret = rand() % 100 + 1;
	int a,count=0;
	do
	{
		printf("���һ������:>");
		scanf("%d", &a);
		if (a < ret)
		{
			printf("ƫС��\n");
			count++;
		}
		else if (a > ret)
		{
			printf("ƫ����\n");
			count++;
		}
		else
		{
			count++;
			printf("�¶��ˣ����¶�%d��\n",count);
			break;
		}
	} while (1);
}
int main()
{
	srand((size_t)time(NULL));
	game();
	return 0;
}