#include<stdio.h>
#include<string.h>
int main()
{
	char str1[10],str2[10];
	int a,b,c,i,d,e,j;
	scanf("%s",str1);
	scanf("%s",str2);
	a=strlen(str1);
	b=strlen(str2);
	if(a>b)
	{
		c=b;
		for(i=0;i<c;i++)
	{
		d=str1[i];
        e=str2[i];
		printf("%c",d);
		printf("%c",e);
	}
		for(j=i;j<a;j++)
		{
		d=str1[j];
		printf("%c",d);
		}
	}
	if(a<b)
	{
		c=a;
	for(i=0;i<c;i++)
	{
		d=str1[i];
        e=str2[i];
		printf("%c",d);
		printf("%c",e);
	}
	for(j=i;j<b;j++)
	{
		e=str2[j];
		printf("%c",e);
	}
	}
	if(a==b)
	{
		c=a;
	  	for(i=0;i<c;i++)
	{
		d=str1[i];
        e=str2[i];
		printf("%c",d);
		printf("%c",e);
	}
	}
	printf("\n");
	return 0;
}




