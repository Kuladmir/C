#include<stdio.h>//输入数字弹出星期，两种形式
int main()
{
	int a,b;
	printf("输入1代表1模式，输入2代表2模式\n");
	scanf("%d",&a);
	if(a==1)
	{
		printf("输入星期数\n");
		scanf("%d",&b);
		switch(b)
		{
		case 1:
			printf("星期一\n");
			break;
		case 2:
			printf("星期二\n");
			break;
		case 3:
			printf("星期三\n");
			break;
		case 4:
			printf("星期四\n");
			break;
		case 5:
			printf("星期五\n");
			break;
		case 6:
			printf("星期六\n");
			break;
		case 7:
			printf("星期天\n");
			break;
		default:
			printf("输入错误\n");
			break;
		}
	}
	else
	{
		printf("输入星期数\n");
		scanf("%d",&b);
		switch(b)
		{
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
			printf("工作日\n");
			break;
		case 6:
		case 7:
			printf("休息日\n");
			break;
		default:
			printf("输入错误\n");
			break;
		}
	}
	return 0;
}


