#include<stdio.h>
#include<math.h>
int main()
{
	double a,b,c,d,s;
	printf("������֪����Ѱ�����еļ��㷽ʽ\n");
	printf("1.ֱ����������֪��ֱ�Ǳߣ�����a\n");
	printf("2.��֪���ߣ�����b\n");
	printf("3.��֪��������һ�����Խǣ�����c\n");
	printf("4.��֪�����ε׺͸ߣ�����d\n");
	printf("�������Զ�����\n");
	printf("\n");
	char x;
	scanf("%c",&x);
	switch(x)
	{
	case'a':
		{
	        scanf("%lf%lf",&a,&b);
	        c=a*b*0.5;
	        printf("Answer is %lf\n",c);
		}break;
	case'b':
		{
			scanf("%lf%lf%lf",&a,&b,&c);
			d=(a+b+c)/2;
			s=d*(d-a)*(d-b)*(d-c);
			s=sqrt(s);
			printf("Answer is %lf\n",s);
		}break;
	case'c':
		{
			printf("����Ƕ�Ϊ30���150�㣬����������1��\n����Ƕ�Ϊ45���135�㣬������2��\n����Ƕ�Ϊ60���120�㣬������3��\n����Ƕ�Ϊ90�㣬������4\n");
			scanf("%lf%lf%lf",&a,&b,&c);
			if(c==1)
			{
				s=0.5*a*b*0.5;
				printf("Answer is %lf",s);
			}
            if(c==2)
			{
				s=0.5*a*b*0.705;
				printf("Answer is %lf",s);
			}
			if(c==3)
			{
				s=0.5*a*b*0.866;
				printf("Answer is %lf",s);
			}
			if(c==4)
			{
				s=0.5*a*b;
				printf("Answer is %lf",s);
			}
		}break;
	case'd':
		{
			scanf("%lf%lf",&a,&b);
	        c=a*b*0.5;
	        printf("Answer is %lf\n",c);
		}break;
	}
	return 0;
}
