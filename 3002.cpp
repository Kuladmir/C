#include<stdio.h>
int main()
{
	//int a;
	char arr[10],arr2[10];
	char ch;
	printf("创建账户，请按照提示进行操作\n");
	printf("请输入10个数字组成您的账号\n");
	scanf("%s",arr);
	printf("您的账号 %s 可用\n",arr);
	printf("请输入一串密码，最多十位\n");
	scanf("%s",arr2);
	printf("您的密码 %s 可用\n",arr2);
	while(ch=getchar()!='\n')
		;
	printf("请确认您的密码，Yes/Y，No/N\n");
	scanf("%c",&ch);
	if(ch == 'Y')
	{
		printf("创建完成\n");
		printf("您的账号为 %s\n",arr);
		printf("您的密码为 %s\n",arr2);
	}
	else
		printf("创建失败\n");
	return 0;
}


