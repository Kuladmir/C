#include<stdio.h>
int main()
{
	double a,b,c;
	int d,e,g;
	char f;
	printf("������㷽ʽ��+ - * / !\n");
	scanf("%c",&f);
	switch(f)
	{
	case '+':
		{
			printf("�������\n");
			scanf("%lf%lf",&a,&b);
			c=a+b;
			printf("%lf\n",c);
		}break;
	case '-':
		{
			printf("�������\n");
			scanf("%lf%lf",&a,&b);
			c=a-b;
			printf("%lf\n",c);
		}break;
	case '*':
		{
			printf("�������\n");
			scanf("%lf%lf",&a,&b);
			c=a*b;
			printf("%lf\n",c);
		}break;
	case '/':
		{
		printf("�������\n");
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
			printf("����Ҫ�������\n");
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

