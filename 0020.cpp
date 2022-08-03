#include<stdio.h>
int strl(char *str)
{
	if(*str != '\0')
		return (1+strl(str+1));
	else
		return 0;
}

int main()
{
	char a[10];
	scanf("%s",a);
	int c=strl(a);
	printf("%d\n",c);
	return 0;
}
