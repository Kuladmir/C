#include<stdio.h>
#include<string.h>
void print(char *str,int m,int n)
{
	char a[256];
	int i,j=0;
	for(i=m-1;i<n;i++)
		a[j++]=str[i];
	//for(i=0;i<n-m+1;i++)
		//printf("%c",a[i]);
}
int main()
{
	char str[256];
	int n,m;
	scanf("%d\n",&n);
	gets(str);
	scanf("%d",&m);
	print(str,m,n);
	for(i=0;i<n-m+1;i++)
		printf("%c",a[i]);
	return 0;
}
