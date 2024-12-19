//计算100以内，能被17整除的最大数

#include<stdio.h>
int main()
{
	int i = 0, count = 0;
	for (i = 0; i < 101; i++)
	{
		if (i %17 == 0)
			count = i;
	}
	printf("能被17整除的最大数:> %d", count);
	return 0;
}