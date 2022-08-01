#include<stdio.h>
void year(int a)
{
	if((a%4==0 && a%100!=0) || (a%400==0))
		printf("ÈòÄê\n");
	else
		printf("Æ½Äê\n");
}
int main()
{
	int a;
	scanf("%d",&a);
	year(a);
	return 0;
}
