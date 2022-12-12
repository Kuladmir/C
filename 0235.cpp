#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	printf("输入一个八进制的数字(每个位上的数不能大于8):>");
	int a;
	scanf("%o", &a);
	printf("这个数的十进制是%d\n", a);
	printf("这个数的十六进制是%x\n", a);
	return 0;
}