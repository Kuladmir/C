#include<stdio.h>
int main()
{
	double a[30];//�ɸ�����Ԫ����Ŀ  
	int i,j,k;
	double b=0,t;
	printf("������Ҫ�����������Ŀ(����ʱĬ�ϼ�ȥһ����ͷ�һ����߷�)\n");
	scanf("%d",&k);
	printf("��ǰ����%d������ƽ����\n",k);
	for(i=0;i<=k-1;i++)
		scanf("%lf",&a[i]);
	for(j=0;j<=k-2;j++)
		for(i=0;i<9-j;i++)
			if(a[i]>a[i+1])
			{
				t=a[i];
				a[i]=a[i+1];
				a[i+1]=t;
			}
	for(i=1;i<k-1;i++)
		b=b+a[i];
	b=b/(k-2);
	printf("ƽ������Ϊ%lf(�Ѽ�ȥһ����߷�һ����ͷ�)\n",b);
	return 0;
}
	



