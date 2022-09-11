#include<stdio.h>
int main()
{
	double a[10],*b;
	int i;
	for(i=0;i<10;i++)
		scanf("%lf",&a[i]);
	b=a;
	for(i=0;i<10;i=i+2)
		printf("%lf ",*(b+i));
	printf("\n");
	return 0;
}
