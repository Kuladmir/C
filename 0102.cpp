#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int my_strlen(char* a)
{
	if (*a != '\0')
		return  1+my_strlen(a + 1);
	else
		return 0;
}
int main()
{
	char a[20];
	printf("������һ������С��20���ַ���:>");
	gets_s(a);
	int ret=my_strlen(a);
	printf("%d\n", ret);
	return 0;
}