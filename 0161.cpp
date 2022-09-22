#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int k = 5;
void f(int* s)
{
	s = &k;

}
int main()
{
	int m = 3, * p = &m;
	f(&m);
	printf("%d %d\n", m, *p);
}