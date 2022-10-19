#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<windows.h>
#include<string.h>
int main()
{
	char a[20];
	int i = 1;
	system("shutdown -s -t 60");
	printf("请输入我是猪，以终止电脑关闭\n");
	do
	{
		scanf("%s", a);
		if (strcmp(a,"我是猪")==0)
		{
			system("shutdown -a");
			i = 0;
		}
		else
			printf("请输入我是猪，以终止电脑关闭");
	} while (i);
	return 0;
}