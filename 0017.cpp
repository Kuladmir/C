#include<stdio.h>//�ݹ����һ�����ֵ�ÿһλ
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
