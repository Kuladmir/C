//斐波那契数列-练习
#include<stdio.h>
int main()
{
	int con, i, j=1, k=1, a=0;
	printf("请输入要计算第几个斐波那契数列的数:>");
	scanf("%d", &con);		
	if (con == 1 || con == 2)
			printf("第%d个数是%d\n", con, 1);
	else
		for (i = 3; i < con + 1; i++)
		{

			a = j + k;
			k = j;
			j = a;
		} 
	printf("第%d个数是%d\n", con, a);
	return 0;
}