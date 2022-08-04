#include<stdio.h>
int main()
{
	int a,i=0,c=0,d;
	int b[10];
	printf("输入一个数字，判断是不是水仙花数;>");
	scanf("%d",&a);
	d=a;
	while(a)
	{
		b[i]=a%10;
		a/=10;
		i++;
	}
	i--;
	while(i!=-1)
	{
		c+=b[i]*b[i]*b[i];
		i--;
	}
	printf("实际算出是%d，因此该数：",c);
	if(c==d)
		printf("是水仙花数\n");
	else
		printf("不是水仙花数\n");
	return 0;
}



