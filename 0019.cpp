#include<stdio.h>//ʵ���Զ���strlen����
int strl(char *str)
{
	int count=0;
	while(*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}
int main()
{
	char a[10];
	scanf("%s",a);
	int b=strl(a);
	printf("%d\n",b);
	return 0;
}
