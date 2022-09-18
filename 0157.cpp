#define _CRT_SECURE_NO_WARNINGS 1
//注意定义宏时的替换关系
#include<stdio.h>
#define Pi(x) x*x
#define Tr(x) x*5
//修改1 方法1
#define Tr1(x) (x)*5
#define ku(x) x+x
//修改2 方法
#define ku1(x) (x+x)
int main()
{
	int a = 10;
	int b = Pi(a);
	int c = Tr(5 + 1); //问题1. 宏运算的替换关系
	int d = 10 * ku(a);//问题2. 宏运算的替换关系
	printf("b = %d\n", b);
	printf("c = %d\n", c);//应该是30？？
	printf("d = %d\n", d);//应该是200？？
	// 修改1 方法2
	int c1 = Tr(6);
	int c2 = Tr1(5 + 1);
	printf("c1 = %d\n", c1);
	printf("c2 = %d\n", c2);
	//修改2
	int d1 = 10 * ku1(a);
	printf("d1 = %d\n", d1);
	return 0;
}