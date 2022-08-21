#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int my_strlen(char a[])
{
	int count = 0;
	int i=0;
	while (a[i] != '\0')
	{
		count++;
		i++;
	}
	return count;
}
int main()
{
	char a[20];
	scanf("%s", a);
	int b=my_strlen(a);
	printf("%d\n", b);
	return 0;
}