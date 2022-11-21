#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void Qia(int a)
{
	double sum = 0;
	int i;
	for (i = 1; i < a + 1; i+=2)
		sum = sum + 1.0 / i;
	printf("%lf\n", sum);
}
void qia(int a)
{
	double sum = 0;
	int i;
	for (i = 2; i < a + 1; i += 2)
		sum = sum + 1.0 / i;
	printf("%lf\n", sum);
}
int main()
{
	int a;
	printf("ÇëÊäÈë²Ù×÷Êý:>");
	scanf("%d", &a);
	if (a % 2 != 0)
		Qia(a);
	else
		qia(a);
	return 0;
}