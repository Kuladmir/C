#include<stdio.h>
int main()
{
	float factorials(float x);
	float a,b;
	scanf("%f",&a);
	b=factorials(a);
	printf("%.2f",b);
	return 0;
}
float factorials(float x)
{
	float i,j,m,n;
	j=1;
	i=3;
	m=2;
	n=2;
	while(n<=x)
	{	
		j=j+1/m;
		m=m*i;
		i++;
		n++;
	}
	return(j);
}

	