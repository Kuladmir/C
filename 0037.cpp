#include<stdio.h>
int strl(char* str)
{
	char* start=str;
	char* end=str;
	while(*end!='\0')
		end++;
	return end-start;
}
int main()
{
	char a[]="kuladmir";
	int b=strl(a);
	printf("%d\n",b);
	return 0;
}
