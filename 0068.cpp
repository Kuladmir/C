#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void maths(int (*p)(int , int ))
{
	int a, b;
	printf("请输入两个操作数:>");
	scanf("%d%d", &a, &b);
	printf("%d\n", p(a, b));
}
int add(int x, int y)
{
	return x + y;
}
int sub(int x, int y)
{
	return x - y;
}
int mul(int x, int y)
{
	return x * y;
}
int div(int x, int y)
{
	return x / y;
}
int main()
{
	int input;
	do
	{
		printf("1.加法 2.减法 3.乘法 4.除法 0.退出\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			maths(add);
			break;
		case 2:
			maths(sub);
			break;
		case 3:
			maths(mul);
			break;
		case 4:
			maths(div);
			break;
		case 0:
			printf("退出\n");
			break;
		default :
			printf("输入错误\n");
			break;
		}
	} while (input);
	return 0;
}