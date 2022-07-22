#include<stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	if(a<18)
	{
		printf("未成年\n");
	}
	else if(a>=18 && a<=28)
		printf("青年\n");
	else if(a>28 && a<=40)
		printf("壮年\n");
	else if (a>40 && a<=60)
		printf("中年\n");
	else 
		printf("老年\n");
	return 0;
}
