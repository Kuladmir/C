//��������Ϸ-��ϰ
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
void game()
{
	int ret, i, count, gus;
	ret = rand() % 100 + 1;
	count = 0;
	do
	{
		printf("������һ����(0����):>");
		scanf("%d", &i);
		if (i != 0)
		{
			printf("��Ϸ��ʼ����������1-100֮��\n");
			do
			{
				printf("�������:>");
				scanf("%d", &gus);
				if (gus > ret)
				{
					printf("̫����\n");
					count++;
				}
				if (gus < ret)
				{
					printf("̫С��\n");
					count++;
				}
				if (gus == ret)
					printf("�¶��ˣ�һ������%d��\n", ++count);
			} while (gus != ret);
		}
	} while (i);
}
int main()
{
	srand((size_t)time(NULL));
	game();
	return 0;
}