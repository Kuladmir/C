//水仙花数的计算

#include<stdio.h>

void test(int i)
{
	int a, b, c, d;
	c = i % 10;
	d = i / 10;
	b = d % 10;
	d /= 10;
	a = d % 10;
	if (i == a * a * a + b * b * b + c * c * c)
		printf("%d ",i);
}
int main()
{
	int i = 0;
	for (i = 100; i < 1000; i++)
		test(i);
	printf("\n");
	return 0;
}