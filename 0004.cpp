#include<stdio.h>
int main()
{
	double a,b;
	printf("<2.5,x*5+6;x>8,x*6+4;x>=2.5 x<=8,x*2+5\n");
	scanf("%lf",&a);
	if(a<2.5)
		printf("%lf\n",a*5+6);
	else if(a>8)
		printf("%lf\n",a*6+4);
	else
		printf("%lf\n",a*2+5);
	return 0;
}

