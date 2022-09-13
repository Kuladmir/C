#include<stdio.h>
#include<string.h>
int main()
{
	char a[256];
	int i,j,k;
	scanf("%s",a);
	k=strlen(a);
	for(i=0;i<k;i++)
		if(a[i]>=97 && a[i]<=122)
		{
			j=a[i];
		    j=j-32;
			a[i]=j;
		}
	for(i=0;i<k;i++)
		printf("%c",a[i]);
	printf("\n");
	return 0;
}
