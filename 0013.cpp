#include<stdio.h>
#include<math.h>
#define PI 3.14
int main()
{
	double a,b,c;
	int i;
	printf("����Բ��1������Բ׶2\n");
	scanf("%d",&i);
	if(i==1)
	{
		printf("������Բ���ĸߺ͵���뾶:>");
		scanf("%lf%lf",&a,&b);
		printf("���Ϊ%lf	",PI*a*b*b);
		printf("�����Ϊ:����%lf*2+����%lf = %lf\n",PI*b*b,PI*2*b*a,PI*b*b*2+PI*2*b*a);
	}
	else
	{
		printf("������Բ׶�ĸߺ͵���뾶:>");
		scanf("%lf%lf",&a,&b);
		printf("���Ϊ%lf	",PI*a*b*b/3);
		c=sqrt(a*a+b*b);
		printf("�����Ϊ:����%lf+����%lf = %lf\n",PI*b*b,PI*b*c,PI*b*b+PI*b*c);
	}
	return 0;
}

