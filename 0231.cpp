#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void reverse(int a)
{
	while (a)
	{
		printf("%d", a % 10);
		a /= 10;
	}
}
int main()
{
	int a;
	scanf("%d", &a);
	reverse(a);
	return 0;
}