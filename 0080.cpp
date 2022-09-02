#define _CRT_SECURE_NO_WARNINGS 1
//º¯ÊýÊµÏÖSn=2+22+222+2222¡­¡­
#include<stdio.h>
int main()
{
	int a = 0, b,c;
	scanf("%d%d", &c, &b);
	int sum = 0, i;
	for (i = 1; i <= b; i++)
	{
		a = a * 10 + c;
		sum = sum + a;
	}
	printf("%d\n", sum);
	return 0;
}