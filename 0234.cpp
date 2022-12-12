#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	printf("计算：809*??=800*??+9*?? 其中??代表的两位数, 809*??为四位数，8*??的结果为两位数，9*??的结果为3位数。求??代表的两位数，及809*??后的结果。\n");
	int a, j;
	for (j = 10; j < 99; j++)
	{
		if ((809 * j == 800 * j + 9 * j) && (809 * j < 10000) && (8 * j < 100) && (9 * j) > 100)
			printf("?? = %d\n", j);
	}
	return 0;
}