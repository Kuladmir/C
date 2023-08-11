//计算一个int数中，二进制序列有几个1
#include<stdio.h>
int main()
{
	int i, count = 0, j = 0, con;
	printf("请输入一个整数:>");
	scanf("%d", &i);
	con = i;
	for (j = 0; j < 32; j++)
	{
		if ((i & 1) == 1)
			count++;
		i=i>>1;
	}
	printf("%d的二进制序列(补码)中有%d个1\n", con, count);
	return 0;
}