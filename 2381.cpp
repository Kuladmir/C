#include<stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	if(a>=90)
		printf("%d belongs to A\n",a);
	if(a<60)
		printf("%d belongs to E\n",a);
	if(a>=60 && a<70)
		printf("%d belongs to D\n",a);
	if(a>=70 && a<80)
		printf("%d belongs to C\n",a);
	if(a>=80 && a<90)
		printf("%d belongs to B\n",a);
	return 0;
}