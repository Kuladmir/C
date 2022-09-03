#define _CRT_SECURE_NO_WARNINGS 1
//喝汽水问题：1瓶1元，2瓶盖换一个，20元喝几瓶
#include<stdio.h>
int main()
{
	int a, b, c;
	printf("请输入你的钱数:>");
	scanf("%d", &a);
	b = c = a;
	while(c>1)
	{
		b = b + c / 2;
		c = c / 2 + c % 2;
	}
	printf("总共喝了：%d\n", b);
	return 0;
}