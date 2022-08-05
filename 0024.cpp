#include<stdio.h>
int main()
{
	int i,j,c;
	printf("请输入控制数;> ");
	scanf("%d",&c);//可控制输出的数：如输入9，输出99乘法表
	for(i=1;i<=c;i++)
	{
		for(j=1;j<=i;j++)
			printf("%d * %d = %2d  ",i,j,i*j);//%2d表示向右对齐
		printf("\n");
	}
	return 0;
}


