#include<stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	if(a<18)
	{
		printf("δ����\n");
	}
	else if(a>=18 && a<=28)
		printf("����\n");
	else if(a>28 && a<=40)
		printf("׳��\n");
	else if (a>40 && a<=60)
		printf("����\n");
	else 
		printf("����\n");
	return 0;
}
