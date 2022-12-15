#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
void game()
{
	int g, a;
	a = rand() % 100;
	do
	{
		printf("ÇëÊäÈë:>");
		scanf("%d", &g);
		if (g == a)
		{
			printf("Correct\n");
			break;
		}
		else if (g < a)
			printf("Small\n");
		else
			printf("Big\n");
	} while (1);
}
int main()
{
	int i;
	srand((unsigned int)(time(NULL)));
	game();

	return 0;
}