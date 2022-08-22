#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int check_sys()
{
	int a = 1;
	return *(char*)&a;
}
int main()
{
	int a=check_sys();
	if (a == 1)
		printf("Ð¡¶Ë´æ´¢\n");
	else
		printf("´ó¶Ë´æ´¢\n");
	return 0;
}