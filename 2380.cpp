#include<stdio.h>
int main()
{
   double a,b;
   scanf("%lf",&a);
   if(a<1)
   {
	   b=a;
	   printf("%lf\n",b);
   }
   else
   {
	   if(a>=10)
	   {
		   b=3*a-11;
		   printf("%lf\n",b);
	   }
	   else
	   {
		   b=2*a-1;
		   printf("%lf\n",b);
	   }
   }
   return 0;
}

