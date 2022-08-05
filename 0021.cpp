#include<stdio.h>
#include<math.h>
int main()
{
	int a,i,b;
	do
	{
		printf("1开始计算，0退出\n");
		scanf("%d",&b);
		switch(b)
		{
		case 1:
			{
				printf("请输入;> ");
				scanf("%d",&a);
				for(i=2;i<=sqrt(a);i++)
				{
					if(a%2 == 0)
					{
						printf("是合数\n");
						break;
					}
				}
				if(i>sqrt(a))
					printf("是素数\n");
			}break;
		case 0:
			;break;
		default :
			printf("输入错误\n");
			break;
		}
	}while(b);
	return 0;
}

