#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void reverse(int* a,int b)
{
	int i;
	for (i = b - 1; i >= 0; i--)
		printf("%d ", *a+i);
}
int main()
{
	int a[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int len = sizeof(a) / sizeof(a[0]);
	reverse(a,len);
	return 0;
}