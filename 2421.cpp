#include<stdio.h>
int main()
{
	double a[1000],b[1000],e[1000];
	int c,j;
	double i,d;
	printf("        ���������������GPA,��Ϊ�ɼ����ձ�\n");
	printf(" A+ 4.0\tA 4.0\tA- 3.7\tB+ 3.3\tB 3.0\n ");
	printf("B- 2.7\tC+ 2.3\tC 2.0\tD+ 1.5\tD 1.0\n");
	printf("��������Ҫ����Ŀ�Ŀ��\a\n");
	scanf("%d",&c);
	if(c==1)
	{
		printf("���뼨��ɼ����������Ӧѧ�֣�ע�����������Ҫ��Ӧ��Ŀ������������ӻس�������֮��ӿո�\n");
		scanf("%lf",&a[0]);
		scanf("%lf",&b[0]);
		d=a[0];
		printf("%lf\n",d);
	}
	if(c!=1)
	{
		i=0;
		d=0;
		printf("�����Ӧ�����ļ���ɼ����س���һ������ѧ��\n");
		printf("��ǰ����%d�ſε�GPA(��λС������������)\n",c);
		for(j=0;j<c;j++)
			scanf("%lf",&a[j]);
        for(j=0;j<c;j++)
			scanf("%lf",&b[j]);
		for(j=0;j<c;j++)
			i=i+b[j];
		for(j=0;j<c;j++)
			e[j]=a[j]*b[j];
		for(j=0;j<c;j++)
			d=e[j]/i+d;
		printf("�����Ŀ��ѧ��Ϊ %lf\n",i);
		printf("�����Ŀ��GPAΪ  %lf\n",d);
	}
	return 0;
}

