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
		printf("С�˴洢\n");
	else
		printf("��˴洢\n");
	return 0;
}