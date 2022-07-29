#include<stdio.h>//练习1.找两个数的最大公约数
int main()
{
	int a,b,c;
	scanf("%d%d",&a,&b);
	if(a%b==0)
		printf("%d\n",b);
	else
	{
		while(c=a%b)
		{
			a=b;
			b=c;
		}
		printf("%d\n",b);
	}
	return 0;
}



