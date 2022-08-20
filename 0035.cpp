#include<stdio.h>
void divide(int a)
{
	if(a>9)
		divide(a/10);
	printf("%d ",a%10);
}
int main()
{
	int a;
	a=1234;
	divide(1234);
	return 0;
}
