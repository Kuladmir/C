#include<stdio.h>
int main()
{
	int i,a,b,c,d;
	double y=0;
	char arr[10],arr2[10];
	printf("				模拟ATM机\n");
	printf("		提示：该卡密码为qwe123\n");
	printf("请输入密码——>");
	scanf("%s",arr);
	printf("请再次输入一次——>");
	scanf("%s",arr2);
	for(i=0,c=0;i<6;i++)
	{
		a=arr[i];
		b=arr2[i];
		if(a!=b)
			c++;
	}
	if(c!=0)
	{
		printf("两次密码不一致，是否重新输入？(1是/0否)");
        scanf("%d",&i);
     	if(i==1)
		{
			printf("请输入密码——>");
	        scanf("%s",arr);
	        printf("请再次输入一次——>");
	        scanf("%s",arr2);
	        for(i=0,c=0;i<6;i++)
			{
		        a=arr[i];
		        b=arr2[i];
		        if(a!=b)
			        c++;
			}
			if(c!=0)
			{
				printf("连续两次错误，您的卡已被机器代收\n");
				d=0;
			}
			else
			{
				 d=1;
				 printf("您的人名币余额为:10080.15\n");
		         printf("您的可用余额为:10000.00\n");
			}
		}
		else
		{
            d=0;
			printf("两次密码不符合，您的卡已被机器代收\n");
		}
	}
	else
	{
		d=1;
		printf("您的人名币余额为:10080.15\n");
		printf("您的可用余额为:10000.00\n");
	}
	if(d==1)
	{
	    printf("请问您现在要取款还是退卡，1取款，0退卡\n");
	    scanf("%d",&i);
		if(i==1)
		{
			printf("请选择你的取款数:100，200，500，1000，2000，5000，自定义。请对应按下数字1 2 3 4 5 6 7\n");
			scanf("%d",&a);
			switch(a)
			{
				case 1:
				{
					printf("请稍后……\n");
					printf("取款成功，当前余额9980.15\n");
					printf("已退卡，请收好\n");
				}break;
			case 2:
				{
		     		printf("请稍后……\n");
					printf("取款成功，当前余额9880.15\n");
					printf("已退卡，请收好\n");
				}break;
			case 3:
				{
		     		printf("请稍后……\n");
					printf("取款成功，当前余额9580.15\n");
					printf("已退卡，请收好\n");
				}break;
			case 4:
				{
		     		printf("请稍后……\n");
					printf("取款成功，当前余额9080.15\n");
					printf("已退卡，请收好\n");
				}break;
			case 5:
				{
		     		printf("请稍后……\n");
					printf("取款成功，当前余额8080.15\n");
					printf("已退卡，请收好\n");
				}break;
			case 6:
				{
					printf("请稍后……\n");
					printf("取款成功，当前余额5080.15\n");
					printf("已退卡，请收好\n");
				}break;
			case 7:
				{
					printf("请输入你的取款数，需要为100的整数倍\n");
					scanf("%d",&b);
		     		printf("请稍后……\n");
					if(b%100 != 0)
					{
						printf("输入错误，已退卡，请收好\n");
					}
					else
					{
						if(b>10000)
						{
							printf("余额不足，无法取款\n");
							printf("已退卡，请收好\n");
						}
			    		else
						{
							y=10080.15-(double)b;
							printf("取款成功，当前余额%.2lf\n",y);
			      			printf("已退卡，请收好\n");
						}
					}
				}break;
			default :
				printf("找不到对象，已退卡，请收好\n");
				break;
			}
		}
		else
			printf("已退卡，请收好\n");
}
		else
				;
	return 0;
}
