#include<stdio.h>
#define PI 3.14
int main()
{
	double a,b,c;
	int d;
	do
	{	
		printf("1����Բ��2������0�˳�\n");
	    scanf("%d",&d);
		switch(d)
		{
		case 1:
			{
				printf("������뾶\n");
				scanf("%lf",&c);
				b=2*PI*c;
				a=PI*c*c;
				printf("��Բ�����Ϊ%lf,�ܳ�Ϊ%lf\n",a,b);
			}break;
		case 2:
			{
				printf("��������\n");
				scanf("%lf",&c);
				a=4/3*PI*c*c*c;
				b=4*PI*c*c;
				printf("����ı����Ϊ%lf,���Ϊ%lf\n",b,a);
			}break;
		case 0:
			break;
		default:
			printf("�������\n");
			break;
		}
	}while(d);
	return 0;
}
