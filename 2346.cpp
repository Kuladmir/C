#include<stdio.h>
int main()
{
	  float a,b,c,max;
printf("please input a,b,c:\n");
scanf("%f,%f,%f",&a,&b,&c);
max=a;
 if(max<b)
    max=b;
 if(max<c)
    max=c;
printf("max=%f\n",max);
return 0;
}