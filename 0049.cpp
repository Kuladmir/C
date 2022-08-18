#include<stdio.h>
void min(int a, int b)
{
	int c;
	do
	{
		c = a % b;
		a = b;
		b = c;
	} while (b);
	printf("%d\n", a);
}
int main()
{
	int a, b;
	scanf("%d%d", &a, &b);
	min(a, b);
	return 0;
}