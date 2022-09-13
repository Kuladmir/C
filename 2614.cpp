#include<stdio.h>
#include<string.h>
int main()
{
	char str[256];
	char d;
	int b,i,c;
	float a;
	scanf("%s %c",str,&d);
	b=strlen(str);
	a=d;
	c=a;
	for(i=0;i<b;i++)
	{
		if(str[i]==c)
		{
			a=i;
			break;
		}
		else
			a=-1;
	}
	printf("%.0lf\n",a);
	return 0;
}
