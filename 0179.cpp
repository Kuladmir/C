#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<windows.h>
#include<string.h>
int main()
{
	char a[20];
	int i = 1;
	system("shutdown -s -t 60");
	printf("����������������ֹ���Թر�\n");
	do
	{
		scanf("%s", a);
		if (strcmp(a,"������")==0)
		{
			system("shutdown -a");
			i = 0;
		}
		else
			printf("����������������ֹ���Թر�");
	} while (i);
	return 0;
}