#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a[3][4] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
	printf("%d\n", sizeof(a));//输出这个数组的大小
	printf("%d\n", sizeof(a[0]));//输出这个数组第一行的大小
	printf("%d\n", sizeof(a[1][1]));//输出这个数组第二行第二列元素大小
	printf("%d\n", sizeof(a[0] + 1));//输出这个数组第一行第二列元素地址大小
	//说明：a[0]表示第一行首元素地址，但是在表达式中只表示第一行第一列元素的地址
	printf("%d\n", sizeof(*(a[0] + 1)));//输出这个数组第一行第二列元素大小
	printf("%d\n", sizeof(a + 1));//输出这个数组第二行地址大小
	//说明：a表示整个数组地址，但在表达式中只表示第一行地址
	printf("%d\n", sizeof(*(a + 1)));//输出这个数组第二行大小
	printf("%d\n", sizeof(&a[0] + 1));//输出第二行地址大小
	printf("%d\n", sizeof(*(&a[0]+1)));//输出第二行大小
	return 0;
}