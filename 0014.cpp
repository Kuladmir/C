#include<stdio.h>
int main()
{
	int a,i;
	double b[100];
	double c[100];
	double d=0,e=0;
	printf("������Ҫ����Ŀ�Ŀ��:>");
	scanf("%d",&a);
	printf("��������ѧ�֣�������ɼ�������4 3.7 3 3.3\n");
	for(i=0;i<a;i++)
	{
		scanf("%lf",&b[i]);
		scanf("%lf",&c[i]);
		d+=b[i];
	}
	printf("%lf ",d);
	for(i=0;i<a;i++)
		e+=c[i]*b[i]/d;
	printf("��ĳɼ��ǣ�%.2lf\n",e);
	return 0;
}



	