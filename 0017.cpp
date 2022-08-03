#include<stdio.h>//递归输出一个数字的每一位
void pr(int a)
{
	int c=0;
	if(a>9)
	{
		pr(a/10);
		c++;
	}
	printf("%d ",a%10);
}
int main()
{
	int a;
	scanf("%d",&a);
	pr(a);
	return 0;
}
