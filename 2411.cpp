#include<stdio.h>
#include<math.h>
int main()
{
	double a,b,c,d,s;
	printf("根据已知条件寻找下列的计算方式\n");
	printf("1.直角三角形已知两直角边，输入a\n");
	printf("2.已知三边，输入b\n");
	printf("3.已知两边与另一边所对角，输入c\n");
	printf("4.已知三角形底和高，输入d\n");
	printf("根号已自动带入\n");
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
			printf("如果角度为30°或150°，第三个输入1；\n如果角度为45°或135°，则输入2；\n如果角度为60°或120°，则输入3；\n如果角度为90°，则输入4\n");
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
