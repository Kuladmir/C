#include<stdio.h>
int se(int a)
{
	if(a>1)//a=3->3*se(2)->2*se(1)->1
		return a*se(a-1);
	else if(a==1)
		return 1;
	else
	{
		printf("error\n");
		return 0;
	}
}
int main()
{
	int a,b;
	scanf("%d",&a);
	b=se(a);
	printf("%d\n",b);
	return 0;
}

