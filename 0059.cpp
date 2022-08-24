#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void game()
{
	int a = rand() % 100 + 1;
	int b,count=0;
	do
	{
		printf("Please guess the number:>");
		scanf("%d", &b);
		if (b > a)
		{
			printf("Up\n");
			count++;
		}
		if (b < a)
		{
			printf("Down\n");
			count++;
		}
		if (b == a)
		{
			printf("Congratulations\n");
			printf("The number is %d.You guess %d times\n", b, count);
			break;
		}
	} while (1);
}
void test()
{
	int a;
	do
	{
		printf("Play -> 1,Quit -> 0\n");
		scanf("%d", &a);
		switch (a)
		{
		case 1:
			game();
			break;
		case 0:
			printf("Quit game\n");
			break;
		default:
			printf("Error input\n");
			break;
		}
	} while (a);
}
int main()
{
	srand((unsigned)time(NULL));
	test();
	return 0;
}