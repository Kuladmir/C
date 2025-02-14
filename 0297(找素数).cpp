//ÕÒËØÊı
#define N 1
#define M 100
#include<stdio.h>
#include<math.h>
void prime(int x, int y)
{
	int i, number, count=0;
	for (i = x; i <= M; i++)
	{
		for (number = 2; number <= sqrt(i); number++)
		{
			if (i % number == 0)
				break;
		}
		if (number > sqrt(i))
		{
			printf("%d ", i);
			count++;
		}
	}
	printf("\n");
	printf("By searching, we found that there is(are) %d primes from %d to %d\n", count, x, y);
}
int main()
{
	prime(N, M);
	return 0;
}