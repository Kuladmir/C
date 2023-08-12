//输出1-1000内的水仙花数
#include<stdio.h>
#include<math.h>
int main()
{
	int i, j, a;
	for (i = 1; i < 1001; i++)
	{
		a = i;
		j = 0;
		while (a)
		{
			j += pow((a % 10), 3);
			a = a / 10;
		}
		if (j == i)
			printf("%d ", j);
	}
	printf("\n");
	return 0;
}