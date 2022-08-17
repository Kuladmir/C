#include<stdio.h>
#include<string.h>
int main()
{
	char a[10]="Happy";
	memset(a,'*',3);
	printf("%s\n",a);
	return 0;
}