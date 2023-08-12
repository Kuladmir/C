//µ¹ĞòÊä³ö×Ö·û´®
#include<stdio.h>
#include<string.h>
int main()
{
	char a[100];
	printf("ÇëÊäÈëÒ»¸ö×Ö·û´®:>");
	gets_s(a);
	char* p=a;
	int i = strlen(a);
	for (p = p + i - 1; p >= a; p--)
		printf("%c", *p);
	return 0;
}