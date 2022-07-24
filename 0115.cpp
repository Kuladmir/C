#include<stdio.h>
int main()
{
	int a;
	a=0;
	printf("1-100ÒÔÄÚµÄÆæÊýÓÐ\n");//printf("1-100以内的奇数有\n");
	for(a=1;a<=100;a++)
	{
		if(a%2 == 1)
			printf("%d ",a);
	}
	printf("\n");
	return 0;
}
