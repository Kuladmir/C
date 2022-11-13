#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
#define N 100
int main()
{
	int a, b;
	for (a = 2; a <= N; a++)
	{
		for (b = 2; b <= sqrt(a); b++)
		{
			if ((a % b == 0) && (a != 2))
				break;
		}
		if (b > sqrt(a))
			printf("%d ", a);
	}
	printf("\n");
	return 0;
}