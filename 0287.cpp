//计算3+33+333+3333……
#include<stdio.h>
#define N 3
int main()
{
	int i = N;
	int con, count=0, j, tmp=0;
	printf("请输入要控制数:>");
	scanf("%d", &con);
	for (j = 0; j < con; j++)
	{
		tmp = tmp * 10 + i;
		count += tmp;
	}
	printf("结果为：%d\n", count);
	return 0;
}