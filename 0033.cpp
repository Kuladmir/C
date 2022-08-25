#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	char a[] = "Kuladmir";
	char* p = a;
	printf("%c\n", *p);
	printf("%s\n", p);
	return 0;

}