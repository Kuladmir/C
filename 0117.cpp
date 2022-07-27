#include<stdio.h>//选择进行+ - * / 运算
int main()
{
	double a,b,c;
	int d,e,g;
	char f;
	printf("输入计算方式：+ - * / !\n");
	scanf("%c",&f);
	switch(f)
	{
	case '+':
		{
			printf("输入加数\n");
			scanf("%lf%lf",&a,&b);
			c=a+b;
			printf("%lf\n",c);
		}break;
	case '-':
		{
			printf("输入减数\n");
			scanf("%lf%lf",&a,&b);
			c=a-b;
			printf("%lf\n",c);
		}break;
	case '*':
		{
			printf("输入乘数\n");
			scanf("%lf%lf",&a,&b);
			c=a*b;
			printf("%lf\n",c);
		}break;
	case '/':
		{
		printf("输入除数\n");
		scanf("%lf%lf",&a,&b);
		if(b==0)
			printf("error\n");
		else
		{
			c=a/b;
			printf("%lf\n",c);
		}
		}break;
	case '!':
		{
			printf("输入要计算的数\n");
			scanf("%d",&e);
			for(g=2,d=1;g<=e;g++)
			{
				d=d*g;
			}
			printf("%d\n",d);
		}break;
	default :
		printf("error\n");
		break;
	}
	return 0;
}

