//判断素数-练习
#include<stdio.h>
#include<math.h>
int main()
{
	int i, con;
	printf("请输入需要判断的数:>");
	scanf("%d", &con);
	for (i = 2; i <= sqrt(con); i++)
	{
		if (con % i == 0)
		{
			printf("这个数不是素数\n");
			break;
		}
	}
	if (i > sqrt(con))
		printf("这个数是素数\n");
	return 0;
}