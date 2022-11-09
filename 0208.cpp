#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int asc(int a)
{
	int sum=a;
	if (a != 1)
	{
		return sum * asc(a - 1);
		a--;
	}
	else
		return 1;
}
int main()
{
	int a;
	printf("¼ÆËã½×³Ë\n");
	scanf("%d", &a);
	int c = asc(a);
	printf("%d\n", c);
	return 0;
}