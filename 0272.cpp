//ð������-��ϰ
#include<stdio.h>
#define N 10
int main()
{
	int i, j, t, a[N];
	printf("������%d������:>", N);
	for (i = 0; i < N; i++)
		scanf("%d", &a[i]);
	for(i=0;i<N-1;i++)
		for (j = 0; j < N - 1 - i; j++)
		{
			if (a[j] > a[j + 1])
			{
				t = a[j];
				a[j] = a[j + 1];
				a[j + 1] = t;
			}
		}
	for (i = 0; i < N; i++)
		printf("%d ", a[i]);
	printf("\n");
	return 0;
}